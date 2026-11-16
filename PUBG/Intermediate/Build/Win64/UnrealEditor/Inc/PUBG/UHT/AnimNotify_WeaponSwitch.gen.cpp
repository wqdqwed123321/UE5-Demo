// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNotify/AnimNotify_WeaponSwitch.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAnimNotify_WeaponSwitch() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
PUBG_API UClass* Z_Construct_UClass_UAnimNotify_WeaponSwitch();
PUBG_API UClass* Z_Construct_UClass_UAnimNotify_WeaponSwitch_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAnimNotify_WeaponSwitch *************************************************
void UAnimNotify_WeaponSwitch::StaticRegisterNativesUAnimNotify_WeaponSwitch()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimNotify_WeaponSwitch;
UClass* UAnimNotify_WeaponSwitch::GetPrivateStaticClass()
{
	using TClass = UAnimNotify_WeaponSwitch;
	if (!Z_Registration_Info_UClass_UAnimNotify_WeaponSwitch.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AnimNotify_WeaponSwitch"),
			Z_Registration_Info_UClass_UAnimNotify_WeaponSwitch.InnerSingleton,
			StaticRegisterNativesUAnimNotify_WeaponSwitch,
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
	return Z_Registration_Info_UClass_UAnimNotify_WeaponSwitch.InnerSingleton;
}
UClass* Z_Construct_UClass_UAnimNotify_WeaponSwitch_NoRegister()
{
	return UAnimNotify_WeaponSwitch::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAnimNotify_WeaponSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotify_WeaponSwitch.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_WeaponSwitch.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_WeaponSwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotify_WeaponSwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_WeaponSwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_WeaponSwitch_Statics::ClassParams = {
	&UAnimNotify_WeaponSwitch::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_WeaponSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_WeaponSwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_WeaponSwitch()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_WeaponSwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_WeaponSwitch.OuterSingleton, Z_Construct_UClass_UAnimNotify_WeaponSwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_WeaponSwitch.OuterSingleton;
}
UAnimNotify_WeaponSwitch::UAnimNotify_WeaponSwitch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_WeaponSwitch);
UAnimNotify_WeaponSwitch::~UAnimNotify_WeaponSwitch() {}
// ********** End Class UAnimNotify_WeaponSwitch ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimNotify_AnimNotify_WeaponSwitch_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_WeaponSwitch, UAnimNotify_WeaponSwitch::StaticClass, TEXT("UAnimNotify_WeaponSwitch"), &Z_Registration_Info_UClass_UAnimNotify_WeaponSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_WeaponSwitch), 266736385U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimNotify_AnimNotify_WeaponSwitch_h__Script_PUBG_1355074687(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimNotify_AnimNotify_WeaponSwitch_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimNotify_AnimNotify_WeaponSwitch_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
