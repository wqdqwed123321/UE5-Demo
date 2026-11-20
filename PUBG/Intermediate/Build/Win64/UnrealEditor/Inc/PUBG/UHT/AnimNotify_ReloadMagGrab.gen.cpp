// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNotify/AnimNotify_ReloadMagGrab.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAnimNotify_ReloadMagGrab() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
PUBG_API UClass* Z_Construct_UClass_UAnimNotify_ReloadMagGrab();
PUBG_API UClass* Z_Construct_UClass_UAnimNotify_ReloadMagGrab_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAnimNotify_ReloadMagGrab ************************************************
void UAnimNotify_ReloadMagGrab::StaticRegisterNativesUAnimNotify_ReloadMagGrab()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimNotify_ReloadMagGrab;
UClass* UAnimNotify_ReloadMagGrab::GetPrivateStaticClass()
{
	using TClass = UAnimNotify_ReloadMagGrab;
	if (!Z_Registration_Info_UClass_UAnimNotify_ReloadMagGrab.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AnimNotify_ReloadMagGrab"),
			Z_Registration_Info_UClass_UAnimNotify_ReloadMagGrab.InnerSingleton,
			StaticRegisterNativesUAnimNotify_ReloadMagGrab,
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
	return Z_Registration_Info_UClass_UAnimNotify_ReloadMagGrab.InnerSingleton;
}
UClass* Z_Construct_UClass_UAnimNotify_ReloadMagGrab_NoRegister()
{
	return UAnimNotify_ReloadMagGrab::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAnimNotify_ReloadMagGrab_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotify_ReloadMagGrab.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ReloadMagGrab.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_ReloadMagGrab>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotify_ReloadMagGrab_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ReloadMagGrab_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_ReloadMagGrab_Statics::ClassParams = {
	&UAnimNotify_ReloadMagGrab::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ReloadMagGrab_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_ReloadMagGrab_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_ReloadMagGrab()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_ReloadMagGrab.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_ReloadMagGrab.OuterSingleton, Z_Construct_UClass_UAnimNotify_ReloadMagGrab_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_ReloadMagGrab.OuterSingleton;
}
UAnimNotify_ReloadMagGrab::UAnimNotify_ReloadMagGrab(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_ReloadMagGrab);
UAnimNotify_ReloadMagGrab::~UAnimNotify_ReloadMagGrab() {}
// ********** End Class UAnimNotify_ReloadMagGrab **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimNotify_AnimNotify_ReloadMagGrab_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_ReloadMagGrab, UAnimNotify_ReloadMagGrab::StaticClass, TEXT("UAnimNotify_ReloadMagGrab"), &Z_Registration_Info_UClass_UAnimNotify_ReloadMagGrab, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_ReloadMagGrab), 1341031794U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimNotify_AnimNotify_ReloadMagGrab_h__Script_PUBG_4278341448(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimNotify_AnimNotify_ReloadMagGrab_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimNotify_AnimNotify_ReloadMagGrab_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
