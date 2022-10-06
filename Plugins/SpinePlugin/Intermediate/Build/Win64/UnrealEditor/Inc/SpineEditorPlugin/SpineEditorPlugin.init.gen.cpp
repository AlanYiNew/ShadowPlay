// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineEditorPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SpineEditorPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SpineEditorPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_SpineEditorPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SpineEditorPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x8C7238AD,
				0xCA0534BA,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SpineEditorPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SpineEditorPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SpineEditorPlugin(Z_Construct_UPackage__Script_SpineEditorPlugin, TEXT("/Script/SpineEditorPlugin"), Z_Registration_Info_UPackage__Script_SpineEditorPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8C7238AD, 0xCA0534BA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
