// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerController/GlobalPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGlobalPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PUBG_API UClass* Z_Construct_UClass_AGlobalPlayerController();
PUBG_API UClass* Z_Construct_UClass_AGlobalPlayerController_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBaseCommonActivatableWidget_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UGameCommonUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGlobalPlayerController **************************************************
void AGlobalPlayerController::StaticRegisterNativesAGlobalPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGlobalPlayerController;
UClass* AGlobalPlayerController::GetPrivateStaticClass()
{
	using TClass = AGlobalPlayerController;
	if (!Z_Registration_Info_UClass_AGlobalPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GlobalPlayerController"),
			Z_Registration_Info_UClass_AGlobalPlayerController.InnerSingleton,
			StaticRegisterNativesAGlobalPlayerController,
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
	return Z_Registration_Info_UClass_AGlobalPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AGlobalPlayerController_NoRegister()
{
	return AGlobalPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGlobalPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController/GlobalPlayerController.h" },
		{ "ModuleRelativePath", "Public/PlayerController/GlobalPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMC_Character_MetaData[] = {
		{ "Category", "GlobalPlayerController" },
		{ "ModuleRelativePath", "Public/PlayerController/GlobalPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryLayoutClass_MetaData[] = {
		{ "Category", "GlobalPlayerController" },
		{ "ModuleRelativePath", "Public/PlayerController/GlobalPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialHudClass_MetaData[] = {
		{ "Category", "GlobalPlayerController" },
		{ "ModuleRelativePath", "Public/PlayerController/GlobalPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMC_Character;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PrimaryLayoutClass;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_InitialHudClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGlobalPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlobalPlayerController_Statics::NewProp_IMC_Character = { "IMC_Character", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGlobalPlayerController, IMC_Character), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMC_Character_MetaData), NewProp_IMC_Character_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGlobalPlayerController_Statics::NewProp_PrimaryLayoutClass = { "PrimaryLayoutClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGlobalPlayerController, PrimaryLayoutClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameCommonUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryLayoutClass_MetaData), NewProp_PrimaryLayoutClass_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AGlobalPlayerController_Statics::NewProp_InitialHudClass = { "InitialHudClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGlobalPlayerController, InitialHudClass), Z_Construct_UClass_UBaseCommonActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialHudClass_MetaData), NewProp_InitialHudClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGlobalPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalPlayerController_Statics::NewProp_IMC_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalPlayerController_Statics::NewProp_PrimaryLayoutClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalPlayerController_Statics::NewProp_InitialHudClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGlobalPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGlobalPlayerController_Statics::ClassParams = {
	&AGlobalPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGlobalPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalPlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGlobalPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGlobalPlayerController()
{
	if (!Z_Registration_Info_UClass_AGlobalPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGlobalPlayerController.OuterSingleton, Z_Construct_UClass_AGlobalPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGlobalPlayerController.OuterSingleton;
}
AGlobalPlayerController::AGlobalPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGlobalPlayerController);
AGlobalPlayerController::~AGlobalPlayerController() {}
// ********** End Class AGlobalPlayerController ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PlayerController_GlobalPlayerController_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGlobalPlayerController, AGlobalPlayerController::StaticClass, TEXT("AGlobalPlayerController"), &Z_Registration_Info_UClass_AGlobalPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGlobalPlayerController), 870828600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PlayerController_GlobalPlayerController_h__Script_PUBG_4272036827(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PlayerController_GlobalPlayerController_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PlayerController_GlobalPlayerController_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
