// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GASSkillSystemPlayerController.h"

#ifdef GASSKILLSYSTEM_GASSkillSystemPlayerController_generated_h
#error "GASSkillSystemPlayerController.generated.h already included, missing '#pragma once' in GASSkillSystemPlayerController.h"
#endif
#define GASSKILLSYSTEM_GASSkillSystemPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGASSkillSystemPlayerController ******************************************
struct Z_Construct_UClass_AGASSkillSystemPlayerController_Statics;
GASSKILLSYSTEM_API UClass* Z_Construct_UClass_AGASSkillSystemPlayerController_NoRegister();

#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGASSkillSystemPlayerController(); \
	friend struct ::Z_Construct_UClass_AGASSkillSystemPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GASSKILLSYSTEM_API UClass* ::Z_Construct_UClass_AGASSkillSystemPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AGASSkillSystemPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASSkillSystem"), Z_Construct_UClass_AGASSkillSystemPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AGASSkillSystemPlayerController)


#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGASSkillSystemPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGASSkillSystemPlayerController(AGASSkillSystemPlayerController&&) = delete; \
	AGASSkillSystemPlayerController(const AGASSkillSystemPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGASSkillSystemPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGASSkillSystemPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGASSkillSystemPlayerController) \
	NO_API virtual ~AGASSkillSystemPlayerController();


#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemPlayerController_h_16_PROLOG
#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGASSkillSystemPlayerController;

// ********** End Class AGASSkillSystemPlayerController ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillSystemPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
