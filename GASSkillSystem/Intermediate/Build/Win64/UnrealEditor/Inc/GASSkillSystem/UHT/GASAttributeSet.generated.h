// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GASAttributeSet.h"

#ifdef GASSKILLSYSTEM_GASAttributeSet_generated_h
#error "GASAttributeSet.generated.h already included, missing '#pragma once' in GASAttributeSet.h"
#endif
#define GASSKILLSYSTEM_GASAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;

// ********** Begin Class UGASAttributeSet *********************************************************
#define FID_UE_Projects_GASSkillSystem_Source_GASSkillSystem_GASAttributeSet_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_AttackPower); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_MaxHP); \
	DECLARE_FUNCTION(execOnRep_HP);


struct Z_Construct_UClass_UGASAttributeSet_Statics;
GASSKILLSYSTEM_API UClass* Z_Construct_UClass_UGASAttributeSet_NoRegister();

#define FID_UE_Projects_GASSkillSystem_Source_GASSkillSystem_GASAttributeSet_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGASAttributeSet(); \
	friend struct ::Z_Construct_UClass_UGASAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GASSKILLSYSTEM_API UClass* ::Z_Construct_UClass_UGASAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UGASAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASSkillSystem"), Z_Construct_UClass_UGASAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UGASAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HP=NETFIELD_REP_START, \
		MaxHP, \
		Mana, \
		AttackPower, \
		NETFIELD_REP_END=AttackPower	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UGASAttributeSet) \
public:


#define FID_UE_Projects_GASSkillSystem_Source_GASSkillSystem_GASAttributeSet_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGASAttributeSet(UGASAttributeSet&&) = delete; \
	UGASAttributeSet(const UGASAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGASAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGASAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGASAttributeSet) \
	NO_API virtual ~UGASAttributeSet();


#define FID_UE_Projects_GASSkillSystem_Source_GASSkillSystem_GASAttributeSet_h_15_PROLOG
#define FID_UE_Projects_GASSkillSystem_Source_GASSkillSystem_GASAttributeSet_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_GASSkillSystem_Source_GASSkillSystem_GASAttributeSet_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_GASSkillSystem_Source_GASSkillSystem_GASAttributeSet_h_18_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_GASSkillSystem_Source_GASSkillSystem_GASAttributeSet_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGASAttributeSet;

// ********** End Class UGASAttributeSet ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_GASSkillSystem_Source_GASSkillSystem_GASAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
