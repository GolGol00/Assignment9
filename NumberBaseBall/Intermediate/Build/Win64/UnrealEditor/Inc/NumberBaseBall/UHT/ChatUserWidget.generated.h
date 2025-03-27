// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChatUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NUMBERBASEBALL_ChatUserWidget_generated_h
#error "ChatUserWidget.generated.h already included, missing '#pragma once' in ChatUserWidget.h"
#endif
#define NUMBERBASEBALL_ChatUserWidget_generated_h

#define FID_Github_NumberBaseBall_Source_NumberBaseBall_ChatUserWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnChatInputTextCommitted);


#define FID_Github_NumberBaseBall_Source_NumberBaseBall_ChatUserWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChatUserWidget(); \
	friend struct Z_Construct_UClass_UChatUserWidget_Statics; \
public: \
	DECLARE_CLASS(UChatUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NumberBaseBall"), NO_API) \
	DECLARE_SERIALIZER(UChatUserWidget)


#define FID_Github_NumberBaseBall_Source_NumberBaseBall_ChatUserWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChatUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChatUserWidget(UChatUserWidget&&); \
	UChatUserWidget(const UChatUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChatUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChatUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChatUserWidget) \
	NO_API virtual ~UChatUserWidget();


#define FID_Github_NumberBaseBall_Source_NumberBaseBall_ChatUserWidget_h_13_PROLOG
#define FID_Github_NumberBaseBall_Source_NumberBaseBall_ChatUserWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_NumberBaseBall_Source_NumberBaseBall_ChatUserWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_NumberBaseBall_Source_NumberBaseBall_ChatUserWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_Github_NumberBaseBall_Source_NumberBaseBall_ChatUserWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NUMBERBASEBALL_API UClass* StaticClass<class UChatUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_NumberBaseBall_Source_NumberBaseBall_ChatUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
