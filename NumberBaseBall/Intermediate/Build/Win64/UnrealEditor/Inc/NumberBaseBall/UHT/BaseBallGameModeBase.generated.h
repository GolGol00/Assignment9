// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseBallGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NUMBERBASEBALL_BaseBallGameModeBase_generated_h
#error "BaseBallGameModeBase.generated.h already included, missing '#pragma once' in BaseBallGameModeBase.h"
#endif
#define NUMBERBASEBALL_BaseBallGameModeBase_generated_h

#define FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseBallGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMainTimerElapsed);


#define FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseBallGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseBallGameModeBase(); \
	friend struct Z_Construct_UClass_ABaseBallGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ABaseBallGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NumberBaseBall"), NO_API) \
	DECLARE_SERIALIZER(ABaseBallGameModeBase)


#define FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseBallGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseBallGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseBallGameModeBase(ABaseBallGameModeBase&&); \
	ABaseBallGameModeBase(const ABaseBallGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseBallGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseBallGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseBallGameModeBase) \
	NO_API virtual ~ABaseBallGameModeBase();


#define FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseBallGameModeBase_h_13_PROLOG
#define FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseBallGameModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseBallGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseBallGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseBallGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NUMBERBASEBALL_API UClass* StaticClass<class ABaseBallGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseBallGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
