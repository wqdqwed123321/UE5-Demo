// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Object/BackpackItemDefinition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBackpackItemDefinition() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemDefinition();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemDefinition_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_NoRegister();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EItemType();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBackpackItemDefinition Function FindBackpackItemFragmentByClass *********
struct Z_Construct_UFunction_UBackpackItemDefinition_FindBackpackItemFragmentByClass_Statics
{
	struct BackpackItemDefinition_eventFindBackpackItemFragmentByClass_Parms
	{
		TSubclassOf<UBackpackItemDefinition> ItemDefinitionClass;
		TSubclassOf<UBackpackItemFragment> ItemFragmentClass;
		UBackpackItemFragment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DeterminesOutputType", "ItemFragmentClass" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDefinitionClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemFragmentClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBackpackItemDefinition_FindBackpackItemFragmentByClass_Statics::NewProp_ItemDefinitionClass = { "ItemDefinitionClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackItemDefinition_eventFindBackpackItemFragmentByClass_Parms, ItemDefinitionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBackpackItemDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBackpackItemDefinition_FindBackpackItemFragmentByClass_Statics::NewProp_ItemFragmentClass = { "ItemFragmentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackItemDefinition_eventFindBackpackItemFragmentByClass_Parms, ItemFragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBackpackItemFragment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackpackItemDefinition_FindBackpackItemFragmentByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackItemDefinition_eventFindBackpackItemFragmentByClass_Parms, ReturnValue), Z_Construct_UClass_UBackpackItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackItemDefinition_FindBackpackItemFragmentByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackItemDefinition_FindBackpackItemFragmentByClass_Statics::NewProp_ItemDefinitionClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackItemDefinition_FindBackpackItemFragmentByClass_Statics::NewProp_ItemFragmentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackItemDefinition_FindBackpackItemFragmentByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemDefinition_FindBackpackItemFragmentByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackItemDefinition_FindBackpackItemFragmentByClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackpackItemDefinition, nullptr, "FindBackpackItemFragmentByClass", Z_Construct_UFunction_UBackpackItemDefinition_FindBackpackItemFragmentByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemDefinition_FindBackpackItemFragmentByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackpackItemDefinition_FindBackpackItemFragmentByClass_Statics::BackpackItemDefinition_eventFindBackpackItemFragmentByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemDefinition_FindBackpackItemFragmentByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackItemDefinition_FindBackpackItemFragmentByClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackpackItemDefinition_FindBackpackItemFragmentByClass_Statics::BackpackItemDefinition_eventFindBackpackItemFragmentByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackpackItemDefinition_FindBackpackItemFragmentByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackItemDefinition_FindBackpackItemFragmentByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackpackItemDefinition::execFindBackpackItemFragmentByClass)
{
	P_GET_OBJECT(UClass,Z_Param_ItemDefinitionClass);
	P_GET_OBJECT(UClass,Z_Param_ItemFragmentClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBackpackItemFragment**)Z_Param__Result=UBackpackItemDefinition::FindBackpackItemFragmentByClass(Z_Param_ItemDefinitionClass,Z_Param_ItemFragmentClass);
	P_NATIVE_END;
}
// ********** End Class UBackpackItemDefinition Function FindBackpackItemFragmentByClass ***********

// ********** Begin Class UBackpackItemDefinition **************************************************
void UBackpackItemDefinition::StaticRegisterNativesUBackpackItemDefinition()
{
	UClass* Class = UBackpackItemDefinition::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindBackpackItemFragmentByClass", &UBackpackItemDefinition::execFindBackpackItemFragmentByClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBackpackItemDefinition;
UClass* UBackpackItemDefinition::GetPrivateStaticClass()
{
	using TClass = UBackpackItemDefinition;
	if (!Z_Registration_Info_UClass_UBackpackItemDefinition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BackpackItemDefinition"),
			Z_Registration_Info_UClass_UBackpackItemDefinition.InnerSingleton,
			StaticRegisterNativesUBackpackItemDefinition,
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
	return Z_Registration_Info_UClass_UBackpackItemDefinition.InnerSingleton;
}
UClass* Z_Construct_UClass_UBackpackItemDefinition_NoRegister()
{
	return UBackpackItemDefinition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBackpackItemDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Object/BackpackItemDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "BackpackItemDefinition" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[] = {
		{ "Category", "BackpackItemDefinition" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "BackpackItemDefinition" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldMesh_MetaData[] = {
		{ "Category", "BackpackItemDefinition" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "BackpackItemDefinition" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_Inner_MetaData[] = {
		{ "Category", "BackpackItemDefinition" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_MetaData[] = {
		{ "Category", "BackpackItemDefinition" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldMesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fragments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Fragments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBackpackItemDefinition_FindBackpackItemFragmentByClass, "FindBackpackItemFragmentByClass" }, // 4048763756
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackpackItemDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBackpackItemDefinition_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemDefinition, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBackpackItemDefinition_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemDefinition, ItemDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDescription_MetaData), NewProp_ItemDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemDefinition_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemDefinition, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemDefinition_Statics::NewProp_WorldMesh = { "WorldMesh", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemDefinition, WorldMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldMesh_MetaData), NewProp_WorldMesh_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackpackItemDefinition_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBackpackItemDefinition_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemDefinition, ItemType), Z_Construct_UEnum_PUBG_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 3672737843
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemDefinition_Statics::NewProp_Fragments_Inner = { "Fragments", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBackpackItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragments_Inner_MetaData), NewProp_Fragments_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBackpackItemDefinition_Statics::NewProp_Fragments = { "Fragments", nullptr, (EPropertyFlags)0x011400800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemDefinition, Fragments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragments_MetaData), NewProp_Fragments_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackpackItemDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemDefinition_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemDefinition_Statics::NewProp_ItemDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemDefinition_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemDefinition_Statics::NewProp_WorldMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemDefinition_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemDefinition_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemDefinition_Statics::NewProp_Fragments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemDefinition_Statics::NewProp_Fragments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackpackItemDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackpackItemDefinition_Statics::ClassParams = {
	&UBackpackItemDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBackpackItemDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemDefinition_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackpackItemDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackpackItemDefinition()
{
	if (!Z_Registration_Info_UClass_UBackpackItemDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackpackItemDefinition.OuterSingleton, Z_Construct_UClass_UBackpackItemDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackpackItemDefinition.OuterSingleton;
}
UBackpackItemDefinition::UBackpackItemDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackpackItemDefinition);
UBackpackItemDefinition::~UBackpackItemDefinition() {}
// ********** End Class UBackpackItemDefinition ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemDefinition_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackpackItemDefinition, UBackpackItemDefinition::StaticClass, TEXT("UBackpackItemDefinition"), &Z_Registration_Info_UClass_UBackpackItemDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackpackItemDefinition), 3426631015U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemDefinition_h__Script_PUBG_2843079544(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemDefinition_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemDefinition_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
