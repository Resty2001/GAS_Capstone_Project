// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASSkillSystemGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGASSkillSystemGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GASSKILLSYSTEM_API UClass* Z_Construct_UClass_AGASSkillSystemGameMode();
GASSKILLSYSTEM_API UClass* Z_Construct_UClass_AGASSkillSystemGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASSkillSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGASSkillSystemGameMode **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGASSkillSystemGameMode;
UClass* AGASSkillSystemGameMode::GetPrivateStaticClass()
{
	using TClass = AGASSkillSystemGameMode;
	if (!Z_Registration_Info_UClass_AGASSkillSystemGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GASSkillSystemGameMode"),
			Z_Registration_Info_UClass_AGASSkillSystemGameMode.InnerSingleton,
			StaticRegisterNativesAGASSkillSystemGameMode,
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
	return Z_Registration_Info_UClass_AGASSkillSystemGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AGASSkillSystemGameMode_NoRegister()
{
	return AGASSkillSystemGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGASSkillSystemGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GASSkillSystemGameMode.h" },
		{ "ModuleRelativePath", "GASSkillSystemGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AGASSkillSystemGameMode constinit property declarations ******************
// ********** End Class AGASSkillSystemGameMode constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGASSkillSystemGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGASSkillSystemGameMode_Statics
UObject* (*const Z_Construct_UClass_AGASSkillSystemGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GASSkillSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASSkillSystemGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGASSkillSystemGameMode_Statics::ClassParams = {
	&AGASSkillSystemGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGASSkillSystemGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGASSkillSystemGameMode_Statics::Class_MetaDataParams)
};
void AGASSkillSystemGameMode::StaticRegisterNativesAGASSkillSystemGameMode()
{
}
UClass* Z_Construct_UClass_AGASSkillSystemGameMode()
{
	if (!Z_Registration_Info_UClass_AGASSkillSystemGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGASSkillSystemGameMode.OuterSingleton, Z_Construct_UClass_AGASSkillSystemGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGASSkillSystemGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGASSkillSystemGameMode);
AGASSkillSystemGameMode::~AGASSkillSystemGameMode() {}
// ********** End Class AGASSkillSystemGameMode ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UE_Projects_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemGameMode_h__Script_GASSkillSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGASSkillSystemGameMode, AGASSkillSystemGameMode::StaticClass, TEXT("AGASSkillSystemGameMode"), &Z_Registration_Info_UClass_AGASSkillSystemGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGASSkillSystemGameMode), 3409852714U) },
	};
}; // Z_CompiledInDeferFile_FID_UE_Projects_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemGameMode_h__Script_GASSkillSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemGameMode_h__Script_GASSkillSystem_1123740496{
	TEXT("/Script/GASSkillSystem"),
	Z_CompiledInDeferFile_FID_UE_Projects_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemGameMode_h__Script_GASSkillSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemGameMode_h__Script_GASSkillSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
