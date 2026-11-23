// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonActivatableWidget/ActivatableWidget_WeaponDetail.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActivatableWidget_WeaponDetail() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
PUBG_API UClass* Z_Construct_UClass_AWeaponPreview_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_AttachmentSlot_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_WeaponDetail();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_WeaponDetail_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_WeaponTooltip_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_Weapon_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemInstance_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackManagerComponent_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBaseCommonActivatableWidget();
PUBG_API UClass* Z_Construct_UClass_UUserWidget_DragVisual_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActivatableWidget_WeaponDetail Function OnInventoryChangedHandler *******
struct Z_Construct_UFunction_UActivatableWidget_WeaponDetail_OnInventoryChangedHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidget_WeaponDetail_OnInventoryChangedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActivatableWidget_WeaponDetail, nullptr, "OnInventoryChangedHandler", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_WeaponDetail_OnInventoryChangedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActivatableWidget_WeaponDetail_OnInventoryChangedHandler_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UActivatableWidget_WeaponDetail_OnInventoryChangedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActivatableWidget_WeaponDetail_OnInventoryChangedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActivatableWidget_WeaponDetail::execOnInventoryChangedHandler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInventoryChangedHandler();
	P_NATIVE_END;
}
// ********** End Class UActivatableWidget_WeaponDetail Function OnInventoryChangedHandler *********

// ********** Begin Class UActivatableWidget_WeaponDetail ******************************************
void UActivatableWidget_WeaponDetail::StaticRegisterNativesUActivatableWidget_WeaponDetail()
{
	UClass* Class = UActivatableWidget_WeaponDetail::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnInventoryChangedHandler", &UActivatableWidget_WeaponDetail::execOnInventoryChangedHandler },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActivatableWidget_WeaponDetail;
UClass* UActivatableWidget_WeaponDetail::GetPrivateStaticClass()
{
	using TClass = UActivatableWidget_WeaponDetail;
	if (!Z_Registration_Info_UClass_UActivatableWidget_WeaponDetail.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActivatableWidget_WeaponDetail"),
			Z_Registration_Info_UClass_UActivatableWidget_WeaponDetail.InnerSingleton,
			StaticRegisterNativesUActivatableWidget_WeaponDetail,
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
	return Z_Registration_Info_UClass_UActivatableWidget_WeaponDetail.InnerSingleton;
}
UClass* Z_Construct_UClass_UActivatableWidget_WeaponDetail_NoRegister()
{
	return UActivatableWidget_WeaponDetail::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_Gun_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Slot_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_WeaponName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_BulletIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_BulletType_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_ClipNumber_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_BackpackBulletNumber_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_WeaponRender_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_PistolItem_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_WeaponPart_Scope_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_WeaponPart_RightScope_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_WeaponPart_Muzzle_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_WeaponPart_Grip_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_WeaponPart_Clip_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_WeaponPart_Stock_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "Category", "ActivatableWidget_WeaponDetail" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragVisualClass_MetaData[] = {
		{ "Category", "ActivatableWidget_WeaponDetail" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewActorClass_MetaData[] = {
		{ "Category", "ActivatableWidget_WeaponDetail" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetAsset_MetaData[] = {
		{ "Category", "ActivatableWidget_WeaponDetail" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterialBase_MetaData[] = {
		{ "Category", "ActivatableWidget_WeaponDetail" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedWeaponInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedWeaponData_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TooltipClass_MetaData[] = {
		{ "Category", "ActivatableWidget_WeaponDetail" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTooltip_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponDetail.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox_Gun;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_WeaponName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_BulletIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_BulletType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_ClipNumber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_BackpackBulletNumber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_WeaponRender;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border_PistolItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_WeaponPart_Scope;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_WeaponPart_RightScope;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_WeaponPart_Muzzle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_WeaponPart_Grip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_WeaponPart_Clip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_WeaponPart_Stock;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DragVisualClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PreviewActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTargetAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterialBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedWeaponInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedWeaponData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TooltipClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveTooltip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActivatableWidget_WeaponDetail_OnInventoryChangedHandler, "OnInventoryChangedHandler" }, // 3252216009
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivatableWidget_WeaponDetail>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_SizeBox_Gun = { "SizeBox_Gun", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, SizeBox_Gun), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_Gun_MetaData), NewProp_SizeBox_Gun_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_TextBlock_Slot = { "TextBlock_Slot", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, TextBlock_Slot), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Slot_MetaData), NewProp_TextBlock_Slot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_TextBlock_WeaponName = { "TextBlock_WeaponName", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, TextBlock_WeaponName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_WeaponName_MetaData), NewProp_TextBlock_WeaponName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_Image_BulletIcon = { "Image_BulletIcon", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, Image_BulletIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_BulletIcon_MetaData), NewProp_Image_BulletIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_TextBlock_BulletType = { "TextBlock_BulletType", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, TextBlock_BulletType), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_BulletType_MetaData), NewProp_TextBlock_BulletType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_TextBlock_ClipNumber = { "TextBlock_ClipNumber", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, TextBlock_ClipNumber), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_ClipNumber_MetaData), NewProp_TextBlock_ClipNumber_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_TextBlock_BackpackBulletNumber = { "TextBlock_BackpackBulletNumber", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, TextBlock_BackpackBulletNumber), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_BackpackBulletNumber_MetaData), NewProp_TextBlock_BackpackBulletNumber_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_Image_WeaponRender = { "Image_WeaponRender", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, Image_WeaponRender), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_WeaponRender_MetaData), NewProp_Image_WeaponRender_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_Border_PistolItem = { "Border_PistolItem", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, Border_PistolItem), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_PistolItem_MetaData), NewProp_Border_PistolItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_WB_WeaponPart_Scope = { "WB_WeaponPart_Scope", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, WB_WeaponPart_Scope), Z_Construct_UClass_UActivatableWidget_AttachmentSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_WeaponPart_Scope_MetaData), NewProp_WB_WeaponPart_Scope_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_WB_WeaponPart_RightScope = { "WB_WeaponPart_RightScope", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, WB_WeaponPart_RightScope), Z_Construct_UClass_UActivatableWidget_AttachmentSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_WeaponPart_RightScope_MetaData), NewProp_WB_WeaponPart_RightScope_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_WB_WeaponPart_Muzzle = { "WB_WeaponPart_Muzzle", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, WB_WeaponPart_Muzzle), Z_Construct_UClass_UActivatableWidget_AttachmentSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_WeaponPart_Muzzle_MetaData), NewProp_WB_WeaponPart_Muzzle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_WB_WeaponPart_Grip = { "WB_WeaponPart_Grip", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, WB_WeaponPart_Grip), Z_Construct_UClass_UActivatableWidget_AttachmentSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_WeaponPart_Grip_MetaData), NewProp_WB_WeaponPart_Grip_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_WB_WeaponPart_Clip = { "WB_WeaponPart_Clip", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, WB_WeaponPart_Clip), Z_Construct_UClass_UActivatableWidget_AttachmentSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_WeaponPart_Clip_MetaData), NewProp_WB_WeaponPart_Clip_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_WB_WeaponPart_Stock = { "WB_WeaponPart_Stock", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, WB_WeaponPart_Stock), Z_Construct_UClass_UActivatableWidget_AttachmentSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_WeaponPart_Stock_MetaData), NewProp_WB_WeaponPart_Stock_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_DragVisualClass = { "DragVisualClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, DragVisualClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_DragVisual_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragVisualClass_MetaData), NewProp_DragVisualClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_PreviewActorClass = { "PreviewActorClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, PreviewActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponPreview_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewActorClass_MetaData), NewProp_PreviewActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_RenderTargetAsset = { "RenderTargetAsset", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, RenderTargetAsset), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetAsset_MetaData), NewProp_RenderTargetAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_PreviewMaterialBase = { "PreviewMaterialBase", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, PreviewMaterialBase), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMaterialBase_MetaData), NewProp_PreviewMaterialBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_CachedWeaponInstance = { "CachedWeaponInstance", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, CachedWeaponInstance), Z_Construct_UClass_UBackpackItemInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedWeaponInstance_MetaData), NewProp_CachedWeaponInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_CachedWeaponData = { "CachedWeaponData", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, CachedWeaponData), Z_Construct_UClass_UBackpackItemFragment_Weapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedWeaponData_MetaData), NewProp_CachedWeaponData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_CachedComp = { "CachedComp", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, CachedComp), Z_Construct_UClass_UBackpackManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedComp_MetaData), NewProp_CachedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_PreviewActor = { "PreviewActor", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, PreviewActor), Z_Construct_UClass_AWeaponPreview_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewActor_MetaData), NewProp_PreviewActor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_TooltipClass = { "TooltipClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, TooltipClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActivatableWidget_WeaponTooltip_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipClass_MetaData), NewProp_TooltipClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_ActiveTooltip = { "ActiveTooltip", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponDetail, ActiveTooltip), Z_Construct_UClass_UActivatableWidget_WeaponTooltip_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveTooltip_MetaData), NewProp_ActiveTooltip_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_SizeBox_Gun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_TextBlock_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_TextBlock_WeaponName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_Image_BulletIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_TextBlock_BulletType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_TextBlock_ClipNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_TextBlock_BackpackBulletNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_Image_WeaponRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_Border_PistolItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_WB_WeaponPart_Scope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_WB_WeaponPart_RightScope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_WB_WeaponPart_Muzzle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_WB_WeaponPart_Grip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_WB_WeaponPart_Clip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_WB_WeaponPart_Stock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_DragVisualClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_PreviewActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_RenderTargetAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_PreviewMaterialBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_CachedWeaponInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_CachedWeaponData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_CachedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_PreviewActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_TooltipClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::NewProp_ActiveTooltip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::ClassParams = {
	&UActivatableWidget_WeaponDetail::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::Class_MetaDataParams), Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActivatableWidget_WeaponDetail()
{
	if (!Z_Registration_Info_UClass_UActivatableWidget_WeaponDetail.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActivatableWidget_WeaponDetail.OuterSingleton, Z_Construct_UClass_UActivatableWidget_WeaponDetail_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActivatableWidget_WeaponDetail.OuterSingleton;
}
UActivatableWidget_WeaponDetail::UActivatableWidget_WeaponDetail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActivatableWidget_WeaponDetail);
UActivatableWidget_WeaponDetail::~UActivatableWidget_WeaponDetail() {}
// ********** End Class UActivatableWidget_WeaponDetail ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_WeaponDetail_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActivatableWidget_WeaponDetail, UActivatableWidget_WeaponDetail::StaticClass, TEXT("UActivatableWidget_WeaponDetail"), &Z_Registration_Info_UClass_UActivatableWidget_WeaponDetail, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActivatableWidget_WeaponDetail), 3233797029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_WeaponDetail_h__Script_PUBG_3601712262(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_WeaponDetail_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_WeaponDetail_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
