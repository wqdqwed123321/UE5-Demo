// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonActivatableWidget/ActivatableWidget_EquipmentSlot.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActivatableWidget_EquipmentSlot() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_EquipmentSlot();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_EquipmentSlot_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackManagerComponent_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBaseCommonActivatableWidget();
PUBG_API UClass* Z_Construct_UClass_UUserWidget_DragVisual_NoRegister();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EEquipmentSlot();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActivatableWidget_EquipmentSlot Function OnInventoryChangedHandler ******
struct Z_Construct_UFunction_UActivatableWidget_EquipmentSlot_OnInventoryChangedHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_EquipmentSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidget_EquipmentSlot_OnInventoryChangedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActivatableWidget_EquipmentSlot, nullptr, "OnInventoryChangedHandler", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_EquipmentSlot_OnInventoryChangedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActivatableWidget_EquipmentSlot_OnInventoryChangedHandler_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UActivatableWidget_EquipmentSlot_OnInventoryChangedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActivatableWidget_EquipmentSlot_OnInventoryChangedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActivatableWidget_EquipmentSlot::execOnInventoryChangedHandler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInventoryChangedHandler();
	P_NATIVE_END;
}
// ********** End Class UActivatableWidget_EquipmentSlot Function OnInventoryChangedHandler ********

// ********** Begin Class UActivatableWidget_EquipmentSlot *****************************************
void UActivatableWidget_EquipmentSlot::StaticRegisterNativesUActivatableWidget_EquipmentSlot()
{
	UClass* Class = UActivatableWidget_EquipmentSlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnInventoryChangedHandler", &UActivatableWidget_EquipmentSlot::execOnInventoryChangedHandler },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActivatableWidget_EquipmentSlot;
UClass* UActivatableWidget_EquipmentSlot::GetPrivateStaticClass()
{
	using TClass = UActivatableWidget_EquipmentSlot;
	if (!Z_Registration_Info_UClass_UActivatableWidget_EquipmentSlot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActivatableWidget_EquipmentSlot"),
			Z_Registration_Info_UClass_UActivatableWidget_EquipmentSlot.InnerSingleton,
			StaticRegisterNativesUActivatableWidget_EquipmentSlot,
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
	return Z_Registration_Info_UClass_UActivatableWidget_EquipmentSlot.InnerSingleton;
}
UClass* Z_Construct_UClass_UActivatableWidget_EquipmentSlot_NoRegister()
{
	return UActivatableWidget_EquipmentSlot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CommonActivatableWidget/ActivatableWidget_EquipmentSlot.h" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_EquipmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_Picture_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_EquipmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_Frame_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_EquipmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_Border_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_EquipmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlot_MetaData[] = {
		{ "Category", "ActivatableWidget_EquipmentSlot" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_EquipmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragVisualClass_MetaData[] = {
		{ "Category", "ActivatableWidget_EquipmentSlot" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_EquipmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_EquipmentSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_Picture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border_Frame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border_Border;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipmentSlot;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DragVisualClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActivatableWidget_EquipmentSlot_OnInventoryChangedHandler, "OnInventoryChangedHandler" }, // 3447143994
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivatableWidget_EquipmentSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::NewProp_Image_Picture = { "Image_Picture", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_EquipmentSlot, Image_Picture), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_Picture_MetaData), NewProp_Image_Picture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::NewProp_Border_Frame = { "Border_Frame", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_EquipmentSlot, Border_Frame), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_Frame_MetaData), NewProp_Border_Frame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::NewProp_Border_Border = { "Border_Border", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_EquipmentSlot, Border_Border), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_Border_MetaData), NewProp_Border_Border_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::NewProp_EquipmentSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::NewProp_EquipmentSlot = { "EquipmentSlot", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_EquipmentSlot, EquipmentSlot), Z_Construct_UEnum_PUBG_EEquipmentSlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentSlot_MetaData), NewProp_EquipmentSlot_MetaData) }; // 218928670
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::NewProp_DragVisualClass = { "DragVisualClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_EquipmentSlot, DragVisualClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_DragVisual_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragVisualClass_MetaData), NewProp_DragVisualClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::NewProp_CachedComp = { "CachedComp", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_EquipmentSlot, CachedComp), Z_Construct_UClass_UBackpackManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedComp_MetaData), NewProp_CachedComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::NewProp_Image_Picture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::NewProp_Border_Frame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::NewProp_Border_Border,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::NewProp_EquipmentSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::NewProp_EquipmentSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::NewProp_DragVisualClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::NewProp_CachedComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::ClassParams = {
	&UActivatableWidget_EquipmentSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActivatableWidget_EquipmentSlot()
{
	if (!Z_Registration_Info_UClass_UActivatableWidget_EquipmentSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActivatableWidget_EquipmentSlot.OuterSingleton, Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActivatableWidget_EquipmentSlot.OuterSingleton;
}
UActivatableWidget_EquipmentSlot::UActivatableWidget_EquipmentSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActivatableWidget_EquipmentSlot);
UActivatableWidget_EquipmentSlot::~UActivatableWidget_EquipmentSlot() {}
// ********** End Class UActivatableWidget_EquipmentSlot *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_EquipmentSlot_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActivatableWidget_EquipmentSlot, UActivatableWidget_EquipmentSlot::StaticClass, TEXT("UActivatableWidget_EquipmentSlot"), &Z_Registration_Info_UClass_UActivatableWidget_EquipmentSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActivatableWidget_EquipmentSlot), 2308545208U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_EquipmentSlot_h__Script_PUBG_3583299335(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_EquipmentSlot_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_EquipmentSlot_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
