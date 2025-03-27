// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BBPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NUMBERBASEBALL_BBPlayerState_generated_h
#error "BBPlayerState.generated.h already included, missing '#pragma once' in BBPlayerState.h"
#endif
#define NUMBERBASEBALL_BBPlayerState_generated_h

#define FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BBPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABBPlayerState(); \
	friend struct Z_Construct_UClass_ABBPlayerState_Statics; \
public: \
	DECLARE_CLASS(ABBPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NumberBaseBall"), NO_API) \
	DECLARE_SERIALIZER(ABBPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerNameString=NETFIELD_REP_START, \
		CurrentGuessCount, \
		MaxGuessCount, \
		NETFIELD_REP_END=MaxGuessCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BBPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABBPlayerState(ABBPlayerState&&); \
	ABBPlayerState(const ABBPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABBPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABBPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABBPlayerState) \
	NO_API virtual ~ABBPlayerState();


#define FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BBPlayerState_h_12_PROLOG
#define FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BBPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BBPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BBPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NUMBERBASEBALL_API UClass* StaticClass<class ABBPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BBPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
