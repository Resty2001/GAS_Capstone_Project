#include "GASNPCCharacter.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"

AGASNPCCharacter::AGASNPCCharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    // AI 컨트롤러 자동 생성
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

void AGASNPCCharacter::BeginPlay()
{
    Super::BeginPlay();

    // 플레이어 0번 캐릭터를 타겟으로 설정
    TargetPlayer = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    // HP 변화 델리게이트 등록
    if (AbilitySystemComponent && AttributeSet)
    {
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
            UGASAttributeSet::GetHPAttribute())
            .AddUObject(this, &AGASNPCCharacter::OnHPChanged);
    }
}

bool AGASNPCCharacter::IsPlayerInDetectionRange() const
{
    if (!TargetPlayer) return false;
    return GetDistanceToPlayer() <= DetectionRange;
}

float AGASNPCCharacter::GetDistanceToPlayer() const
{
    if (!TargetPlayer) return MAX_FLT;
    return FVector::Dist(GetActorLocation(), TargetPlayer->GetActorLocation());
}

void AGASNPCCharacter::PerformAttack()
{
    if (bIsDead)
    {
        return;
    }

    if (!TargetPlayer)
    {
        return;
    }

    if (GetDistanceToPlayer() > AttackRange)
    {
        return;
    }

    const float CurrentTime = GetWorld()->GetTimeSeconds();

    if (CurrentTime - LastAttackTime < AttackCooldown)
    {
        return;
    }

    UAbilitySystemComponent* TargetASC =
        TargetPlayer->FindComponentByClass<UAbilitySystemComponent>();

    if (!TargetASC)
    {
        UE_LOG(LogTemp, Warning,
            TEXT("[NPC] Attack failed: Player ASC not found"));
        return;
    }

    if (!AbilitySystemComponent)
    {
        UE_LOG(LogTemp, Warning,
            TEXT("[NPC] Attack failed: NPC ASC not found"));
        return;
    }

    if (!AttackEffectClass)
    {
        UE_LOG(LogTemp, Warning,
            TEXT("[NPC] Attack failed: AttackEffectClass is not set on %s"),
            *GetName());
        return;
    }

    LastAttackTime = CurrentTime;

    FGameplayEffectContextHandle EffectContext =
        AbilitySystemComponent->MakeEffectContext();
    EffectContext.AddSourceObject(this);

    FGameplayEffectSpecHandle SpecHandle =
        AbilitySystemComponent->MakeOutgoingSpec(
            AttackEffectClass,
            1.0f,
            EffectContext);

    if (!SpecHandle.IsValid() || !SpecHandle.Data.IsValid())
    {
        UE_LOG(LogTemp, Warning,
            TEXT("[NPC] Attack failed: Could not make effect spec"));
        return;
    }

    SpecHandle.Data->SetSetByCallerMagnitude(
        FGameplayTag::RequestGameplayTag(FName("Data.Damage")),
        -AttackDamage);

    SpecHandle.Data->SetSetByCallerMagnitude(
        FGameplayTag::RequestGameplayTag(FName("Data.Healing")),
        0.0f);

    TargetASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());

    const float PlayerHP =
        TargetASC->GetNumericAttribute(UGASAttributeSet::GetHPAttribute());

    UE_LOG(LogTemp, Warning,
        TEXT("[NPC] %s attacks player for %.1f damage / Player HP: %.1f"),
        *GetName(),
        AttackDamage,
        PlayerHP);
}
void AGASNPCCharacter::OnHPChanged(const FOnAttributeChangeData& Data)
{
    UE_LOG(LogTemp, Warning,
        TEXT("[NPC] %s HP: %.1f -> %.1f"),
        *GetName(),
        Data.OldValue,
        Data.NewValue);

    if (bIsDead)
    {
        return;
    }

    if (Data.NewValue > 0.0f)
    {
        return;
    }

    bIsDead = true;

    UE_LOG(LogTemp, Warning,
        TEXT("[NPC] %s defeated"),
        *GetName());

    if (AController* Ctrl = GetController())
    {
        Ctrl->StopMovement();
        Ctrl->UnPossess();
    }

    if (UCharacterMovementComponent* Movement = GetCharacterMovement())
    {
        Movement->StopMovementImmediately();
        Movement->DisableMovement();
    }

    GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    if (USkeletalMeshComponent* MeshComp = GetMesh())
    {
        MeshComp->bPauseAnims = true;
    }

    SetLifeSpan(0.15f);
}