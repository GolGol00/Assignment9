// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NumberBaseBall/BBPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBBPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ABBPlayerState();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ABBPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_NumberBaseBall();
// End Cross Module References

// Begin Class ABBPlayerState
void ABBPlayerState::StaticRegisterNativesABBPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABBPlayerState);
UClass* Z_Construct_UClass_ABBPlayerState_NoRegister()
{
	return ABBPlayerState::StaticClass();
}
struct Z_Construct_UClass_ABBPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BBPlayerState.h" },
		{ "ModuleRelativePath", "BBPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNameString_MetaData[] = {
		{ "ModuleRelativePath", "BBPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGuessCount_MetaData[] = {
		{ "ModuleRelativePath", "BBPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGuessCount_MetaData[] = {
		{ "ModuleRelativePath", "BBPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerNameString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentGuessCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxGuessCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABBPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABBPlayerState_Statics::NewProp_PlayerNameString = { "PlayerNameString", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBPlayerState, PlayerNameString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNameString_MetaData), NewProp_PlayerNameString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABBPlayerState_Statics::NewProp_CurrentGuessCount = { "CurrentGuessCount", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBPlayerState, CurrentGuessCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGuessCount_MetaData), NewProp_CurrentGuessCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABBPlayerState_Statics::NewProp_MaxGuessCount = { "MaxGuessCount", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBPlayerState, MaxGuessCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGuessCount_MetaData), NewProp_MaxGuessCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABBPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBPlayerState_Statics::NewProp_PlayerNameString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBPlayerState_Statics::NewProp_CurrentGuessCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBPlayerState_Statics::NewProp_MaxGuessCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABBPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABBPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_NumberBaseBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABBPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABBPlayerState_Statics::ClassParams = {
	&ABBPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABBPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABBPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABBPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ABBPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABBPlayerState()
{
	if (!Z_Registration_Info_UClass_ABBPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABBPlayerState.OuterSingleton, Z_Construct_UClass_ABBPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABBPlayerState.OuterSingleton;
}
template<> NUMBERBASEBALL_API UClass* StaticClass<ABBPlayerState>()
{
	return ABBPlayerState::StaticClass();
}
void ABBPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PlayerNameString(TEXT("PlayerNameString"));
	static const FName Name_CurrentGuessCount(TEXT("CurrentGuessCount"));
	static const FName Name_MaxGuessCount(TEXT("MaxGuessCount"));
	const bool bIsValid = true
		&& Name_PlayerNameString == ClassReps[(int32)ENetFields_Private::PlayerNameString].Property->GetFName()
		&& Name_CurrentGuessCount == ClassReps[(int32)ENetFields_Private::CurrentGuessCount].Property->GetFName()
		&& Name_MaxGuessCount == ClassReps[(int32)ENetFields_Private::MaxGuessCount].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABBPlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABBPlayerState);
ABBPlayerState::~ABBPlayerState() {}
// End Class ABBPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BBPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABBPlayerState, ABBPlayerState::StaticClass, TEXT("ABBPlayerState"), &Z_Registration_Info_UClass_ABBPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABBPlayerState), 4291401726U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BBPlayerState_h_75199045(TEXT("/Script/NumberBaseBall"),
	Z_CompiledInDeferFile_FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BBPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BBPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
