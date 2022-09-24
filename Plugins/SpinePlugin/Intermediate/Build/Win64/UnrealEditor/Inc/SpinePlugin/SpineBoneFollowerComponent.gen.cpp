// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpinePlugin/Public/SpineBoneFollowerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineBoneFollowerComponent() {}
// Cross Module References
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineBoneFollowerComponent_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineBoneFollowerComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_SpinePlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void USpineBoneFollowerComponent::StaticRegisterNativesUSpineBoneFollowerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpineBoneFollowerComponent);
	UClass* Z_Construct_UClass_USpineBoneFollowerComponent_NoRegister()
	{
		return USpineBoneFollowerComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpineBoneFollowerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseComponentTransform_MetaData[];
#endif
		static void NewProp_UseComponentTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseComponentTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsePosition_MetaData[];
#endif
		static void NewProp_UsePosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UsePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseRotation_MetaData[];
#endif
		static void NewProp_UseRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseScale_MetaData[];
#endif
		static void NewProp_UseScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineBoneFollowerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpinePlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneFollowerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SpineBoneFollowerComponent.h" },
		{ "ModuleRelativePath", "Public/SpineBoneFollowerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "SpineBoneFollowerComponent" },
		{ "ModuleRelativePath", "Public/SpineBoneFollowerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineBoneFollowerComponent, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "SpineBoneFollowerComponent" },
		{ "ModuleRelativePath", "Public/SpineBoneFollowerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineBoneFollowerComponent, BoneName), METADATA_PARAMS(Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseComponentTransform_MetaData[] = {
		{ "Category", "SpineBoneFollowerComponent" },
		{ "Comment", "//Updates just this component when set to true. Updates owning actor otherwise.\n" },
		{ "ModuleRelativePath", "Public/SpineBoneFollowerComponent.h" },
		{ "ToolTip", "Updates just this component when set to true. Updates owning actor otherwise." },
	};
#endif
	void Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseComponentTransform_SetBit(void* Obj)
	{
		((USpineBoneFollowerComponent*)Obj)->UseComponentTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseComponentTransform = { "UseComponentTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpineBoneFollowerComponent), &Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseComponentTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseComponentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseComponentTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UsePosition_MetaData[] = {
		{ "Category", "SpineBoneFollowerComponent" },
		{ "ModuleRelativePath", "Public/SpineBoneFollowerComponent.h" },
	};
#endif
	void Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UsePosition_SetBit(void* Obj)
	{
		((USpineBoneFollowerComponent*)Obj)->UsePosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UsePosition = { "UsePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpineBoneFollowerComponent), &Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UsePosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UsePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UsePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseRotation_MetaData[] = {
		{ "Category", "SpineBoneFollowerComponent" },
		{ "ModuleRelativePath", "Public/SpineBoneFollowerComponent.h" },
	};
#endif
	void Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseRotation_SetBit(void* Obj)
	{
		((USpineBoneFollowerComponent*)Obj)->UseRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseRotation = { "UseRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpineBoneFollowerComponent), &Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseScale_MetaData[] = {
		{ "Category", "SpineBoneFollowerComponent" },
		{ "ModuleRelativePath", "Public/SpineBoneFollowerComponent.h" },
	};
#endif
	void Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseScale_SetBit(void* Obj)
	{
		((USpineBoneFollowerComponent*)Obj)->UseScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseScale = { "UseScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpineBoneFollowerComponent), &Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineBoneFollowerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseComponentTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UsePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneFollowerComponent_Statics::NewProp_UseScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineBoneFollowerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineBoneFollowerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpineBoneFollowerComponent_Statics::ClassParams = {
		&USpineBoneFollowerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpineBoneFollowerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneFollowerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpineBoneFollowerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneFollowerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpineBoneFollowerComponent()
	{
		if (!Z_Registration_Info_UClass_USpineBoneFollowerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpineBoneFollowerComponent.OuterSingleton, Z_Construct_UClass_USpineBoneFollowerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpineBoneFollowerComponent.OuterSingleton;
	}
	template<> SPINEPLUGIN_API UClass* StaticClass<USpineBoneFollowerComponent>()
	{
		return USpineBoneFollowerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineBoneFollowerComponent);
	struct Z_CompiledInDeferFile_FID_GameDemo_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneFollowerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDemo_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneFollowerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpineBoneFollowerComponent, USpineBoneFollowerComponent::StaticClass, TEXT("USpineBoneFollowerComponent"), &Z_Registration_Info_UClass_USpineBoneFollowerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpineBoneFollowerComponent), 389061132U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDemo_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneFollowerComponent_h_2522601100(TEXT("/Script/SpinePlugin"),
		Z_CompiledInDeferFile_FID_GameDemo_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneFollowerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDemo_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneFollowerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
