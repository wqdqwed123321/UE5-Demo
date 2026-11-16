// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUserWidget/GameCommonUserWidget.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameCommonUserWidget() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PUBG_API UClass* Z_Construct_UClass_UGameCommonUserWidget();
PUBG_API UClass* Z_Construct_UClass_UGameCommonUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGameCommonUserWidget Function RegisterWidgetStack ***********************
struct Z_Construct_UFunction_UGameCommonUserWidget_RegisterWidgetStack_Statics
{
	struct GameCommonUserWidget_eventRegisterWidgetStack_Parms
	{
		FGameplayTag InStackTag;
		UCommonActivatableWidgetContainerBase* InStack;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserWidget/GameCommonUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStackTag_MetaData[] = {
		{ "Categories", "PUBG.UI" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStack_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStackTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameCommonUserWidget_RegisterWidgetStack_Statics::NewProp_InStackTag = { "InStackTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameCommonUserWidget_eventRegisterWidgetStack_Parms, InStackTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStackTag_MetaData), NewProp_InStackTag_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameCommonUserWidget_RegisterWidgetStack_Statics::NewProp_InStack = { "InStack", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameCommonUserWidget_eventRegisterWidgetStack_Parms, InStack), Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStack_MetaData), NewProp_InStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameCommonUserWidget_RegisterWidgetStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameCommonUserWidget_RegisterWidgetStack_Statics::NewProp_InStackTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameCommonUserWidget_RegisterWidgetStack_Statics::NewProp_InStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCommonUserWidget_RegisterWidgetStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameCommonUserWidget_RegisterWidgetStack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameCommonUserWidget, nullptr, "RegisterWidgetStack", Z_Construct_UFunction_UGameCommonUserWidget_RegisterWidgetStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCommonUserWidget_RegisterWidgetStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameCommonUserWidget_RegisterWidgetStack_Statics::GameCommonUserWidget_eventRegisterWidgetStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCommonUserWidget_RegisterWidgetStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameCommonUserWidget_RegisterWidgetStack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameCommonUserWidget_RegisterWidgetStack_Statics::GameCommonUserWidget_eventRegisterWidgetStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameCommonUserWidget_RegisterWidgetStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameCommonUserWidget_RegisterWidgetStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameCommonUserWidget::execRegisterWidgetStack)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_InStackTag);
	P_GET_OBJECT(UCommonActivatableWidgetContainerBase,Z_Param_InStack);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterWidgetStack(Z_Param_InStackTag,Z_Param_InStack);
	P_NATIVE_END;
}
// ********** End Class UGameCommonUserWidget Function RegisterWidgetStack *************************

// ********** Begin Class UGameCommonUserWidget ****************************************************
void UGameCommonUserWidget::StaticRegisterNativesUGameCommonUserWidget()
{
	UClass* Class = UGameCommonUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterWidgetStack", &UGameCommonUserWidget::execRegisterWidgetStack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGameCommonUserWidget;
UClass* UGameCommonUserWidget::GetPrivateStaticClass()
{
	using TClass = UGameCommonUserWidget;
	if (!Z_Registration_Info_UClass_UGameCommonUserWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameCommonUserWidget"),
			Z_Registration_Info_UClass_UGameCommonUserWidget.InnerSingleton,
			StaticRegisterNativesUGameCommonUserWidget,
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
	return Z_Registration_Info_UClass_UGameCommonUserWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameCommonUserWidget_NoRegister()
{
	return UGameCommonUserWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameCommonUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CommonUserWidget/GameCommonUserWidget.h" },
		{ "ModuleRelativePath", "Public/CommonUserWidget/GameCommonUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredWidgetStackMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonUserWidget/GameCommonUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredWidgetStackMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredWidgetStackMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredWidgetStackMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameCommonUserWidget_RegisterWidgetStack, "RegisterWidgetStack" }, // 1749379675
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameCommonUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameCommonUserWidget_Statics::NewProp_RegisteredWidgetStackMap_ValueProp = { "RegisteredWidgetStackMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameCommonUserWidget_Statics::NewProp_RegisteredWidgetStackMap_Key_KeyProp = { "RegisteredWidgetStackMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameCommonUserWidget_Statics::NewProp_RegisteredWidgetStackMap = { "RegisteredWidgetStackMap", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameCommonUserWidget, RegisteredWidgetStackMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredWidgetStackMap_MetaData), NewProp_RegisteredWidgetStackMap_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameCommonUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameCommonUserWidget_Statics::NewProp_RegisteredWidgetStackMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameCommonUserWidget_Statics::NewProp_RegisteredWidgetStackMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameCommonUserWidget_Statics::NewProp_RegisteredWidgetStackMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameCommonUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameCommonUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameCommonUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameCommonUserWidget_Statics::ClassParams = {
	&UGameCommonUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameCommonUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameCommonUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameCommonUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameCommonUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameCommonUserWidget()
{
	if (!Z_Registration_Info_UClass_UGameCommonUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameCommonUserWidget.OuterSingleton, Z_Construct_UClass_UGameCommonUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameCommonUserWidget.OuterSingleton;
}
UGameCommonUserWidget::UGameCommonUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameCommonUserWidget);
UGameCommonUserWidget::~UGameCommonUserWidget() {}
// ********** End Class UGameCommonUserWidget ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonUserWidget_GameCommonUserWidget_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameCommonUserWidget, UGameCommonUserWidget::StaticClass, TEXT("UGameCommonUserWidget"), &Z_Registration_Info_UClass_UGameCommonUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameCommonUserWidget), 4243692927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonUserWidget_GameCommonUserWidget_h__Script_PUBG_2892776140(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonUserWidget_GameCommonUserWidget_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonUserWidget_GameCommonUserWidget_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
