// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNotify/AnimNotify_ReloadMagIn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAnimNotify_ReloadMagIn() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
PUBG_API UClass* Z_Construct_UClass_UAnimNotify_ReloadMagIn();
PUBG_API UClass* Z_Construct_UClass_UAnimNotify_ReloadMagIn_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAnimNotify_ReloadMagIn **************************************************
void UAnimNotify_ReloadMagIn::StaticRegisterNativesUAnimNotify_ReloadMagIn()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimNotify_ReloadMagIn;
UClass* UAnimNotify_ReloadMagIn::GetPrivateStaticClass()
{
	using TClass = UAnimNotify_ReloadMagIn;
	if (!Z_Registration_Info_UClass_UAnimNotify_ReloadMagIn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AnimNotify_ReloadMagIn"),
			Z_Registration_Info_UClass_UAnimNotify_ReloadMagIn.InnerSingleton,
			StaticRegisterNativesUAnimNotify_ReloadMagIn,
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
	return Z_Registration_Info_UClass_UAnimNotify_ReloadMagIn.InnerSingleton;
}
UClass* Z_Construct_UClass_UAnimNotify_ReloadMagIn_NoRegister()
{
	return UAnimNotify_ReloadMagIn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAnimNotify_ReloadMagIn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotify_ReloadMagIn.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ReloadMagIn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_ReloadMagIn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotify_ReloadMagIn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ReloadMagIn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_ReloadMagIn_Statics::ClassParams = {
	&UAnimNotify_ReloadMagIn::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ReloadMagIn_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_ReloadMagIn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_ReloadMagIn()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_ReloadMagIn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_ReloadMagIn.OuterSingleton, Z_Construct_UClass_UAnimNotify_ReloadMagIn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_ReloadMagIn.OuterSingleton;
}
UAnimNotify_ReloadMagIn::UAnimNotify_ReloadMagIn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_ReloadMagIn);
UAnimNotify_ReloadMagIn::~UAnimNotify_ReloadMagIn() {}
// ********** End Class UAnimNotify_ReloadMagIn ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimNotify_AnimNotify_ReloadMagIn_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_ReloadMagIn, UAnimNotify_ReloadMagIn::StaticClass, TEXT("UAnimNotify_ReloadMagIn"), &Z_Registration_Info_UClass_UAnimNotify_ReloadMagIn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_ReloadMagIn), 2004509038U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimNotify_AnimNotify_ReloadMagIn_h__Script_PUBG_2403491509(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimNotify_AnimNotify_ReloadMagIn_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimNotify_AnimNotify_ReloadMagIn_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
