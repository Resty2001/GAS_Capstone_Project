#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GASAttributeSet.generated.h"

// GAS가 제공하는 매크로 ? Attribute마다 Getter/Setter/Initter를 자동 생성
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class GASSKILLSYSTEM_API UGASAttributeSet : public UAttributeSet
{
    GENERATED_BODY()

public:
    UGASAttributeSet();

    // GAS 시스템에 이 Attribute들을 등록
    virtual void GetLifetimeReplicatedProps(
        TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    // HP 수치
    UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_HP)
    FGameplayAttributeData HP;
    ATTRIBUTE_ACCESSORS(UGASAttributeSet, HP)

        // 최대 HP 수치
        UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxHP)
    FGameplayAttributeData MaxHP;
    ATTRIBUTE_ACCESSORS(UGASAttributeSet, MaxHP)

        // Mana 수치
        UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Mana)
    FGameplayAttributeData Mana;
    ATTRIBUTE_ACCESSORS(UGASAttributeSet, Mana)

        // 공격력
        UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_AttackPower)
    FGameplayAttributeData AttackPower;
    ATTRIBUTE_ACCESSORS(UGASAttributeSet, AttackPower)

protected:
    UFUNCTION()
    virtual void OnRep_HP(const FGameplayAttributeData& OldHP);

    UFUNCTION()
    virtual void OnRep_MaxHP(const FGameplayAttributeData& OldMaxHP);

    UFUNCTION()
    virtual void OnRep_Mana(const FGameplayAttributeData& OldMana);

    UFUNCTION()
    virtual void OnRep_AttackPower(const FGameplayAttributeData& OldAttackPower);
};