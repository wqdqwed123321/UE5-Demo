// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNotify/AnimNotify_ReloadMagOut.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAnimNotify_ReloadMagOut() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
PUBG_API UClass* Z_Construct_UClass_UAnimNotify_ReloadMagOut();
PUBG_API UClass* Z_Construct_UClass_UAnimNotify_ReloadMagOut_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAnimNotify_ReloadMagOut *************************************************
void UAnimNotify_ReloadMagOut::StaticRegisterNativesUAnimNotify_ReloadMagOut()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimNotify_ReloadMagOut;
UClass* UAnimNotify_ReloadMagOut::GetPrivateStaticClass()
{
	using TClass = UAnimNotify_ReloadMagOut;
	if (!Z_Registration_Info_UClass_UAnimNotify_ReloadMagOut.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AnimNotify_ReloadMagOut"),
			Z_Registration_Info_UClass_UAnimNotify_ReloadMagOut.InnerSingleton,
			StaticRegisterNativesUAnimNotify_ReloadMagOut,
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
	return Z_Registration_Info_UClass_UAnimNotify_ReloadMagOut.InnerSingleton;
}
UClass* Z_Construct_UClass_UAnimNotify_ReloadMagOut_NoRegister()
{
	return UAnimNotify_ReloadMagOut::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAnimNotify_ReloadMagOut_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotify_ReloadMagOut.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ReloadMagOut.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_ReloadMagOut>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotify_ReloadMagOut_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ReloadMagOut_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_ReloadMagOut_Statics::ClassParams = {
	&UAnimNotify_ReloadMagOut::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ReloadMagOut_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_ReloadMagOut_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_ReloadMagOut()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_ReloadMagOut.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_ReloadMagOut.OuterSingleton, Z_Construct_UClass_UAnimNotify_ReloadMagOut_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_ReloadMagOut.OuterSingleton;
}
UAnimNotify_ReloadMagOut::UAnimNotify_ReloadMagOut(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_ReloadMagOut);
UAnimNotify_ReloadMagOut::~UAnimNotify_ReloadMagOut() {}
// ********** End Class UAnimNotify_ReloadMagOut ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimNotify_AnimNotify_ReloadMagOut_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_ReloadMagOut, UAnimNotify_ReloadMagOut::StaticClass, TEXT("UAnimNotify_ReloadMagOut"), &Z_Registration_Info_UClass_UAnimNotify_ReloadMagOut, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_ReloadMagOut), 1387833117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimNotify_AnimNotify_ReloadMagOut_h__Script_PUBG_1107646110(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimNotify_AnimNotify_ReloadMagOut_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimNotify_AnimNotify_ReloadMagOut_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
