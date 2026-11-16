// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserWidget/UserWidget_DragVisual.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUserWidget_DragVisual() {}

// ********** Begin Cross Module References ********************************************************
PUBG_API UClass* Z_Construct_UClass_UUserWidget_DragVisual();
PUBG_API UClass* Z_Construct_UClass_UUserWidget_DragVisual_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUserWidget_DragVisual ***************************************************
void UUserWidget_DragVisual::StaticRegisterNativesUUserWidget_DragVisual()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUserWidget_DragVisual;
UClass* UUserWidget_DragVisual::GetPrivateStaticClass()
{
	using TClass = UUserWidget_DragVisual;
	if (!Z_Registration_Info_UClass_UUserWidget_DragVisual.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UserWidget_DragVisual"),
			Z_Registration_Info_UClass_UUserWidget_DragVisual.InnerSingleton,
			StaticRegisterNativesUUserWidget_DragVisual,
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
	return Z_Registration_Info_UClass_UUserWidget_DragVisual.InnerSingleton;
}
UClass* Z_Construct_UClass_UUserWidget_DragVisual_NoRegister()
{
	return UUserWidget_DragVisual::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUserWidget_DragVisual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UserWidget/UserWidget_DragVisual.h" },
		{ "ModuleRelativePath", "Public/UserWidget/UserWidget_DragVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_Picture_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserWidget/UserWidget_DragVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_Frame_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserWidget/UserWidget_DragVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_Border_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserWidget/UserWidget_DragVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_Picture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border_Frame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border_Border;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserWidget_DragVisual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserWidget_DragVisual_Statics::NewProp_Image_Picture = { "Image_Picture", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserWidget_DragVisual, Image_Picture), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_Picture_MetaData), NewProp_Image_Picture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserWidget_DragVisual_Statics::NewProp_Border_Frame = { "Border_Frame", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserWidget_DragVisual, Border_Frame), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_Frame_MetaData), NewProp_Border_Frame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserWidget_DragVisual_Statics::NewProp_Border_Border = { "Border_Border", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserWidget_DragVisual, Border_Border), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_Border_MetaData), NewProp_Border_Border_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserWidget_DragVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_DragVisual_Statics::NewProp_Image_Picture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_DragVisual_Statics::NewProp_Border_Frame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_DragVisual_Statics::NewProp_Border_Border,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_DragVisual_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUserWidget_DragVisual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_DragVisual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserWidget_DragVisual_Statics::ClassParams = {
	&UUserWidget_DragVisual::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUserWidget_DragVisual_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_DragVisual_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_DragVisual_Statics::Class_MetaDataParams), Z_Construct_UClass_UUserWidget_DragVisual_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUserWidget_DragVisual()
{
	if (!Z_Registration_Info_UClass_UUserWidget_DragVisual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserWidget_DragVisual.OuterSingleton, Z_Construct_UClass_UUserWidget_DragVisual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUserWidget_DragVisual.OuterSingleton;
}
UUserWidget_DragVisual::UUserWidget_DragVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUserWidget_DragVisual);
UUserWidget_DragVisual::~UUserWidget_DragVisual() {}
// ********** End Class UUserWidget_DragVisual *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_UserWidget_UserWidget_DragVisual_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUserWidget_DragVisual, UUserWidget_DragVisual::StaticClass, TEXT("UUserWidget_DragVisual"), &Z_Registration_Info_UClass_UUserWidget_DragVisual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserWidget_DragVisual), 1076417197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_UserWidget_UserWidget_DragVisual_h__Script_PUBG_2250486140(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_UserWidget_UserWidget_DragVisual_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_UserWidget_UserWidget_DragVisual_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
