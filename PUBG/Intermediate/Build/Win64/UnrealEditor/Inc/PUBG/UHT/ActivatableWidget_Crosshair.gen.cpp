// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonActivatableWidget/ActivatableWidget_Crosshair.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActivatableWidget_Crosshair() {}

// ********** Begin Cross Module References ********************************************************
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_Crosshair();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_Crosshair_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBaseCommonActivatableWidget();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActivatableWidget_Crosshair *********************************************
void UActivatableWidget_Crosshair::StaticRegisterNativesUActivatableWidget_Crosshair()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActivatableWidget_Crosshair;
UClass* UActivatableWidget_Crosshair::GetPrivateStaticClass()
{
	using TClass = UActivatableWidget_Crosshair;
	if (!Z_Registration_Info_UClass_UActivatableWidget_Crosshair.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActivatableWidget_Crosshair"),
			Z_Registration_Info_UClass_UActivatableWidget_Crosshair.InnerSingleton,
			StaticRegisterNativesUActivatableWidget_Crosshair,
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
	return Z_Registration_Info_UClass_UActivatableWidget_Crosshair.InnerSingleton;
}
UClass* Z_Construct_UClass_UActivatableWidget_Crosshair_NoRegister()
{
	return UActivatableWidget_Crosshair::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActivatableWidget_Crosshair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CommonActivatableWidget/ActivatableWidget_Crosshair.h" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Crosshair.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_CrosshairTop_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Crosshair.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_CrosshairBottom_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Crosshair.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_CrosshairLeft_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Crosshair.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_CrosshairRight_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Crosshair.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_CrosshairCenter_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Crosshair.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseOffset_MetaData[] = {
		{ "Category", "ActivatableWidget_Crosshair" },
		{ "DisplayName", "\xe5\x9f\xba\xe7\xa1\x80\xe9\x97\xb4\xe8\xb7\x9d(\xe5\x83\x8f\xe7\xb4\xa0)" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Crosshair.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpandSpeed_MetaData[] = {
		{ "Category", "ActivatableWidget_Crosshair" },
		{ "DisplayName", "\xe5\xbc\xb9\xe5\xbc\x80\xe9\x80\x9f\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Crosshair.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShrinkSpeed_MetaData[] = {
		{ "Category", "ActivatableWidget_Crosshair" },
		{ "DisplayName", "\xe6\x94\xb6\xe6\x8b\xa2\xe9\x80\x9f\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Crosshair.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelsPerDegree_MetaData[] = {
		{ "Category", "ActivatableWidget_Crosshair" },
		{ "DisplayName", "\xe6\xaf\x8f\xe5\xba\xa6\xe5\xaf\xb9\xe5\xba\x94\xe5\x83\x8f\xe7\xb4\xa0" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Crosshair.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceViewportHeight_MetaData[] = {
		{ "Category", "ActivatableWidget_Crosshair" },
		{ "DisplayName", "\xe5\x8f\x82\xe8\x80\x83\xe5\x88\x86\xe8\xbe\xa8\xe7\x8e\x87\xe9\xab\x98\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Crosshair.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_CrosshairTop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_CrosshairBottom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_CrosshairLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_CrosshairRight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_CrosshairCenter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpandSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShrinkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelsPerDegree;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReferenceViewportHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivatableWidget_Crosshair>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_Image_CrosshairTop = { "Image_CrosshairTop", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Crosshair, Image_CrosshairTop), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_CrosshairTop_MetaData), NewProp_Image_CrosshairTop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_Image_CrosshairBottom = { "Image_CrosshairBottom", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Crosshair, Image_CrosshairBottom), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_CrosshairBottom_MetaData), NewProp_Image_CrosshairBottom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_Image_CrosshairLeft = { "Image_CrosshairLeft", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Crosshair, Image_CrosshairLeft), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_CrosshairLeft_MetaData), NewProp_Image_CrosshairLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_Image_CrosshairRight = { "Image_CrosshairRight", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Crosshair, Image_CrosshairRight), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_CrosshairRight_MetaData), NewProp_Image_CrosshairRight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_Image_CrosshairCenter = { "Image_CrosshairCenter", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Crosshair, Image_CrosshairCenter), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_CrosshairCenter_MetaData), NewProp_Image_CrosshairCenter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_BaseOffset = { "BaseOffset", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Crosshair, BaseOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseOffset_MetaData), NewProp_BaseOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_ExpandSpeed = { "ExpandSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Crosshair, ExpandSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpandSpeed_MetaData), NewProp_ExpandSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_ShrinkSpeed = { "ShrinkSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Crosshair, ShrinkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShrinkSpeed_MetaData), NewProp_ShrinkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_PixelsPerDegree = { "PixelsPerDegree", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Crosshair, PixelsPerDegree), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelsPerDegree_MetaData), NewProp_PixelsPerDegree_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_ReferenceViewportHeight = { "ReferenceViewportHeight", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Crosshair, ReferenceViewportHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceViewportHeight_MetaData), NewProp_ReferenceViewportHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_Image_CrosshairTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_Image_CrosshairBottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_Image_CrosshairLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_Image_CrosshairRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_Image_CrosshairCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_BaseOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_ExpandSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_ShrinkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_PixelsPerDegree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::NewProp_ReferenceViewportHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::ClassParams = {
	&UActivatableWidget_Crosshair::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::Class_MetaDataParams), Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActivatableWidget_Crosshair()
{
	if (!Z_Registration_Info_UClass_UActivatableWidget_Crosshair.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActivatableWidget_Crosshair.OuterSingleton, Z_Construct_UClass_UActivatableWidget_Crosshair_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActivatableWidget_Crosshair.OuterSingleton;
}
UActivatableWidget_Crosshair::UActivatableWidget_Crosshair(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActivatableWidget_Crosshair);
UActivatableWidget_Crosshair::~UActivatableWidget_Crosshair() {}
// ********** End Class UActivatableWidget_Crosshair ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_Crosshair_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActivatableWidget_Crosshair, UActivatableWidget_Crosshair::StaticClass, TEXT("UActivatableWidget_Crosshair"), &Z_Registration_Info_UClass_UActivatableWidget_Crosshair, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActivatableWidget_Crosshair), 3171824814U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_Crosshair_h__Script_PUBG_1189733776(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_Crosshair_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_Crosshair_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
