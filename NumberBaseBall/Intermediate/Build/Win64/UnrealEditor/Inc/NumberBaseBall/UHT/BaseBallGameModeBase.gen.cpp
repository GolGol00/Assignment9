// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NumberBaseBall/BaseBallGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseBallGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ABaseBallGameModeBase();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ABaseBallGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_NumberBaseBall();
// End Cross Module References

// Begin Class ABaseBallGameModeBase Function OnMainTimerElapsed
struct Z_Construct_UFunction_ABaseBallGameModeBase_OnMainTimerElapsed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseBallGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseBallGameModeBase_OnMainTimerElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseBallGameModeBase, nullptr, "OnMainTimerElapsed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBallGameModeBase_OnMainTimerElapsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseBallGameModeBase_OnMainTimerElapsed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABaseBallGameModeBase_OnMainTimerElapsed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseBallGameModeBase_OnMainTimerElapsed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseBallGameModeBase::execOnMainTimerElapsed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMainTimerElapsed();
	P_NATIVE_END;
}
// End Class ABaseBallGameModeBase Function OnMainTimerElapsed

// Begin Class ABaseBallGameModeBase
void ABaseBallGameModeBase::StaticRegisterNativesABaseBallGameModeBase()
{
	UClass* Class = ABaseBallGameModeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMainTimerElapsed", &ABaseBallGameModeBase::execOnMainTimerElapsed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseBallGameModeBase);
UClass* Z_Construct_UClass_ABaseBallGameModeBase_NoRegister()
{
	return ABaseBallGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ABaseBallGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BaseBallGameModeBase.h" },
		{ "ModuleRelativePath", "BaseBallGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseBallGameModeBase_OnMainTimerElapsed, "OnMainTimerElapsed" }, // 147945518
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseBallGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABaseBallGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NumberBaseBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBallGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseBallGameModeBase_Statics::ClassParams = {
	&ABaseBallGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBallGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseBallGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseBallGameModeBase()
{
	if (!Z_Registration_Info_UClass_ABaseBallGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseBallGameModeBase.OuterSingleton, Z_Construct_UClass_ABaseBallGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseBallGameModeBase.OuterSingleton;
}
template<> NUMBERBASEBALL_API UClass* StaticClass<ABaseBallGameModeBase>()
{
	return ABaseBallGameModeBase::StaticClass();
}
ABaseBallGameModeBase::ABaseBallGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseBallGameModeBase);
ABaseBallGameModeBase::~ABaseBallGameModeBase() {}
// End Class ABaseBallGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseBallGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseBallGameModeBase, ABaseBallGameModeBase::StaticClass, TEXT("ABaseBallGameModeBase"), &Z_Registration_Info_UClass_ABaseBallGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseBallGameModeBase), 4017979811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseBallGameModeBase_h_2571919180(TEXT("/Script/NumberBaseBall"),
	Z_CompiledInDeferFile_FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseBallGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Assignment9_NumberBaseBall_Source_NumberBaseBall_BaseBallGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
