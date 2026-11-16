// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Object/BackpackItemFragment_WhiteIcon.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBackpackItemFragment_WhiteIcon() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_WhiteIcon();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_WhiteIcon_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBackpackItemFragment_WhiteIcon ******************************************
void UBackpackItemFragment_WhiteIcon::StaticRegisterNativesUBackpackItemFragment_WhiteIcon()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBackpackItemFragment_WhiteIcon;
UClass* UBackpackItemFragment_WhiteIcon::GetPrivateStaticClass()
{
	using TClass = UBackpackItemFragment_WhiteIcon;
	if (!Z_Registration_Info_UClass_UBackpackItemFragment_WhiteIcon.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BackpackItemFragment_WhiteIcon"),
			Z_Registration_Info_UClass_UBackpackItemFragment_WhiteIcon.InnerSingleton,
			StaticRegisterNativesUBackpackItemFragment_WhiteIcon,
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
	return Z_Registration_Info_UClass_UBackpackItemFragment_WhiteIcon.InnerSingleton;
}
UClass* Z_Construct_UClass_UBackpackItemFragment_WhiteIcon_NoRegister()
{
	return UBackpackItemFragment_WhiteIcon::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBackpackItemFragment_WhiteIcon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Object/BackpackItemFragment_WhiteIcon.h" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_WhiteIcon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "BackpackItemFragment_WhiteIcon" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_WhiteIcon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackpackItemFragment_WhiteIcon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemFragment_WhiteIcon_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_WhiteIcon, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackpackItemFragment_WhiteIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_WhiteIcon_Statics::NewProp_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_WhiteIcon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackpackItemFragment_WhiteIcon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBackpackItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_WhiteIcon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackpackItemFragment_WhiteIcon_Statics::ClassParams = {
	&UBackpackItemFragment_WhiteIcon::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBackpackItemFragment_WhiteIcon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_WhiteIcon_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_WhiteIcon_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackpackItemFragment_WhiteIcon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackpackItemFragment_WhiteIcon()
{
	if (!Z_Registration_Info_UClass_UBackpackItemFragment_WhiteIcon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackpackItemFragment_WhiteIcon.OuterSingleton, Z_Construct_UClass_UBackpackItemFragment_WhiteIcon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackpackItemFragment_WhiteIcon.OuterSingleton;
}
UBackpackItemFragment_WhiteIcon::UBackpackItemFragment_WhiteIcon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackpackItemFragment_WhiteIcon);
UBackpackItemFragment_WhiteIcon::~UBackpackItemFragment_WhiteIcon() {}
// ********** End Class UBackpackItemFragment_WhiteIcon ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_WhiteIcon_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackpackItemFragment_WhiteIcon, UBackpackItemFragment_WhiteIcon::StaticClass, TEXT("UBackpackItemFragment_WhiteIcon"), &Z_Registration_Info_UClass_UBackpackItemFragment_WhiteIcon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackpackItemFragment_WhiteIcon), 3509933797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_WhiteIcon_h__Script_PUBG_181663384(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_WhiteIcon_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_WhiteIcon_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
