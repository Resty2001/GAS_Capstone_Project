// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GASSkillDataAsset.h"

#ifdef GASSKILLSYSTEM_GASSkillDataAsset_generated_h
#error "GASSkillDataAsset.generated.h already included, missing '#pragma once' in GASSkillDataAsset.h"
#endif
#define GASSKILLSYSTEM_GASSkillDataAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGASSkillDataAsset *******************************************************
struct Z_Construct_UClass_UGASSkillDataAsset_Statics;
GASSKILLSYSTEM_API UClass* Z_Construct_UClass_UGASSkillDataAsset_NoRegister();

#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillDataAsset_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGASSkillDataAsset(); \
	friend struct ::Z_Construct_UClass_UGASSkillDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GASSKILLSYSTEM_API UClass* ::Z_Construct_UClass_UGASSkillDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UGASSkillDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASSkillSystem"), Z_Construct_UClass_UGASSkillDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UGASSkillDataAsset)


#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillDataAsset_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGASSkillDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGASSkillDataAsset(UGASSkillDataAsset&&) = delete; \
	UGASSkillDataAsset(const UGASSkillDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGASSkillDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGASSkillDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGASSkillDataAsset) \
	NO_API virtual ~UGASSkillDataAsset();


#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillDataAsset_h_23_PROLOG
#define FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillDataAsset_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillDataAsset_h_26_INCLASS_NO_PURE_DECLS \
	FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillDataAsset_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGASSkillDataAsset;

// ********** End Class UGASSkillDataAsset *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_GAS_Capstone_Project_GASSkillSystem_Source_GASSkillSystem_GASSkillDataAsset_h

// ********** Begin Enum ESkillTargetType **********************************************************
#define FOREACH_ENUM_ESKILLTARGETTYPE(op) \
	op(ESkillTargetType::Single) \
	op(ESkillTargetType::AoE) \
	op(ESkillTargetType::Line) \
	op(ESkillTargetType::Chain) 

enum class ESkillTargetType : uint8;
template<> struct TIsUEnumClass<ESkillTargetType> { enum { Value = true }; };
template<> GASSKILLSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<ESkillTargetType>();
// ********** End Enum ESkillTargetType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
