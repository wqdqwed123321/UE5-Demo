// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActivatableWidget_ThrowableDetail() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
PUBG_API UClass* Z_Construct_UClass_AWeaponPreview_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_ThrowableDetail();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_ThrowableDetail_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemInstance_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackManagerComponent_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBaseCommonActivatableWidget();
PUBG_API UClass* Z_Construct_UClass_UUserWidget_DragVisual_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActivatableWidget_ThrowableDetail Function OnInventoryChangedHandler ****
struct Z_Construct_UFunction_UActivatableWidget_ThrowableDetail_OnInventoryChangedHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidget_ThrowableDetail_OnInventoryChangedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActivatableWidget_ThrowableDetail, nullptr, "OnInventoryChangedHandler", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_ThrowableDetail_OnInventoryChangedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActivatableWidget_ThrowableDetail_OnInventoryChangedHandler_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UActivatableWidget_ThrowableDetail_OnInventoryChangedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActivatableWidget_ThrowableDetail_OnInventoryChangedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActivatableWidget_ThrowableDetail::execOnInventoryChangedHandler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInventoryChangedHandler();
	P_NATIVE_END;
}
// ********** End Class UActivatableWidget_ThrowableDetail Function OnInventoryChangedHandler ******

// ********** Begin Class UActivatableWidget_ThrowableDetail ***************************************
void UActivatableWidget_ThrowableDetail::StaticRegisterNativesUActivatableWidget_ThrowableDetail()
{
	UClass* Class = UActivatableWidget_ThrowableDetail::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnInventoryChangedHandler", &UActivatableWidget_ThrowableDetail::execOnInventoryChangedHandler },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActivatableWidget_ThrowableDetail;
UClass* UActivatableWidget_ThrowableDetail::GetPrivateStaticClass()
{
	using TClass = UActivatableWidget_ThrowableDetail;
	if (!Z_Registration_Info_UClass_UActivatableWidget_ThrowableDetail.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActivatableWidget_ThrowableDetail"),
			Z_Registration_Info_UClass_UActivatableWidget_ThrowableDetail.InnerSingleton,
			StaticRegisterNativesUActivatableWidget_ThrowableDetail,
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
	return Z_Registration_Info_UClass_UActivatableWidget_ThrowableDetail.InnerSingleton;
}
UClass* Z_Construct_UClass_UActivatableWidget_ThrowableDetail_NoRegister()
{
	return UActivatableWidget_ThrowableDetail::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_WeaponName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Slot_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_Render_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_SpecialWeaponItem_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_SlotBackground_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_SlotFrame_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_BottomLine_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "Category", "ActivatableWidget_ThrowableDetail" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragVisualClass_MetaData[] = {
		{ "Category", "ActivatableWidget_ThrowableDetail" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewActorClass_MetaData[] = {
		{ "Category", "ActivatableWidget_ThrowableDetail" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetAsset_MetaData[] = {
		{ "Category", "ActivatableWidget_ThrowableDetail" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterialBase_MetaData[] = {
		{ "Category", "ActivatableWidget_ThrowableDetail" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedItemInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_WeaponName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_Render;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border_SpecialWeaponItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border_SlotBackground;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border_SlotFrame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_BottomLine;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DragVisualClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PreviewActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTargetAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterialBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedItemInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActivatableWidget_ThrowableDetail_OnInventoryChangedHandler, "OnInventoryChangedHandler" }, // 161234348
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivatableWidget_ThrowableDetail>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_TextBlock_WeaponName = { "TextBlock_WeaponName", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_ThrowableDetail, TextBlock_WeaponName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_WeaponName_MetaData), NewProp_TextBlock_WeaponName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_TextBlock_Slot = { "TextBlock_Slot", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_ThrowableDetail, TextBlock_Slot), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Slot_MetaData), NewProp_TextBlock_Slot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_Image_Render = { "Image_Render", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_ThrowableDetail, Image_Render), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_Render_MetaData), NewProp_Image_Render_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_Border_SpecialWeaponItem = { "Border_SpecialWeaponItem", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_ThrowableDetail, Border_SpecialWeaponItem), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_SpecialWeaponItem_MetaData), NewProp_Border_SpecialWeaponItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_Border_SlotBackground = { "Border_SlotBackground", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_ThrowableDetail, Border_SlotBackground), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_SlotBackground_MetaData), NewProp_Border_SlotBackground_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_Border_SlotFrame = { "Border_SlotFrame", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_ThrowableDetail, Border_SlotFrame), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_SlotFrame_MetaData), NewProp_Border_SlotFrame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_Image_BottomLine = { "Image_BottomLine", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_ThrowableDetail, Image_BottomLine), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_BottomLine_MetaData), NewProp_Image_BottomLine_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_ThrowableDetail, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_DragVisualClass = { "DragVisualClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_ThrowableDetail, DragVisualClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_DragVisual_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragVisualClass_MetaData), NewProp_DragVisualClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_PreviewActorClass = { "PreviewActorClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_ThrowableDetail, PreviewActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponPreview_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewActorClass_MetaData), NewProp_PreviewActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_RenderTargetAsset = { "RenderTargetAsset", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_ThrowableDetail, RenderTargetAsset), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetAsset_MetaData), NewProp_RenderTargetAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_PreviewMaterialBase = { "PreviewMaterialBase", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_ThrowableDetail, PreviewMaterialBase), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMaterialBase_MetaData), NewProp_PreviewMaterialBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_CachedComp = { "CachedComp", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_ThrowableDetail, CachedComp), Z_Construct_UClass_UBackpackManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedComp_MetaData), NewProp_CachedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_CachedItemInstance = { "CachedItemInstance", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_ThrowableDetail, CachedItemInstance), Z_Construct_UClass_UBackpackItemInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedItemInstance_MetaData), NewProp_CachedItemInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_PreviewActor = { "PreviewActor", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_ThrowableDetail, PreviewActor), Z_Construct_UClass_AWeaponPreview_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewActor_MetaData), NewProp_PreviewActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_TextBlock_WeaponName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_TextBlock_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_Image_Render,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_Border_SpecialWeaponItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_Border_SlotBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_Border_SlotFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_Image_BottomLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_DragVisualClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_PreviewActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_RenderTargetAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_PreviewMaterialBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_CachedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_CachedItemInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::NewProp_PreviewActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::ClassParams = {
	&UActivatableWidget_ThrowableDetail::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::Class_MetaDataParams), Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActivatableWidget_ThrowableDetail()
{
	if (!Z_Registration_Info_UClass_UActivatableWidget_ThrowableDetail.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActivatableWidget_ThrowableDetail.OuterSingleton, Z_Construct_UClass_UActivatableWidget_ThrowableDetail_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActivatableWidget_ThrowableDetail.OuterSingleton;
}
UActivatableWidget_ThrowableDetail::UActivatableWidget_ThrowableDetail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActivatableWidget_ThrowableDetail);
UActivatableWidget_ThrowableDetail::~UActivatableWidget_ThrowableDetail() {}
// ********** End Class UActivatableWidget_ThrowableDetail *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_ThrowableDetail_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActivatableWidget_ThrowableDetail, UActivatableWidget_ThrowableDetail::StaticClass, TEXT("UActivatableWidget_ThrowableDetail"), &Z_Registration_Info_UClass_UActivatableWidget_ThrowableDetail, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActivatableWidget_ThrowableDetail), 2442885572U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_ThrowableDetail_h__Script_PUBG_1677497039(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_ThrowableDetail_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_ThrowableDetail_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
