// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonActivatableWidget/BaseCommonActivatableWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseCommonActivatableWidget() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
PUBG_API UClass* Z_Construct_UClass_AGlobalPlayerController_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBaseCommonActivatableWidget();
PUBG_API UClass* Z_Construct_UClass_UBaseCommonActivatableWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBaseCommonActivatableWidget Function GetOwningPlayerController **********
struct Z_Construct_UFunction_UBaseCommonActivatableWidget_GetOwningPlayerController_Statics
{
	struct BaseCommonActivatableWidget_eventGetOwningPlayerController_Parms
	{
		AGlobalPlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/BaseCommonActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseCommonActivatableWidget_GetOwningPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCommonActivatableWidget_eventGetOwningPlayerController_Parms, ReturnValue), Z_Construct_UClass_AGlobalPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseCommonActivatableWidget_GetOwningPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseCommonActivatableWidget_GetOwningPlayerController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseCommonActivatableWidget_GetOwningPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseCommonActivatableWidget_GetOwningPlayerController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseCommonActivatableWidget, nullptr, "GetOwningPlayerController", Z_Construct_UFunction_UBaseCommonActivatableWidget_GetOwningPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseCommonActivatableWidget_GetOwningPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseCommonActivatableWidget_GetOwningPlayerController_Statics::BaseCommonActivatableWidget_eventGetOwningPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseCommonActivatableWidget_GetOwningPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseCommonActivatableWidget_GetOwningPlayerController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseCommonActivatableWidget_GetOwningPlayerController_Statics::BaseCommonActivatableWidget_eventGetOwningPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseCommonActivatableWidget_GetOwningPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseCommonActivatableWidget_GetOwningPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseCommonActivatableWidget::execGetOwningPlayerController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGlobalPlayerController**)Z_Param__Result=P_THIS->GetOwningPlayerController();
	P_NATIVE_END;
}
// ********** End Class UBaseCommonActivatableWidget Function GetOwningPlayerController ************

// ********** Begin Class UBaseCommonActivatableWidget *********************************************
void UBaseCommonActivatableWidget::StaticRegisterNativesUBaseCommonActivatableWidget()
{
	UClass* Class = UBaseCommonActivatableWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOwningPlayerController", &UBaseCommonActivatableWidget::execGetOwningPlayerController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseCommonActivatableWidget;
UClass* UBaseCommonActivatableWidget::GetPrivateStaticClass()
{
	using TClass = UBaseCommonActivatableWidget;
	if (!Z_Registration_Info_UClass_UBaseCommonActivatableWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseCommonActivatableWidget"),
			Z_Registration_Info_UClass_UBaseCommonActivatableWidget.InnerSingleton,
			StaticRegisterNativesUBaseCommonActivatableWidget,
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
	return Z_Registration_Info_UClass_UBaseCommonActivatableWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseCommonActivatableWidget_NoRegister()
{
	return UBaseCommonActivatableWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseCommonActivatableWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CommonActivatableWidget/BaseCommonActivatableWidget.h" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/BaseCommonActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseCommonActivatableWidget_GetOwningPlayerController, "GetOwningPlayerController" }, // 3305314539
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCommonActivatableWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseCommonActivatableWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCommonActivatableWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseCommonActivatableWidget_Statics::ClassParams = {
	&UBaseCommonActivatableWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCommonActivatableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseCommonActivatableWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseCommonActivatableWidget()
{
	if (!Z_Registration_Info_UClass_UBaseCommonActivatableWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseCommonActivatableWidget.OuterSingleton, Z_Construct_UClass_UBaseCommonActivatableWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseCommonActivatableWidget.OuterSingleton;
}
UBaseCommonActivatableWidget::UBaseCommonActivatableWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCommonActivatableWidget);
UBaseCommonActivatableWidget::~UBaseCommonActivatableWidget() {}
// ********** End Class UBaseCommonActivatableWidget ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_BaseCommonActivatableWidget_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseCommonActivatableWidget, UBaseCommonActivatableWidget::StaticClass, TEXT("UBaseCommonActivatableWidget"), &Z_Registration_Info_UClass_UBaseCommonActivatableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseCommonActivatableWidget), 2215491839U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_BaseCommonActivatableWidget_h__Script_PUBG_415144803(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_BaseCommonActivatableWidget_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_BaseCommonActivatableWidget_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
