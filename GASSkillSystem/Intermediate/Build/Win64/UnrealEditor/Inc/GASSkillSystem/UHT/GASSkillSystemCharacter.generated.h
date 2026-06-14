// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GASSkillSystemCharacter.h"

#ifdef GASSKILLSYSTEM_GASSkillSystemCharacter_generated_h
#error "GASSkillSystemCharacter.generated.h already included, missing '#pragma once' in GASSkillSystemCharacter.h"
#endif
#define GASSKILLSYSTEM_GASSkillSystemCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGASSkillSystemCharacter *************************************************
#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execActivateAbilityByIndex);


struct Z_Construct_UClass_AGASSkillSystemCharacter_Statics;
GASSKILLSYSTEM_API UClass* Z_Construct_UClass_AGASSkillSystemCharacter_NoRegister();

#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemCharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGASSkillSystemCharacter(); \
	friend struct ::Z_Construct_UClass_AGASSkillSystemCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GASSKILLSYSTEM_API UClass* ::Z_Construct_UClass_AGASSkillSystemCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AGASSkillSystemCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASSkillSystem"), Z_Construct_UClass_AGASSkillSystemCharacter_NoRegister) \
	DECLARE_SERIALIZER(AGASSkillSystemCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AGASSkillSystemCharacter*>(this); }


#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemCharacter_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGASSkillSystemCharacter(AGASSkillSystemCharacter&&) = delete; \
	AGASSkillSystemCharacter(const AGASSkillSystemCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGASSkillSystemCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGASSkillSystemCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGASSkillSystemCharacter) \
	NO_API virtual ~AGASSkillSystemCharacter();


#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemCharacter_h_21_PROLOG
#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemCharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemCharacter_h_25_INCLASS_NO_PURE_DECLS \
	FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGASSkillSystemCharacter;

// ********** End Class AGASSkillSystemCharacter ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
