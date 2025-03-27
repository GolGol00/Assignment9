// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseballGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NUMBERBASEBALL_BaseballGameStateBase_generated_h
#error "BaseballGameStateBase.generated.h already included, missing '#pragma once' in BaseballGameStateBase.h"
#endif
#define NUMBERBASEBALL_BaseballGameStateBase_generated_h

#define FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseballGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString); \
	DECLARE_FUNCTION(execMulticastRPCBroadcastLoginMessage);


#define FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseballGameStateBase_h_15_CALLBACK_WRAPPERS
#define FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseballGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseballGameStateBase(); \
	friend struct Z_Construct_UClass_ABaseballGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ABaseballGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NumberBaseBall"), NO_API) \
	DECLARE_SERIALIZER(ABaseballGameStateBase)


#define FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseballGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseballGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseballGameStateBase(ABaseballGameStateBase&&); \
	ABaseballGameStateBase(const ABaseballGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseballGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseballGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseballGameStateBase) \
	NO_API virtual ~ABaseballGameStateBase();


#define FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseballGameStateBase_h_12_PROLOG
#define FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseballGameStateBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseballGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseballGameStateBase_h_15_CALLBACK_WRAPPERS \
	FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseballGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseballGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NUMBERBASEBALL_API UClass* StaticClass<class ABaseballGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseballGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
