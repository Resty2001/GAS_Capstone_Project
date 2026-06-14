// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASNPCCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGASNPCCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GASSKILLSYSTEM_API UClass* Z_Construct_UClass_AGASNPCCharacter();
GASSKILLSYSTEM_API UClass* Z_Construct_UClass_AGASNPCCharacter_NoRegister();
GASSKILLSYSTEM_API UClass* Z_Construct_UClass_AGASSkillSystemCharacter();
UPackage* Z_Construct_UPackage__Script_GASSkillSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGASNPCCharacter Function GetDistanceToPlayer ****************************
struct Z_Construct_UFunction_AGASNPCCharacter_GetDistanceToPlayer_Statics
{
	struct GASNPCCharacter_eventGetDistanceToPlayer_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC|Combat" },
		{ "ModuleRelativePath", "GASNPCCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDistanceToPlayer constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDistanceToPlayer constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDistanceToPlayer Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGASNPCCharacter_GetDistanceToPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASNPCCharacter_eventGetDistanceToPlayer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASNPCCharacter_GetDistanceToPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASNPCCharacter_GetDistanceToPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASNPCCharacter_GetDistanceToPlayer_Statics::PropPointers) < 2048);
// ********** End Function GetDistanceToPlayer Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASNPCCharacter_GetDistanceToPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGASNPCCharacter, nullptr, "GetDistanceToPlayer", 	Z_Construct_UFunction_AGASNPCCharacter_GetDistanceToPlayer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGASNPCCharacter_GetDistanceToPlayer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGASNPCCharacter_GetDistanceToPlayer_Statics::GASNPCCharacter_eventGetDistanceToPlayer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASNPCCharacter_GetDistanceToPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASNPCCharacter_GetDistanceToPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGASNPCCharacter_GetDistanceToPlayer_Statics::GASNPCCharacter_eventGetDistanceToPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASNPCCharacter_GetDistanceToPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASNPCCharacter_GetDistanceToPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASNPCCharacter::execGetDistanceToPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDistanceToPlayer();
	P_NATIVE_END;
}
// ********** End Class AGASNPCCharacter Function GetDistanceToPlayer ******************************

// ********** Begin Class AGASNPCCharacter Function IsDead *****************************************
struct Z_Construct_UFunction_AGASNPCCharacter_IsDead_Statics
{
	struct GASNPCCharacter_eventIsDead_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC|State" },
		{ "ModuleRelativePath", "GASNPCCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsDead constinit property declarations ********************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsDead constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsDead Property Definitions *******************************************
void Z_Construct_UFunction_AGASNPCCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GASNPCCharacter_eventIsDead_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGASNPCCharacter_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GASNPCCharacter_eventIsDead_Parms), &Z_Construct_UFunction_AGASNPCCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASNPCCharacter_IsDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASNPCCharacter_IsDead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASNPCCharacter_IsDead_Statics::PropPointers) < 2048);
// ********** End Function IsDead Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASNPCCharacter_IsDead_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGASNPCCharacter, nullptr, "IsDead", 	Z_Construct_UFunction_AGASNPCCharacter_IsDead_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGASNPCCharacter_IsDead_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGASNPCCharacter_IsDead_Statics::GASNPCCharacter_eventIsDead_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASNPCCharacter_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASNPCCharacter_IsDead_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGASNPCCharacter_IsDead_Statics::GASNPCCharacter_eventIsDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASNPCCharacter_IsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASNPCCharacter_IsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASNPCCharacter::execIsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDead();
	P_NATIVE_END;
}
// ********** End Class AGASNPCCharacter Function IsDead *******************************************

// ********** Begin Class AGASNPCCharacter Function IsPlayerInDetectionRange ***********************
struct Z_Construct_UFunction_AGASNPCCharacter_IsPlayerInDetectionRange_Statics
{
	struct GASNPCCharacter_eventIsPlayerInDetectionRange_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC|Combat" },
		{ "ModuleRelativePath", "GASNPCCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPlayerInDetectionRange constinit property declarations **************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPlayerInDetectionRange constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPlayerInDetectionRange Property Definitions *************************
void Z_Construct_UFunction_AGASNPCCharacter_IsPlayerInDetectionRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GASNPCCharacter_eventIsPlayerInDetectionRange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGASNPCCharacter_IsPlayerInDetectionRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GASNPCCharacter_eventIsPlayerInDetectionRange_Parms), &Z_Construct_UFunction_AGASNPCCharacter_IsPlayerInDetectionRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASNPCCharacter_IsPlayerInDetectionRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASNPCCharacter_IsPlayerInDetectionRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASNPCCharacter_IsPlayerInDetectionRange_Statics::PropPointers) < 2048);
// ********** End Function IsPlayerInDetectionRange Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASNPCCharacter_IsPlayerInDetectionRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGASNPCCharacter, nullptr, "IsPlayerInDetectionRange", 	Z_Construct_UFunction_AGASNPCCharacter_IsPlayerInDetectionRange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGASNPCCharacter_IsPlayerInDetectionRange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGASNPCCharacter_IsPlayerInDetectionRange_Statics::GASNPCCharacter_eventIsPlayerInDetectionRange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASNPCCharacter_IsPlayerInDetectionRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASNPCCharacter_IsPlayerInDetectionRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGASNPCCharacter_IsPlayerInDetectionRange_Statics::GASNPCCharacter_eventIsPlayerInDetectionRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASNPCCharacter_IsPlayerInDetectionRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASNPCCharacter_IsPlayerInDetectionRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASNPCCharacter::execIsPlayerInDetectionRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerInDetectionRange();
	P_NATIVE_END;
}
// ********** End Class AGASNPCCharacter Function IsPlayerInDetectionRange *************************

// ********** Begin Class AGASNPCCharacter Function PerformAttack **********************************
struct Z_Construct_UFunction_AGASNPCCharacter_PerformAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC|Combat" },
		{ "ModuleRelativePath", "GASNPCCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PerformAttack constinit property declarations *************************
// ********** End Function PerformAttack constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASNPCCharacter_PerformAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGASNPCCharacter, nullptr, "PerformAttack", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASNPCCharacter_PerformAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASNPCCharacter_PerformAttack_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGASNPCCharacter_PerformAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASNPCCharacter_PerformAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASNPCCharacter::execPerformAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformAttack();
	P_NATIVE_END;
}
// ********** End Class AGASNPCCharacter Function PerformAttack ************************************

// ********** Begin Class AGASNPCCharacter *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGASNPCCharacter;
UClass* AGASNPCCharacter::GetPrivateStaticClass()
{
	using TClass = AGASNPCCharacter;
	if (!Z_Registration_Info_UClass_AGASNPCCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GASNPCCharacter"),
			Z_Registration_Info_UClass_AGASNPCCharacter.InnerSingleton,
			StaticRegisterNativesAGASNPCCharacter,
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
	return Z_Registration_Info_UClass_AGASNPCCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AGASNPCCharacter_NoRegister()
{
	return AGASNPCCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGASNPCCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GASNPCCharacter.h" },
		{ "ModuleRelativePath", "GASNPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "NPC|Stats" },
		{ "ModuleRelativePath", "GASNPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "NPC|Stats" },
		{ "ModuleRelativePath", "GASNPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionRange_MetaData[] = {
		{ "Category", "NPC|Stats" },
		{ "ModuleRelativePath", "GASNPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCooldown_MetaData[] = {
		{ "Category", "NPC|Stats" },
		{ "ModuleRelativePath", "GASNPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackEffectClass_MetaData[] = {
		{ "Category", "NPC|Combat" },
		{ "ModuleRelativePath", "GASNPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPlayer_MetaData[] = {
		{ "Category", "NPC|Combat" },
		{ "ModuleRelativePath", "GASNPCCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AGASNPCCharacter constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackCooldown;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AttackEffectClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AGASNPCCharacter constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetDistanceToPlayer"), .Pointer = &AGASNPCCharacter::execGetDistanceToPlayer },
		{ .NameUTF8 = UTF8TEXT("IsDead"), .Pointer = &AGASNPCCharacter::execIsDead },
		{ .NameUTF8 = UTF8TEXT("IsPlayerInDetectionRange"), .Pointer = &AGASNPCCharacter::execIsPlayerInDetectionRange },
		{ .NameUTF8 = UTF8TEXT("PerformAttack"), .Pointer = &AGASNPCCharacter::execPerformAttack },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGASNPCCharacter_GetDistanceToPlayer, "GetDistanceToPlayer" }, // 2858471931
		{ &Z_Construct_UFunction_AGASNPCCharacter_IsDead, "IsDead" }, // 1085228270
		{ &Z_Construct_UFunction_AGASNPCCharacter_IsPlayerInDetectionRange, "IsPlayerInDetectionRange" }, // 1607587255
		{ &Z_Construct_UFunction_AGASNPCCharacter_PerformAttack, "PerformAttack" }, // 564014591
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGASNPCCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGASNPCCharacter_Statics

// ********** Begin Class AGASNPCCharacter Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGASNPCCharacter_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASNPCCharacter, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGASNPCCharacter_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASNPCCharacter, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGASNPCCharacter_Statics::NewProp_DetectionRange = { "DetectionRange", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASNPCCharacter, DetectionRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionRange_MetaData), NewProp_DetectionRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGASNPCCharacter_Statics::NewProp_AttackCooldown = { "AttackCooldown", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASNPCCharacter, AttackCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCooldown_MetaData), NewProp_AttackCooldown_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGASNPCCharacter_Statics::NewProp_AttackEffectClass = { "AttackEffectClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASNPCCharacter, AttackEffectClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackEffectClass_MetaData), NewProp_AttackEffectClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASNPCCharacter_Statics::NewProp_TargetPlayer = { "TargetPlayer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASNPCCharacter, TargetPlayer), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPlayer_MetaData), NewProp_TargetPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGASNPCCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASNPCCharacter_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASNPCCharacter_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASNPCCharacter_Statics::NewProp_DetectionRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASNPCCharacter_Statics::NewProp_AttackCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASNPCCharacter_Statics::NewProp_AttackEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASNPCCharacter_Statics::NewProp_TargetPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASNPCCharacter_Statics::PropPointers) < 2048);
// ********** End Class AGASNPCCharacter Property Definitions **************************************
UObject* (*const Z_Construct_UClass_AGASNPCCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGASSkillSystemCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GASSkillSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASNPCCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGASNPCCharacter_Statics::ClassParams = {
	&AGASNPCCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGASNPCCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGASNPCCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGASNPCCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGASNPCCharacter_Statics::Class_MetaDataParams)
};
void AGASNPCCharacter::StaticRegisterNativesAGASNPCCharacter()
{
	UClass* Class = AGASNPCCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AGASNPCCharacter_Statics::Funcs));
}
UClass* Z_Construct_UClass_AGASNPCCharacter()
{
	if (!Z_Registration_Info_UClass_AGASNPCCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGASNPCCharacter.OuterSingleton, Z_Construct_UClass_AGASNPCCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGASNPCCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGASNPCCharacter);
AGASNPCCharacter::~AGASNPCCharacter() {}
// ********** End Class AGASNPCCharacter ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASNPCCharacter_h__Script_GASSkillSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGASNPCCharacter, AGASNPCCharacter::StaticClass, TEXT("AGASNPCCharacter"), &Z_Registration_Info_UClass_AGASNPCCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGASNPCCharacter), 1246947660U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASNPCCharacter_h__Script_GASSkillSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASNPCCharacter_h__Script_GASSkillSystem_3910508172{
	TEXT("/Script/GASSkillSystem"),
	Z_CompiledInDeferFile_FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASNPCCharacter_h__Script_GASSkillSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASNPCCharacter_h__Script_GASSkillSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
