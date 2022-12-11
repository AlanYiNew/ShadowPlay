// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTrackEntry;
struct FSpineEvent;
#ifdef SPINEPLUGIN_SpineSkeletonAnimationComponent_generated_h
#error "SpineSkeletonAnimationComponent.generated.h already included, missing '#pragma once' in SpineSkeletonAnimationComponent.h"
#endif
#define SPINEPLUGIN_SpineSkeletonAnimationComponent_generated_h

<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_41_GENERATED_BODY \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_41_GENERATED_BODY \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
	friend struct Z_Construct_UScriptStruct_FSpineEvent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SPINEPLUGIN_API UScriptStruct* StaticStruct<struct FSpineEvent>();

<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_70_DELEGATE \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_70_DELEGATE \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
struct _Script_SpinePlugin_eventSpineAnimationStartDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationStartDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationStartDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationStartDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationStartDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_71_DELEGATE \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_71_DELEGATE \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
struct _Script_SpinePlugin_eventSpineAnimationEventDelegate_Parms \
{ \
	UTrackEntry* entry; \
	FSpineEvent evt; \
}; \
static inline void FSpineAnimationEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationEventDelegate, UTrackEntry* entry, FSpineEvent evt) \
{ \
	_Script_SpinePlugin_eventSpineAnimationEventDelegate_Parms Parms; \
	Parms.entry=entry; \
	Parms.evt=evt; \
	SpineAnimationEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_72_DELEGATE \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_72_DELEGATE \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
struct _Script_SpinePlugin_eventSpineAnimationInterruptDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationInterruptDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationInterruptDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationInterruptDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationInterruptDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_73_DELEGATE \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_73_DELEGATE \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
struct _Script_SpinePlugin_eventSpineAnimationCompleteDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationCompleteDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationCompleteDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_74_DELEGATE \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_74_DELEGATE \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
struct _Script_SpinePlugin_eventSpineAnimationEndDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationEndDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationEndDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationEndDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_75_DELEGATE \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_75_DELEGATE \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
struct _Script_SpinePlugin_eventSpineAnimationDisposeDelegate_Parms \
{ \
	UTrackEntry* entry; \
}; \
static inline void FSpineAnimationDisposeDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationDisposeDelegate, UTrackEntry* entry) \
{ \
	_Script_SpinePlugin_eventSpineAnimationDisposeDelegate_Parms Parms; \
	Parms.entry=entry; \
	SpineAnimationDisposeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_SPARSE_DATA
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_RPC_WRAPPERS \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_SPARSE_DATA
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_RPC_WRAPPERS \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
 \
	DECLARE_FUNCTION(execisValidAnimation); \
	DECLARE_FUNCTION(execgetAnimationDuration); \
	DECLARE_FUNCTION(execgetAnimationName); \
	DECLARE_FUNCTION(execSetMixDuration); \
	DECLARE_FUNCTION(execGetMixDuration); \
	DECLARE_FUNCTION(execSetMixTime); \
	DECLARE_FUNCTION(execGetMixTime); \
	DECLARE_FUNCTION(execSetAlpha); \
	DECLARE_FUNCTION(execGetAlpha); \
	DECLARE_FUNCTION(execSetTimeScale); \
	DECLARE_FUNCTION(execGetTimeScale); \
	DECLARE_FUNCTION(execSetTrackEnd); \
	DECLARE_FUNCTION(execGetTrackEnd); \
	DECLARE_FUNCTION(execSetTrackTime); \
	DECLARE_FUNCTION(execGetTrackTime); \
	DECLARE_FUNCTION(execSetDelay); \
	DECLARE_FUNCTION(execGetDelay); \
	DECLARE_FUNCTION(execSetAnimationLast); \
	DECLARE_FUNCTION(execGetAnimationLast); \
	DECLARE_FUNCTION(execSetAnimationEnd); \
	DECLARE_FUNCTION(execGetAnimationEnd); \
	DECLARE_FUNCTION(execSetAnimationStart); \
	DECLARE_FUNCTION(execGetAnimationStart); \
	DECLARE_FUNCTION(execSetDrawOrderThreshold); \
	DECLARE_FUNCTION(execGetDrawOrderThreshold); \
	DECLARE_FUNCTION(execSetAttachmentThreshold); \
	DECLARE_FUNCTION(execGetAttachmentThreshold); \
	DECLARE_FUNCTION(execSetEventThreshold); \
	DECLARE_FUNCTION(execGetEventThreshold); \
	DECLARE_FUNCTION(execSetLoop); \
	DECLARE_FUNCTION(execGetLoop); \
	DECLARE_FUNCTION(execGetTrackIndex);


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
 \
	DECLARE_FUNCTION(execisValidAnimation); \
	DECLARE_FUNCTION(execgetAnimationDuration); \
	DECLARE_FUNCTION(execgetAnimationName); \
	DECLARE_FUNCTION(execSetMixDuration); \
	DECLARE_FUNCTION(execGetMixDuration); \
	DECLARE_FUNCTION(execSetMixTime); \
	DECLARE_FUNCTION(execGetMixTime); \
	DECLARE_FUNCTION(execSetAlpha); \
	DECLARE_FUNCTION(execGetAlpha); \
	DECLARE_FUNCTION(execSetTimeScale); \
	DECLARE_FUNCTION(execGetTimeScale); \
	DECLARE_FUNCTION(execSetTrackEnd); \
	DECLARE_FUNCTION(execGetTrackEnd); \
	DECLARE_FUNCTION(execSetTrackTime); \
	DECLARE_FUNCTION(execGetTrackTime); \
	DECLARE_FUNCTION(execSetDelay); \
	DECLARE_FUNCTION(execGetDelay); \
	DECLARE_FUNCTION(execSetAnimationLast); \
	DECLARE_FUNCTION(execGetAnimationLast); \
	DECLARE_FUNCTION(execSetAnimationEnd); \
	DECLARE_FUNCTION(execGetAnimationEnd); \
	DECLARE_FUNCTION(execSetAnimationStart); \
	DECLARE_FUNCTION(execGetAnimationStart); \
	DECLARE_FUNCTION(execSetDrawOrderThreshold); \
	DECLARE_FUNCTION(execGetDrawOrderThreshold); \
	DECLARE_FUNCTION(execSetAttachmentThreshold); \
	DECLARE_FUNCTION(execGetAttachmentThreshold); \
	DECLARE_FUNCTION(execSetEventThreshold); \
	DECLARE_FUNCTION(execGetEventThreshold); \
	DECLARE_FUNCTION(execSetLoop); \
	DECLARE_FUNCTION(execGetLoop); \
	DECLARE_FUNCTION(execGetTrackIndex);


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_INCLASS_NO_PURE_DECLS \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_INCLASS_NO_PURE_DECLS \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
private: \
	static void StaticRegisterNativesUTrackEntry(); \
	friend struct Z_Construct_UClass_UTrackEntry_Statics; \
public: \
	DECLARE_CLASS(UTrackEntry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(UTrackEntry)


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_INCLASS \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_INCLASS \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
private: \
	static void StaticRegisterNativesUTrackEntry(); \
	friend struct Z_Construct_UClass_UTrackEntry_Statics; \
public: \
	DECLARE_CLASS(UTrackEntry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(UTrackEntry)


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_STANDARD_CONSTRUCTORS \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_STANDARD_CONSTRUCTORS \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTrackEntry(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrackEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrackEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrackEntry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTrackEntry(UTrackEntry&&); \
	NO_API UTrackEntry(const UTrackEntry&); \
public:


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_ENHANCED_CONSTRUCTORS \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_ENHANCED_CONSTRUCTORS \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTrackEntry(UTrackEntry&&); \
	NO_API UTrackEntry(const UTrackEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrackEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrackEntry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTrackEntry)


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_PROLOG
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_SPARSE_DATA \
	FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_RPC_WRAPPERS \
	FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_INCLASS \
	FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_STANDARD_CONSTRUCTORS \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_PROLOG
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_SPARSE_DATA \
	FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_RPC_WRAPPERS \
	FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_INCLASS \
	FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_STANDARD_CONSTRUCTORS \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_SPARSE_DATA \
	FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_INCLASS_NO_PURE_DECLS \
	FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_ENHANCED_CONSTRUCTORS \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_SPARSE_DATA \
	FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_INCLASS_NO_PURE_DECLS \
	FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_ENHANCED_CONSTRUCTORS \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEPLUGIN_API UClass* StaticClass<class UTrackEntry>();

<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_SPARSE_DATA
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_RPC_WRAPPERS \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_SPARSE_DATA
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_RPC_WRAPPERS \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
 \
	DECLARE_FUNCTION(execClearTrack); \
	DECLARE_FUNCTION(execClearTracks); \
	DECLARE_FUNCTION(execGetCurrent); \
	DECLARE_FUNCTION(execAddEmptyAnimation); \
	DECLARE_FUNCTION(execSetEmptyAnimation); \
	DECLARE_FUNCTION(execAddAnimation); \
	DECLARE_FUNCTION(execSetAnimation); \
	DECLARE_FUNCTION(execGetTimeScale); \
	DECLARE_FUNCTION(execSetTimeScale); \
	DECLARE_FUNCTION(execSetPlaybackTime); \
	DECLARE_FUNCTION(execSetAutoPlay);


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
 \
	DECLARE_FUNCTION(execClearTrack); \
	DECLARE_FUNCTION(execClearTracks); \
	DECLARE_FUNCTION(execGetCurrent); \
	DECLARE_FUNCTION(execAddEmptyAnimation); \
	DECLARE_FUNCTION(execSetEmptyAnimation); \
	DECLARE_FUNCTION(execAddAnimation); \
	DECLARE_FUNCTION(execSetAnimation); \
	DECLARE_FUNCTION(execGetTimeScale); \
	DECLARE_FUNCTION(execSetTimeScale); \
	DECLARE_FUNCTION(execSetPlaybackTime); \
	DECLARE_FUNCTION(execSetAutoPlay);


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_INCLASS_NO_PURE_DECLS \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_INCLASS_NO_PURE_DECLS \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
private: \
	static void StaticRegisterNativesUSpineSkeletonAnimationComponent(); \
	friend struct Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics; \
public: \
	DECLARE_CLASS(USpineSkeletonAnimationComponent, USpineSkeletonComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineSkeletonAnimationComponent)


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_INCLASS \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_INCLASS \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
private: \
	static void StaticRegisterNativesUSpineSkeletonAnimationComponent(); \
	friend struct Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics; \
public: \
	DECLARE_CLASS(USpineSkeletonAnimationComponent, USpineSkeletonComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineSkeletonAnimationComponent)


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_STANDARD_CONSTRUCTORS \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_STANDARD_CONSTRUCTORS \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpineSkeletonAnimationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpineSkeletonAnimationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineSkeletonAnimationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineSkeletonAnimationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineSkeletonAnimationComponent(USpineSkeletonAnimationComponent&&); \
	NO_API USpineSkeletonAnimationComponent(const USpineSkeletonAnimationComponent&); \
public:


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_ENHANCED_CONSTRUCTORS \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_ENHANCED_CONSTRUCTORS \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineSkeletonAnimationComponent(USpineSkeletonAnimationComponent&&); \
	NO_API USpineSkeletonAnimationComponent(const USpineSkeletonAnimationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineSkeletonAnimationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineSkeletonAnimationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpineSkeletonAnimationComponent)


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_220_PROLOG
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_SPARSE_DATA \
	FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_RPC_WRAPPERS \
	FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_INCLASS \
	FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_STANDARD_CONSTRUCTORS \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_220_PROLOG
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_SPARSE_DATA \
	FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_RPC_WRAPPERS \
	FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_INCLASS \
	FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_STANDARD_CONSTRUCTORS \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


<<<<<<< HEAD
#define FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_SPARSE_DATA \
	FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_INCLASS_NO_PURE_DECLS \
	FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_ENHANCED_CONSTRUCTORS \
=======
#define FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_SPARSE_DATA \
	FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_INCLASS_NO_PURE_DECLS \
	FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_222_ENHANCED_CONSTRUCTORS \
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEPLUGIN_API UClass* StaticClass<class USpineSkeletonAnimationComponent>();

#undef CURRENT_FILE_ID
<<<<<<< HEAD
#define CURRENT_FILE_ID FID_GameDemoOld_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h
=======
#define CURRENT_FILE_ID FID_GameDemo_5_0_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e


PRAGMA_ENABLE_DEPRECATION_WARNINGS
