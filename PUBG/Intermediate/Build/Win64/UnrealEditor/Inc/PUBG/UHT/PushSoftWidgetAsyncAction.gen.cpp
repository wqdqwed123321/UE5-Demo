// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAsyncActionBase/PushSoftWidgetAsyncAction.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePushSoftWidgetAsyncAction() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PUBG_API UClass* Z_Construct_UClass_UBaseCommonActivatableWidget_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UPushSoftWidgetAsyncAction();
PUBG_API UClass* Z_Construct_UClass_UPushSoftWidgetAsyncAction_NoRegister();
PUBG_API UFunction* Z_Construct_UDelegateFunction_PUBG_OnPushSoftWidgetDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPushSoftWidgetDelegate *********************************************
struct Z_Construct_UDelegateFunction_PUBG_OnPushSoftWidgetDelegate__DelegateSignature_Statics
{
	struct _Script_PUBG_eventOnPushSoftWidgetDelegate_Parms
	{
		UBaseCommonActivatableWidget* PushedWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintAsyncActionBase/PushSoftWidgetAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PushedWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PushedWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PUBG_OnPushSoftWidgetDelegate__DelegateSignature_Statics::NewProp_PushedWidget = { "PushedWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PUBG_eventOnPushSoftWidgetDelegate_Parms, PushedWidget), Z_Construct_UClass_UBaseCommonActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PushedWidget_MetaData), NewProp_PushedWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PUBG_OnPushSoftWidgetDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PUBG_OnPushSoftWidgetDelegate__DelegateSignature_Statics::NewProp_PushedWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PUBG_OnPushSoftWidgetDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PUBG_OnPushSoftWidgetDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PUBG, nullptr, "OnPushSoftWidgetDelegate__DelegateSignature", Z_Construct_UDelegateFunction_PUBG_OnPushSoftWidgetDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PUBG_OnPushSoftWidgetDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PUBG_OnPushSoftWidgetDelegate__DelegateSignature_Statics::_Script_PUBG_eventOnPushSoftWidgetDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PUBG_OnPushSoftWidgetDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PUBG_OnPushSoftWidgetDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_PUBG_OnPushSoftWidgetDelegate__DelegateSignature_Statics::_Script_PUBG_eventOnPushSoftWidgetDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PUBG_OnPushSoftWidgetDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PUBG_OnPushSoftWidgetDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPushSoftWidgetDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPushSoftWidgetDelegate, UBaseCommonActivatableWidget* PushedWidget)
{
	struct _Script_PUBG_eventOnPushSoftWidgetDelegate_Parms
	{
		UBaseCommonActivatableWidget* PushedWidget;
	};
	_Script_PUBG_eventOnPushSoftWidgetDelegate_Parms Parms;
	Parms.PushedWidget=PushedWidget;
	OnPushSoftWidgetDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPushSoftWidgetDelegate ***********************************************

// ********** Begin Class UPushSoftWidgetAsyncAction Function PushSoftWidget ***********************
struct Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics
{
	struct PushSoftWidgetAsyncAction_eventPushSoftWidget_Parms
	{
		const UObject* WorldContextObject;
		APlayerController* OwningPlayerController;
		TSoftClassPtr<UBaseCommonActivatableWidget>  InSoftWidgetClass;
		FGameplayTag InWidgetStackTag;
		bool bFocusOnNewlyPushedWidget;
		UPushSoftWidgetAsyncAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CPP_Default_bFocusOnNewlyPushedWidget", "true" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/BlueprintAsyncActionBase/PushSoftWidgetAsyncAction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWidgetStackTag_MetaData[] = {
		{ "Categories", "PUBG.UI" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayerController;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_InSoftWidgetClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InWidgetStackTag;
	static void NewProp_bFocusOnNewlyPushedWidget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFocusOnNewlyPushedWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PushSoftWidgetAsyncAction_eventPushSoftWidget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::NewProp_OwningPlayerController = { "OwningPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PushSoftWidgetAsyncAction_eventPushSoftWidget_Parms, OwningPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::NewProp_InSoftWidgetClass = { "InSoftWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PushSoftWidgetAsyncAction_eventPushSoftWidget_Parms, InSoftWidgetClass), Z_Construct_UClass_UBaseCommonActivatableWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::NewProp_InWidgetStackTag = { "InWidgetStackTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PushSoftWidgetAsyncAction_eventPushSoftWidget_Parms, InWidgetStackTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWidgetStackTag_MetaData), NewProp_InWidgetStackTag_MetaData) }; // 133831994
void Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::NewProp_bFocusOnNewlyPushedWidget_SetBit(void* Obj)
{
	((PushSoftWidgetAsyncAction_eventPushSoftWidget_Parms*)Obj)->bFocusOnNewlyPushedWidget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::NewProp_bFocusOnNewlyPushedWidget = { "bFocusOnNewlyPushedWidget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PushSoftWidgetAsyncAction_eventPushSoftWidget_Parms), &Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::NewProp_bFocusOnNewlyPushedWidget_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PushSoftWidgetAsyncAction_eventPushSoftWidget_Parms, ReturnValue), Z_Construct_UClass_UPushSoftWidgetAsyncAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::NewProp_OwningPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::NewProp_InSoftWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::NewProp_InWidgetStackTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::NewProp_bFocusOnNewlyPushedWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPushSoftWidgetAsyncAction, nullptr, "PushSoftWidget", Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::PushSoftWidgetAsyncAction_eventPushSoftWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::PushSoftWidgetAsyncAction_eventPushSoftWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPushSoftWidgetAsyncAction::execPushSoftWidget)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_OwningPlayerController);
	P_GET_SOFTCLASS(TSoftClassPtr<UBaseCommonActivatableWidget> ,Z_Param_InSoftWidgetClass);
	P_GET_STRUCT(FGameplayTag,Z_Param_InWidgetStackTag);
	P_GET_UBOOL(Z_Param_bFocusOnNewlyPushedWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPushSoftWidgetAsyncAction**)Z_Param__Result=UPushSoftWidgetAsyncAction::PushSoftWidget(Z_Param_WorldContextObject,Z_Param_OwningPlayerController,Z_Param_InSoftWidgetClass,Z_Param_InWidgetStackTag,Z_Param_bFocusOnNewlyPushedWidget);
	P_NATIVE_END;
}
// ********** End Class UPushSoftWidgetAsyncAction Function PushSoftWidget *************************

// ********** Begin Class UPushSoftWidgetAsyncAction ***********************************************
void UPushSoftWidgetAsyncAction::StaticRegisterNativesUPushSoftWidgetAsyncAction()
{
	UClass* Class = UPushSoftWidgetAsyncAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PushSoftWidget", &UPushSoftWidgetAsyncAction::execPushSoftWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPushSoftWidgetAsyncAction;
UClass* UPushSoftWidgetAsyncAction::GetPrivateStaticClass()
{
	using TClass = UPushSoftWidgetAsyncAction;
	if (!Z_Registration_Info_UClass_UPushSoftWidgetAsyncAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PushSoftWidgetAsyncAction"),
			Z_Registration_Info_UClass_UPushSoftWidgetAsyncAction.InnerSingleton,
			StaticRegisterNativesUPushSoftWidgetAsyncAction,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPushSoftWidgetAsyncAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UPushSoftWidgetAsyncAction_NoRegister()
{
	return UPushSoftWidgetAsyncAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPushSoftWidgetAsyncAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BlueprintAsyncActionBase/PushSoftWidgetAsyncAction.h" },
		{ "ModuleRelativePath", "Public/BlueprintAsyncActionBase/PushSoftWidgetAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWidgetCreatedBeforePush_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAsyncActionBase/PushSoftWidgetAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AfterPush_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAsyncActionBase/PushSoftWidgetAsyncAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWidgetCreatedBeforePush;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AfterPush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPushSoftWidgetAsyncAction_PushSoftWidget, "PushSoftWidget" }, // 2697872608
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPushSoftWidgetAsyncAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPushSoftWidgetAsyncAction_Statics::NewProp_OnWidgetCreatedBeforePush = { "OnWidgetCreatedBeforePush", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPushSoftWidgetAsyncAction, OnWidgetCreatedBeforePush), Z_Construct_UDelegateFunction_PUBG_OnPushSoftWidgetDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWidgetCreatedBeforePush_MetaData), NewProp_OnWidgetCreatedBeforePush_MetaData) }; // 1827939296
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPushSoftWidgetAsyncAction_Statics::NewProp_AfterPush = { "AfterPush", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPushSoftWidgetAsyncAction, AfterPush), Z_Construct_UDelegateFunction_PUBG_OnPushSoftWidgetDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AfterPush_MetaData), NewProp_AfterPush_MetaData) }; // 1827939296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPushSoftWidgetAsyncAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPushSoftWidgetAsyncAction_Statics::NewProp_OnWidgetCreatedBeforePush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPushSoftWidgetAsyncAction_Statics::NewProp_AfterPush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPushSoftWidgetAsyncAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPushSoftWidgetAsyncAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPushSoftWidgetAsyncAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPushSoftWidgetAsyncAction_Statics::ClassParams = {
	&UPushSoftWidgetAsyncAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPushSoftWidgetAsyncAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPushSoftWidgetAsyncAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPushSoftWidgetAsyncAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UPushSoftWidgetAsyncAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPushSoftWidgetAsyncAction()
{
	if (!Z_Registration_Info_UClass_UPushSoftWidgetAsyncAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPushSoftWidgetAsyncAction.OuterSingleton, Z_Construct_UClass_UPushSoftWidgetAsyncAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPushSoftWidgetAsyncAction.OuterSingleton;
}
UPushSoftWidgetAsyncAction::UPushSoftWidgetAsyncAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPushSoftWidgetAsyncAction);
UPushSoftWidgetAsyncAction::~UPushSoftWidgetAsyncAction() {}
// ********** End Class UPushSoftWidgetAsyncAction *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_BlueprintAsyncActionBase_PushSoftWidgetAsyncAction_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPushSoftWidgetAsyncAction, UPushSoftWidgetAsyncAction::StaticClass, TEXT("UPushSoftWidgetAsyncAction"), &Z_Registration_Info_UClass_UPushSoftWidgetAsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPushSoftWidgetAsyncAction), 3384311634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_BlueprintAsyncActionBase_PushSoftWidgetAsyncAction_h__Script_PUBG_84432177(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_BlueprintAsyncActionBase_PushSoftWidgetAsyncAction_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_BlueprintAsyncActionBase_PushSoftWidgetAsyncAction_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
