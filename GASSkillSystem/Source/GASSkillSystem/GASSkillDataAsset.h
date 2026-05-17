#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayEffect.h"
#include "GASSkillDataAsset.generated.h"

// 타겟팅 방식 열거형
UENUM(BlueprintType)
enum class ESkillTargetType : uint8
{
    Single      UMETA(DisplayName = "Single"),
    AoE         UMETA(DisplayName = "AoE"),
    Line        UMETA(DisplayName = "Line"),
    Chain       UMETA(DisplayName = "Chain")
};

/**
 * 스킬 하나의 모든 데이터를 담는 DataAsset
 * 기획자가 이 파일만 만들면 새 스킬이 추가됩니다
 */
UCLASS(BlueprintType)
class GASSKILLSYSTEM_API UGASSkillDataAsset : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    // ── 기본 정보 ──────────────────────────────

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill|Basic")
    FText SkillName;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill|Basic")
    FText SkillDescription;

    // 이 스킬을 식별하는 Gameplay Tag
    // 예: Skill.Attack.Melee.SingleTarget
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill|Basic")
    FGameplayTag SkillTag;

    // 쿨타임 동안 부여되는 태그 (이 태그가 있으면 스킬 재사용 불가)
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill|Cooldown")
    FGameplayTag CooldownTag;

    // ── 수치 (기획자가 직접 입력하는 영역) ──────

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill|Stats",
        meta = (ClampMin = "0"))
    float BaseDamage = 100.0f;

    // 공격력 배율 (AttackPower × 이 값이 최종 데미지에 추가)
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill|Stats",
        meta = (ClampMin = "0"))
    float DamageCoefficient = 1.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill|Stats",
        meta = (ClampMin = "0"))
    float CooldownDuration = 3.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill|Stats",
        meta = (ClampMin = "0"))
    float ManaCost = 20.0f;

    // ── 타겟팅 ──────────────────────────────────

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill|Targeting")
    ESkillTargetType TargetType = ESkillTargetType::Single;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill|Targeting",
        meta = (ClampMin = "0"))
    float Range = 300.0f;

    // TargetType이 AoE일 때만 유효
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill|Targeting",
        meta = (ClampMin = "0", EditCondition = "TargetType == ESkillTargetType::AoE"))
    float AoERadius = 200.0f;

    // ── 상태이상 ────────────────────────────────

    // 부여할 상태이상 태그 (없으면 비워둠)
    // 예: Status.Burning
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill|Status")
    FGameplayTag StatusEffectTag;

    // 상태이상 발동 확률 (0.0 ~ 1.0)
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill|Status",
        meta = (ClampMin = "0", ClampMax = "1"))
    float StatusEffectChance = 0.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill|Status",
        meta = (ClampMin = "0"))
    float StatusEffectDuration = 3.0f;

    // ── 시너지 조건 ─────────────────────────────

    // 이 태그 상태인 적에게 추가 데미지
    // 예: Status.Burning 상태일 때 폭발 추가 데미지
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill|Synergy")
    FGameplayTag RequiredStatusTag;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill|Synergy",
        meta = (ClampMin = "0"))
    float BonusDamageRatio = 0.0f;

    // ── GameplayEffect 연결 ─────────────────────

    // 이 스킬이 적용할 메인 Effect
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill|Effect")
    TSubclassOf<UGameplayEffect> MainEffect;

    // 쿨타임 Effect (자동 생성 대신 직접 지정)
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill|Effect")
    TSubclassOf<UGameplayEffect> CooldownEffect;
};