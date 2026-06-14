// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GASSkillSystemGameMode.h"

#ifdef GASSKILLSYSTEM_GASSkillSystemGameMode_generated_h
#error "GASSkillSystemGameMode.generated.h already included, missing '#pragma once' in GASSkillSystemGameMode.h"
#endif
#define GASSKILLSYSTEM_GASSkillSystemGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGASSkillSystemGameMode **************************************************
struct Z_Construct_UClass_AGASSkillSystemGameMode_Statics;
GASSKILLSYSTEM_API UClass* Z_Construct_UClass_AGASSkillSystemGameMode_NoRegister();

#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGASSkillSystemGameMode(); \
	friend struct ::Z_Construct_UClass_AGASSkillSystemGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GASSKILLSYSTEM_API UClass* ::Z_Construct_UClass_AGASSkillSystemGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AGASSkillSystemGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASSkillSystem"), Z_Construct_UClass_AGASSkillSystemGameMode_NoRegister) \
	DECLARE_SERIALIZER(AGASSkillSystemGameMode)


#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGASSkillSystemGameMode(AGASSkillSystemGameMode&&) = delete; \
	AGASSkillSystemGameMode(const AGASSkillSystemGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGASSkillSystemGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGASSkillSystemGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGASSkillSystemGameMode) \
	NO_API virtual ~AGASSkillSystemGameMode();


#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemGameMode_h_12_PROLOG
#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGASSkillSystemGameMode;

// ********** End Class AGASSkillSystemGameMode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
