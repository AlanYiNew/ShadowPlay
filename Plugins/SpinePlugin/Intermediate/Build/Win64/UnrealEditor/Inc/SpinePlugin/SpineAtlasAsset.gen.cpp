// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpinePlugin/Public/SpineAtlasAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineAtlasAsset() {}
// Cross Module References
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineAtlasAsset_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineAtlasAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SpinePlugin();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
// End Cross Module References
	void USpineAtlasAsset::StaticRegisterNativesUSpineAtlasAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpineAtlasAsset);
	UClass* Z_Construct_UClass_USpineAtlasAsset_NoRegister()
	{
		return USpineAtlasAsset::StaticClass();
	}
	struct Z_Construct_UClass_USpineAtlasAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_atlasPages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_atlasPages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_atlasPages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rawData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_rawData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_atlasFileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_atlasFileName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_importData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_importData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineAtlasAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpinePlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAtlasAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Spine" },
		{ "Comment", "// clang-format on\n" },
		{ "IncludePath", "SpineAtlasAsset.h" },
		{ "ModuleRelativePath", "Public/SpineAtlasAsset.h" },
		{ "ToolTip", "clang-format on" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasPages_Inner = { "atlasPages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasPages_MetaData[] = {
		{ "Category", "SpineAtlasAsset" },
		{ "ModuleRelativePath", "Public/SpineAtlasAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasPages = { "atlasPages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAtlasAsset, atlasPages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasPages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasPages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_rawData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpineAtlasAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_rawData = { "rawData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAtlasAsset, rawData), METADATA_PARAMS(Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_rawData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_rawData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasFileName_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpineAtlasAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasFileName = { "atlasFileName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAtlasAsset, atlasFileName), METADATA_PARAMS(Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasFileName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_importData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpineAtlasAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_importData = { "importData", nullptr, (EPropertyFlags)0x00220808000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAtlasAsset, importData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_importData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_importData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineAtlasAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasPages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasPages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_rawData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasFileName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_importData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineAtlasAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineAtlasAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpineAtlasAsset_Statics::ClassParams = {
		&USpineAtlasAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpineAtlasAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineAtlasAsset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpineAtlasAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAtlasAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpineAtlasAsset()
	{
		if (!Z_Registration_Info_UClass_USpineAtlasAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpineAtlasAsset.OuterSingleton, Z_Construct_UClass_USpineAtlasAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpineAtlasAsset.OuterSingleton;
	}
	template<> SPINEPLUGIN_API UClass* StaticClass<USpineAtlasAsset>()
	{
		return USpineAtlasAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineAtlasAsset);
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USpineAtlasAsset)
#endif
	struct Z_CompiledInDeferFile_FID_GameDemo_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDemo_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpineAtlasAsset, USpineAtlasAsset::StaticClass, TEXT("USpineAtlasAsset"), &Z_Registration_Info_UClass_USpineAtlasAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpineAtlasAsset), 2934299518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDemo_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_1484109830(TEXT("/Script/SpinePlugin"),
		Z_CompiledInDeferFile_FID_GameDemo_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDemo_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAtlasAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
