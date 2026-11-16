// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUserWidget/CommonUserWidget_BackpackItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCommonUserWidget_BackpackItem() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UCommonUserWidget_BackpackItem();
PUBG_API UClass* Z_Construct_UClass_UCommonUserWidget_BackpackItem_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UUserWidget_DragVisual_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCommonUserWidget_BackpackItem *******************************************
void UCommonUserWidget_BackpackItem::StaticRegisterNativesUCommonUserWidget_BackpackItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCommonUserWidget_BackpackItem;
UClass* UCommonUserWidget_BackpackItem::GetPrivateStaticClass()
{
	using TClass = UCommonUserWidget_BackpackItem;
	if (!Z_Registration_Info_UClass_UCommonUserWidget_BackpackItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CommonUserWidget_BackpackItem"),
			Z_Registration_Info_UClass_UCommonUserWidget_BackpackItem.InnerSingleton,
			StaticRegisterNativesUCommonUserWidget_BackpackItem,
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
	return Z_Registration_Info_UClass_UCommonUserWidget_BackpackItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UCommonUserWidget_BackpackItem_NoRegister()
{
	return UCommonUserWidget_BackpackItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CommonUserWidget/CommonUserWidget_BackpackItem.h" },
		{ "ModuleRelativePath", "Public/CommonUserWidget/CommonUserWidget_BackpackItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_Picture_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonUserWidget/CommonUserWidget_BackpackItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Name_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonUserWidget/CommonUserWidget_BackpackItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Number_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonUserWidget/CommonUserWidget_BackpackItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_Item_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonUserWidget/CommonUserWidget_BackpackItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalBox_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonUserWidget/CommonUserWidget_BackpackItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedListItemObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonUserWidget/CommonUserWidget_BackpackItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragVisualClass_MetaData[] = {
		{ "Category", "CommonUserWidget_BackpackItem" },
		{ "ModuleRelativePath", "Public/CommonUserWidget/CommonUserWidget_BackpackItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_Picture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Number;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HorizontalBox_Image;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedListItemObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DragVisualClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUserWidget_BackpackItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::NewProp_Image_Picture = { "Image_Picture", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonUserWidget_BackpackItem, Image_Picture), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_Picture_MetaData), NewProp_Image_Picture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::NewProp_TextBlock_Name = { "TextBlock_Name", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonUserWidget_BackpackItem, TextBlock_Name), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Name_MetaData), NewProp_TextBlock_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::NewProp_TextBlock_Number = { "TextBlock_Number", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonUserWidget_BackpackItem, TextBlock_Number), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Number_MetaData), NewProp_TextBlock_Number_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::NewProp_Border_Item = { "Border_Item", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonUserWidget_BackpackItem, Border_Item), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_Item_MetaData), NewProp_Border_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::NewProp_HorizontalBox_Image = { "HorizontalBox_Image", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonUserWidget_BackpackItem, HorizontalBox_Image), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalBox_Image_MetaData), NewProp_HorizontalBox_Image_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::NewProp_CachedListItemObject = { "CachedListItemObject", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonUserWidget_BackpackItem, CachedListItemObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedListItemObject_MetaData), NewProp_CachedListItemObject_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::NewProp_DragVisualClass = { "DragVisualClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonUserWidget_BackpackItem, DragVisualClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_DragVisual_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragVisualClass_MetaData), NewProp_DragVisualClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::NewProp_Image_Picture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::NewProp_TextBlock_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::NewProp_TextBlock_Number,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::NewProp_Border_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::NewProp_HorizontalBox_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::NewProp_CachedListItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::NewProp_DragVisualClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UCommonUserWidget_BackpackItem, IUserObjectListEntry), false },  // 1900202470
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::ClassParams = {
	&UCommonUserWidget_BackpackItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCommonUserWidget_BackpackItem()
{
	if (!Z_Registration_Info_UClass_UCommonUserWidget_BackpackItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonUserWidget_BackpackItem.OuterSingleton, Z_Construct_UClass_UCommonUserWidget_BackpackItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCommonUserWidget_BackpackItem.OuterSingleton;
}
UCommonUserWidget_BackpackItem::UCommonUserWidget_BackpackItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUserWidget_BackpackItem);
UCommonUserWidget_BackpackItem::~UCommonUserWidget_BackpackItem() {}
// ********** End Class UCommonUserWidget_BackpackItem *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonUserWidget_CommonUserWidget_BackpackItem_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCommonUserWidget_BackpackItem, UCommonUserWidget_BackpackItem::StaticClass, TEXT("UCommonUserWidget_BackpackItem"), &Z_Registration_Info_UClass_UCommonUserWidget_BackpackItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonUserWidget_BackpackItem), 1113217265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonUserWidget_CommonUserWidget_BackpackItem_h__Script_PUBG_4141323701(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonUserWidget_CommonUserWidget_BackpackItem_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonUserWidget_CommonUserWidget_BackpackItem_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
