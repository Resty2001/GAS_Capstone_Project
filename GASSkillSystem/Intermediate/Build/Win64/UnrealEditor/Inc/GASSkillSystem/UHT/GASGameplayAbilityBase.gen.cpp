// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASGameplayAbilityBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGASGameplayAbilityBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GASSKILLSYSTEM_API UClass* Z_Construct_UClass_UGASGameplayAbilityBase();
GASSKILLSYSTEM_API UClass* Z_Construct_UClass_UGASGameplayAbilityBase_NoRegister();
GASSKILLSYSTEM_API UClass* Z_Construct_UClass_UGASSkillDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASSkillSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGASGameplayAbilityBase **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGASGameplayAbilityBase;
UClass* UGASGameplayAbilityBase::GetPrivateStaticClass()
{
	using TClass = UGASGameplayAbilityBase;
	if (!Z_Registration_Info_UClass_UGASGameplayAbilityBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GASGameplayAbilityBase"),
			Z_Registration_Info_UClass_UGASGameplayAbilityBase.InnerSingleton,
			StaticRegisterNativesUGASGameplayAbilityBase,
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
	return Z_Registration_Info_UClass_UGASGameplayAbilityBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UGASGameplayAbilityBase_NoRegister()
{
	return UGASGameplayAbilityBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGASGameplayAbilityBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xeb\xaa\xa8\xeb\x93\xa0 \xec\x8a\xa4\xed\x82\xac\xec\x9d\x98 \xeb\xb6\x80\xeb\xaa\xa8 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\n * \xeb\x82\x98\xec\xa4\x91\xec\x97\x90 DataAsset\xea\xb3\xbc \xec\x97\xb0\xea\xb2\xb0\xed\x95\xa0 \xeb\x95\x8c \xec\x9d\xb4 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa5\xbc \xed\x99\x95\xec\x9e\xa5\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4\n */" },
#endif
		{ "IncludePath", "GASGameplayAbilityBase.h" },
		{ "ModuleRelativePath", "GASGameplayAbilityBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xaa\xa8\xeb\x93\xa0 \xec\x8a\xa4\xed\x82\xac\xec\x9d\x98 \xeb\xb6\x80\xeb\xaa\xa8 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\n\xeb\x82\x98\xec\xa4\x91\xec\x97\x90 DataAsset\xea\xb3\xbc \xec\x97\xb0\xea\xb2\xb0\xed\x95\xa0 \xeb\x95\x8c \xec\x9d\xb4 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa5\xbc \xed\x99\x95\xec\x9e\xa5\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillData_MetaData[] = {
		{ "Category", "Skill|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DataAsset \xec\xb0\xb8\xec\xa1\xb0 \xe2\x80\x94 \xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90\xec\x84\x9c \xec\x84\xa0\xed\x83\x9d\n// \xec\x9d\xb4 \xed\x95\x98\xeb\x82\x98\xea\xb0\x80 \xec\x8a\xa4\xed\x82\xac\xec\x9d\x98 \xeb\xaa\xa8\xeb\x93\xa0 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\xa5\xbc \xeb\x8b\xb4\xea\xb3\xa0 \xec\x9e\x88\xec\x9d\x8c\n" },
#endif
		{ "ModuleRelativePath", "GASGameplayAbilityBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataAsset \xec\xb0\xb8\xec\xa1\xb0 \xe2\x80\x94 \xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90\xec\x84\x9c \xec\x84\xa0\xed\x83\x9d\n\xec\x9d\xb4 \xed\x95\x98\xeb\x82\x98\xea\xb0\x80 \xec\x8a\xa4\xed\x82\xac\xec\x9d\x98 \xeb\xaa\xa8\xeb\x93\xa0 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\xa5\xbc \xeb\x8b\xb4\xea\xb3\xa0 \xec\x9e\x88\xec\x9d\x8c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "GAS|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xa4\xed\x82\xac \xeb\xb0\x9c\xeb\x8f\x99 \xec\x8b\x9c \xec\xa0\x81\xec\x9a\xa9\xed\x95\xa0 GameplayEffect\n// \xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90\xec\x84\x9c \xec\xa7\x81\xec\xa0\x91 \xec\x84\xa0\xed\x83\x9d\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8f\x84\xeb\xa1\x9d EditDefaultsOnly\xeb\xa1\x9c \xeb\x85\xb8\xec\xb6\x9c\n" },
#endif
		{ "ModuleRelativePath", "GASGameplayAbilityBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x82\xac \xeb\xb0\x9c\xeb\x8f\x99 \xec\x8b\x9c \xec\xa0\x81\xec\x9a\xa9\xed\x95\xa0 GameplayEffect\n\xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90\xec\x84\x9c \xec\xa7\x81\xec\xa0\x91 \xec\x84\xa0\xed\x83\x9d\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8f\x84\xeb\xa1\x9d EditDefaultsOnly\xeb\xa1\x9c \xeb\x85\xb8\xec\xb6\x9c" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UGASGameplayAbilityBase constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UGASGameplayAbilityBase constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASGameplayAbilityBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGASGameplayAbilityBase_Statics

// ********** Begin Class UGASGameplayAbilityBase Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGASGameplayAbilityBase_Statics::NewProp_SkillData = { "SkillData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASGameplayAbilityBase, SkillData), Z_Construct_UClass_UGASSkillDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillData_MetaData), NewProp_SkillData_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGASGameplayAbilityBase_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASGameplayAbilityBase, DamageEffectClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectClass_MetaData), NewProp_DamageEffectClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGASGameplayAbilityBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASGameplayAbilityBase_Statics::NewProp_SkillData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASGameplayAbilityBase_Statics::NewProp_DamageEffectClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASGameplayAbilityBase_Statics::PropPointers) < 2048);
// ********** End Class UGASGameplayAbilityBase Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UGASGameplayAbilityBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_GASSkillSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASGameplayAbilityBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASGameplayAbilityBase_Statics::ClassParams = {
	&UGASGameplayAbilityBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGASGameplayAbilityBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGASGameplayAbilityBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGASGameplayAbilityBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGASGameplayAbilityBase_Statics::Class_MetaDataParams)
};
void UGASGameplayAbilityBase::StaticRegisterNativesUGASGameplayAbilityBase()
{
}
UClass* Z_Construct_UClass_UGASGameplayAbilityBase()
{
	if (!Z_Registration_Info_UClass_UGASGameplayAbilityBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASGameplayAbilityBase.OuterSingleton, Z_Construct_UClass_UGASGameplayAbilityBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGASGameplayAbilityBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGASGameplayAbilityBase);
UGASGameplayAbilityBase::~UGASGameplayAbilityBase() {}
// ********** End Class UGASGameplayAbilityBase ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UE_Projects_GASSkillSystem_Source_GASSkillSystem_GASGameplayAbilityBase_h__Script_GASSkillSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGASGameplayAbilityBase, UGASGameplayAbilityBase::StaticClass, TEXT("UGASGameplayAbilityBase"), &Z_Registration_Info_UClass_UGASGameplayAbilityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASGameplayAbilityBase), 699670854U) },
	};
}; // Z_CompiledInDeferFile_FID_UE_Projects_GASSkillSystem_Source_GASSkillSystem_GASGameplayAbilityBase_h__Script_GASSkillSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GASSkillSystem_Source_GASSkillSystem_GASGameplayAbilityBase_h__Script_GASSkillSystem_2522637725{
	TEXT("/Script/GASSkillSystem"),
	Z_CompiledInDeferFile_FID_UE_Projects_GASSkillSystem_Source_GASSkillSystem_GASGameplayAbilityBase_h__Script_GASSkillSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GASSkillSystem_Source_GASSkillSystem_GASGameplayAbilityBase_h__Script_GASSkillSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
