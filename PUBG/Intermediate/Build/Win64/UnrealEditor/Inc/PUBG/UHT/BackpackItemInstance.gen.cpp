// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Object/BackpackItemInstance.h"
#include "GameplayTagContainer.h"
#include "PUBGType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBackpackItemInstance() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemDefinition_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemInstance();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemInstance_NoRegister();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EAttachmentSlot();
PUBG_API UScriptStruct* Z_Construct_UScriptStruct_FItemAttachment();
PUBG_API UScriptStruct* Z_Construct_UScriptStruct_FItemAttribute();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBackpackItemInstance Function GetItemAttachment *************************
struct Z_Construct_UFunction_UBackpackItemInstance_GetItemAttachment_Statics
{
	struct BackpackItemInstance_eventGetItemAttachment_Parms
	{
		EAttachmentSlot Slot;
		UBackpackItemInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Object/BackpackItemInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackpackItemInstance_GetItemAttachment_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBackpackItemInstance_GetItemAttachment_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackItemInstance_eventGetItemAttachment_Parms, Slot), Z_Construct_UEnum_PUBG_EAttachmentSlot, METADATA_PARAMS(0, nullptr) }; // 1859959187
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackpackItemInstance_GetItemAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackItemInstance_eventGetItemAttachment_Parms, ReturnValue), Z_Construct_UClass_UBackpackItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackItemInstance_GetItemAttachment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackItemInstance_GetItemAttachment_Statics::NewProp_Slot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackItemInstance_GetItemAttachment_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackItemInstance_GetItemAttachment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemInstance_GetItemAttachment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackItemInstance_GetItemAttachment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackpackItemInstance, nullptr, "GetItemAttachment", Z_Construct_UFunction_UBackpackItemInstance_GetItemAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemInstance_GetItemAttachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackpackItemInstance_GetItemAttachment_Statics::BackpackItemInstance_eventGetItemAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemInstance_GetItemAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackItemInstance_GetItemAttachment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackpackItemInstance_GetItemAttachment_Statics::BackpackItemInstance_eventGetItemAttachment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackpackItemInstance_GetItemAttachment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackItemInstance_GetItemAttachment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackpackItemInstance::execGetItemAttachment)
{
	P_GET_ENUM(EAttachmentSlot,Z_Param_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBackpackItemInstance**)Z_Param__Result=P_THIS->GetItemAttachment(EAttachmentSlot(Z_Param_Slot));
	P_NATIVE_END;
}
// ********** End Class UBackpackItemInstance Function GetItemAttachment ***************************

// ********** Begin Class UBackpackItemInstance Function GetItemAttribute **************************
struct Z_Construct_UFunction_UBackpackItemInstance_GetItemAttribute_Statics
{
	struct BackpackItemInstance_eventGetItemAttribute_Parms
	{
		FGameplayTag AttributeTag;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Object/BackpackItemInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBackpackItemInstance_GetItemAttribute_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackItemInstance_eventGetItemAttribute_Parms, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBackpackItemInstance_GetItemAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackItemInstance_eventGetItemAttribute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackItemInstance_GetItemAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackItemInstance_GetItemAttribute_Statics::NewProp_AttributeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackItemInstance_GetItemAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemInstance_GetItemAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackItemInstance_GetItemAttribute_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackpackItemInstance, nullptr, "GetItemAttribute", Z_Construct_UFunction_UBackpackItemInstance_GetItemAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemInstance_GetItemAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackpackItemInstance_GetItemAttribute_Statics::BackpackItemInstance_eventGetItemAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemInstance_GetItemAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackItemInstance_GetItemAttribute_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackpackItemInstance_GetItemAttribute_Statics::BackpackItemInstance_eventGetItemAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackpackItemInstance_GetItemAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackItemInstance_GetItemAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackpackItemInstance::execGetItemAttribute)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AttributeTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetItemAttribute(Z_Param_AttributeTag);
	P_NATIVE_END;
}
// ********** End Class UBackpackItemInstance Function GetItemAttribute ****************************

// ********** Begin Class UBackpackItemInstance Function SetAttribute ******************************
struct Z_Construct_UFunction_UBackpackItemInstance_SetAttribute_Statics
{
	struct BackpackItemInstance_eventSetAttribute_Parms
	{
		FGameplayTag AttributeTag;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Object/BackpackItemInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBackpackItemInstance_SetAttribute_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackItemInstance_eventSetAttribute_Parms, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBackpackItemInstance_SetAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackItemInstance_eventSetAttribute_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackItemInstance_SetAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackItemInstance_SetAttribute_Statics::NewProp_AttributeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackItemInstance_SetAttribute_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemInstance_SetAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackItemInstance_SetAttribute_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackpackItemInstance, nullptr, "SetAttribute", Z_Construct_UFunction_UBackpackItemInstance_SetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemInstance_SetAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackpackItemInstance_SetAttribute_Statics::BackpackItemInstance_eventSetAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemInstance_SetAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackItemInstance_SetAttribute_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackpackItemInstance_SetAttribute_Statics::BackpackItemInstance_eventSetAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackpackItemInstance_SetAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackItemInstance_SetAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackpackItemInstance::execSetAttribute)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AttributeTag);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAttribute(Z_Param_AttributeTag,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UBackpackItemInstance Function SetAttribute ********************************

// ********** Begin Class UBackpackItemInstance Function SetItemAttachment *************************
struct Z_Construct_UFunction_UBackpackItemInstance_SetItemAttachment_Statics
{
	struct BackpackItemInstance_eventSetItemAttachment_Parms
	{
		EAttachmentSlot Slot;
		UBackpackItemInstance* InAttachment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Object/BackpackItemInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAttachment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackpackItemInstance_SetItemAttachment_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBackpackItemInstance_SetItemAttachment_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackItemInstance_eventSetItemAttachment_Parms, Slot), Z_Construct_UEnum_PUBG_EAttachmentSlot, METADATA_PARAMS(0, nullptr) }; // 1859959187
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackpackItemInstance_SetItemAttachment_Statics::NewProp_InAttachment = { "InAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackItemInstance_eventSetItemAttachment_Parms, InAttachment), Z_Construct_UClass_UBackpackItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackItemInstance_SetItemAttachment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackItemInstance_SetItemAttachment_Statics::NewProp_Slot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackItemInstance_SetItemAttachment_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackItemInstance_SetItemAttachment_Statics::NewProp_InAttachment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemInstance_SetItemAttachment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackItemInstance_SetItemAttachment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackpackItemInstance, nullptr, "SetItemAttachment", Z_Construct_UFunction_UBackpackItemInstance_SetItemAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemInstance_SetItemAttachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackpackItemInstance_SetItemAttachment_Statics::BackpackItemInstance_eventSetItemAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackItemInstance_SetItemAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackItemInstance_SetItemAttachment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackpackItemInstance_SetItemAttachment_Statics::BackpackItemInstance_eventSetItemAttachment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackpackItemInstance_SetItemAttachment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackItemInstance_SetItemAttachment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackpackItemInstance::execSetItemAttachment)
{
	P_GET_ENUM(EAttachmentSlot,Z_Param_Slot);
	P_GET_OBJECT(UBackpackItemInstance,Z_Param_InAttachment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetItemAttachment(EAttachmentSlot(Z_Param_Slot),Z_Param_InAttachment);
	P_NATIVE_END;
}
// ********** End Class UBackpackItemInstance Function SetItemAttachment ***************************

// ********** Begin Class UBackpackItemInstance ****************************************************
void UBackpackItemInstance::StaticRegisterNativesUBackpackItemInstance()
{
	UClass* Class = UBackpackItemInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetItemAttachment", &UBackpackItemInstance::execGetItemAttachment },
		{ "GetItemAttribute", &UBackpackItemInstance::execGetItemAttribute },
		{ "SetAttribute", &UBackpackItemInstance::execSetAttribute },
		{ "SetItemAttachment", &UBackpackItemInstance::execSetItemAttachment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBackpackItemInstance;
UClass* UBackpackItemInstance::GetPrivateStaticClass()
{
	using TClass = UBackpackItemInstance;
	if (!Z_Registration_Info_UClass_UBackpackItemInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BackpackItemInstance"),
			Z_Registration_Info_UClass_UBackpackItemInstance.InnerSingleton,
			StaticRegisterNativesUBackpackItemInstance,
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
	return Z_Registration_Info_UClass_UBackpackItemInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UBackpackItemInstance_NoRegister()
{
	return UBackpackItemInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBackpackItemInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Object/BackpackItemInstance.h" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "BackpackItemInstance" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[] = {
		{ "Category", "BackpackItemInstance" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemAttributes_MetaData[] = {
		{ "Category", "BackpackItemInstance" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemAttachments_MetaData[] = {
		{ "Category", "BackpackItemInstance" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Definition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemAttachments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemAttachments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBackpackItemInstance_GetItemAttachment, "GetItemAttachment" }, // 2461909266
		{ &Z_Construct_UFunction_UBackpackItemInstance_GetItemAttribute, "GetItemAttribute" }, // 2772790212
		{ &Z_Construct_UFunction_UBackpackItemInstance_SetAttribute, "SetAttribute" }, // 3537952499
		{ &Z_Construct_UFunction_UBackpackItemInstance_SetItemAttachment, "SetItemAttachment" }, // 3807447904
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackpackItemInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBackpackItemInstance_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemInstance, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemInstance_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0114000000000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemInstance, Definition), Z_Construct_UClass_UBackpackItemDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Definition_MetaData), NewProp_Definition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackpackItemInstance_Statics::NewProp_ItemAttributes_Inner = { "ItemAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemAttribute, METADATA_PARAMS(0, nullptr) }; // 3623147177
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBackpackItemInstance_Statics::NewProp_ItemAttributes = { "ItemAttributes", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemInstance, ItemAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemAttributes_MetaData), NewProp_ItemAttributes_MetaData) }; // 3623147177
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackpackItemInstance_Statics::NewProp_ItemAttachments_Inner = { "ItemAttachments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemAttachment, METADATA_PARAMS(0, nullptr) }; // 3164557440
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBackpackItemInstance_Statics::NewProp_ItemAttachments = { "ItemAttachments", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemInstance, ItemAttachments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemAttachments_MetaData), NewProp_ItemAttachments_MetaData) }; // 3164557440
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackpackItemInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemInstance_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemInstance_Statics::NewProp_Definition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemInstance_Statics::NewProp_ItemAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemInstance_Statics::NewProp_ItemAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemInstance_Statics::NewProp_ItemAttachments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemInstance_Statics::NewProp_ItemAttachments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackpackItemInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackpackItemInstance_Statics::ClassParams = {
	&UBackpackItemInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBackpackItemInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemInstance_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackpackItemInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackpackItemInstance()
{
	if (!Z_Registration_Info_UClass_UBackpackItemInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackpackItemInstance.OuterSingleton, Z_Construct_UClass_UBackpackItemInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackpackItemInstance.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UBackpackItemInstance::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Quantity(TEXT("Quantity"));
	static FName Name_Definition(TEXT("Definition"));
	static FName Name_ItemAttributes(TEXT("ItemAttributes"));
	static FName Name_ItemAttachments(TEXT("ItemAttachments"));
	const bool bIsValid = true
		&& Name_Quantity == ClassReps[(int32)ENetFields_Private::Quantity].Property->GetFName()
		&& Name_Definition == ClassReps[(int32)ENetFields_Private::Definition].Property->GetFName()
		&& Name_ItemAttributes == ClassReps[(int32)ENetFields_Private::ItemAttributes].Property->GetFName()
		&& Name_ItemAttachments == ClassReps[(int32)ENetFields_Private::ItemAttachments].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBackpackItemInstance"));
}
#endif
UBackpackItemInstance::UBackpackItemInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackpackItemInstance);
UBackpackItemInstance::~UBackpackItemInstance() {}
// ********** End Class UBackpackItemInstance ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemInstance_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackpackItemInstance, UBackpackItemInstance::StaticClass, TEXT("UBackpackItemInstance"), &Z_Registration_Info_UClass_UBackpackItemInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackpackItemInstance), 469338529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemInstance_h__Script_PUBG_2372502750(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemInstance_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemInstance_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
