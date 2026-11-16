// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonActivatableWidget/ActivatableWidget_AttachmentSlot.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActivatableWidget_AttachmentSlot() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_AttachmentSlot();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_AttachmentSlot_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemInstance_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBaseCommonActivatableWidget();
PUBG_API UClass* Z_Construct_UClass_UUserWidget_DragVisual_NoRegister();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EAttachmentSlot();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActivatableWidget_AttachmentSlot ****************************************
void UActivatableWidget_AttachmentSlot::StaticRegisterNativesUActivatableWidget_AttachmentSlot()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActivatableWidget_AttachmentSlot;
UClass* UActivatableWidget_AttachmentSlot::GetPrivateStaticClass()
{
	using TClass = UActivatableWidget_AttachmentSlot;
	if (!Z_Registration_Info_UClass_UActivatableWidget_AttachmentSlot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActivatableWidget_AttachmentSlot"),
			Z_Registration_Info_UClass_UActivatableWidget_AttachmentSlot.InnerSingleton,
			StaticRegisterNativesUActivatableWidget_AttachmentSlot,
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
	return Z_Registration_Info_UClass_UActivatableWidget_AttachmentSlot.InnerSingleton;
}
UClass* Z_Construct_UClass_UActivatableWidget_AttachmentSlot_NoRegister()
{
	return UActivatableWidget_AttachmentSlot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CommonActivatableWidget/ActivatableWidget_AttachmentSlot.h" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_AttachmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_PartPicture_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_AttachmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_Border_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_AttachmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentSlot_MetaData[] = {
		{ "Category", "ActivatableWidget_AttachmentSlot" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_AttachmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragVisualClass_MetaData[] = {
		{ "Category", "ActivatableWidget_AttachmentSlot" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_AttachmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_AttachmentSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_PartPicture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border_Border;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttachmentSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachmentSlot;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DragVisualClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivatableWidget_AttachmentSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::NewProp_Image_PartPicture = { "Image_PartPicture", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_AttachmentSlot, Image_PartPicture), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_PartPicture_MetaData), NewProp_Image_PartPicture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::NewProp_Border_Border = { "Border_Border", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_AttachmentSlot, Border_Border), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_Border_MetaData), NewProp_Border_Border_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::NewProp_AttachmentSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::NewProp_AttachmentSlot = { "AttachmentSlot", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_AttachmentSlot, AttachmentSlot), Z_Construct_UEnum_PUBG_EAttachmentSlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentSlot_MetaData), NewProp_AttachmentSlot_MetaData) }; // 1859959187
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::NewProp_DragVisualClass = { "DragVisualClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_AttachmentSlot, DragVisualClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_DragVisual_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragVisualClass_MetaData), NewProp_DragVisualClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::NewProp_CachedWeapon = { "CachedWeapon", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_AttachmentSlot, CachedWeapon), Z_Construct_UClass_UBackpackItemInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedWeapon_MetaData), NewProp_CachedWeapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::NewProp_Image_PartPicture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::NewProp_Border_Border,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::NewProp_AttachmentSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::NewProp_AttachmentSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::NewProp_DragVisualClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::NewProp_CachedWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::ClassParams = {
	&UActivatableWidget_AttachmentSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActivatableWidget_AttachmentSlot()
{
	if (!Z_Registration_Info_UClass_UActivatableWidget_AttachmentSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActivatableWidget_AttachmentSlot.OuterSingleton, Z_Construct_UClass_UActivatableWidget_AttachmentSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActivatableWidget_AttachmentSlot.OuterSingleton;
}
UActivatableWidget_AttachmentSlot::UActivatableWidget_AttachmentSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActivatableWidget_AttachmentSlot);
UActivatableWidget_AttachmentSlot::~UActivatableWidget_AttachmentSlot() {}
// ********** End Class UActivatableWidget_AttachmentSlot ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_AttachmentSlot_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActivatableWidget_AttachmentSlot, UActivatableWidget_AttachmentSlot::StaticClass, TEXT("UActivatableWidget_AttachmentSlot"), &Z_Registration_Info_UClass_UActivatableWidget_AttachmentSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActivatableWidget_AttachmentSlot), 2595578431U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_AttachmentSlot_h__Script_PUBG_604000858(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_AttachmentSlot_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_AttachmentSlot_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
