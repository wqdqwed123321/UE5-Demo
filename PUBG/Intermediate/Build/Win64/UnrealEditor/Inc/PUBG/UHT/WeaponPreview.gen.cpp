// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actor/WeaponPreview.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponPreview() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PUBG_API UClass* Z_Construct_UClass_AWeaponPreview();
PUBG_API UClass* Z_Construct_UClass_AWeaponPreview_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWeaponPreview ***********************************************************
void AWeaponPreview::StaticRegisterNativesAWeaponPreview()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWeaponPreview;
UClass* AWeaponPreview::GetPrivateStaticClass()
{
	using TClass = AWeaponPreview;
	if (!Z_Registration_Info_UClass_AWeaponPreview.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeaponPreview"),
			Z_Registration_Info_UClass_AWeaponPreview.InnerSingleton,
			StaticRegisterNativesAWeaponPreview,
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
	return Z_Registration_Info_UClass_AWeaponPreview.InnerSingleton;
}
UClass* Z_Construct_UClass_AWeaponPreview_NoRegister()
{
	return AWeaponPreview::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWeaponPreview_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/WeaponPreview.h" },
		{ "ModuleRelativePath", "Public/Actor/WeaponPreview.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootSceneComp_MetaData[] = {
		{ "Category", "WeaponPreview" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/WeaponPreview.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMeshComp_MetaData[] = {
		{ "Category", "WeaponPreview" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/WeaponPreview.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneCaptureComp_MetaData[] = {
		{ "Category", "WeaponPreview" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/WeaponPreview.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyLight_MetaData[] = {
		{ "Category", "WeaponPreview" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/WeaponPreview.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillLight_MetaData[] = {
		{ "Category", "WeaponPreview" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/WeaponPreview.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/WeaponPreview.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSceneComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneCaptureComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyLight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FillLight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentMeshComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachmentMeshComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponPreview>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPreview_Statics::NewProp_RootSceneComp = { "RootSceneComp", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPreview, RootSceneComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootSceneComp_MetaData), NewProp_RootSceneComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPreview_Statics::NewProp_WeaponMeshComp = { "WeaponMeshComp", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPreview, WeaponMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMeshComp_MetaData), NewProp_WeaponMeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPreview_Statics::NewProp_SceneCaptureComp = { "SceneCaptureComp", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPreview, SceneCaptureComp), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneCaptureComp_MetaData), NewProp_SceneCaptureComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPreview_Statics::NewProp_KeyLight = { "KeyLight", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPreview, KeyLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyLight_MetaData), NewProp_KeyLight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPreview_Statics::NewProp_FillLight = { "FillLight", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPreview, FillLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillLight_MetaData), NewProp_FillLight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPreview_Statics::NewProp_AttachmentMeshComponents_Inner = { "AttachmentMeshComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWeaponPreview_Statics::NewProp_AttachmentMeshComponents = { "AttachmentMeshComponents", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPreview, AttachmentMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentMeshComponents_MetaData), NewProp_AttachmentMeshComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponPreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPreview_Statics::NewProp_RootSceneComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPreview_Statics::NewProp_WeaponMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPreview_Statics::NewProp_SceneCaptureComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPreview_Statics::NewProp_KeyLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPreview_Statics::NewProp_FillLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPreview_Statics::NewProp_AttachmentMeshComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPreview_Statics::NewProp_AttachmentMeshComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPreview_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeaponPreview_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPreview_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponPreview_Statics::ClassParams = {
	&AWeaponPreview::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWeaponPreview_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPreview_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPreview_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponPreview_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponPreview()
{
	if (!Z_Registration_Info_UClass_AWeaponPreview.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponPreview.OuterSingleton, Z_Construct_UClass_AWeaponPreview_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponPreview.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponPreview);
AWeaponPreview::~AWeaponPreview() {}
// ********** End Class AWeaponPreview *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Actor_WeaponPreview_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponPreview, AWeaponPreview::StaticClass, TEXT("AWeaponPreview"), &Z_Registration_Info_UClass_AWeaponPreview, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponPreview), 520291724U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Actor_WeaponPreview_h__Script_PUBG_2226643000(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Actor_WeaponPreview_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Actor_WeaponPreview_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
