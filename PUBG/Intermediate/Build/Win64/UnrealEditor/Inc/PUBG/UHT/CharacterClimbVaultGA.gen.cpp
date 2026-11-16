// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbility/CharacterClimbVaultGA.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterClimbVaultGA() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
PUBG_API UClass* Z_Construct_UClass_UCharacterClimbVaultGA();
PUBG_API UClass* Z_Construct_UClass_UCharacterClimbVaultGA_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterClimbVaultGA ***************************************************
void UCharacterClimbVaultGA::StaticRegisterNativesUCharacterClimbVaultGA()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterClimbVaultGA;
UClass* UCharacterClimbVaultGA::GetPrivateStaticClass()
{
	using TClass = UCharacterClimbVaultGA;
	if (!Z_Registration_Info_UClass_UCharacterClimbVaultGA.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterClimbVaultGA"),
			Z_Registration_Info_UClass_UCharacterClimbVaultGA.InnerSingleton,
			StaticRegisterNativesUCharacterClimbVaultGA,
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
	return Z_Registration_Info_UClass_UCharacterClimbVaultGA.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterClimbVaultGA_NoRegister()
{
	return UCharacterClimbVaultGA::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterClimbVaultGA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbility/CharacterClimbVaultGA.h" },
		{ "ModuleRelativePath", "Public/GameplayAbility/CharacterClimbVaultGA.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterClimbVaultGA>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCharacterClimbVaultGA_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClimbVaultGA_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterClimbVaultGA_Statics::ClassParams = {
	&UCharacterClimbVaultGA::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClimbVaultGA_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterClimbVaultGA_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterClimbVaultGA()
{
	if (!Z_Registration_Info_UClass_UCharacterClimbVaultGA.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterClimbVaultGA.OuterSingleton, Z_Construct_UClass_UCharacterClimbVaultGA_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterClimbVaultGA.OuterSingleton;
}
UCharacterClimbVaultGA::UCharacterClimbVaultGA(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterClimbVaultGA);
UCharacterClimbVaultGA::~UCharacterClimbVaultGA() {}
// ********** End Class UCharacterClimbVaultGA *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_GameplayAbility_CharacterClimbVaultGA_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterClimbVaultGA, UCharacterClimbVaultGA::StaticClass, TEXT("UCharacterClimbVaultGA"), &Z_Registration_Info_UClass_UCharacterClimbVaultGA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterClimbVaultGA), 1047335517U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_GameplayAbility_CharacterClimbVaultGA_h__Script_PUBG_4045915334(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_GameplayAbility_CharacterClimbVaultGA_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_GameplayAbility_CharacterClimbVaultGA_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
