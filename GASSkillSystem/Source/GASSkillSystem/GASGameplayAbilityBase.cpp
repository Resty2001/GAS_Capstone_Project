#include "GASGameplayAbilityBase.h"

#include "AbilitySystemComponent.h"
#include "GASNPCCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "GameplayTagContainer.h"

UGASGameplayAbilityBase::UGASGameplayAbilityBase()
{
    // 이 스킬이 발동되는 방식: 직접 호출 시
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

void UGASGameplayAbilityBase::ActivateAbility(
    const FGameplayAbilitySpecHandle Handle,
    const FGameplayAbilityActorInfo* ActorInfo,
    const FGameplayAbilityActivationInfo ActivationInfo,
    const FGameplayEventData* TriggerEventData)
{
    Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

    UAbilitySystemComponent* ASC =
        ActorInfo ? ActorInfo->AbilitySystemComponent.Get() : nullptr;

    AActor* OwnerActor =
        ActorInfo ? ActorInfo->AvatarActor.Get() : nullptr;

    if (!ASC || !SkillData || !OwnerActor)
    {
        EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
        return;
    }

    // 쿨타임 체크
    if (SkillData->CooldownTag.IsValid() &&
        ASC->HasMatchingGameplayTag(SkillData->CooldownTag))
    {
        UE_LOG(LogTemp, Warning,
            TEXT("[GAS] Skill [%s] is on cooldown"),
            *SkillData->SkillName.ToString());

        EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
        return;
    }

    const bool bIsAttackSkill = SkillData->BaseDamage > 0.0f;

    // ── 공격 스킬일 때만 가장 가까운 NPC 탐색 ─────────────────
    AGASNPCCharacter* TargetNPC = nullptr;
    float ClosestDist = SkillData->Range;

    if (bIsAttackSkill)
    {
        TArray<AActor*> FoundActors;

        UGameplayStatics::GetAllActorsOfClass(
            OwnerActor->GetWorld(),
            AGASNPCCharacter::StaticClass(),
            FoundActors);

        for (AActor* Actor : FoundActors)
        {
            AGASNPCCharacter* NPC = Cast<AGASNPCCharacter>(Actor);
            if (!NPC || NPC->IsDead())
            {
                continue;
            }

            const float Dist = FVector::Dist(
                OwnerActor->GetActorLocation(),
                NPC->GetActorLocation());

            if (Dist < ClosestDist)
            {
                ClosestDist = Dist;
                TargetNPC = NPC;
            }
        }
    }

    // ── 메인 Effect 적용 ─────────────────────────────
    if (SkillData->MainEffect)
    {
        if (bIsAttackSkill)
        {
            // 공격 스킬은 NPC에게만 적용한다.
            // NPC가 없으면 자기 자신에게 적용하지 않는다.
            if (!TargetNPC)
            {
                UE_LOG(LogTemp, Warning,
                    TEXT("[GAS] Skill [%s] activated, but no NPC target in range. No self damage applied."),
                    *SkillData->SkillName.ToString());
            }
            else
            {
                UAbilitySystemComponent* TargetASC =
                    TargetNPC->FindComponentByClass<UAbilitySystemComponent>();

                if (!TargetASC)
                {
                    UE_LOG(LogTemp, Warning,
                        TEXT("[GAS] Skill [%s] failed: Target NPC has no ASC"),
                        *SkillData->SkillName.ToString());
                }
                else
                {
                    FGameplayEffectSpecHandle SpecHandle =
                        MakeOutgoingGameplayEffectSpec(
                            SkillData->MainEffect,
                            GetAbilityLevel());

                    if (SpecHandle.IsValid() && SpecHandle.Data.IsValid())
                    {
                        // 공격 스킬: HP 감소만 넣는다.
                        SpecHandle.Data->SetSetByCallerMagnitude(
                            FGameplayTag::RequestGameplayTag(FName(TEXT("Data.Damage"))),
                            -SkillData->BaseDamage);

                        // 공격 스킬에서는 Healing 값을 0으로 둔다.
                        SpecHandle.Data->SetSetByCallerMagnitude(
                            FGameplayTag::RequestGameplayTag(FName(TEXT("Data.Healing"))),
                            0.0f);

                        // 중요:
                        // 플레이어 ASC가 아니라 NPC ASC에 적용한다.
                        TargetASC->ApplyGameplayEffectSpecToSelf(
                            *SpecHandle.Data.Get());

                        UE_LOG(LogTemp, Warning,
                            TEXT("[GAS] Skill [%s] -> Target [%s] Damage: %.1f"),
                            *SkillData->SkillName.ToString(),
                            *TargetNPC->GetName(),
                            SkillData->BaseDamage);
                    }
                }
            }
        }
        else
        {
            // BaseDamage <= 0인 스킬은 회복/방어/버프용으로 취급
            // 이런 스킬만 자신에게 적용한다.
            FGameplayEffectSpecHandle SpecHandle =
                MakeOutgoingGameplayEffectSpec(
                    SkillData->MainEffect,
                    GetAbilityLevel());

            if (SpecHandle.IsValid() && SpecHandle.Data.IsValid())
            {
                SpecHandle.Data->SetSetByCallerMagnitude(
                    FGameplayTag::RequestGameplayTag(FName(TEXT("Data.Damage"))),
                    0.0f);

                SpecHandle.Data->SetSetByCallerMagnitude(
                    FGameplayTag::RequestGameplayTag(FName(TEXT("Data.Healing"))),
                    FMath::Abs(SkillData->BaseDamage));

                ASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());

                UE_LOG(LogTemp, Warning,
                    TEXT("[GAS] Skill [%s] applied to self as non-attack skill"),
                    *SkillData->SkillName.ToString());
            }
        }
    }

    // ── 쿨타임 적용 ──────────────────────────────────
    if (SkillData->CooldownEffect && SkillData->CooldownTag.IsValid())
    {
        FGameplayEffectSpecHandle CooldownSpec =
            MakeOutgoingGameplayEffectSpec(
                SkillData->CooldownEffect,
                GetAbilityLevel());

        if (CooldownSpec.IsValid() && CooldownSpec.Data.IsValid())
        {
            CooldownSpec.Data->SetSetByCallerMagnitude(
                FGameplayTag::RequestGameplayTag(FName(TEXT("Cooldown.Duration"))),
                SkillData->CooldownDuration);

            FGameplayTagContainer GrantedTags;
            GrantedTags.AddTag(SkillData->CooldownTag);
            CooldownSpec.Data->DynamicGrantedTags.AppendTags(GrantedTags);

            // 쿨타임은 플레이어 자신에게 적용되는 것이 맞다.
            // 단, CooldownEffect는 HP를 건드리면 안 된다.
            ASC->ApplyGameplayEffectSpecToSelf(*CooldownSpec.Data.Get());
        }
    }

    UE_LOG(LogTemp, Warning,
        TEXT("[GAS] Skill [%s] activated — Damage: %.1f / Cooldown: %.1fs"),
        *SkillData->SkillName.ToString(),
        SkillData->BaseDamage,
        SkillData->CooldownDuration);

    EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}