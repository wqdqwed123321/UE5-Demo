// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DragDropOperation/BackpackDragDropOperation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBackpackDragDropOperation() {}

// ********** Begin Cross Module References ********************************************************
PUBG_API UClass* Z_Construct_UClass_UBackpackDragDropOperation();
PUBG_API UClass* Z_Construct_UClass_UBackpackDragDropOperation_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemInstance_NoRegister();
UMG_API UClass* Z_Construct_UClass_UDragDropOperation();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBackpackDragDropOperation ***********************************************
void UBackpackDragDropOperation::StaticRegisterNativesUBackpackDragDropOperation()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBackpackDragDropOperation;
UClass* UBackpackDragDropOperation::GetPrivateStaticClass()
{
	using TClass = UBackpackDragDropOperation;
	if (!Z_Registration_Info_UClass_UBackpackDragDropOperation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BackpackDragDropOperation"),
			Z_Registration_Info_UClass_UBackpackDragDropOperation.InnerSingleton,
			StaticRegisterNativesUBackpackDragDropOperation,
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
	return Z_Registration_Info_UClass_UBackpackDragDropOperation.InnerSingleton;
}
UClass* Z_Construct_UClass_UBackpackDragDropOperation_NoRegister()
{
	return UBackpackDragDropOperation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBackpackDragDropOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DragDropOperation/BackpackDragDropOperation.h" },
		{ "ModuleRelativePath", "Public/DragDropOperation/BackpackDragDropOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/DragDropOperation/BackpackDragDropOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackpackDragDropOperation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackDragDropOperation_Statics::NewProp_SourceWeapon = { "SourceWeapon", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackDragDropOperation, SourceWeapon), Z_Construct_UClass_UBackpackItemInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceWeapon_MetaData), NewProp_SourceWeapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackpackDragDropOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackDragDropOperation_Statics::NewProp_SourceWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackDragDropOperation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackpackDragDropOperation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDragDropOperation,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackDragDropOperation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackpackDragDropOperation_Statics::ClassParams = {
	&UBackpackDragDropOperation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBackpackDragDropOperation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackDragDropOperation_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackDragDropOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackpackDragDropOperation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackpackDragDropOperation()
{
	if (!Z_Registration_Info_UClass_UBackpackDragDropOperation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackpackDragDropOperation.OuterSingleton, Z_Construct_UClass_UBackpackDragDropOperation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackpackDragDropOperation.OuterSingleton;
}
UBackpackDragDropOperation::UBackpackDragDropOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackpackDragDropOperation);
UBackpackDragDropOperation::~UBackpackDragDropOperation() {}
// ********** End Class UBackpackDragDropOperation *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_DragDropOperation_BackpackDragDropOperation_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackpackDragDropOperation, UBackpackDragDropOperation::StaticClass, TEXT("UBackpackDragDropOperation"), &Z_Registration_Info_UClass_UBackpackDragDropOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackpackDragDropOperation), 260133599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_DragDropOperation_BackpackDragDropOperation_h__Script_PUBG_2428376356(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_DragDropOperation_BackpackDragDropOperation_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_DragDropOperation_BackpackDragDropOperation_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
