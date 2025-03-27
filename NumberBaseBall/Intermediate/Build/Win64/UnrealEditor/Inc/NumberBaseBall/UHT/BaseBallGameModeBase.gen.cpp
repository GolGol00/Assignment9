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

// Begin Class ABaseBallGameModeBase
void ABaseBallGameModeBase::StaticRegisterNativesABaseBallGameModeBase()
{
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
struct Z_CompiledInDeferFile_FID_Github_NumberBaseBall_Source_NumberBaseBall_BaseBallGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseBallGameModeBase, ABaseBallGameModeBase::StaticClass, TEXT("ABaseBallGameModeBase"), &Z_Registration_Info_UClass_ABaseBallGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseBallGameModeBase), 4209494767U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_NumberBaseBall_Source_NumberBaseBall_BaseBallGameModeBase_h_2920836211(TEXT("/Script/NumberBaseBall"),
	Z_CompiledInDeferFile_FID_Github_NumberBaseBall_Source_NumberBaseBall_BaseBallGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_NumberBaseBall_Source_NumberBaseBall_BaseBallGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
