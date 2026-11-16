// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Object/BackpackItemFragment_Preview.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBackpackItemFragment_Preview() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_Preview();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_Preview_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBackpackItemFragment_Preview ********************************************
void UBackpackItemFragment_Preview::StaticRegisterNativesUBackpackItemFragment_Preview()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBackpackItemFragment_Preview;
UClass* UBackpackItemFragment_Preview::GetPrivateStaticClass()
{
	using TClass = UBackpackItemFragment_Preview;
	if (!Z_Registration_Info_UClass_UBackpackItemFragment_Preview.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BackpackItemFragment_Preview"),
			Z_Registration_Info_UClass_UBackpackItemFragment_Preview.InnerSingleton,
			StaticRegisterNativesUBackpackItemFragment_Preview,
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
	return Z_Registration_Info_UClass_UBackpackItemFragment_Preview.InnerSingleton;
}
UClass* Z_Construct_UClass_UBackpackItemFragment_Preview_NoRegister()
{
	return UBackpackItemFragment_Preview::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBackpackItemFragment_Preview_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Object/BackpackItemFragment_Preview.h" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Preview.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[] = {
		{ "Category", "BackpackItemFragment_Preview" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Preview.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewTransform_MetaData[] = {
		{ "Category", "BackpackItemFragment_Preview" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Preview.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackpackItemFragment_Preview>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemFragment_Preview_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Preview, PreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_MetaData), NewProp_PreviewMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackpackItemFragment_Preview_Statics::NewProp_PreviewTransform = { "PreviewTransform", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Preview, PreviewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewTransform_MetaData), NewProp_PreviewTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackpackItemFragment_Preview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Preview_Statics::NewProp_PreviewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Preview_Statics::NewProp_PreviewTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Preview_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackpackItemFragment_Preview_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBackpackItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Preview_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackpackItemFragment_Preview_Statics::ClassParams = {
	&UBackpackItemFragment_Preview::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBackpackItemFragment_Preview_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Preview_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Preview_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackpackItemFragment_Preview_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackpackItemFragment_Preview()
{
	if (!Z_Registration_Info_UClass_UBackpackItemFragment_Preview.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackpackItemFragment_Preview.OuterSingleton, Z_Construct_UClass_UBackpackItemFragment_Preview_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackpackItemFragment_Preview.OuterSingleton;
}
UBackpackItemFragment_Preview::UBackpackItemFragment_Preview(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackpackItemFragment_Preview);
UBackpackItemFragment_Preview::~UBackpackItemFragment_Preview() {}
// ********** End Class UBackpackItemFragment_Preview **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Preview_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackpackItemFragment_Preview, UBackpackItemFragment_Preview::StaticClass, TEXT("UBackpackItemFragment_Preview"), &Z_Registration_Info_UClass_UBackpackItemFragment_Preview, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackpackItemFragment_Preview), 3802800537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Preview_h__Script_PUBG_30031494(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Preview_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Preview_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
