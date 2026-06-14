// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGASAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
GASSKILLSYSTEM_API UClass* Z_Construct_UClass_UGASAttributeSet();
GASSKILLSYSTEM_API UClass* Z_Construct_UClass_UGASAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASSkillSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGASAttributeSet Function OnRep_AttackPower ******************************
struct Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics
{
	struct GASAttributeSet_eventOnRep_AttackPower_Parms
	{
		FGameplayAttributeData OldAttackPower;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GASAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldAttackPower_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_AttackPower constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldAttackPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_AttackPower constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_AttackPower Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::NewProp_OldAttackPower = { "OldAttackPower", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASAttributeSet_eventOnRep_AttackPower_Parms, OldAttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldAttackPower_MetaData), NewProp_OldAttackPower_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::NewProp_OldAttackPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::PropPointers) < 2048);
// ********** End Function OnRep_AttackPower Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASAttributeSet, nullptr, "OnRep_AttackPower", 	Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::GASAttributeSet_eventOnRep_AttackPower_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::GASAttributeSet_eventOnRep_AttackPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASAttributeSet::execOnRep_AttackPower)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttackPower);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AttackPower(Z_Param_Out_OldAttackPower);
	P_NATIVE_END;
}
// ********** End Class UGASAttributeSet Function OnRep_AttackPower ********************************

// ********** Begin Class UGASAttributeSet Function OnRep_HP ***************************************
struct Z_Construct_UFunction_UGASAttributeSet_OnRep_HP_Statics
{
	struct GASAttributeSet_eventOnRep_HP_Parms
	{
		FGameplayAttributeData OldHP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GASAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_HP constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_HP constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_HP Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSet_OnRep_HP_Statics::NewProp_OldHP = { "OldHP", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASAttributeSet_eventOnRep_HP_Parms, OldHP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHP_MetaData), NewProp_OldHP_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSet_OnRep_HP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSet_OnRep_HP_Statics::NewProp_OldHP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_HP_Statics::PropPointers) < 2048);
// ********** End Function OnRep_HP Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSet_OnRep_HP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASAttributeSet, nullptr, "OnRep_HP", 	Z_Construct_UFunction_UGASAttributeSet_OnRep_HP_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_HP_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_HP_Statics::GASAttributeSet_eventOnRep_HP_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_HP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASAttributeSet_OnRep_HP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_HP_Statics::GASAttributeSet_eventOnRep_HP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASAttributeSet_OnRep_HP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSet_OnRep_HP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASAttributeSet::execOnRep_HP)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HP(Z_Param_Out_OldHP);
	P_NATIVE_END;
}
// ********** End Class UGASAttributeSet Function OnRep_HP *****************************************

// ********** Begin Class UGASAttributeSet Function OnRep_Mana *************************************
struct Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics
{
	struct GASAttributeSet_eventOnRep_Mana_Parms
	{
		FGameplayAttributeData OldMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GASAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Mana constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_Mana constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_Mana Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASAttributeSet_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMana_MetaData), NewProp_OldMana_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::NewProp_OldMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::PropPointers) < 2048);
// ********** End Function OnRep_Mana Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASAttributeSet, nullptr, "OnRep_Mana", 	Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::GASAttributeSet_eventOnRep_Mana_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::GASAttributeSet_eventOnRep_Mana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASAttributeSet::execOnRep_Mana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
	P_NATIVE_END;
}
// ********** End Class UGASAttributeSet Function OnRep_Mana ***************************************

// ********** Begin Class UGASAttributeSet Function OnRep_MaxHP ************************************
struct Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHP_Statics
{
	struct GASAttributeSet_eventOnRep_MaxHP_Parms
	{
		FGameplayAttributeData OldMaxHP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GASAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_MaxHP constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_MaxHP constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_MaxHP Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHP_Statics::NewProp_OldMaxHP = { "OldMaxHP", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASAttributeSet_eventOnRep_MaxHP_Parms, OldMaxHP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHP_MetaData), NewProp_OldMaxHP_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHP_Statics::NewProp_OldMaxHP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHP_Statics::PropPointers) < 2048);
// ********** End Function OnRep_MaxHP Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGASAttributeSet, nullptr, "OnRep_MaxHP", 	Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHP_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHP_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHP_Statics::GASAttributeSet_eventOnRep_MaxHP_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHP_Statics::GASAttributeSet_eventOnRep_MaxHP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGASAttributeSet::execOnRep_MaxHP)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHP(Z_Param_Out_OldMaxHP);
	P_NATIVE_END;
}
// ********** End Class UGASAttributeSet Function OnRep_MaxHP **************************************

// ********** Begin Class UGASAttributeSet *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGASAttributeSet;
UClass* UGASAttributeSet::GetPrivateStaticClass()
{
	using TClass = UGASAttributeSet;
	if (!Z_Registration_Info_UClass_UGASAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GASAttributeSet"),
			Z_Registration_Info_UClass_UGASAttributeSet.InnerSingleton,
			StaticRegisterNativesUGASAttributeSet,
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
	return Z_Registration_Info_UClass_UGASAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UGASAttributeSet_NoRegister()
{
	return UGASAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGASAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GASAttributeSet.h" },
		{ "ModuleRelativePath", "GASAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// HP \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\n" },
#endif
		{ "ModuleRelativePath", "GASAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HP \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd HP \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\n" },
#endif
		{ "ModuleRelativePath", "GASAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd HP \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mana \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\n" },
#endif
		{ "ModuleRelativePath", "GASAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mana \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xb7\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "GASAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xb7\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UGASAttributeSet constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_HP;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHP;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UGASAttributeSet constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnRep_AttackPower"), .Pointer = &UGASAttributeSet::execOnRep_AttackPower },
		{ .NameUTF8 = UTF8TEXT("OnRep_HP"), .Pointer = &UGASAttributeSet::execOnRep_HP },
		{ .NameUTF8 = UTF8TEXT("OnRep_Mana"), .Pointer = &UGASAttributeSet::execOnRep_Mana },
		{ .NameUTF8 = UTF8TEXT("OnRep_MaxHP"), .Pointer = &UGASAttributeSet::execOnRep_MaxHP },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGASAttributeSet_OnRep_AttackPower, "OnRep_AttackPower" }, // 1343860906
		{ &Z_Construct_UFunction_UGASAttributeSet_OnRep_HP, "OnRep_HP" }, // 2271487547
		{ &Z_Construct_UFunction_UGASAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 17643015
		{ &Z_Construct_UFunction_UGASAttributeSet_OnRep_MaxHP, "OnRep_MaxHP" }, // 377042549
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGASAttributeSet_Statics

// ********** Begin Class UGASAttributeSet Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_HP = { "HP", "OnRep_HP", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASAttributeSet, HP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HP_MetaData), NewProp_HP_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_MaxHP = { "MaxHP", "OnRep_MaxHP", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASAttributeSet, MaxHP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHP_MetaData), NewProp_MaxHP_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_AttackPower = { "AttackPower", "OnRep_AttackPower", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASAttributeSet, AttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackPower_MetaData), NewProp_AttackPower_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGASAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_HP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_MaxHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSet_Statics::NewProp_AttackPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSet_Statics::PropPointers) < 2048);
// ********** End Class UGASAttributeSet Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UGASAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_GASSkillSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASAttributeSet_Statics::ClassParams = {
	&UGASAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGASAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGASAttributeSet_Statics::Class_MetaDataParams)
};
void UGASAttributeSet::StaticRegisterNativesUGASAttributeSet()
{
	UClass* Class = UGASAttributeSet::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UGASAttributeSet_Statics::Funcs));
}
UClass* Z_Construct_UClass_UGASAttributeSet()
{
	if (!Z_Registration_Info_UClass_UGASAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASAttributeSet.OuterSingleton, Z_Construct_UClass_UGASAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGASAttributeSet.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UGASAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_HP(TEXT("HP"));
	static FName Name_MaxHP(TEXT("MaxHP"));
	static FName Name_Mana(TEXT("Mana"));
	static FName Name_AttackPower(TEXT("AttackPower"));
	const bool bIsValid = true
		&& Name_HP == ClassReps[(int32)ENetFields_Private::HP].Property->GetFName()
		&& Name_MaxHP == ClassReps[(int32)ENetFields_Private::MaxHP].Property->GetFName()
		&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
		&& Name_AttackPower == ClassReps[(int32)ENetFields_Private::AttackPower].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGASAttributeSet"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGASAttributeSet);
UGASAttributeSet::~UGASAttributeSet() {}
// ********** End Class UGASAttributeSet ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASAttributeSet_h__Script_GASSkillSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGASAttributeSet, UGASAttributeSet::StaticClass, TEXT("UGASAttributeSet"), &Z_Registration_Info_UClass_UGASAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASAttributeSet), 1647193016U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASAttributeSet_h__Script_GASSkillSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASAttributeSet_h__Script_GASSkillSystem_3848328020{
	TEXT("/Script/GASSkillSystem"),
	Z_CompiledInDeferFile_FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASAttributeSet_h__Script_GASSkillSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASAttributeSet_h__Script_GASSkillSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
