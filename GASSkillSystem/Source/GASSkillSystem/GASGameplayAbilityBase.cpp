#include "GASGameplayAbilityBase.h"
#include "AbilitySystemComponent.h"

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

    UAbilitySystemComponent* ASC = ActorInfo->AbilitySystemComponent.Get();
    if (!ASC)
    {
        EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
        return;
    }

    if (!SkillData)
    {
        UE_LOG(LogTemp, Warning, TEXT("[GAS] SkillData is null"));
        EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
        return;
    }

    // ── 쿨타임 체크 ─────────────────────────────────────
    if (SkillData->CooldownTag.IsValid() &&
        ASC->HasMatchingGameplayTag(SkillData->CooldownTag))
    {
        UE_LOG(LogTemp, Warning,
            TEXT("[GAS] Skill [%s] is on cooldown"),
            *SkillData->SkillName.ToString());
        EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
        return;
    }

    // ── 메인 Effect 적용 ─────────────────────────────────
    if (SkillData->MainEffect)
    {
        FGameplayEffectSpecHandle SpecHandle = MakeOutgoingGameplayEffectSpec(
            SkillData->MainEffect, GetAbilityLevel());

        // 데미지 스킬: Data.Damage로 수치 주입
        SpecHandle.Data->SetSetByCallerMagnitude(
            FGameplayTag::RequestGameplayTag(FName("Data.Damage")),
            -SkillData->BaseDamage);

        // 회복·버프 스킬: Data.Healing으로 수치 주입
        // 두 태그 모두 설정 — Effect에서 필요한 것만 사용
        SpecHandle.Data->SetSetByCallerMagnitude(
            FGameplayTag::RequestGameplayTag(FName("Data.Healing")),
            SkillData->BaseDamage);  // 양수 (HP 증가)

        ASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
    }

    // ── 쿨타임 Effect 적용 (DA의 CooldownTag를 동적으로 주입) ──
    if (SkillData->CooldownEffect && SkillData->CooldownTag.IsValid())
    {
        FGameplayEffectSpecHandle CooldownSpec = MakeOutgoingGameplayEffectSpec(
            SkillData->CooldownEffect, GetAbilityLevel());

        // 쿨타임 지속 시간 주입
        CooldownSpec.Data->SetSetByCallerMagnitude(
            FGameplayTag::RequestGameplayTag(FName("Cooldown.Duration")),
            SkillData->CooldownDuration);

        // ★ 핵심: DA의 CooldownTag를 동적으로 Granted Tags에 추가
        // 이렇게 하면 GE_CooldownBase 파일 하나로 모든 스킬 쿨타임 관리 가능
        FGameplayTagContainer GrantedTags;
        GrantedTags.AddTag(SkillData->CooldownTag);
        CooldownSpec.Data->DynamicGrantedTags.AppendTags(GrantedTags);

        ASC->ApplyGameplayEffectSpecToSelf(*CooldownSpec.Data.Get());
    }

    UE_LOG(LogTemp, Warning,
        TEXT("[GAS] Skill [%s] activated — Damage: %.1f / Cooldown: %.1fs"),
        *SkillData->SkillName.ToString(),
        SkillData->BaseDamage,
        SkillData->CooldownDuration);

    EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}