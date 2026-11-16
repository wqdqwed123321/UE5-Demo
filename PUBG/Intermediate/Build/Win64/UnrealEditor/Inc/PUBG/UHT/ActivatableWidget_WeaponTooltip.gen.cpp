// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActivatableWidget_WeaponTooltip() {}

// ********** Begin Cross Module References ********************************************************
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_WeaponTooltip();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_WeaponTooltip_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBaseCommonActivatableWidget();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActivatableWidget_WeaponTooltip *****************************************
void UActivatableWidget_WeaponTooltip::StaticRegisterNativesUActivatableWidget_WeaponTooltip()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActivatableWidget_WeaponTooltip;
UClass* UActivatableWidget_WeaponTooltip::GetPrivateStaticClass()
{
	using TClass = UActivatableWidget_WeaponTooltip;
	if (!Z_Registration_Info_UClass_UActivatableWidget_WeaponTooltip.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActivatableWidget_WeaponTooltip"),
			Z_Registration_Info_UClass_UActivatableWidget_WeaponTooltip.InnerSingleton,
			StaticRegisterNativesUActivatableWidget_WeaponTooltip,
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
	return Z_Registration_Info_UClass_UActivatableWidget_WeaponTooltip.InnerSingleton;
}
UClass* Z_Construct_UClass_UActivatableWidget_WeaponTooltip_NoRegister()
{
	return UActivatableWidget_WeaponTooltip::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_Item_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_ItemName_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_ItemType_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_ItemPicture_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_ItemInfo_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Weight_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_Weapon_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_WeaponName_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_WeaponSlot_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_WeaponBulletName_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_87_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_WeaponClipMaxNumber_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_WeaponPicture_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_75_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_1_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_2_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_WeaponInfo_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_ItemName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_ItemType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_ItemPicture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_ItemInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Weight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border_Weapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_WeaponName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_WeaponSlot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_WeaponBulletName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_87;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_WeaponClipMaxNumber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_WeaponPicture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_75;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_WeaponInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivatableWidget_WeaponTooltip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_Border_Item = { "Border_Item", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponTooltip, Border_Item), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_Item_MetaData), NewProp_Border_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_TextBlock_ItemName = { "TextBlock_ItemName", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponTooltip, TextBlock_ItemName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_ItemName_MetaData), NewProp_TextBlock_ItemName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_TextBlock_ItemType = { "TextBlock_ItemType", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponTooltip, TextBlock_ItemType), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_ItemType_MetaData), NewProp_TextBlock_ItemType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_Image_ItemPicture = { "Image_ItemPicture", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponTooltip, Image_ItemPicture), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_ItemPicture_MetaData), NewProp_Image_ItemPicture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_TextBlock_ItemInfo = { "TextBlock_ItemInfo", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponTooltip, TextBlock_ItemInfo), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_ItemInfo_MetaData), NewProp_TextBlock_ItemInfo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_TextBlock_Weight = { "TextBlock_Weight", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponTooltip, TextBlock_Weight), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Weight_MetaData), NewProp_TextBlock_Weight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_Border_Weapon = { "Border_Weapon", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponTooltip, Border_Weapon), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_Weapon_MetaData), NewProp_Border_Weapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_TextBlock_WeaponName = { "TextBlock_WeaponName", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponTooltip, TextBlock_WeaponName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_WeaponName_MetaData), NewProp_TextBlock_WeaponName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_TextBlock_WeaponSlot = { "TextBlock_WeaponSlot", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponTooltip, TextBlock_WeaponSlot), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_WeaponSlot_MetaData), NewProp_TextBlock_WeaponSlot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_TextBlock_WeaponBulletName = { "TextBlock_WeaponBulletName", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponTooltip, TextBlock_WeaponBulletName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_WeaponBulletName_MetaData), NewProp_TextBlock_WeaponBulletName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_Image_87 = { "Image_87", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponTooltip, Image_87), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_87_MetaData), NewProp_Image_87_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_TextBlock_WeaponClipMaxNumber = { "TextBlock_WeaponClipMaxNumber", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponTooltip, TextBlock_WeaponClipMaxNumber), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_WeaponClipMaxNumber_MetaData), NewProp_TextBlock_WeaponClipMaxNumber_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_Image_WeaponPicture = { "Image_WeaponPicture", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponTooltip, Image_WeaponPicture), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_WeaponPicture_MetaData), NewProp_Image_WeaponPicture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_ProgressBar_75 = { "ProgressBar_75", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponTooltip, ProgressBar_75), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_75_MetaData), NewProp_ProgressBar_75_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_ProgressBar = { "ProgressBar", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponTooltip, ProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_MetaData), NewProp_ProgressBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_ProgressBar_1 = { "ProgressBar_1", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponTooltip, ProgressBar_1), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_1_MetaData), NewProp_ProgressBar_1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_ProgressBar_2 = { "ProgressBar_2", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponTooltip, ProgressBar_2), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_2_MetaData), NewProp_ProgressBar_2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_TextBlock_WeaponInfo = { "TextBlock_WeaponInfo", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_WeaponTooltip, TextBlock_WeaponInfo), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_WeaponInfo_MetaData), NewProp_TextBlock_WeaponInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_Border_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_TextBlock_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_TextBlock_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_Image_ItemPicture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_TextBlock_ItemInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_TextBlock_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_Border_Weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_TextBlock_WeaponName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_TextBlock_WeaponSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_TextBlock_WeaponBulletName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_Image_87,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_TextBlock_WeaponClipMaxNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_Image_WeaponPicture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_ProgressBar_75,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_ProgressBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_ProgressBar_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_ProgressBar_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::NewProp_TextBlock_WeaponInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::ClassParams = {
	&UActivatableWidget_WeaponTooltip::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::Class_MetaDataParams), Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActivatableWidget_WeaponTooltip()
{
	if (!Z_Registration_Info_UClass_UActivatableWidget_WeaponTooltip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActivatableWidget_WeaponTooltip.OuterSingleton, Z_Construct_UClass_UActivatableWidget_WeaponTooltip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActivatableWidget_WeaponTooltip.OuterSingleton;
}
UActivatableWidget_WeaponTooltip::UActivatableWidget_WeaponTooltip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActivatableWidget_WeaponTooltip);
UActivatableWidget_WeaponTooltip::~UActivatableWidget_WeaponTooltip() {}
// ********** End Class UActivatableWidget_WeaponTooltip *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_WeaponTooltip_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActivatableWidget_WeaponTooltip, UActivatableWidget_WeaponTooltip::StaticClass, TEXT("UActivatableWidget_WeaponTooltip"), &Z_Registration_Info_UClass_UActivatableWidget_WeaponTooltip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActivatableWidget_WeaponTooltip), 2860136688U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_WeaponTooltip_h__Script_PUBG_2088003789(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_WeaponTooltip_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_WeaponTooltip_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
