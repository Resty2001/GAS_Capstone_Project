// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASSkillDataAsset.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGASSkillDataAsset() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GASSKILLSYSTEM_API UClass* Z_Construct_UClass_UGASSkillDataAsset();
GASSKILLSYSTEM_API UClass* Z_Construct_UClass_UGASSkillDataAsset_NoRegister();
GASSKILLSYSTEM_API UEnum* Z_Construct_UEnum_GASSkillSystem_ESkillTargetType();
UPackage* Z_Construct_UPackage__Script_GASSkillSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESkillTargetType **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkillTargetType;
static UEnum* ESkillTargetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESkillTargetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESkillTargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASSkillSystem_ESkillTargetType, (UObject*)Z_Construct_UPackage__Script_GASSkillSystem(), TEXT("ESkillTargetType"));
	}
	return Z_Registration_Info_UEnum_ESkillTargetType.OuterSingleton;
}
template<> GASSKILLSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<ESkillTargetType>()
{
	return ESkillTargetType_StaticEnum();
}
struct Z_Construct_UEnum_GASSkillSystem_ESkillTargetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AoE.DisplayName", "AoE" },
		{ "AoE.Name", "ESkillTargetType::AoE" },
		{ "BlueprintType", "true" },
		{ "Chain.DisplayName", "Chain" },
		{ "Chain.Name", "ESkillTargetType::Chain" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "Line.DisplayName", "Line" },
		{ "Line.Name", "ESkillTargetType::Line" },
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
		{ "Single.DisplayName", "Single" },
		{ "Single.Name", "ESkillTargetType::Single" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESkillTargetType::Single", (int64)ESkillTargetType::Single },
		{ "ESkillTargetType::AoE", (int64)ESkillTargetType::AoE },
		{ "ESkillTargetType::Line", (int64)ESkillTargetType::Line },
		{ "ESkillTargetType::Chain", (int64)ESkillTargetType::Chain },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_GASSkillSystem_ESkillTargetType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASSkillSystem_ESkillTargetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASSkillSystem,
	nullptr,
	"ESkillTargetType",
	"ESkillTargetType",
	Z_Construct_UEnum_GASSkillSystem_ESkillTargetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASSkillSystem_ESkillTargetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASSkillSystem_ESkillTargetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASSkillSystem_ESkillTargetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASSkillSystem_ESkillTargetType()
{
	if (!Z_Registration_Info_UEnum_ESkillTargetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkillTargetType.InnerSingleton, Z_Construct_UEnum_GASSkillSystem_ESkillTargetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESkillTargetType.InnerSingleton;
}
// ********** End Enum ESkillTargetType ************************************************************

// ********** Begin Class UGASSkillDataAsset *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGASSkillDataAsset;
UClass* UGASSkillDataAsset::GetPrivateStaticClass()
{
	using TClass = UGASSkillDataAsset;
	if (!Z_Registration_Info_UClass_UGASSkillDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GASSkillDataAsset"),
			Z_Registration_Info_UClass_UGASSkillDataAsset.InnerSingleton,
			StaticRegisterNativesUGASSkillDataAsset,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UGASSkillDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UGASSkillDataAsset_NoRegister()
{
	return UGASSkillDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGASSkillDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3 \xef\xbf\xbd\xcf\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd DataAsset\n * \xef\xbf\xbd\xef\xbf\xbd\xc8\xb9\xef\xbf\xbd\xda\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xcb\xb4\xcf\xb4\xef\xbf\xbd\n */" },
#endif
		{ "IncludePath", "GASSkillDataAsset.h" },
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc5\xb3 \xef\xbf\xbd\xcf\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd DataAsset\n\xef\xbf\xbd\xef\xbf\xbd\xc8\xb9\xef\xbf\xbd\xda\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xcb\xb4\xcf\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillName_MetaData[] = {
		{ "Category", "Skill|Basic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillDescription_MetaData[] = {
		{ "Category", "Skill|Basic" },
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillTag_MetaData[] = {
		{ "Category", "Skill|Basic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc4\xba\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd Gameplay Tag\n// \xef\xbf\xbd\xef\xbf\xbd: Skill.Attack.Melee.SingleTarget\n" },
#endif
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc4\xba\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd Gameplay Tag\n\xef\xbf\xbd\xef\xbf\xbd: Skill.Attack.Melee.SingleTarget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTag_MetaData[] = {
		{ "Category", "Skill|Cooldown" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbf\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xc2\xb1\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb1\xd7\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd2\xb0\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbf\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xc2\xb1\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb1\xd7\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd2\xb0\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Skill|Stats" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 (\xef\xbf\xbd\xef\xbf\xbd\xc8\xb9\xef\xbf\xbd\xda\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd) \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 (\xef\xbf\xbd\xef\xbf\xbd\xc8\xb9\xef\xbf\xbd\xda\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd) \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageCoefficient_MetaData[] = {
		{ "Category", "Skill|Stats" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (AttackPower \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (AttackPower \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "Skill|Stats" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaCost_MetaData[] = {
		{ "Category", "Skill|Stats" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[] = {
		{ "Category", "Skill|Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "Skill|Targeting" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AoERadius_MetaData[] = {
		{ "Category", "Skill|Targeting" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TargetType\xef\xbf\xbd\xef\xbf\xbd AoE\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xbf\n" },
#endif
		{ "EditCondition", "TargetType == ESkillTargetType::AoE" },
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TargetType\xef\xbf\xbd\xef\xbf\xbd AoE\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xbf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusEffectTag_MetaData[] = {
		{ "Category", "Skill|Status" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xce\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbb\xef\xbf\xbd \xef\xbf\xbd\xc2\xb1\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n// \xef\xbf\xbd\xef\xbf\xbd: Status.Burning\n" },
#endif
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xce\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbb\xef\xbf\xbd \xef\xbf\xbd\xc2\xb1\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n\xef\xbf\xbd\xef\xbf\xbd: Status.Burning" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusEffectChance_MetaData[] = {
		{ "Category", "Skill|Status" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbb\xef\xbf\xbd \xef\xbf\xbd\xdf\xb5\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd (0.0 ~ 1.0)\n" },
#endif
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbb\xef\xbf\xbd \xef\xbf\xbd\xdf\xb5\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd (0.0 ~ 1.0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusEffectDuration_MetaData[] = {
		{ "Category", "Skill|Status" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredStatusTag_MetaData[] = {
		{ "Category", "Skill|Synergy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// \xef\xbf\xbd\xef\xbf\xbd: Status.Burning \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\xef\xbf\xbd\xef\xbf\xbd: Status.Burning \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonusDamageRatio_MetaData[] = {
		{ "Category", "Skill|Synergy" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainEffect_MetaData[] = {
		{ "Category", "Skill|Effect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Effect\n" },
#endif
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Effect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownEffect_MetaData[] = {
		{ "Category", "Skill|Effect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd Effect (\xef\xbf\xbd\xda\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "GASSkillDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd Effect (\xef\xbf\xbd\xda\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UGASSkillDataAsset constinit property declarations ***********************
	static const UECodeGen_Private::FTextPropertyParams NewProp_SkillName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SkillDescription;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkillTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageCoefficient;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaCost;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AoERadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatusEffectTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StatusEffectChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StatusEffectDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredStatusTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusDamageRatio;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainEffect;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CooldownEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UGASSkillDataAsset constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASSkillDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGASSkillDataAsset_Statics

// ********** Begin Class UGASSkillDataAsset Property Definitions **********************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_SkillName = { "SkillName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASSkillDataAsset, SkillName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillName_MetaData), NewProp_SkillName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_SkillDescription = { "SkillDescription", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASSkillDataAsset, SkillDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillDescription_MetaData), NewProp_SkillDescription_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_SkillTag = { "SkillTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASSkillDataAsset, SkillTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillTag_MetaData), NewProp_SkillTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASSkillDataAsset, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownTag_MetaData), NewProp_CooldownTag_MetaData) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASSkillDataAsset, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_DamageCoefficient = { "DamageCoefficient", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASSkillDataAsset, DamageCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageCoefficient_MetaData), NewProp_DamageCoefficient_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASSkillDataAsset, CooldownDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownDuration_MetaData), NewProp_CooldownDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_ManaCost = { "ManaCost", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASSkillDataAsset, ManaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaCost_MetaData), NewProp_ManaCost_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASSkillDataAsset, TargetType), Z_Construct_UEnum_GASSkillSystem_ESkillTargetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetType_MetaData), NewProp_TargetType_MetaData) }; // 3070257001
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASSkillDataAsset, Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_AoERadius = { "AoERadius", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASSkillDataAsset, AoERadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AoERadius_MetaData), NewProp_AoERadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_StatusEffectTag = { "StatusEffectTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASSkillDataAsset, StatusEffectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusEffectTag_MetaData), NewProp_StatusEffectTag_MetaData) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_StatusEffectChance = { "StatusEffectChance", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASSkillDataAsset, StatusEffectChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusEffectChance_MetaData), NewProp_StatusEffectChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_StatusEffectDuration = { "StatusEffectDuration", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASSkillDataAsset, StatusEffectDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusEffectDuration_MetaData), NewProp_StatusEffectDuration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_RequiredStatusTag = { "RequiredStatusTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASSkillDataAsset, RequiredStatusTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredStatusTag_MetaData), NewProp_RequiredStatusTag_MetaData) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_BonusDamageRatio = { "BonusDamageRatio", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASSkillDataAsset, BonusDamageRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonusDamageRatio_MetaData), NewProp_BonusDamageRatio_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_MainEffect = { "MainEffect", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASSkillDataAsset, MainEffect), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainEffect_MetaData), NewProp_MainEffect_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_CooldownEffect = { "CooldownEffect", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASSkillDataAsset, CooldownEffect), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownEffect_MetaData), NewProp_CooldownEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGASSkillDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_SkillName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_SkillDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_SkillTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_CooldownTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_DamageCoefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_CooldownDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_ManaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_TargetType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_TargetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_AoERadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_StatusEffectTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_StatusEffectChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_StatusEffectDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_RequiredStatusTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_BonusDamageRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_MainEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASSkillDataAsset_Statics::NewProp_CooldownEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASSkillDataAsset_Statics::PropPointers) < 2048);
// ********** End Class UGASSkillDataAsset Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UGASSkillDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GASSkillSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASSkillDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASSkillDataAsset_Statics::ClassParams = {
	&UGASSkillDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGASSkillDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGASSkillDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGASSkillDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UGASSkillDataAsset_Statics::Class_MetaDataParams)
};
void UGASSkillDataAsset::StaticRegisterNativesUGASSkillDataAsset()
{
}
UClass* Z_Construct_UClass_UGASSkillDataAsset()
{
	if (!Z_Registration_Info_UClass_UGASSkillDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASSkillDataAsset.OuterSingleton, Z_Construct_UClass_UGASSkillDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGASSkillDataAsset.OuterSingleton;
}
UGASSkillDataAsset::UGASSkillDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGASSkillDataAsset);
UGASSkillDataAsset::~UGASSkillDataAsset() {}
// ********** End Class UGASSkillDataAsset *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillDataAsset_h__Script_GASSkillSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESkillTargetType_StaticEnum, TEXT("ESkillTargetType"), &Z_Registration_Info_UEnum_ESkillTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3070257001U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGASSkillDataAsset, UGASSkillDataAsset::StaticClass, TEXT("UGASSkillDataAsset"), &Z_Registration_Info_UClass_UGASSkillDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASSkillDataAsset), 2998660225U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillDataAsset_h__Script_GASSkillSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillDataAsset_h__Script_GASSkillSystem_250965827{
	TEXT("/Script/GASSkillSystem"),
	Z_CompiledInDeferFile_FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillDataAsset_h__Script_GASSkillSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillDataAsset_h__Script_GASSkillSystem_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillDataAsset_h__Script_GASSkillSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillDataAsset_h__Script_GASSkillSystem_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
