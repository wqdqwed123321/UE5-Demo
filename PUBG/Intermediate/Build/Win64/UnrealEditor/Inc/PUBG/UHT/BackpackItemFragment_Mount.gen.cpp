// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Object/BackpackItemFragment_Mount.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBackpackItemFragment_Mount() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_Mount();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_Mount_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBackpackItemFragment_Mount **********************************************
void UBackpackItemFragment_Mount::StaticRegisterNativesUBackpackItemFragment_Mount()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBackpackItemFragment_Mount;
UClass* UBackpackItemFragment_Mount::GetPrivateStaticClass()
{
	using TClass = UBackpackItemFragment_Mount;
	if (!Z_Registration_Info_UClass_UBackpackItemFragment_Mount.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BackpackItemFragment_Mount"),
			Z_Registration_Info_UClass_UBackpackItemFragment_Mount.InnerSingleton,
			StaticRegisterNativesUBackpackItemFragment_Mount,
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
	return Z_Registration_Info_UClass_UBackpackItemFragment_Mount.InnerSingleton;
}
UClass* Z_Construct_UClass_UBackpackItemFragment_Mount_NoRegister()
{
	return UBackpackItemFragment_Mount::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBackpackItemFragment_Mount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Object/BackpackItemFragment_Mount.h" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Mount.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentMesh_MetaData[] = {
		{ "Category", "BackpackItemFragment_Mount" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Mount.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[] = {
		{ "Category", "BackpackItemFragment_Mount" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Mount.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeldSocketName_MetaData[] = {
		{ "Category", "BackpackItemFragment_Mount" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Mount.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HeldSocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackpackItemFragment_Mount>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemFragment_Mount_Statics::NewProp_EquipmentMesh = { "EquipmentMesh", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Mount, EquipmentMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentMesh_MetaData), NewProp_EquipmentMesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBackpackItemFragment_Mount_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Mount, AttachSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSocketName_MetaData), NewProp_AttachSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBackpackItemFragment_Mount_Statics::NewProp_HeldSocketName = { "HeldSocketName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Mount, HeldSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeldSocketName_MetaData), NewProp_HeldSocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackpackItemFragment_Mount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Mount_Statics::NewProp_EquipmentMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Mount_Statics::NewProp_AttachSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Mount_Statics::NewProp_HeldSocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Mount_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackpackItemFragment_Mount_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBackpackItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Mount_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackpackItemFragment_Mount_Statics::ClassParams = {
	&UBackpackItemFragment_Mount::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBackpackItemFragment_Mount_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Mount_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Mount_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackpackItemFragment_Mount_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackpackItemFragment_Mount()
{
	if (!Z_Registration_Info_UClass_UBackpackItemFragment_Mount.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackpackItemFragment_Mount.OuterSingleton, Z_Construct_UClass_UBackpackItemFragment_Mount_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackpackItemFragment_Mount.OuterSingleton;
}
UBackpackItemFragment_Mount::UBackpackItemFragment_Mount(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackpackItemFragment_Mount);
UBackpackItemFragment_Mount::~UBackpackItemFragment_Mount() {}
// ********** End Class UBackpackItemFragment_Mount ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Mount_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackpackItemFragment_Mount, UBackpackItemFragment_Mount::StaticClass, TEXT("UBackpackItemFragment_Mount"), &Z_Registration_Info_UClass_UBackpackItemFragment_Mount, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackpackItemFragment_Mount), 3141964542U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Mount_h__Script_PUBG_3964388516(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Mount_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Mount_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
