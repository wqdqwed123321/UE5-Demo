// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerState/GlobalPlayerState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGlobalPlayerState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
PUBG_API UClass* Z_Construct_UClass_AGlobalPlayerState();
PUBG_API UClass* Z_Construct_UClass_AGlobalPlayerState_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackManagerComponent_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UCharacterAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGlobalPlayerState *******************************************************
void AGlobalPlayerState::StaticRegisterNativesAGlobalPlayerState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGlobalPlayerState;
UClass* AGlobalPlayerState::GetPrivateStaticClass()
{
	using TClass = AGlobalPlayerState;
	if (!Z_Registration_Info_UClass_AGlobalPlayerState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GlobalPlayerState"),
			Z_Registration_Info_UClass_AGlobalPlayerState.InnerSingleton,
			StaticRegisterNativesAGlobalPlayerState,
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
	return Z_Registration_Info_UClass_AGlobalPlayerState.InnerSingleton;
}
UClass* Z_Construct_UClass_AGlobalPlayerState_NoRegister()
{
	return AGlobalPlayerState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGlobalPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlayerState/GlobalPlayerState.h" },
		{ "ModuleRelativePath", "Public/PlayerState/GlobalPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAbilitySystemComponent_MetaData[] = {
		{ "Category", "GlobalPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerState/GlobalPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerState/GlobalPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackpackManagerComponent_MetaData[] = {
		{ "Category", "GlobalPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerState/GlobalPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterAbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterAttributeSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackpackManagerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGlobalPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlobalPlayerState_Statics::NewProp_CharacterAbilitySystemComponent = { "CharacterAbilitySystemComponent", nullptr, (EPropertyFlags)0x01440000000b0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGlobalPlayerState, CharacterAbilitySystemComponent), Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAbilitySystemComponent_MetaData), NewProp_CharacterAbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlobalPlayerState_Statics::NewProp_CharacterAttributeSet = { "CharacterAttributeSet", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGlobalPlayerState, CharacterAttributeSet), Z_Construct_UClass_UCharacterAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAttributeSet_MetaData), NewProp_CharacterAttributeSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlobalPlayerState_Statics::NewProp_BackpackManagerComponent = { "BackpackManagerComponent", nullptr, (EPropertyFlags)0x01440000000b0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGlobalPlayerState, BackpackManagerComponent), Z_Construct_UClass_UBackpackManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackpackManagerComponent_MetaData), NewProp_BackpackManagerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGlobalPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalPlayerState_Statics::NewProp_CharacterAbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalPlayerState_Statics::NewProp_CharacterAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalPlayerState_Statics::NewProp_BackpackManagerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGlobalPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGlobalPlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AGlobalPlayerState, IAbilitySystemInterface), false },  // 1199015870
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGlobalPlayerState_Statics::ClassParams = {
	&AGlobalPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGlobalPlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalPlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AGlobalPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGlobalPlayerState()
{
	if (!Z_Registration_Info_UClass_AGlobalPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGlobalPlayerState.OuterSingleton, Z_Construct_UClass_AGlobalPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGlobalPlayerState.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGlobalPlayerState);
AGlobalPlayerState::~AGlobalPlayerState() {}
// ********** End Class AGlobalPlayerState *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PlayerState_GlobalPlayerState_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGlobalPlayerState, AGlobalPlayerState::StaticClass, TEXT("AGlobalPlayerState"), &Z_Registration_Info_UClass_AGlobalPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGlobalPlayerState), 3008073474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PlayerState_GlobalPlayerState_h__Script_PUBG_4262187565(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PlayerState_GlobalPlayerState_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PlayerState_GlobalPlayerState_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
