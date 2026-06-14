#pragma once

#include "CoreMinimal.h"
#include "GASSkillSystemCharacter.h"
#include "AbilitySystemComponent.h"
#include "GASNPCCharacter.generated.h"

class UGameplayEffect;

UCLASS()
class GASSKILLSYSTEM_API AGASNPCCharacter : public AGASSkillSystemCharacter
{
    GENERATED_BODY()

public:
    AGASNPCCharacter();

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "NPC|Stats")
    float AttackDamage = 15.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "NPC|Stats")
    float AttackRange = 200.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "NPC|Stats")
    float DetectionRange = 800.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "NPC|Stats")
    float AttackCooldown = 2.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "NPC|Combat")
    TSubclassOf<UGameplayEffect> AttackEffectClass;

    UFUNCTION(BlueprintCallable, Category = "NPC|Combat")
    void PerformAttack();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "NPC|Combat")
    bool IsPlayerInDetectionRange() const;

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "NPC|Combat")
    float GetDistanceToPlayer() const;

    UFUNCTION(BlueprintPure, Category = "NPC|State")
    bool IsDead() const { return bIsDead; }

    UPROPERTY(BlueprintReadOnly, Category = "NPC|Combat")
    ACharacter* TargetPlayer;

protected:
    virtual void BeginPlay() override;
    void OnHPChanged(const FOnAttributeChangeData& Data);

private:
    float LastAttackTime = 0.0f;
    bool bIsDead = false;
};