// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonActivatableWidget/ActivatableWidget_Compass.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActivatableWidget_Compass() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_Compass();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_Compass_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBaseCommonActivatableWidget();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActivatableWidget_Compass ***********************************************
void UActivatableWidget_Compass::StaticRegisterNativesUActivatableWidget_Compass()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActivatableWidget_Compass;
UClass* UActivatableWidget_Compass::GetPrivateStaticClass()
{
	using TClass = UActivatableWidget_Compass;
	if (!Z_Registration_Info_UClass_UActivatableWidget_Compass.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActivatableWidget_Compass"),
			Z_Registration_Info_UClass_UActivatableWidget_Compass.InnerSingleton,
			StaticRegisterNativesUActivatableWidget_Compass,
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
	return Z_Registration_Info_UClass_UActivatableWidget_Compass.InnerSingleton;
}
UClass* Z_Construct_UClass_UActivatableWidget_Compass_NoRegister()
{
	return UActivatableWidget_Compass::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActivatableWidget_Compass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CommonActivatableWidget/ActivatableWidget_Compass.h" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Compass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompassStrip_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Compass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterMarker_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Compass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHeadingText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Compass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScrollParamName_MetaData[] = {
		{ "Category", "ActivatableWidget_Compass" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Compass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadingRounding_MetaData[] = {
		{ "Category", "ActivatableWidget_Compass" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Compass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompassYawOffset_MetaData[] = {
		{ "Category", "ActivatableWidget_Compass" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Compass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompassStrip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CenterMarker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentHeadingText;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ScrollParamName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HeadingRounding;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CompassYawOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivatableWidget_Compass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_Compass_Statics::NewProp_CompassStrip = { "CompassStrip", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Compass, CompassStrip), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompassStrip_MetaData), NewProp_CompassStrip_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_Compass_Statics::NewProp_CenterMarker = { "CenterMarker", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Compass, CenterMarker), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterMarker_MetaData), NewProp_CenterMarker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_Compass_Statics::NewProp_CurrentHeadingText = { "CurrentHeadingText", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Compass, CurrentHeadingText), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHeadingText_MetaData), NewProp_CurrentHeadingText_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActivatableWidget_Compass_Statics::NewProp_ScrollParamName = { "ScrollParamName", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Compass, ScrollParamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScrollParamName_MetaData), NewProp_ScrollParamName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UActivatableWidget_Compass_Statics::NewProp_HeadingRounding = { "HeadingRounding", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Compass, HeadingRounding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadingRounding_MetaData), NewProp_HeadingRounding_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActivatableWidget_Compass_Statics::NewProp_CompassYawOffset = { "CompassYawOffset", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Compass, CompassYawOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompassYawOffset_MetaData), NewProp_CompassYawOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivatableWidget_Compass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Compass_Statics::NewProp_CompassStrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Compass_Statics::NewProp_CenterMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Compass_Statics::NewProp_CurrentHeadingText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Compass_Statics::NewProp_ScrollParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Compass_Statics::NewProp_HeadingRounding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Compass_Statics::NewProp_CompassYawOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Compass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActivatableWidget_Compass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Compass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActivatableWidget_Compass_Statics::ClassParams = {
	&UActivatableWidget_Compass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActivatableWidget_Compass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Compass_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Compass_Statics::Class_MetaDataParams), Z_Construct_UClass_UActivatableWidget_Compass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActivatableWidget_Compass()
{
	if (!Z_Registration_Info_UClass_UActivatableWidget_Compass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActivatableWidget_Compass.OuterSingleton, Z_Construct_UClass_UActivatableWidget_Compass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActivatableWidget_Compass.OuterSingleton;
}
UActivatableWidget_Compass::UActivatableWidget_Compass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActivatableWidget_Compass);
UActivatableWidget_Compass::~UActivatableWidget_Compass() {}
// ********** End Class UActivatableWidget_Compass *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_Compass_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActivatableWidget_Compass, UActivatableWidget_Compass::StaticClass, TEXT("UActivatableWidget_Compass"), &Z_Registration_Info_UClass_UActivatableWidget_Compass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActivatableWidget_Compass), 1970006269U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_Compass_h__Script_PUBG_4079969523(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_Compass_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_Compass_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
