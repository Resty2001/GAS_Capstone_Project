#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GASSkillDataAsset.h" 
#include "GASGameplayAbilityBase.generated.h"

/**
 * 모든 스킬의 부모 클래스
 * 나중에 DataAsset과 연결할 때 이 클래스를 확장합니다
 */
UCLASS()
class GASSKILLSYSTEM_API UGASGameplayAbilityBase : public UGameplayAbility
{
    GENERATED_BODY()

public:
    UGASGameplayAbilityBase();

    // 스킬이 발동될 때 자동으로 호출되는 함수
    virtual void ActivateAbility(
        const FGameplayAbilitySpecHandle Handle,
        const FGameplayAbilityActorInfo* ActorInfo,
        const FGameplayAbilityActivationInfo ActivationInfo,
        const FGameplayEventData* TriggerEventData) override;
    // DataAsset 참조 — 에디터에서 선택
    // 이 하나가 스킬의 모든 데이터를 담고 있음
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill|Data")
    UGASSkillDataAsset* SkillData;
    // 스킬 발동 시 적용할 GameplayEffect
    // 에디터에서 직접 선택할 수 있도록 EditDefaultsOnly로 노출
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GAS|Ability")
    TSubclassOf<UGameplayEffect> DamageEffectClass;
};