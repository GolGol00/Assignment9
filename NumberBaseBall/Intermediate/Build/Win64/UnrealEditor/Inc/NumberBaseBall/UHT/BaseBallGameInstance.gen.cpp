// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NumberBaseBall/BaseBallGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseBallGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_UBaseBallGameInstance();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_UBaseBallGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_NumberBaseBall();
// End Cross Module References

// Begin Class UBaseBallGameInstance
void UBaseBallGameInstance::StaticRegisterNativesUBaseBallGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseBallGameInstance);
UClass* Z_Construct_UClass_UBaseBallGameInstance_NoRegister()
{
	return UBaseBallGameInstance::StaticClass();
}
struct Z_Construct_UClass_UBaseBallGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BaseBallGameInstance.h" },
		{ "ModuleRelativePath", "BaseBallGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseBallGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseBallGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_NumberBaseBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBallGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseBallGameInstance_Statics::ClassParams = {
	&UBaseBallGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBallGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseBallGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseBallGameInstance()
{
	if (!Z_Registration_Info_UClass_UBaseBallGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseBallGameInstance.OuterSingleton, Z_Construct_UClass_UBaseBallGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseBallGameInstance.OuterSingleton;
}
template<> NUMBERBASEBALL_API UClass* StaticClass<UBaseBallGameInstance>()
{
	return UBaseBallGameInstance::StaticClass();
}
UBaseBallGameInstance::UBaseBallGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseBallGameInstance);
UBaseBallGameInstance::~UBaseBallGameInstance() {}
// End Class UBaseBallGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_NumberBaseBall_Source_NumberBaseBall_BaseBallGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseBallGameInstance, UBaseBallGameInstance::StaticClass, TEXT("UBaseBallGameInstance"), &Z_Registration_Info_UClass_UBaseBallGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseBallGameInstance), 64961555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_NumberBaseBall_Source_NumberBaseBall_BaseBallGameInstance_h_3211011623(TEXT("/Script/NumberBaseBall"),
	Z_CompiledInDeferFile_FID_Github_NumberBaseBall_Source_NumberBaseBall_BaseBallGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_NumberBaseBall_Source_NumberBaseBall_BaseBallGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
