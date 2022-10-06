// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineEditorPlugin/Public/SpineSkeletonImportFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineSkeletonImportFactory() {}
// Cross Module References
	SPINEEDITORPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonAssetFactory_NoRegister();
	SPINEEDITORPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SpineEditorPlugin();
// End Cross Module References
	void USpineSkeletonAssetFactory::StaticRegisterNativesUSpineSkeletonAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpineSkeletonAssetFactory);
	UClass* Z_Construct_UClass_USpineSkeletonAssetFactory_NoRegister()
	{
		return USpineSkeletonAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_USpineSkeletonAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineSkeletonAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineEditorPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// clang-format on\n" },
		{ "IncludePath", "SpineSkeletonImportFactory.h" },
		{ "ModuleRelativePath", "Public/SpineSkeletonImportFactory.h" },
		{ "ToolTip", "clang-format on" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineSkeletonAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineSkeletonAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpineSkeletonAssetFactory_Statics::ClassParams = {
		&USpineSkeletonAssetFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpineSkeletonAssetFactory()
	{
		if (!Z_Registration_Info_UClass_USpineSkeletonAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpineSkeletonAssetFactory.OuterSingleton, Z_Construct_UClass_USpineSkeletonAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpineSkeletonAssetFactory.OuterSingleton;
	}
	template<> SPINEEDITORPLUGIN_API UClass* StaticClass<USpineSkeletonAssetFactory>()
	{
		return USpineSkeletonAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineSkeletonAssetFactory);
	struct Z_CompiledInDeferFile_FID_ShadowPlay_main_Plugins_SpinePlugin_Source_SpineEditorPlugin_Public_SpineSkeletonImportFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShadowPlay_main_Plugins_SpinePlugin_Source_SpineEditorPlugin_Public_SpineSkeletonImportFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpineSkeletonAssetFactory, USpineSkeletonAssetFactory::StaticClass, TEXT("USpineSkeletonAssetFactory"), &Z_Registration_Info_UClass_USpineSkeletonAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpineSkeletonAssetFactory), 3235361601U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShadowPlay_main_Plugins_SpinePlugin_Source_SpineEditorPlugin_Public_SpineSkeletonImportFactory_h_845691413(TEXT("/Script/SpineEditorPlugin"),
		Z_CompiledInDeferFile_FID_ShadowPlay_main_Plugins_SpinePlugin_Source_SpineEditorPlugin_Public_SpineSkeletonImportFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShadowPlay_main_Plugins_SpinePlugin_Source_SpineEditorPlugin_Public_SpineSkeletonImportFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
