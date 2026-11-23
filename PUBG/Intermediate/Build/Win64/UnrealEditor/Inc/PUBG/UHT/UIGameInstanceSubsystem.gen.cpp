// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInstanceSubsystem/UIGameInstanceSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUIGameInstanceSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
PUBG_API UClass* Z_Construct_UClass_UGameCommonUserWidget_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UUIGameInstanceSubsystem();
PUBG_API UClass* Z_Construct_UClass_UUIGameInstanceSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUIGameInstanceSubsystem Function RegisterCreatedPrimaryLayoutWidget *****
struct Z_Construct_UFunction_UUIGameInstanceSubsystem_RegisterCreatedPrimaryLayoutWidget_Statics
{
	struct UIGameInstanceSubsystem_eventRegisterCreatedPrimaryLayoutWidget_Parms
	{
		UGameCommonUserWidget* InCreatedWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameInstanceSubsystem/UIGameInstanceSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCreatedWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InCreatedWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIGameInstanceSubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::NewProp_InCreatedWidget = { "InCreatedWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIGameInstanceSubsystem_eventRegisterCreatedPrimaryLayoutWidget_Parms, InCreatedWidget), Z_Construct_UClass_UGameCommonUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCreatedWidget_MetaData), NewProp_InCreatedWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIGameInstanceSubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIGameInstanceSubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::NewProp_InCreatedWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIGameInstanceSubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIGameInstanceSubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIGameInstanceSubsystem, nullptr, "RegisterCreatedPrimaryLayoutWidget", Z_Construct_UFunction_UUIGameInstanceSubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIGameInstanceSubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIGameInstanceSubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::UIGameInstanceSubsystem_eventRegisterCreatedPrimaryLayoutWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIGameInstanceSubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIGameInstanceSubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIGameInstanceSubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::UIGameInstanceSubsystem_eventRegisterCreatedPrimaryLayoutWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIGameInstanceSubsystem_RegisterCreatedPrimaryLayoutWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIGameInstanceSubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIGameInstanceSubsystem::execRegisterCreatedPrimaryLayoutWidget)
{
	P_GET_OBJECT(UGameCommonUserWidget,Z_Param_InCreatedWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterCreatedPrimaryLayoutWidget(Z_Param_InCreatedWidget);
	P_NATIVE_END;
}
// ********** End Class UUIGameInstanceSubsystem Function RegisterCreatedPrimaryLayoutWidget *******

// ********** Begin Class UUIGameInstanceSubsystem *************************************************
void UUIGameInstanceSubsystem::StaticRegisterNativesUUIGameInstanceSubsystem()
{
	UClass* Class = UUIGameInstanceSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterCreatedPrimaryLayoutWidget", &UUIGameInstanceSubsystem::execRegisterCreatedPrimaryLayoutWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUIGameInstanceSubsystem;
UClass* UUIGameInstanceSubsystem::GetPrivateStaticClass()
{
	using TClass = UUIGameInstanceSubsystem;
	if (!Z_Registration_Info_UClass_UUIGameInstanceSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UIGameInstanceSubsystem"),
			Z_Registration_Info_UClass_UUIGameInstanceSubsystem.InnerSingleton,
			StaticRegisterNativesUUIGameInstanceSubsystem,
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
	return Z_Registration_Info_UClass_UUIGameInstanceSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UUIGameInstanceSubsystem_NoRegister()
{
	return UUIGameInstanceSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUIGameInstanceSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameInstanceSubsystem/UIGameInstanceSubsystem.h" },
		{ "ModuleRelativePath", "Public/GameInstanceSubsystem/UIGameInstanceSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedPrimaryLayout_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameInstanceSubsystem/UIGameInstanceSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmbeddedWidgets_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameInstanceSubsystem/UIGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedPrimaryLayout;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_EmbeddedWidgets_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EmbeddedWidgets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EmbeddedWidgets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIGameInstanceSubsystem_RegisterCreatedPrimaryLayoutWidget, "RegisterCreatedPrimaryLayoutWidget" }, // 3950959585
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIGameInstanceSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIGameInstanceSubsystem_Statics::NewProp_CreatedPrimaryLayout = { "CreatedPrimaryLayout", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIGameInstanceSubsystem, CreatedPrimaryLayout), Z_Construct_UClass_UGameCommonUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedPrimaryLayout_MetaData), NewProp_CreatedPrimaryLayout_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UUIGameInstanceSubsystem_Statics::NewProp_EmbeddedWidgets_ValueProp = { "EmbeddedWidgets", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIGameInstanceSubsystem_Statics::NewProp_EmbeddedWidgets_Key_KeyProp = { "EmbeddedWidgets_Key", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUIGameInstanceSubsystem_Statics::NewProp_EmbeddedWidgets = { "EmbeddedWidgets", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIGameInstanceSubsystem, EmbeddedWidgets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmbeddedWidgets_MetaData), NewProp_EmbeddedWidgets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIGameInstanceSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIGameInstanceSubsystem_Statics::NewProp_CreatedPrimaryLayout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIGameInstanceSubsystem_Statics::NewProp_EmbeddedWidgets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIGameInstanceSubsystem_Statics::NewProp_EmbeddedWidgets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIGameInstanceSubsystem_Statics::NewProp_EmbeddedWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIGameInstanceSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUIGameInstanceSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIGameInstanceSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIGameInstanceSubsystem_Statics::ClassParams = {
	&UUIGameInstanceSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUIGameInstanceSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUIGameInstanceSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIGameInstanceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIGameInstanceSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIGameInstanceSubsystem()
{
	if (!Z_Registration_Info_UClass_UUIGameInstanceSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIGameInstanceSubsystem.OuterSingleton, Z_Construct_UClass_UUIGameInstanceSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIGameInstanceSubsystem.OuterSingleton;
}
UUIGameInstanceSubsystem::UUIGameInstanceSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUIGameInstanceSubsystem);
UUIGameInstanceSubsystem::~UUIGameInstanceSubsystem() {}
// ********** End Class UUIGameInstanceSubsystem ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_GameInstanceSubsystem_UIGameInstanceSubsystem_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIGameInstanceSubsystem, UUIGameInstanceSubsystem::StaticClass, TEXT("UUIGameInstanceSubsystem"), &Z_Registration_Info_UClass_UUIGameInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIGameInstanceSubsystem), 2888729308U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_GameInstanceSubsystem_UIGameInstanceSubsystem_h__Script_PUBG_3097184053(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_GameInstanceSubsystem_UIGameInstanceSubsystem_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_GameInstanceSubsystem_UIGameInstanceSubsystem_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
