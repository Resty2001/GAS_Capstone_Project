// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GASNPCCharacter.h"

#ifdef GASSKILLSYSTEM_GASNPCCharacter_generated_h
#error "GASNPCCharacter.generated.h already included, missing '#pragma once' in GASNPCCharacter.h"
#endif
#define GASSKILLSYSTEM_GASNPCCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGASNPCCharacter *********************************************************
#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASNPCCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execGetDistanceToPlayer); \
	DECLARE_FUNCTION(execIsPlayerInDetectionRange); \
	DECLARE_FUNCTION(execPerformAttack);


struct Z_Construct_UClass_AGASNPCCharacter_Statics;
GASSKILLSYSTEM_API UClass* Z_Construct_UClass_AGASNPCCharacter_NoRegister();

#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASNPCCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGASNPCCharacter(); \
	friend struct ::Z_Construct_UClass_AGASNPCCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GASSKILLSYSTEM_API UClass* ::Z_Construct_UClass_AGASNPCCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AGASNPCCharacter, AGASSkillSystemCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASSkillSystem"), Z_Construct_UClass_AGASNPCCharacter_NoRegister) \
	DECLARE_SERIALIZER(AGASNPCCharacter)


#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASNPCCharacter_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGASNPCCharacter(AGASNPCCharacter&&) = delete; \
	AGASNPCCharacter(const AGASNPCCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGASNPCCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGASNPCCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGASNPCCharacter) \
	NO_API virtual ~AGASNPCCharacter();


#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASNPCCharacter_h_10_PROLOG
#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASNPCCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASNPCCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASNPCCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASNPCCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGASNPCCharacter;

// ********** End Class AGASNPCCharacter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASNPCCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
