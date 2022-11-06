// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpinePlugin/Public/SpineWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineWidget() {}
// Cross Module References
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SpinePlugin();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineWidget_NoRegister();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_UTrackEntry_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineAtlasAsset_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature_Statics
	{
		struct _Script_SpinePlugin_eventSpineWidgetBeforeUpdateWorldTransformDelegate_Parms
		{
			USpineWidget* skeleton;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeleton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature_Statics::NewProp_skeleton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature_Statics::NewProp_skeleton = { "skeleton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SpinePlugin_eventSpineWidgetBeforeUpdateWorldTransformDelegate_Parms, skeleton), Z_Construct_UClass_USpineWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature_Statics::NewProp_skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature_Statics::NewProp_skeleton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature_Statics::NewProp_skeleton,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpinePlugin, nullptr, "SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature_Statics::_Script_SpinePlugin_eventSpineWidgetBeforeUpdateWorldTransformDelegate_Parms), Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature_Statics
	{
		struct _Script_SpinePlugin_eventSpineWidgetAfterUpdateWorldTransformDelegate_Parms
		{
			USpineWidget* skeleton;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeleton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature_Statics::NewProp_skeleton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature_Statics::NewProp_skeleton = { "skeleton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SpinePlugin_eventSpineWidgetAfterUpdateWorldTransformDelegate_Parms, skeleton), Z_Construct_UClass_USpineWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature_Statics::NewProp_skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature_Statics::NewProp_skeleton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature_Statics::NewProp_skeleton,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpinePlugin, nullptr, "SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature_Statics::_Script_SpinePlugin_eventSpineWidgetAfterUpdateWorldTransformDelegate_Parms), Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USpineWidget::execTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_UBOOL(Z_Param_CallDelegates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Tick(Z_Param_DeltaTime,Z_Param_CallDelegates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execClearTrack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_trackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearTrack(Z_Param_trackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execClearTracks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearTracks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execGetCurrent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_trackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTrackEntry**)Z_Param__Result=P_THIS->GetCurrent(Z_Param_trackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execAddEmptyAnimation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_trackIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_mixDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTrackEntry**)Z_Param__Result=P_THIS->AddEmptyAnimation(Z_Param_trackIndex,Z_Param_mixDuration,Z_Param_delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execSetEmptyAnimation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_trackIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_mixDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTrackEntry**)Z_Param__Result=P_THIS->SetEmptyAnimation(Z_Param_trackIndex,Z_Param_mixDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execAddAnimation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_trackIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_animationName);
		P_GET_UBOOL(Z_Param_loop);
		P_GET_PROPERTY(FFloatProperty,Z_Param_delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTrackEntry**)Z_Param__Result=P_THIS->AddAnimation(Z_Param_trackIndex,Z_Param_animationName,Z_Param_loop,Z_Param_delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execSetAnimation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_trackIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_animationName);
		P_GET_UBOOL(Z_Param_loop);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTrackEntry**)Z_Param__Result=P_THIS->SetAnimation(Z_Param_trackIndex,Z_Param_animationName,Z_Param_loop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execGetTimeScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execSetTimeScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timeScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeScale(Z_Param_timeScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execSetPlaybackTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlaybackTime);
		P_GET_UBOOL(Z_Param_bCallDelegates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaybackTime(Z_Param_InPlaybackTime,Z_Param_bCallDelegates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execSetAutoPlay)
	{
		P_GET_UBOOL(Z_Param_bInAutoPlays);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoPlay(Z_Param_bInAutoPlays);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execGetAnimationDuration)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AnimationName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAnimationDuration(Z_Param_AnimationName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execHasAnimation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AnimationName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnimation(Z_Param_AnimationName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execGetAnimations)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Animations);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAnimations(Z_Param_Out_Animations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execHasSlot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasSlot(Z_Param_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execGetSlots)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Slots);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSlots(Z_Param_Out_Slots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execHasBone)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasBone(Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execGetBones)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Bones);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBones(Z_Param_Out_Bones);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execGetScaleY)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScaleY();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execSetScaleY)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_scaleY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScaleY(Z_Param_scaleY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execGetScaleX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScaleX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execSetScaleX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_scaleX);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScaleX(Z_Param_scaleX);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execSetSlotsToSetupPose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSlotsToSetupPose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execSetBonesToSetupPose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBonesToSetupPose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execSetToSetupPose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToSetupPose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execUpdateWorldTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWorldTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execSetAttachment)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_slotName);
		P_GET_PROPERTY(FStrProperty,Z_Param_attachmentName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAttachment(Z_Param_slotName,Z_Param_attachmentName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execHasSkin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SkinName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasSkin(Z_Param_SkinName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execSetSkins)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_SkinNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSkins(Z_Param_Out_SkinNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execSetSkin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SkinName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSkin(Z_Param_SkinName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineWidget::execGetSkins)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Skins);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSkins(Z_Param_Out_Skins);
		P_NATIVE_END;
	}
	void USpineWidget::StaticRegisterNativesUSpineWidget()
	{
		UClass* Class = USpineWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAnimation", &USpineWidget::execAddAnimation },
			{ "AddEmptyAnimation", &USpineWidget::execAddEmptyAnimation },
			{ "ClearTrack", &USpineWidget::execClearTrack },
			{ "ClearTracks", &USpineWidget::execClearTracks },
			{ "GetAnimationDuration", &USpineWidget::execGetAnimationDuration },
			{ "GetAnimations", &USpineWidget::execGetAnimations },
			{ "GetBones", &USpineWidget::execGetBones },
			{ "GetCurrent", &USpineWidget::execGetCurrent },
			{ "GetScaleX", &USpineWidget::execGetScaleX },
			{ "GetScaleY", &USpineWidget::execGetScaleY },
			{ "GetSkins", &USpineWidget::execGetSkins },
			{ "GetSlots", &USpineWidget::execGetSlots },
			{ "GetTimeScale", &USpineWidget::execGetTimeScale },
			{ "HasAnimation", &USpineWidget::execHasAnimation },
			{ "HasBone", &USpineWidget::execHasBone },
			{ "HasSkin", &USpineWidget::execHasSkin },
			{ "HasSlot", &USpineWidget::execHasSlot },
			{ "SetAnimation", &USpineWidget::execSetAnimation },
			{ "SetAttachment", &USpineWidget::execSetAttachment },
			{ "SetAutoPlay", &USpineWidget::execSetAutoPlay },
			{ "SetBonesToSetupPose", &USpineWidget::execSetBonesToSetupPose },
			{ "SetEmptyAnimation", &USpineWidget::execSetEmptyAnimation },
			{ "SetPlaybackTime", &USpineWidget::execSetPlaybackTime },
			{ "SetScaleX", &USpineWidget::execSetScaleX },
			{ "SetScaleY", &USpineWidget::execSetScaleY },
			{ "SetSkin", &USpineWidget::execSetSkin },
			{ "SetSkins", &USpineWidget::execSetSkins },
			{ "SetSlotsToSetupPose", &USpineWidget::execSetSlotsToSetupPose },
			{ "SetTimeScale", &USpineWidget::execSetTimeScale },
			{ "SetToSetupPose", &USpineWidget::execSetToSetupPose },
			{ "Tick", &USpineWidget::execTick },
			{ "UpdateWorldTransform", &USpineWidget::execUpdateWorldTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpineWidget_AddAnimation_Statics
	{
		struct SpineWidget_eventAddAnimation_Parms
		{
			int32 trackIndex;
			FString animationName;
			bool loop;
			float delay;
			UTrackEntry* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_trackIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_animationName;
		static void NewProp_loop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_loop;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_delay;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::NewProp_trackIndex = { "trackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventAddAnimation_Parms, trackIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::NewProp_animationName = { "animationName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventAddAnimation_Parms, animationName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::NewProp_loop_SetBit(void* Obj)
	{
		((SpineWidget_eventAddAnimation_Parms*)Obj)->loop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::NewProp_loop = { "loop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpineWidget_eventAddAnimation_Parms), &Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::NewProp_loop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventAddAnimation_Parms, delay), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventAddAnimation_Parms, ReturnValue), Z_Construct_UClass_UTrackEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::NewProp_trackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::NewProp_animationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::NewProp_loop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::NewProp_delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "AddAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::SpineWidget_eventAddAnimation_Parms), Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_AddAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_AddAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_AddEmptyAnimation_Statics
	{
		struct SpineWidget_eventAddEmptyAnimation_Parms
		{
			int32 trackIndex;
			float mixDuration;
			float delay;
			UTrackEntry* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_trackIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mixDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_delay;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USpineWidget_AddEmptyAnimation_Statics::NewProp_trackIndex = { "trackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventAddEmptyAnimation_Parms, trackIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineWidget_AddEmptyAnimation_Statics::NewProp_mixDuration = { "mixDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventAddEmptyAnimation_Parms, mixDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineWidget_AddEmptyAnimation_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventAddEmptyAnimation_Parms, delay), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineWidget_AddEmptyAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventAddEmptyAnimation_Parms, ReturnValue), Z_Construct_UClass_UTrackEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_AddEmptyAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_AddEmptyAnimation_Statics::NewProp_trackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_AddEmptyAnimation_Statics::NewProp_mixDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_AddEmptyAnimation_Statics::NewProp_delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_AddEmptyAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_AddEmptyAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_AddEmptyAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "AddEmptyAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_AddEmptyAnimation_Statics::SpineWidget_eventAddEmptyAnimation_Parms), Z_Construct_UFunction_USpineWidget_AddEmptyAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_AddEmptyAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_AddEmptyAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_AddEmptyAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_AddEmptyAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_AddEmptyAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_ClearTrack_Statics
	{
		struct SpineWidget_eventClearTrack_Parms
		{
			int32 trackIndex;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_trackIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USpineWidget_ClearTrack_Statics::NewProp_trackIndex = { "trackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventClearTrack_Parms, trackIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_ClearTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_ClearTrack_Statics::NewProp_trackIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_ClearTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_ClearTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "ClearTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_ClearTrack_Statics::SpineWidget_eventClearTrack_Parms), Z_Construct_UFunction_USpineWidget_ClearTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_ClearTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_ClearTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_ClearTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_ClearTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_ClearTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_ClearTracks_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_ClearTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_ClearTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "ClearTracks", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_ClearTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_ClearTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_ClearTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_ClearTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_GetAnimationDuration_Statics
	{
		struct SpineWidget_eventGetAnimationDuration_Parms
		{
			FString AnimationName;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimationName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpineWidget_GetAnimationDuration_Statics::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventGetAnimationDuration_Parms, AnimationName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineWidget_GetAnimationDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventGetAnimationDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_GetAnimationDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_GetAnimationDuration_Statics::NewProp_AnimationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_GetAnimationDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_GetAnimationDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_GetAnimationDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "GetAnimationDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_GetAnimationDuration_Statics::SpineWidget_eventGetAnimationDuration_Parms), Z_Construct_UFunction_USpineWidget_GetAnimationDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_GetAnimationDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_GetAnimationDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_GetAnimationDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_GetAnimationDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_GetAnimationDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_GetAnimations_Statics
	{
		struct SpineWidget_eventGetAnimations_Parms
		{
			TArray<FString> Animations;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Animations_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Animations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpineWidget_GetAnimations_Statics::NewProp_Animations_Inner = { "Animations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpineWidget_GetAnimations_Statics::NewProp_Animations = { "Animations", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventGetAnimations_Parms, Animations), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_GetAnimations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_GetAnimations_Statics::NewProp_Animations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_GetAnimations_Statics::NewProp_Animations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_GetAnimations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_GetAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "GetAnimations", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_GetAnimations_Statics::SpineWidget_eventGetAnimations_Parms), Z_Construct_UFunction_USpineWidget_GetAnimations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_GetAnimations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_GetAnimations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_GetAnimations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_GetAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_GetAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_GetBones_Statics
	{
		struct SpineWidget_eventGetBones_Parms
		{
			TArray<FString> Bones;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Bones_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bones;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpineWidget_GetBones_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpineWidget_GetBones_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventGetBones_Parms, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_GetBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_GetBones_Statics::NewProp_Bones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_GetBones_Statics::NewProp_Bones,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_GetBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_GetBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "GetBones", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_GetBones_Statics::SpineWidget_eventGetBones_Parms), Z_Construct_UFunction_USpineWidget_GetBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_GetBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_GetBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_GetBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_GetBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_GetBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_GetCurrent_Statics
	{
		struct SpineWidget_eventGetCurrent_Parms
		{
			int32 trackIndex;
			UTrackEntry* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_trackIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USpineWidget_GetCurrent_Statics::NewProp_trackIndex = { "trackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventGetCurrent_Parms, trackIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineWidget_GetCurrent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventGetCurrent_Parms, ReturnValue), Z_Construct_UClass_UTrackEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_GetCurrent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_GetCurrent_Statics::NewProp_trackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_GetCurrent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_GetCurrent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_GetCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "GetCurrent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_GetCurrent_Statics::SpineWidget_eventGetCurrent_Parms), Z_Construct_UFunction_USpineWidget_GetCurrent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_GetCurrent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_GetCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_GetCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_GetCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_GetCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_GetScaleX_Statics
	{
		struct SpineWidget_eventGetScaleX_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineWidget_GetScaleX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventGetScaleX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_GetScaleX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_GetScaleX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_GetScaleX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_GetScaleX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "GetScaleX", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_GetScaleX_Statics::SpineWidget_eventGetScaleX_Parms), Z_Construct_UFunction_USpineWidget_GetScaleX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_GetScaleX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_GetScaleX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_GetScaleX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_GetScaleX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_GetScaleX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_GetScaleY_Statics
	{
		struct SpineWidget_eventGetScaleY_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineWidget_GetScaleY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventGetScaleY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_GetScaleY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_GetScaleY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_GetScaleY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_GetScaleY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "GetScaleY", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_GetScaleY_Statics::SpineWidget_eventGetScaleY_Parms), Z_Construct_UFunction_USpineWidget_GetScaleY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_GetScaleY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_GetScaleY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_GetScaleY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_GetScaleY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_GetScaleY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_GetSkins_Statics
	{
		struct SpineWidget_eventGetSkins_Parms
		{
			TArray<FString> Skins;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Skins_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Skins;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpineWidget_GetSkins_Statics::NewProp_Skins_Inner = { "Skins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpineWidget_GetSkins_Statics::NewProp_Skins = { "Skins", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventGetSkins_Parms, Skins), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_GetSkins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_GetSkins_Statics::NewProp_Skins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_GetSkins_Statics::NewProp_Skins,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_GetSkins_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_GetSkins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "GetSkins", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_GetSkins_Statics::SpineWidget_eventGetSkins_Parms), Z_Construct_UFunction_USpineWidget_GetSkins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_GetSkins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_GetSkins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_GetSkins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_GetSkins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_GetSkins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_GetSlots_Statics
	{
		struct SpineWidget_eventGetSlots_Parms
		{
			TArray<FString> Slots;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Slots_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Slots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpineWidget_GetSlots_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpineWidget_GetSlots_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventGetSlots_Parms, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_GetSlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_GetSlots_Statics::NewProp_Slots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_GetSlots_Statics::NewProp_Slots,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_GetSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_GetSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "GetSlots", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_GetSlots_Statics::SpineWidget_eventGetSlots_Parms), Z_Construct_UFunction_USpineWidget_GetSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_GetSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_GetSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_GetSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_GetSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_GetSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_GetTimeScale_Statics
	{
		struct SpineWidget_eventGetTimeScale_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineWidget_GetTimeScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventGetTimeScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_GetTimeScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_GetTimeScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_GetTimeScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_GetTimeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "GetTimeScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_GetTimeScale_Statics::SpineWidget_eventGetTimeScale_Parms), Z_Construct_UFunction_USpineWidget_GetTimeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_GetTimeScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_GetTimeScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_GetTimeScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_GetTimeScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_GetTimeScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_HasAnimation_Statics
	{
		struct SpineWidget_eventHasAnimation_Parms
		{
			FString AnimationName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimationName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpineWidget_HasAnimation_Statics::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventHasAnimation_Parms, AnimationName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpineWidget_HasAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpineWidget_eventHasAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineWidget_HasAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpineWidget_eventHasAnimation_Parms), &Z_Construct_UFunction_USpineWidget_HasAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_HasAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_HasAnimation_Statics::NewProp_AnimationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_HasAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_HasAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_HasAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "HasAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_HasAnimation_Statics::SpineWidget_eventHasAnimation_Parms), Z_Construct_UFunction_USpineWidget_HasAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_HasAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_HasAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_HasAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_HasAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_HasAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_HasBone_Statics
	{
		struct SpineWidget_eventHasBone_Parms
		{
			FString BoneName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoneName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_HasBone_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpineWidget_HasBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventHasBone_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_HasBone_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_HasBone_Statics::NewProp_BoneName_MetaData)) };
	void Z_Construct_UFunction_USpineWidget_HasBone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpineWidget_eventHasBone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineWidget_HasBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpineWidget_eventHasBone_Parms), &Z_Construct_UFunction_USpineWidget_HasBone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_HasBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_HasBone_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_HasBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_HasBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_HasBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "HasBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_HasBone_Statics::SpineWidget_eventHasBone_Parms), Z_Construct_UFunction_USpineWidget_HasBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_HasBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_HasBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_HasBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_HasBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_HasBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_HasSkin_Statics
	{
		struct SpineWidget_eventHasSkin_Parms
		{
			FString SkinName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SkinName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_HasSkin_Statics::NewProp_SkinName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpineWidget_HasSkin_Statics::NewProp_SkinName = { "SkinName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventHasSkin_Parms, SkinName), METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_HasSkin_Statics::NewProp_SkinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_HasSkin_Statics::NewProp_SkinName_MetaData)) };
	void Z_Construct_UFunction_USpineWidget_HasSkin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpineWidget_eventHasSkin_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineWidget_HasSkin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpineWidget_eventHasSkin_Parms), &Z_Construct_UFunction_USpineWidget_HasSkin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_HasSkin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_HasSkin_Statics::NewProp_SkinName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_HasSkin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_HasSkin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_HasSkin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "HasSkin", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_HasSkin_Statics::SpineWidget_eventHasSkin_Parms), Z_Construct_UFunction_USpineWidget_HasSkin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_HasSkin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_HasSkin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_HasSkin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_HasSkin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_HasSkin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_HasSlot_Statics
	{
		struct SpineWidget_eventHasSlot_Parms
		{
			FString SlotName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_HasSlot_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpineWidget_HasSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventHasSlot_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_HasSlot_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_HasSlot_Statics::NewProp_SlotName_MetaData)) };
	void Z_Construct_UFunction_USpineWidget_HasSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpineWidget_eventHasSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineWidget_HasSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpineWidget_eventHasSlot_Parms), &Z_Construct_UFunction_USpineWidget_HasSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_HasSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_HasSlot_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_HasSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_HasSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_HasSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "HasSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_HasSlot_Statics::SpineWidget_eventHasSlot_Parms), Z_Construct_UFunction_USpineWidget_HasSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_HasSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_HasSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_HasSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_HasSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_HasSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_SetAnimation_Statics
	{
		struct SpineWidget_eventSetAnimation_Parms
		{
			int32 trackIndex;
			FString animationName;
			bool loop;
			UTrackEntry* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_trackIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_animationName;
		static void NewProp_loop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_loop;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USpineWidget_SetAnimation_Statics::NewProp_trackIndex = { "trackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventSetAnimation_Parms, trackIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpineWidget_SetAnimation_Statics::NewProp_animationName = { "animationName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventSetAnimation_Parms, animationName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpineWidget_SetAnimation_Statics::NewProp_loop_SetBit(void* Obj)
	{
		((SpineWidget_eventSetAnimation_Parms*)Obj)->loop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineWidget_SetAnimation_Statics::NewProp_loop = { "loop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpineWidget_eventSetAnimation_Parms), &Z_Construct_UFunction_USpineWidget_SetAnimation_Statics::NewProp_loop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineWidget_SetAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventSetAnimation_Parms, ReturnValue), Z_Construct_UClass_UTrackEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_SetAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetAnimation_Statics::NewProp_trackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetAnimation_Statics::NewProp_animationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetAnimation_Statics::NewProp_loop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_SetAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_SetAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "SetAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_SetAnimation_Statics::SpineWidget_eventSetAnimation_Parms), Z_Construct_UFunction_USpineWidget_SetAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_SetAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_SetAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_SetAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_SetAttachment_Statics
	{
		struct SpineWidget_eventSetAttachment_Parms
		{
			FString slotName;
			FString attachmentName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_slotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attachmentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_attachmentName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::NewProp_slotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::NewProp_slotName = { "slotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventSetAttachment_Parms, slotName), METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::NewProp_slotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::NewProp_slotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::NewProp_attachmentName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::NewProp_attachmentName = { "attachmentName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventSetAttachment_Parms, attachmentName), METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::NewProp_attachmentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::NewProp_attachmentName_MetaData)) };
	void Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpineWidget_eventSetAttachment_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpineWidget_eventSetAttachment_Parms), &Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::NewProp_slotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::NewProp_attachmentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "SetAttachment", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::SpineWidget_eventSetAttachment_Parms), Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_SetAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_SetAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_SetAutoPlay_Statics
	{
		struct SpineWidget_eventSetAutoPlay_Parms
		{
			bool bInAutoPlays;
		};
		static void NewProp_bInAutoPlays_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAutoPlays;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpineWidget_SetAutoPlay_Statics::NewProp_bInAutoPlays_SetBit(void* Obj)
	{
		((SpineWidget_eventSetAutoPlay_Parms*)Obj)->bInAutoPlays = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineWidget_SetAutoPlay_Statics::NewProp_bInAutoPlays = { "bInAutoPlays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpineWidget_eventSetAutoPlay_Parms), &Z_Construct_UFunction_USpineWidget_SetAutoPlay_Statics::NewProp_bInAutoPlays_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_SetAutoPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetAutoPlay_Statics::NewProp_bInAutoPlays,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_SetAutoPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "Comment", "/* Manages if this skeleton should update automatically or is paused. */" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
		{ "ToolTip", "Manages if this skeleton should update automatically or is paused." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_SetAutoPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "SetAutoPlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_SetAutoPlay_Statics::SpineWidget_eventSetAutoPlay_Parms), Z_Construct_UFunction_USpineWidget_SetAutoPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetAutoPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_SetAutoPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetAutoPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_SetAutoPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_SetAutoPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_SetBonesToSetupPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_SetBonesToSetupPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_SetBonesToSetupPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "SetBonesToSetupPose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_SetBonesToSetupPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetBonesToSetupPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_SetBonesToSetupPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_SetBonesToSetupPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_SetEmptyAnimation_Statics
	{
		struct SpineWidget_eventSetEmptyAnimation_Parms
		{
			int32 trackIndex;
			float mixDuration;
			UTrackEntry* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_trackIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mixDuration;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USpineWidget_SetEmptyAnimation_Statics::NewProp_trackIndex = { "trackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventSetEmptyAnimation_Parms, trackIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineWidget_SetEmptyAnimation_Statics::NewProp_mixDuration = { "mixDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventSetEmptyAnimation_Parms, mixDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineWidget_SetEmptyAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventSetEmptyAnimation_Parms, ReturnValue), Z_Construct_UClass_UTrackEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_SetEmptyAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetEmptyAnimation_Statics::NewProp_trackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetEmptyAnimation_Statics::NewProp_mixDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetEmptyAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_SetEmptyAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_SetEmptyAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "SetEmptyAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_SetEmptyAnimation_Statics::SpineWidget_eventSetEmptyAnimation_Parms), Z_Construct_UFunction_USpineWidget_SetEmptyAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetEmptyAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_SetEmptyAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetEmptyAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_SetEmptyAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_SetEmptyAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_SetPlaybackTime_Statics
	{
		struct SpineWidget_eventSetPlaybackTime_Parms
		{
			float InPlaybackTime;
			bool bCallDelegates;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlaybackTime;
		static void NewProp_bCallDelegates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallDelegates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineWidget_SetPlaybackTime_Statics::NewProp_InPlaybackTime = { "InPlaybackTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventSetPlaybackTime_Parms, InPlaybackTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpineWidget_SetPlaybackTime_Statics::NewProp_bCallDelegates_SetBit(void* Obj)
	{
		((SpineWidget_eventSetPlaybackTime_Parms*)Obj)->bCallDelegates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineWidget_SetPlaybackTime_Statics::NewProp_bCallDelegates = { "bCallDelegates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpineWidget_eventSetPlaybackTime_Parms), &Z_Construct_UFunction_USpineWidget_SetPlaybackTime_Statics::NewProp_bCallDelegates_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_SetPlaybackTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetPlaybackTime_Statics::NewProp_InPlaybackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetPlaybackTime_Statics::NewProp_bCallDelegates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_SetPlaybackTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "Comment", "/* Directly set the time of the current animation, will clamp to animation range. */" },
		{ "CPP_Default_bCallDelegates", "true" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
		{ "ToolTip", "Directly set the time of the current animation, will clamp to animation range." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_SetPlaybackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "SetPlaybackTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_SetPlaybackTime_Statics::SpineWidget_eventSetPlaybackTime_Parms), Z_Construct_UFunction_USpineWidget_SetPlaybackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetPlaybackTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_SetPlaybackTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetPlaybackTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_SetPlaybackTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_SetPlaybackTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_SetScaleX_Statics
	{
		struct SpineWidget_eventSetScaleX_Parms
		{
			float scaleX;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scaleX;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineWidget_SetScaleX_Statics::NewProp_scaleX = { "scaleX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventSetScaleX_Parms, scaleX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_SetScaleX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetScaleX_Statics::NewProp_scaleX,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_SetScaleX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_SetScaleX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "SetScaleX", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_SetScaleX_Statics::SpineWidget_eventSetScaleX_Parms), Z_Construct_UFunction_USpineWidget_SetScaleX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetScaleX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_SetScaleX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetScaleX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_SetScaleX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_SetScaleX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_SetScaleY_Statics
	{
		struct SpineWidget_eventSetScaleY_Parms
		{
			float scaleY;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scaleY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineWidget_SetScaleY_Statics::NewProp_scaleY = { "scaleY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventSetScaleY_Parms, scaleY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_SetScaleY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetScaleY_Statics::NewProp_scaleY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_SetScaleY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_SetScaleY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "SetScaleY", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_SetScaleY_Statics::SpineWidget_eventSetScaleY_Parms), Z_Construct_UFunction_USpineWidget_SetScaleY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetScaleY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_SetScaleY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetScaleY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_SetScaleY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_SetScaleY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_SetSkin_Statics
	{
		struct SpineWidget_eventSetSkin_Parms
		{
			FString SkinName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SkinName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_SetSkin_Statics::NewProp_SkinName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpineWidget_SetSkin_Statics::NewProp_SkinName = { "SkinName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventSetSkin_Parms, SkinName), METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_SetSkin_Statics::NewProp_SkinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetSkin_Statics::NewProp_SkinName_MetaData)) };
	void Z_Construct_UFunction_USpineWidget_SetSkin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpineWidget_eventSetSkin_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineWidget_SetSkin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpineWidget_eventSetSkin_Parms), &Z_Construct_UFunction_USpineWidget_SetSkin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_SetSkin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetSkin_Statics::NewProp_SkinName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetSkin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_SetSkin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_SetSkin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "SetSkin", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_SetSkin_Statics::SpineWidget_eventSetSkin_Parms), Z_Construct_UFunction_USpineWidget_SetSkin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetSkin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_SetSkin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetSkin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_SetSkin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_SetSkin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_SetSkins_Statics
	{
		struct SpineWidget_eventSetSkins_Parms
		{
			TArray<FString> SkinNames;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SkinNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkinNames;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpineWidget_SetSkins_Statics::NewProp_SkinNames_Inner = { "SkinNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpineWidget_SetSkins_Statics::NewProp_SkinNames = { "SkinNames", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventSetSkins_Parms, SkinNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpineWidget_SetSkins_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpineWidget_eventSetSkins_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineWidget_SetSkins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpineWidget_eventSetSkins_Parms), &Z_Construct_UFunction_USpineWidget_SetSkins_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_SetSkins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetSkins_Statics::NewProp_SkinNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetSkins_Statics::NewProp_SkinNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetSkins_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_SetSkins_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_SetSkins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "SetSkins", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_SetSkins_Statics::SpineWidget_eventSetSkins_Parms), Z_Construct_UFunction_USpineWidget_SetSkins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetSkins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_SetSkins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetSkins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_SetSkins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_SetSkins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_SetSlotsToSetupPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_SetSlotsToSetupPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_SetSlotsToSetupPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "SetSlotsToSetupPose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_SetSlotsToSetupPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetSlotsToSetupPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_SetSlotsToSetupPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_SetSlotsToSetupPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_SetTimeScale_Statics
	{
		struct SpineWidget_eventSetTimeScale_Parms
		{
			float timeScale;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_timeScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineWidget_SetTimeScale_Statics::NewProp_timeScale = { "timeScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventSetTimeScale_Parms, timeScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_SetTimeScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_SetTimeScale_Statics::NewProp_timeScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_SetTimeScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "Comment", "// Blueprint functions\n" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
		{ "ToolTip", "Blueprint functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_SetTimeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "SetTimeScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_SetTimeScale_Statics::SpineWidget_eventSetTimeScale_Parms), Z_Construct_UFunction_USpineWidget_SetTimeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetTimeScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_SetTimeScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetTimeScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_SetTimeScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_SetTimeScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_SetToSetupPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_SetToSetupPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_SetToSetupPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "SetToSetupPose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_SetToSetupPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_SetToSetupPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_SetToSetupPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_SetToSetupPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_Tick_Statics
	{
		struct SpineWidget_eventTick_Parms
		{
			float DeltaTime;
			bool CallDelegates;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static void NewProp_CallDelegates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CallDelegates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineWidget_Tick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineWidget_eventTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpineWidget_Tick_Statics::NewProp_CallDelegates_SetBit(void* Obj)
	{
		((SpineWidget_eventTick_Parms*)Obj)->CallDelegates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineWidget_Tick_Statics::NewProp_CallDelegates = { "CallDelegates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpineWidget_eventTick_Parms), &Z_Construct_UFunction_USpineWidget_Tick_Statics::NewProp_CallDelegates_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineWidget_Tick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_Tick_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineWidget_Tick_Statics::NewProp_CallDelegates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_Tick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "CPP_Default_CallDelegates", "true" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "Tick", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpineWidget_Tick_Statics::SpineWidget_eventTick_Parms), Z_Construct_UFunction_USpineWidget_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineWidget_UpdateWorldTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineWidget_UpdateWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineWidget_UpdateWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineWidget, nullptr, "UpdateWorldTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineWidget_UpdateWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineWidget_UpdateWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineWidget_UpdateWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineWidget_UpdateWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpineWidget);
	UClass* Z_Construct_UClass_USpineWidget_NoRegister()
	{
		return USpineWidget::StaticClass();
	}
	struct Z_Construct_UClass_USpineWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialSkin_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InitialSkin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Atlas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Atlas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletonData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalBlendMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NormalBlendMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditiveBlendMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditiveBlendMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiplyBlendMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MultiplyBlendMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenBlendMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScreenBlendMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TextureParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeforeUpdateWorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BeforeUpdateWorldTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AfterUpdateWorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AfterUpdateWorldTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AnimationStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationInterrupt_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AnimationInterrupt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AnimationEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AnimationComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AnimationEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationDispose_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AnimationDispose;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_atlasNormalBlendMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_atlasNormalBlendMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_atlasNormalBlendMaterials;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_atlasAdditiveBlendMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_atlasAdditiveBlendMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_atlasAdditiveBlendMaterials;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_atlasMultiplyBlendMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_atlasMultiplyBlendMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_atlasMultiplyBlendMaterials;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_atlasScreenBlendMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_atlasScreenBlendMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_atlasScreenBlendMaterials;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_trackEntries_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trackEntries_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_trackEntries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlaying_MetaData[];
#endif
		static void NewProp_bAutoPlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlaying;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SpinePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpineWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpineWidget_AddAnimation, "AddAnimation" }, // 3743138405
		{ &Z_Construct_UFunction_USpineWidget_AddEmptyAnimation, "AddEmptyAnimation" }, // 2402313459
		{ &Z_Construct_UFunction_USpineWidget_ClearTrack, "ClearTrack" }, // 3999039088
		{ &Z_Construct_UFunction_USpineWidget_ClearTracks, "ClearTracks" }, // 2525056628
		{ &Z_Construct_UFunction_USpineWidget_GetAnimationDuration, "GetAnimationDuration" }, // 997626349
		{ &Z_Construct_UFunction_USpineWidget_GetAnimations, "GetAnimations" }, // 1223358787
		{ &Z_Construct_UFunction_USpineWidget_GetBones, "GetBones" }, // 1929592277
		{ &Z_Construct_UFunction_USpineWidget_GetCurrent, "GetCurrent" }, // 3770593550
		{ &Z_Construct_UFunction_USpineWidget_GetScaleX, "GetScaleX" }, // 4032765918
		{ &Z_Construct_UFunction_USpineWidget_GetScaleY, "GetScaleY" }, // 2916239422
		{ &Z_Construct_UFunction_USpineWidget_GetSkins, "GetSkins" }, // 1667229939
		{ &Z_Construct_UFunction_USpineWidget_GetSlots, "GetSlots" }, // 3508991729
		{ &Z_Construct_UFunction_USpineWidget_GetTimeScale, "GetTimeScale" }, // 2494703670
		{ &Z_Construct_UFunction_USpineWidget_HasAnimation, "HasAnimation" }, // 2177789072
		{ &Z_Construct_UFunction_USpineWidget_HasBone, "HasBone" }, // 3996683457
		{ &Z_Construct_UFunction_USpineWidget_HasSkin, "HasSkin" }, // 3124124451
		{ &Z_Construct_UFunction_USpineWidget_HasSlot, "HasSlot" }, // 1642081374
		{ &Z_Construct_UFunction_USpineWidget_SetAnimation, "SetAnimation" }, // 861089889
		{ &Z_Construct_UFunction_USpineWidget_SetAttachment, "SetAttachment" }, // 2762943290
		{ &Z_Construct_UFunction_USpineWidget_SetAutoPlay, "SetAutoPlay" }, // 853001285
		{ &Z_Construct_UFunction_USpineWidget_SetBonesToSetupPose, "SetBonesToSetupPose" }, // 4071216562
		{ &Z_Construct_UFunction_USpineWidget_SetEmptyAnimation, "SetEmptyAnimation" }, // 3078717930
		{ &Z_Construct_UFunction_USpineWidget_SetPlaybackTime, "SetPlaybackTime" }, // 3072321669
		{ &Z_Construct_UFunction_USpineWidget_SetScaleX, "SetScaleX" }, // 1130332804
		{ &Z_Construct_UFunction_USpineWidget_SetScaleY, "SetScaleY" }, // 2241775303
		{ &Z_Construct_UFunction_USpineWidget_SetSkin, "SetSkin" }, // 3527504146
		{ &Z_Construct_UFunction_USpineWidget_SetSkins, "SetSkins" }, // 3152201218
		{ &Z_Construct_UFunction_USpineWidget_SetSlotsToSetupPose, "SetSlotsToSetupPose" }, // 3842678913
		{ &Z_Construct_UFunction_USpineWidget_SetTimeScale, "SetTimeScale" }, // 53754563
		{ &Z_Construct_UFunction_USpineWidget_SetToSetupPose, "SetToSetupPose" }, // 3587711992
		{ &Z_Construct_UFunction_USpineWidget_Tick, "Tick" }, // 4002570032
		{ &Z_Construct_UFunction_USpineWidget_UpdateWorldTransform, "UpdateWorldTransform" }, // 535395261
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Spine" },
		{ "IncludePath", "SpineWidget.h" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_InitialSkin_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_InitialSkin = { "InitialSkin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, InitialSkin), METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_InitialSkin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_InitialSkin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_Atlas_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_Atlas = { "Atlas", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, Atlas), Z_Construct_UClass_USpineAtlasAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_Atlas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_Atlas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_SkeletonData_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_SkeletonData = { "SkeletonData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, SkeletonData), Z_Construct_UClass_USpineSkeletonDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_SkeletonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_SkeletonData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_NormalBlendMaterial_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_NormalBlendMaterial = { "NormalBlendMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, NormalBlendMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_NormalBlendMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_NormalBlendMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_AdditiveBlendMaterial_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_AdditiveBlendMaterial = { "AdditiveBlendMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, AdditiveBlendMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_AdditiveBlendMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_AdditiveBlendMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_MultiplyBlendMaterial_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_MultiplyBlendMaterial = { "MultiplyBlendMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, MultiplyBlendMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_MultiplyBlendMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_MultiplyBlendMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_ScreenBlendMaterial_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_ScreenBlendMaterial = { "ScreenBlendMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, ScreenBlendMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_ScreenBlendMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_ScreenBlendMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_TextureParameterName_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_TextureParameterName = { "TextureParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, TextureParameterName), METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_TextureParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_TextureParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_DepthOffset_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_DepthOffset = { "DepthOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, DepthOffset), METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_DepthOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_DepthOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_Brush_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_Brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_Brush_MetaData)) }; // 852902259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_BeforeUpdateWorldTransform_MetaData[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_BeforeUpdateWorldTransform = { "BeforeUpdateWorldTransform", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, BeforeUpdateWorldTransform), Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_BeforeUpdateWorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_BeforeUpdateWorldTransform_MetaData)) }; // 794969428
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_AfterUpdateWorldTransform_MetaData[] = {
		{ "Category", "Components|Spine|Skeleton" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_AfterUpdateWorldTransform = { "AfterUpdateWorldTransform", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, AfterUpdateWorldTransform), Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_AfterUpdateWorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_AfterUpdateWorldTransform_MetaData)) }; // 2405599531
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationStart_MetaData[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationStart = { "AnimationStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, AnimationStart), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationStart_MetaData)) }; // 72040978
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationInterrupt_MetaData[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationInterrupt = { "AnimationInterrupt", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, AnimationInterrupt), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationInterrupt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationInterrupt_MetaData)) }; // 2262080153
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationEvent_MetaData[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationEvent = { "AnimationEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, AnimationEvent), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationEvent_MetaData)) }; // 3843427762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationComplete_MetaData[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationComplete = { "AnimationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, AnimationComplete), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationComplete_MetaData)) }; // 1513386605
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationEnd_MetaData[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationEnd = { "AnimationEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, AnimationEnd), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationEnd_MetaData)) }; // 823530068
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationDispose_MetaData[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationDispose = { "AnimationDispose", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, AnimationDispose), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationDispose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationDispose_MetaData)) }; // 2410153855
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasNormalBlendMaterials_Inner = { "atlasNormalBlendMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasNormalBlendMaterials_MetaData[] = {
		{ "Comment", "// Need to hold on to the dynamic instances, or the GC will kill us while updating them\n" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
		{ "ToolTip", "Need to hold on to the dynamic instances, or the GC will kill us while updating them" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasNormalBlendMaterials = { "atlasNormalBlendMaterials", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, atlasNormalBlendMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasNormalBlendMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasNormalBlendMaterials_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasAdditiveBlendMaterials_Inner = { "atlasAdditiveBlendMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasAdditiveBlendMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasAdditiveBlendMaterials = { "atlasAdditiveBlendMaterials", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, atlasAdditiveBlendMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasAdditiveBlendMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasAdditiveBlendMaterials_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasMultiplyBlendMaterials_Inner = { "atlasMultiplyBlendMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasMultiplyBlendMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasMultiplyBlendMaterials = { "atlasMultiplyBlendMaterials", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, atlasMultiplyBlendMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasMultiplyBlendMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasMultiplyBlendMaterials_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasScreenBlendMaterials_Inner = { "atlasScreenBlendMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasScreenBlendMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasScreenBlendMaterials = { "atlasScreenBlendMaterials", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, atlasScreenBlendMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasScreenBlendMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasScreenBlendMaterials_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_trackEntries_ElementProp = { "trackEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTrackEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_trackEntries_MetaData[] = {
		{ "Comment", "// keep track of track entries so they won't get GCed while\n// in transit within a blueprint\n" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
		{ "ToolTip", "keep track of track entries so they won't get GCed while\nin transit within a blueprint" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_trackEntries = { "trackEntries", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineWidget, trackEntries), METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_trackEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_trackEntries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineWidget_Statics::NewProp_bAutoPlaying_MetaData[] = {
		{ "Comment", "/* If the animation should update automatically. */" },
		{ "ModuleRelativePath", "Public/SpineWidget.h" },
		{ "ToolTip", "If the animation should update automatically." },
	};
#endif
	void Z_Construct_UClass_USpineWidget_Statics::NewProp_bAutoPlaying_SetBit(void* Obj)
	{
		((USpineWidget*)Obj)->bAutoPlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpineWidget_Statics::NewProp_bAutoPlaying = { "bAutoPlaying", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpineWidget), &Z_Construct_UClass_USpineWidget_Statics::NewProp_bAutoPlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::NewProp_bAutoPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::NewProp_bAutoPlaying_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_InitialSkin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_Atlas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_SkeletonData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_NormalBlendMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_AdditiveBlendMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_MultiplyBlendMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_ScreenBlendMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_TextureParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_DepthOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_Brush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_BeforeUpdateWorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_AfterUpdateWorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationInterrupt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_AnimationDispose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasNormalBlendMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasNormalBlendMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasAdditiveBlendMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasAdditiveBlendMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasMultiplyBlendMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasMultiplyBlendMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasScreenBlendMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_atlasScreenBlendMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_trackEntries_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_trackEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineWidget_Statics::NewProp_bAutoPlaying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpineWidget_Statics::ClassParams = {
		&USpineWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpineWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpineWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpineWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpineWidget()
	{
		if (!Z_Registration_Info_UClass_USpineWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpineWidget.OuterSingleton, Z_Construct_UClass_USpineWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpineWidget.OuterSingleton;
	}
	template<> SPINEPLUGIN_API UClass* StaticClass<USpineWidget>()
	{
		return USpineWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineWidget);
	struct Z_CompiledInDeferFile_FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpineWidget, USpineWidget::StaticClass, TEXT("USpineWidget"), &Z_Registration_Info_UClass_USpineWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpineWidget), 219265524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_1817356707(TEXT("/Script/SpinePlugin"),
		Z_CompiledInDeferFile_FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
