// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseballPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NUMBERBASEBALL_BaseballPlayerController_generated_h
#error "BaseballPlayerController.generated.h already included, missing '#pragma once' in BaseballPlayerController.h"
#endif
#define NUMBERBASEBALL_BaseballPlayerController_generated_h

#define FID_Github_NumberBaseBall_Source_NumberBaseBall_BaseballPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	virtual void ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	DECLARE_FUNCTION(execServerRPCPrintChatMessageString); \
	DECLARE_FUNCTION(execClientRPCPrintChatMessageString);


#define FID_Github_NumberBaseBall_Source_NumberBaseBall_BaseballPlayerController_h_15_CALLBACK_WRAPPERS
#define FID_Github_NumberBaseBall_Source_NumberBaseBall_BaseballPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseballPlayerController(); \
	friend struct Z_Construct_UClass_ABaseballPlayerController_Statics; \
public: \
	DECLARE_CLASS(ABaseballPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NumberBaseBall"), NO_API) \
	DECLARE_SERIALIZER(ABaseballPlayerController)


#define FID_Github_NumberBaseBall_Source_NumberBaseBall_BaseballPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseballPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseballPlayerController(ABaseballPlayerController&&); \
	ABaseballPlayerController(const ABaseballPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseballPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseballPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseballPlayerController) \
	NO_API virtual ~ABaseballPlayerController();


#define FID_Github_NumberBaseBall_Source_NumberBaseBall_BaseballPlayerController_h_12_PROLOG
#define FID_Github_NumberBaseBall_Source_NumberBaseBall_BaseballPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_NumberBaseBall_Source_NumberBaseBall_BaseballPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_NumberBaseBall_Source_NumberBaseBall_BaseballPlayerController_h_15_CALLBACK_WRAPPERS \
	FID_Github_NumberBaseBall_Source_NumberBaseBall_BaseballPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_NumberBaseBall_Source_NumberBaseBall_BaseballPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NUMBERBASEBALL_API UClass* StaticClass<class ABaseballPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_NumberBaseBall_Source_NumberBaseBall_BaseballPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
