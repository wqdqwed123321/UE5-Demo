// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintAsyncActionBase/PushSoftWidgetAsyncAction.h"

#ifdef PUBG_PushSoftWidgetAsyncAction_generated_h
#error "PushSoftWidgetAsyncAction.generated.h already included, missing '#pragma once' in PushSoftWidgetAsyncAction.h"
#endif
#define PUBG_PushSoftWidgetAsyncAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APlayerController;
class UBaseCommonActivatableWidget;
class UObject;
class UPushSoftWidgetAsyncAction;
struct FGameplayTag;

// ********** Begin Delegate FOnPushSoftWidgetDelegate *********************************************
#define FID_PUBG_Source_PUBG_Public_BlueprintAsyncActionBase_PushSoftWidgetAsyncAction_h_12_DELEGATE \
PUBG_API void FOnPushSoftWidgetDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPushSoftWidgetDelegate, UBaseCommonActivatableWidget* PushedWidget);


// ********** End Delegate FOnPushSoftWidgetDelegate ***********************************************

// ********** Begin Class UPushSoftWidgetAsyncAction ***********************************************
#define FID_PUBG_Source_PUBG_Public_BlueprintAsyncActionBase_PushSoftWidgetAsyncAction_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPushSoftWidget);


PUBG_API UClass* Z_Construct_UClass_UPushSoftWidgetAsyncAction_NoRegister();

#define FID_PUBG_Source_PUBG_Public_BlueprintAsyncActionBase_PushSoftWidgetAsyncAction_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPushSoftWidgetAsyncAction(); \
	friend struct Z_Construct_UClass_UPushSoftWidgetAsyncAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_UPushSoftWidgetAsyncAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UPushSoftWidgetAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_UPushSoftWidgetAsyncAction_NoRegister) \
	DECLARE_SERIALIZER(UPushSoftWidgetAsyncAction)


#define FID_PUBG_Source_PUBG_Public_BlueprintAsyncActionBase_PushSoftWidgetAsyncAction_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPushSoftWidgetAsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPushSoftWidgetAsyncAction(UPushSoftWidgetAsyncAction&&) = delete; \
	UPushSoftWidgetAsyncAction(const UPushSoftWidgetAsyncAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPushSoftWidgetAsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPushSoftWidgetAsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPushSoftWidgetAsyncAction) \
	NO_API virtual ~UPushSoftWidgetAsyncAction();


#define FID_PUBG_Source_PUBG_Public_BlueprintAsyncActionBase_PushSoftWidgetAsyncAction_h_17_PROLOG
#define FID_PUBG_Source_PUBG_Public_BlueprintAsyncActionBase_PushSoftWidgetAsyncAction_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_BlueprintAsyncActionBase_PushSoftWidgetAsyncAction_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_BlueprintAsyncActionBase_PushSoftWidgetAsyncAction_h_20_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_BlueprintAsyncActionBase_PushSoftWidgetAsyncAction_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPushSoftWidgetAsyncAction;

// ********** End Class UPushSoftWidgetAsyncAction *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_BlueprintAsyncActionBase_PushSoftWidgetAsyncAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
