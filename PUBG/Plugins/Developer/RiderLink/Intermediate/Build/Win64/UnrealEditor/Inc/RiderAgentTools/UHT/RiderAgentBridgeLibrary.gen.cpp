// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RiderAgentBridgeLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRiderAgentBridgeLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
RIDERAGENTTOOLS_API UClass* Z_Construct_UClass_URiderAgentBridgeLibrary();
RIDERAGENTTOOLS_API UClass* Z_Construct_UClass_URiderAgentBridgeLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_RiderAgentTools();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URiderAgentBridgeLibrary Function AddBlueprintNode ***********************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics
{
	struct RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms
	{
		FString BlueprintPath;
		FString GraphName;
		FString NodeClassName;
		FString NodeParamsJson;
		int32 X;
		int32 Y;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeParamsJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeClassName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeParamsJson;
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphName_MetaData), NewProp_GraphName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::NewProp_NodeClassName = { "NodeClassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms, NodeClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeClassName_MetaData), NewProp_NodeClassName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::NewProp_NodeParamsJson = { "NodeParamsJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms, NodeParamsJson), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeParamsJson_MetaData), NewProp_NodeParamsJson_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::NewProp_NodeClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::NewProp_NodeParamsJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "AddBlueprintNode", Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execAddBlueprintNode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_GraphName);
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeClassName);
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeParamsJson);
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::AddBlueprintNode(Z_Param_BlueprintPath,Z_Param_GraphName,Z_Param_NodeClassName,Z_Param_NodeParamsJson,Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function AddBlueprintNode *************************

// ********** Begin Class URiderAgentBridgeLibrary Function AddBlueprintVariable *******************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics
{
	struct RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms
	{
		FString BlueprintPath;
		FString VariableName;
		FString PinCategoryName;
		FString PinSubCategoryName;
		FString PinSubCategoryObject;
		FString ContainerType;
		bool bIsReference;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 Blueprint Variables \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 Blueprint Variables \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinCategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinSubCategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinSubCategoryObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PinCategoryName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PinSubCategoryName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PinSubCategoryObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContainerType;
	static void NewProp_bIsReference_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReference;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms, VariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableName_MetaData), NewProp_VariableName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_PinCategoryName = { "PinCategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms, PinCategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinCategoryName_MetaData), NewProp_PinCategoryName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_PinSubCategoryName = { "PinSubCategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms, PinSubCategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinSubCategoryName_MetaData), NewProp_PinSubCategoryName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_PinSubCategoryObject = { "PinSubCategoryObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms, PinSubCategoryObject), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinSubCategoryObject_MetaData), NewProp_PinSubCategoryObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_ContainerType = { "ContainerType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms, ContainerType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerType_MetaData), NewProp_ContainerType_MetaData) };
void Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_bIsReference_SetBit(void* Obj)
{
	((RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms*)Obj)->bIsReference = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_bIsReference = { "bIsReference", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms), &Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_bIsReference_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms), &Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_PinCategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_PinSubCategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_PinSubCategoryObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_ContainerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_bIsReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "AddBlueprintVariable", Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execAddBlueprintVariable)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
	P_GET_PROPERTY(FStrProperty,Z_Param_PinCategoryName);
	P_GET_PROPERTY(FStrProperty,Z_Param_PinSubCategoryName);
	P_GET_PROPERTY(FStrProperty,Z_Param_PinSubCategoryObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContainerType);
	P_GET_UBOOL(Z_Param_bIsReference);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::AddBlueprintVariable(Z_Param_BlueprintPath,Z_Param_VariableName,Z_Param_PinCategoryName,Z_Param_PinSubCategoryName,Z_Param_PinSubCategoryObject,Z_Param_ContainerType,Z_Param_bIsReference);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function AddBlueprintVariable *********************

// ********** Begin Class URiderAgentBridgeLibrary Function AddWidgetToTree ************************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics
{
	struct RiderAgentBridgeLibrary_eventAddWidgetToTree_Parms
	{
		FString WidgetBlueprintPath;
		FString ParentWidgetName;
		FString ChildWidgetClass;
		FString ChildWidgetName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 Widget Tree \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 Widget Tree \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentWidgetName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildWidgetClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildWidgetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_WidgetBlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParentWidgetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChildWidgetClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChildWidgetName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::NewProp_WidgetBlueprintPath = { "WidgetBlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddWidgetToTree_Parms, WidgetBlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetBlueprintPath_MetaData), NewProp_WidgetBlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::NewProp_ParentWidgetName = { "ParentWidgetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddWidgetToTree_Parms, ParentWidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentWidgetName_MetaData), NewProp_ParentWidgetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::NewProp_ChildWidgetClass = { "ChildWidgetClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddWidgetToTree_Parms, ChildWidgetClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildWidgetClass_MetaData), NewProp_ChildWidgetClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::NewProp_ChildWidgetName = { "ChildWidgetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddWidgetToTree_Parms, ChildWidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildWidgetName_MetaData), NewProp_ChildWidgetName_MetaData) };
void Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiderAgentBridgeLibrary_eventAddWidgetToTree_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventAddWidgetToTree_Parms), &Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::NewProp_WidgetBlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::NewProp_ParentWidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::NewProp_ChildWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::NewProp_ChildWidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "AddWidgetToTree", Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::RiderAgentBridgeLibrary_eventAddWidgetToTree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::RiderAgentBridgeLibrary_eventAddWidgetToTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execAddWidgetToTree)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_WidgetBlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_ParentWidgetName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ChildWidgetClass);
	P_GET_PROPERTY(FStrProperty,Z_Param_ChildWidgetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::AddWidgetToTree(Z_Param_WidgetBlueprintPath,Z_Param_ParentWidgetName,Z_Param_ChildWidgetClass,Z_Param_ChildWidgetName);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function AddWidgetToTree **************************

// ********** Begin Class URiderAgentBridgeLibrary Function ConnectBlueprintPins *******************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics
{
	struct RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms
	{
		FString BlueprintPath;
		FString GraphName;
		FString SourceNodeName;
		FString SourcePinName;
		FString TargetNodeName;
		FString TargetPinName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceNodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePinName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetNodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPinName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceNodeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourcePinName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetNodeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetPinName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphName_MetaData), NewProp_GraphName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::NewProp_SourceNodeName = { "SourceNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms, SourceNodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceNodeName_MetaData), NewProp_SourceNodeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::NewProp_SourcePinName = { "SourcePinName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms, SourcePinName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePinName_MetaData), NewProp_SourcePinName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::NewProp_TargetNodeName = { "TargetNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms, TargetNodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetNodeName_MetaData), NewProp_TargetNodeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::NewProp_TargetPinName = { "TargetPinName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms, TargetPinName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPinName_MetaData), NewProp_TargetPinName_MetaData) };
void Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms), &Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::NewProp_SourceNodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::NewProp_SourcePinName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::NewProp_TargetNodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::NewProp_TargetPinName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "ConnectBlueprintPins", Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execConnectBlueprintPins)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_GraphName);
	P_GET_PROPERTY(FStrProperty,Z_Param_SourceNodeName);
	P_GET_PROPERTY(FStrProperty,Z_Param_SourcePinName);
	P_GET_PROPERTY(FStrProperty,Z_Param_TargetNodeName);
	P_GET_PROPERTY(FStrProperty,Z_Param_TargetPinName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::ConnectBlueprintPins(Z_Param_BlueprintPath,Z_Param_GraphName,Z_Param_SourceNodeName,Z_Param_SourcePinName,Z_Param_TargetNodeName,Z_Param_TargetPinName);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function ConnectBlueprintPins *********************

// ********** Begin Class URiderAgentBridgeLibrary Function DuplicateAsset *************************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset_Statics
{
	struct RiderAgentBridgeLibrary_eventDuplicateAsset_Parms
	{
		FString SourcePath;
		FString DestPath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Asset" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourcePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DestPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventDuplicateAsset_Parms, SourcePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePath_MetaData), NewProp_SourcePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset_Statics::NewProp_DestPath = { "DestPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventDuplicateAsset_Parms, DestPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestPath_MetaData), NewProp_DestPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventDuplicateAsset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset_Statics::NewProp_SourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset_Statics::NewProp_DestPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "DuplicateAsset", Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset_Statics::RiderAgentBridgeLibrary_eventDuplicateAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset_Statics::RiderAgentBridgeLibrary_eventDuplicateAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execDuplicateAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SourcePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_DestPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::DuplicateAsset(Z_Param_SourcePath,Z_Param_DestPath);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function DuplicateAsset ***************************

// ********** Begin Class URiderAgentBridgeLibrary Function EnsureAsset ****************************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics
{
	struct RiderAgentBridgeLibrary_eventEnsureAsset_Parms
	{
		FString PackagePath;
		FString AssetName;
		FString ClassName;
		FString FactoryClassName;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Asset" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactoryClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FactoryClassName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventEnsureAsset_Parms, PackagePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagePath_MetaData), NewProp_PackagePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventEnsureAsset_Parms, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventEnsureAsset_Parms, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::NewProp_FactoryClassName = { "FactoryClassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventEnsureAsset_Parms, FactoryClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactoryClassName_MetaData), NewProp_FactoryClassName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventEnsureAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::NewProp_PackagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::NewProp_FactoryClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "EnsureAsset", Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::RiderAgentBridgeLibrary_eventEnsureAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::RiderAgentBridgeLibrary_eventEnsureAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execEnsureAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PackagePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ClassName);
	P_GET_PROPERTY(FStrProperty,Z_Param_FactoryClassName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=URiderAgentBridgeLibrary::EnsureAsset(Z_Param_PackagePath,Z_Param_AssetName,Z_Param_ClassName,Z_Param_FactoryClassName);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function EnsureAsset ******************************

// ********** Begin Class URiderAgentBridgeLibrary Function ExportBlueprintNodes *******************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics
{
	struct RiderAgentBridgeLibrary_eventExportBlueprintNodes_Parms
	{
		FString BlueprintPath;
		FString GraphName;
		FString NodeNamesJson;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeNamesJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeNamesJson;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventExportBlueprintNodes_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventExportBlueprintNodes_Parms, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphName_MetaData), NewProp_GraphName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics::NewProp_NodeNamesJson = { "NodeNamesJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventExportBlueprintNodes_Parms, NodeNamesJson), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeNamesJson_MetaData), NewProp_NodeNamesJson_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventExportBlueprintNodes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics::NewProp_NodeNamesJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "ExportBlueprintNodes", Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics::RiderAgentBridgeLibrary_eventExportBlueprintNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics::RiderAgentBridgeLibrary_eventExportBlueprintNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execExportBlueprintNodes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_GraphName);
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeNamesJson);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::ExportBlueprintNodes(Z_Param_BlueprintPath,Z_Param_GraphName,Z_Param_NodeNamesJson);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function ExportBlueprintNodes *********************

// ********** Begin Class URiderAgentBridgeLibrary Function ForceDeleteAsset ***********************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset_Statics
{
	struct RiderAgentBridgeLibrary_eventForceDeleteAsset_Parms
	{
		FString PackagePath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 Asset Operations \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 Asset Operations \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventForceDeleteAsset_Parms, PackagePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagePath_MetaData), NewProp_PackagePath_MetaData) };
void Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiderAgentBridgeLibrary_eventForceDeleteAsset_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventForceDeleteAsset_Parms), &Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset_Statics::NewProp_PackagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "ForceDeleteAsset", Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset_Statics::RiderAgentBridgeLibrary_eventForceDeleteAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset_Statics::RiderAgentBridgeLibrary_eventForceDeleteAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execForceDeleteAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PackagePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::ForceDeleteAsset(Z_Param_PackagePath);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function ForceDeleteAsset *************************

// ********** Begin Class URiderAgentBridgeLibrary Function ForceDeleteAssets **********************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets_Statics
{
	struct RiderAgentBridgeLibrary_eventForceDeleteAssets_Parms
	{
		TArray<FString> PackagePaths;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Asset" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PackagePaths;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets_Statics::NewProp_PackagePaths_Inner = { "PackagePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets_Statics::NewProp_PackagePaths = { "PackagePaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventForceDeleteAssets_Parms, PackagePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagePaths_MetaData), NewProp_PackagePaths_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventForceDeleteAssets_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets_Statics::NewProp_PackagePaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets_Statics::NewProp_PackagePaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "ForceDeleteAssets", Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets_Statics::RiderAgentBridgeLibrary_eventForceDeleteAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets_Statics::RiderAgentBridgeLibrary_eventForceDeleteAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execForceDeleteAssets)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_PackagePaths);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=URiderAgentBridgeLibrary::ForceDeleteAssets(Z_Param_Out_PackagePaths);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function ForceDeleteAssets ************************

// ********** Begin Class URiderAgentBridgeLibrary Function GetAllBlueprintGraphs ******************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs_Statics
{
	struct RiderAgentBridgeLibrary_eventGetAllBlueprintGraphs_Parms
	{
		FString BlueprintPath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 Blueprint Graph \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 Blueprint Graph \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs_Statics::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetAllBlueprintGraphs_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetAllBlueprintGraphs_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs_Statics::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "GetAllBlueprintGraphs", Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs_Statics::RiderAgentBridgeLibrary_eventGetAllBlueprintGraphs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs_Statics::RiderAgentBridgeLibrary_eventGetAllBlueprintGraphs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execGetAllBlueprintGraphs)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::GetAllBlueprintGraphs(Z_Param_BlueprintPath);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function GetAllBlueprintGraphs ********************

// ********** Begin Class URiderAgentBridgeLibrary Function GetBlueprintGraphNodes *****************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes_Statics
{
	struct RiderAgentBridgeLibrary_eventGetBlueprintGraphNodes_Parms
	{
		FString BlueprintPath;
		FString GraphName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes_Statics::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetBlueprintGraphNodes_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetBlueprintGraphNodes_Parms, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphName_MetaData), NewProp_GraphName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetBlueprintGraphNodes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes_Statics::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes_Statics::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "GetBlueprintGraphNodes", Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes_Statics::RiderAgentBridgeLibrary_eventGetBlueprintGraphNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes_Statics::RiderAgentBridgeLibrary_eventGetBlueprintGraphNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execGetBlueprintGraphNodes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_GraphName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::GetBlueprintGraphNodes(Z_Param_BlueprintPath,Z_Param_GraphName);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function GetBlueprintGraphNodes *******************

// ********** Begin Class URiderAgentBridgeLibrary Function GetCVarInfo ****************************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo_Statics
{
	struct RiderAgentBridgeLibrary_eventGetCVarInfo_Parms
	{
		FString Name;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|CVar" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetCVarInfo_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetCVarInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "GetCVarInfo", Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo_Statics::RiderAgentBridgeLibrary_eventGetCVarInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo_Statics::RiderAgentBridgeLibrary_eventGetCVarInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execGetCVarInfo)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::GetCVarInfo(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function GetCVarInfo ******************************

// ********** Begin Class URiderAgentBridgeLibrary Function GetNiagaraSystemEmitters ***************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters_Statics
{
	struct RiderAgentBridgeLibrary_eventGetNiagaraSystemEmitters_Parms
	{
		FString NiagaraSystemPath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Niagara" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystemPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NiagaraSystemPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters_Statics::NewProp_NiagaraSystemPath = { "NiagaraSystemPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetNiagaraSystemEmitters_Parms, NiagaraSystemPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraSystemPath_MetaData), NewProp_NiagaraSystemPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetNiagaraSystemEmitters_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters_Statics::NewProp_NiagaraSystemPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "GetNiagaraSystemEmitters", Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters_Statics::RiderAgentBridgeLibrary_eventGetNiagaraSystemEmitters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters_Statics::RiderAgentBridgeLibrary_eventGetNiagaraSystemEmitters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execGetNiagaraSystemEmitters)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NiagaraSystemPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::GetNiagaraSystemEmitters(Z_Param_NiagaraSystemPath);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function GetNiagaraSystemEmitters *****************

// ********** Begin Class URiderAgentBridgeLibrary Function GetNiagaraSystemParameters *************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters_Statics
{
	struct RiderAgentBridgeLibrary_eventGetNiagaraSystemParameters_Parms
	{
		FString NiagaraSystemPath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Niagara" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 Niagara \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 Niagara \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystemPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NiagaraSystemPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters_Statics::NewProp_NiagaraSystemPath = { "NiagaraSystemPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetNiagaraSystemParameters_Parms, NiagaraSystemPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraSystemPath_MetaData), NewProp_NiagaraSystemPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetNiagaraSystemParameters_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters_Statics::NewProp_NiagaraSystemPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "GetNiagaraSystemParameters", Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters_Statics::RiderAgentBridgeLibrary_eventGetNiagaraSystemParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters_Statics::RiderAgentBridgeLibrary_eventGetNiagaraSystemParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execGetNiagaraSystemParameters)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NiagaraSystemPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::GetNiagaraSystemParameters(Z_Param_NiagaraSystemPath);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function GetNiagaraSystemParameters ***************

// ********** Begin Class URiderAgentBridgeLibrary Function ImportBlueprintNodes *******************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics
{
	struct RiderAgentBridgeLibrary_eventImportBlueprintNodes_Parms
	{
		FString BlueprintPath;
		FString GraphName;
		FString ClipboardText;
		int32 OffsetX;
		int32 OffsetY;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipboardText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClipboardText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OffsetX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OffsetY;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventImportBlueprintNodes_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventImportBlueprintNodes_Parms, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphName_MetaData), NewProp_GraphName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::NewProp_ClipboardText = { "ClipboardText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventImportBlueprintNodes_Parms, ClipboardText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipboardText_MetaData), NewProp_ClipboardText_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::NewProp_OffsetX = { "OffsetX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventImportBlueprintNodes_Parms, OffsetX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::NewProp_OffsetY = { "OffsetY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventImportBlueprintNodes_Parms, OffsetY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventImportBlueprintNodes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::NewProp_ClipboardText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::NewProp_OffsetX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::NewProp_OffsetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "ImportBlueprintNodes", Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::RiderAgentBridgeLibrary_eventImportBlueprintNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::RiderAgentBridgeLibrary_eventImportBlueprintNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execImportBlueprintNodes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_GraphName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ClipboardText);
	P_GET_PROPERTY(FIntProperty,Z_Param_OffsetX);
	P_GET_PROPERTY(FIntProperty,Z_Param_OffsetY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::ImportBlueprintNodes(Z_Param_BlueprintPath,Z_Param_GraphName,Z_Param_ClipboardText,Z_Param_OffsetX,Z_Param_OffsetY);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function ImportBlueprintNodes *********************

// ********** Begin Class URiderAgentBridgeLibrary Function IsSuppressingModalDialogs **************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs_Statics
{
	struct RiderAgentBridgeLibrary_eventIsSuppressingModalDialogs_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Dialog" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiderAgentBridgeLibrary_eventIsSuppressingModalDialogs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventIsSuppressingModalDialogs_Parms), &Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "IsSuppressingModalDialogs", Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs_Statics::RiderAgentBridgeLibrary_eventIsSuppressingModalDialogs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs_Statics::RiderAgentBridgeLibrary_eventIsSuppressingModalDialogs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execIsSuppressingModalDialogs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::IsSuppressingModalDialogs();
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function IsSuppressingModalDialogs ****************

// ********** Begin Class URiderAgentBridgeLibrary Function ListWidgetsInTree **********************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree_Statics
{
	struct RiderAgentBridgeLibrary_eventListWidgetsInTree_Parms
	{
		FString WidgetBlueprintPath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Widget" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_WidgetBlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree_Statics::NewProp_WidgetBlueprintPath = { "WidgetBlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventListWidgetsInTree_Parms, WidgetBlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetBlueprintPath_MetaData), NewProp_WidgetBlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventListWidgetsInTree_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree_Statics::NewProp_WidgetBlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "ListWidgetsInTree", Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree_Statics::RiderAgentBridgeLibrary_eventListWidgetsInTree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree_Statics::RiderAgentBridgeLibrary_eventListWidgetsInTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execListWidgetsInTree)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_WidgetBlueprintPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::ListWidgetsInTree(Z_Param_WidgetBlueprintPath);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function ListWidgetsInTree ************************

// ********** Begin Class URiderAgentBridgeLibrary Function ReadCVar *******************************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar_Statics
{
	struct RiderAgentBridgeLibrary_eventReadCVar_Parms
	{
		FString Name;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|CVar" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 Console Variables \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 Console Variables \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventReadCVar_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventReadCVar_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "ReadCVar", Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar_Statics::RiderAgentBridgeLibrary_eventReadCVar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar_Statics::RiderAgentBridgeLibrary_eventReadCVar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execReadCVar)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::ReadCVar(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function ReadCVar *********************************

// ********** Begin Class URiderAgentBridgeLibrary Function RemoveBlueprintNode ********************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics
{
	struct RiderAgentBridgeLibrary_eventRemoveBlueprintNode_Parms
	{
		FString BlueprintPath;
		FString GraphName;
		FString NodeName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventRemoveBlueprintNode_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventRemoveBlueprintNode_Parms, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphName_MetaData), NewProp_GraphName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventRemoveBlueprintNode_Parms, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeName_MetaData), NewProp_NodeName_MetaData) };
void Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiderAgentBridgeLibrary_eventRemoveBlueprintNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventRemoveBlueprintNode_Parms), &Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::NewProp_NodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "RemoveBlueprintNode", Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::RiderAgentBridgeLibrary_eventRemoveBlueprintNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::RiderAgentBridgeLibrary_eventRemoveBlueprintNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execRemoveBlueprintNode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_GraphName);
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::RemoveBlueprintNode(Z_Param_BlueprintPath,Z_Param_GraphName,Z_Param_NodeName);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function RemoveBlueprintNode **********************

// ********** Begin Class URiderAgentBridgeLibrary Function RemoveBlueprintVariable ****************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics
{
	struct RiderAgentBridgeLibrary_eventRemoveBlueprintVariable_Parms
	{
		FString BlueprintPath;
		FString VariableName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventRemoveBlueprintVariable_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventRemoveBlueprintVariable_Parms, VariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableName_MetaData), NewProp_VariableName_MetaData) };
void Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiderAgentBridgeLibrary_eventRemoveBlueprintVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventRemoveBlueprintVariable_Parms), &Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "RemoveBlueprintVariable", Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics::RiderAgentBridgeLibrary_eventRemoveBlueprintVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics::RiderAgentBridgeLibrary_eventRemoveBlueprintVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execRemoveBlueprintVariable)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::RemoveBlueprintVariable(Z_Param_BlueprintPath,Z_Param_VariableName);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function RemoveBlueprintVariable ******************

// ********** Begin Class URiderAgentBridgeLibrary Function RemoveWidgetFromTree *******************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics
{
	struct RiderAgentBridgeLibrary_eventRemoveWidgetFromTree_Parms
	{
		FString WidgetBlueprintPath;
		FString WidgetName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Widget" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_WidgetBlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WidgetName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics::NewProp_WidgetBlueprintPath = { "WidgetBlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventRemoveWidgetFromTree_Parms, WidgetBlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetBlueprintPath_MetaData), NewProp_WidgetBlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics::NewProp_WidgetName = { "WidgetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventRemoveWidgetFromTree_Parms, WidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetName_MetaData), NewProp_WidgetName_MetaData) };
void Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiderAgentBridgeLibrary_eventRemoveWidgetFromTree_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventRemoveWidgetFromTree_Parms), &Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics::NewProp_WidgetBlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics::NewProp_WidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "RemoveWidgetFromTree", Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics::RiderAgentBridgeLibrary_eventRemoveWidgetFromTree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics::RiderAgentBridgeLibrary_eventRemoveWidgetFromTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execRemoveWidgetFromTree)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_WidgetBlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_WidgetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::RemoveWidgetFromTree(Z_Param_WidgetBlueprintPath,Z_Param_WidgetName);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function RemoveWidgetFromTree *********************

// ********** Begin Class URiderAgentBridgeLibrary Function SetBlueprintVariableCategory ***********
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics
{
	struct RiderAgentBridgeLibrary_eventSetBlueprintVariableCategory_Parms
	{
		FString BlueprintPath;
		FString VariableName;
		FString CategoryName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetBlueprintVariableCategory_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetBlueprintVariableCategory_Parms, VariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableName_MetaData), NewProp_VariableName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetBlueprintVariableCategory_Parms, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
void Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiderAgentBridgeLibrary_eventSetBlueprintVariableCategory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventSetBlueprintVariableCategory_Parms), &Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "SetBlueprintVariableCategory", Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::RiderAgentBridgeLibrary_eventSetBlueprintVariableCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::RiderAgentBridgeLibrary_eventSetBlueprintVariableCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execSetBlueprintVariableCategory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
	P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::SetBlueprintVariableCategory(Z_Param_BlueprintPath,Z_Param_VariableName,Z_Param_CategoryName);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function SetBlueprintVariableCategory *************

// ********** Begin Class URiderAgentBridgeLibrary Function SetBlueprintVariableDefaultValue *******
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics
{
	struct RiderAgentBridgeLibrary_eventSetBlueprintVariableDefaultValue_Parms
	{
		FString BlueprintPath;
		FString VariableName;
		FString ValueText;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValueText;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetBlueprintVariableDefaultValue_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetBlueprintVariableDefaultValue_Parms, VariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableName_MetaData), NewProp_VariableName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::NewProp_ValueText = { "ValueText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetBlueprintVariableDefaultValue_Parms, ValueText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueText_MetaData), NewProp_ValueText_MetaData) };
void Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiderAgentBridgeLibrary_eventSetBlueprintVariableDefaultValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventSetBlueprintVariableDefaultValue_Parms), &Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::NewProp_ValueText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "SetBlueprintVariableDefaultValue", Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::RiderAgentBridgeLibrary_eventSetBlueprintVariableDefaultValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::RiderAgentBridgeLibrary_eventSetBlueprintVariableDefaultValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execSetBlueprintVariableDefaultValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ValueText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::SetBlueprintVariableDefaultValue(Z_Param_BlueprintPath,Z_Param_VariableName,Z_Param_ValueText);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function SetBlueprintVariableDefaultValue *********

// ********** Begin Class URiderAgentBridgeLibrary Function SetPinDefaultValue *********************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics
{
	struct RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms
	{
		FString BlueprintPath;
		FString GraphName;
		FString NodeName;
		FString PinName;
		FString DefaultValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PinName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphName_MetaData), NewProp_GraphName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeName_MetaData), NewProp_NodeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms, PinName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinName_MetaData), NewProp_PinName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
void Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms), &Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::NewProp_NodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::NewProp_PinName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "SetPinDefaultValue", Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execSetPinDefaultValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_GraphName);
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeName);
	P_GET_PROPERTY(FStrProperty,Z_Param_PinName);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::SetPinDefaultValue(Z_Param_BlueprintPath,Z_Param_GraphName,Z_Param_NodeName,Z_Param_PinName,Z_Param_DefaultValue);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function SetPinDefaultValue ***********************

// ********** Begin Class URiderAgentBridgeLibrary Function SetSuppressModalDialogs ****************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs_Statics
{
	struct RiderAgentBridgeLibrary_eventSetSuppressModalDialogs_Parms
	{
		bool bSuppress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Dialog" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 Modal Dialog Suppression \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 Modal Dialog Suppression \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSuppress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs_Statics::NewProp_bSuppress_SetBit(void* Obj)
{
	((RiderAgentBridgeLibrary_eventSetSuppressModalDialogs_Parms*)Obj)->bSuppress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs_Statics::NewProp_bSuppress = { "bSuppress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventSetSuppressModalDialogs_Parms), &Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs_Statics::NewProp_bSuppress_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs_Statics::NewProp_bSuppress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "SetSuppressModalDialogs", Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs_Statics::RiderAgentBridgeLibrary_eventSetSuppressModalDialogs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs_Statics::RiderAgentBridgeLibrary_eventSetSuppressModalDialogs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execSetSuppressModalDialogs)
{
	P_GET_UBOOL(Z_Param_bSuppress);
	P_FINISH;
	P_NATIVE_BEGIN;
	URiderAgentBridgeLibrary::SetSuppressModalDialogs(Z_Param_bSuppress);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function SetSuppressModalDialogs ******************

// ********** Begin Class URiderAgentBridgeLibrary Function SetWidgetProperty **********************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics
{
	struct RiderAgentBridgeLibrary_eventSetWidgetProperty_Parms
	{
		FString WidgetBlueprintPath;
		FString WidgetName;
		FString PropertyName;
		FString ValueText;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Widget" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_WidgetBlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WidgetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValueText;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::NewProp_WidgetBlueprintPath = { "WidgetBlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetWidgetProperty_Parms, WidgetBlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetBlueprintPath_MetaData), NewProp_WidgetBlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::NewProp_WidgetName = { "WidgetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetWidgetProperty_Parms, WidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetName_MetaData), NewProp_WidgetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetWidgetProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::NewProp_ValueText = { "ValueText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetWidgetProperty_Parms, ValueText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueText_MetaData), NewProp_ValueText_MetaData) };
void Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiderAgentBridgeLibrary_eventSetWidgetProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventSetWidgetProperty_Parms), &Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::NewProp_WidgetBlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::NewProp_WidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::NewProp_ValueText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "SetWidgetProperty", Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::RiderAgentBridgeLibrary_eventSetWidgetProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::RiderAgentBridgeLibrary_eventSetWidgetProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execSetWidgetProperty)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_WidgetBlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_WidgetName);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ValueText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::SetWidgetProperty(Z_Param_WidgetBlueprintPath,Z_Param_WidgetName,Z_Param_PropertyName,Z_Param_ValueText);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function SetWidgetProperty ************************

// ********** Begin Class URiderAgentBridgeLibrary Function SetWidgetSlotProperty ******************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics
{
	struct RiderAgentBridgeLibrary_eventSetWidgetSlotProperty_Parms
	{
		FString WidgetBlueprintPath;
		FString WidgetName;
		FString PropertyName;
		FString ValueText;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Widget" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_WidgetBlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WidgetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValueText;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::NewProp_WidgetBlueprintPath = { "WidgetBlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetWidgetSlotProperty_Parms, WidgetBlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetBlueprintPath_MetaData), NewProp_WidgetBlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::NewProp_WidgetName = { "WidgetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetWidgetSlotProperty_Parms, WidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetName_MetaData), NewProp_WidgetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetWidgetSlotProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::NewProp_ValueText = { "ValueText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetWidgetSlotProperty_Parms, ValueText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueText_MetaData), NewProp_ValueText_MetaData) };
void Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiderAgentBridgeLibrary_eventSetWidgetSlotProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventSetWidgetSlotProperty_Parms), &Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::NewProp_WidgetBlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::NewProp_WidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::NewProp_ValueText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "SetWidgetSlotProperty", Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::RiderAgentBridgeLibrary_eventSetWidgetSlotProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::RiderAgentBridgeLibrary_eventSetWidgetSlotProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execSetWidgetSlotProperty)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_WidgetBlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_WidgetName);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ValueText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::SetWidgetSlotProperty(Z_Param_WidgetBlueprintPath,Z_Param_WidgetName,Z_Param_PropertyName,Z_Param_ValueText);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function SetWidgetSlotProperty ********************

// ********** Begin Class URiderAgentBridgeLibrary Function ShowNotification ***********************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification_Statics
{
	struct RiderAgentBridgeLibrary_eventShowNotification_Parms
	{
		FString Text;
		FString Type;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|Notify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 Editor Notification \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "CPP_Default_Duration", "0.000000" },
		{ "CPP_Default_Type", "info" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 Editor Notification \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventShowNotification_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventShowNotification_Parms, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventShowNotification_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "ShowNotification", Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification_Statics::RiderAgentBridgeLibrary_eventShowNotification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification_Statics::RiderAgentBridgeLibrary_eventShowNotification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execShowNotification)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_PROPERTY(FStrProperty,Z_Param_Type);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	URiderAgentBridgeLibrary::ShowNotification(Z_Param_Text,Z_Param_Type,Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function ShowNotification *************************

// ********** Begin Class URiderAgentBridgeLibrary Function WriteCVar ******************************
struct Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics
{
	struct RiderAgentBridgeLibrary_eventWriteCVar_Parms
	{
		FString Name;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RiderAgentBridge|CVar" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventWriteCVar_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventWriteCVar_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RiderAgentBridgeLibrary_eventWriteCVar_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventWriteCVar_Parms), &Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "WriteCVar", Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics::PropPointers), sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics::RiderAgentBridgeLibrary_eventWriteCVar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics::Function_MetaDataParams), Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics::RiderAgentBridgeLibrary_eventWriteCVar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execWriteCVar)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::WriteCVar(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function WriteCVar ********************************

// ********** Begin Class URiderAgentBridgeLibrary *************************************************
void URiderAgentBridgeLibrary::StaticRegisterNativesURiderAgentBridgeLibrary()
{
	UClass* Class = URiderAgentBridgeLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddBlueprintNode", &URiderAgentBridgeLibrary::execAddBlueprintNode },
		{ "AddBlueprintVariable", &URiderAgentBridgeLibrary::execAddBlueprintVariable },
		{ "AddWidgetToTree", &URiderAgentBridgeLibrary::execAddWidgetToTree },
		{ "ConnectBlueprintPins", &URiderAgentBridgeLibrary::execConnectBlueprintPins },
		{ "DuplicateAsset", &URiderAgentBridgeLibrary::execDuplicateAsset },
		{ "EnsureAsset", &URiderAgentBridgeLibrary::execEnsureAsset },
		{ "ExportBlueprintNodes", &URiderAgentBridgeLibrary::execExportBlueprintNodes },
		{ "ForceDeleteAsset", &URiderAgentBridgeLibrary::execForceDeleteAsset },
		{ "ForceDeleteAssets", &URiderAgentBridgeLibrary::execForceDeleteAssets },
		{ "GetAllBlueprintGraphs", &URiderAgentBridgeLibrary::execGetAllBlueprintGraphs },
		{ "GetBlueprintGraphNodes", &URiderAgentBridgeLibrary::execGetBlueprintGraphNodes },
		{ "GetCVarInfo", &URiderAgentBridgeLibrary::execGetCVarInfo },
		{ "GetNiagaraSystemEmitters", &URiderAgentBridgeLibrary::execGetNiagaraSystemEmitters },
		{ "GetNiagaraSystemParameters", &URiderAgentBridgeLibrary::execGetNiagaraSystemParameters },
		{ "ImportBlueprintNodes", &URiderAgentBridgeLibrary::execImportBlueprintNodes },
		{ "IsSuppressingModalDialogs", &URiderAgentBridgeLibrary::execIsSuppressingModalDialogs },
		{ "ListWidgetsInTree", &URiderAgentBridgeLibrary::execListWidgetsInTree },
		{ "ReadCVar", &URiderAgentBridgeLibrary::execReadCVar },
		{ "RemoveBlueprintNode", &URiderAgentBridgeLibrary::execRemoveBlueprintNode },
		{ "RemoveBlueprintVariable", &URiderAgentBridgeLibrary::execRemoveBlueprintVariable },
		{ "RemoveWidgetFromTree", &URiderAgentBridgeLibrary::execRemoveWidgetFromTree },
		{ "SetBlueprintVariableCategory", &URiderAgentBridgeLibrary::execSetBlueprintVariableCategory },
		{ "SetBlueprintVariableDefaultValue", &URiderAgentBridgeLibrary::execSetBlueprintVariableDefaultValue },
		{ "SetPinDefaultValue", &URiderAgentBridgeLibrary::execSetPinDefaultValue },
		{ "SetSuppressModalDialogs", &URiderAgentBridgeLibrary::execSetSuppressModalDialogs },
		{ "SetWidgetProperty", &URiderAgentBridgeLibrary::execSetWidgetProperty },
		{ "SetWidgetSlotProperty", &URiderAgentBridgeLibrary::execSetWidgetSlotProperty },
		{ "ShowNotification", &URiderAgentBridgeLibrary::execShowNotification },
		{ "WriteCVar", &URiderAgentBridgeLibrary::execWriteCVar },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URiderAgentBridgeLibrary;
UClass* URiderAgentBridgeLibrary::GetPrivateStaticClass()
{
	using TClass = URiderAgentBridgeLibrary;
	if (!Z_Registration_Info_UClass_URiderAgentBridgeLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RiderAgentBridgeLibrary"),
			Z_Registration_Info_UClass_URiderAgentBridgeLibrary.InnerSingleton,
			StaticRegisterNativesURiderAgentBridgeLibrary,
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
	return Z_Registration_Info_UClass_URiderAgentBridgeLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_URiderAgentBridgeLibrary_NoRegister()
{
	return URiderAgentBridgeLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URiderAgentBridgeLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Python-exposed editor helpers that fill gaps in Unreal's Python API.\n * Callable from Rider's ue_execute_python tool as:\n *   unreal.RiderAgentBridgeLibrary.method_name(args)\n * Editor-only. Runs on the game thread (the Python transport dispatches there).\n */" },
#endif
		{ "IncludePath", "RiderAgentBridgeLibrary.h" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Python-exposed editor helpers that fill gaps in Unreal's Python API.\nCallable from Rider's ue_execute_python tool as:\n  unreal.RiderAgentBridgeLibrary.method_name(args)\nEditor-only. Runs on the game thread (the Python transport dispatches there)." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode, "AddBlueprintNode" }, // 2405176068
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable, "AddBlueprintVariable" }, // 615242027
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree, "AddWidgetToTree" }, // 2951546437
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins, "ConnectBlueprintPins" }, // 1587675466
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset, "DuplicateAsset" }, // 3988766923
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset, "EnsureAsset" }, // 1709258546
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes, "ExportBlueprintNodes" }, // 29281372
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset, "ForceDeleteAsset" }, // 1056599919
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets, "ForceDeleteAssets" }, // 1319142275
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs, "GetAllBlueprintGraphs" }, // 1981162790
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes, "GetBlueprintGraphNodes" }, // 2738628235
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo, "GetCVarInfo" }, // 2201472479
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters, "GetNiagaraSystemEmitters" }, // 8717360
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters, "GetNiagaraSystemParameters" }, // 4244677096
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes, "ImportBlueprintNodes" }, // 3304060789
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs, "IsSuppressingModalDialogs" }, // 1500998023
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree, "ListWidgetsInTree" }, // 1439096479
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar, "ReadCVar" }, // 4137110147
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode, "RemoveBlueprintNode" }, // 249489923
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable, "RemoveBlueprintVariable" }, // 3713349284
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree, "RemoveWidgetFromTree" }, // 3630851482
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory, "SetBlueprintVariableCategory" }, // 1608378638
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue, "SetBlueprintVariableDefaultValue" }, // 1592299227
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue, "SetPinDefaultValue" }, // 524547003
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs, "SetSuppressModalDialogs" }, // 1543790327
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty, "SetWidgetProperty" }, // 1580289285
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty, "SetWidgetSlotProperty" }, // 1159597743
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification, "ShowNotification" }, // 699740483
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar, "WriteCVar" }, // 2264234620
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URiderAgentBridgeLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URiderAgentBridgeLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RiderAgentTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URiderAgentBridgeLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URiderAgentBridgeLibrary_Statics::ClassParams = {
	&URiderAgentBridgeLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URiderAgentBridgeLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_URiderAgentBridgeLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URiderAgentBridgeLibrary()
{
	if (!Z_Registration_Info_UClass_URiderAgentBridgeLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URiderAgentBridgeLibrary.OuterSingleton, Z_Construct_UClass_URiderAgentBridgeLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URiderAgentBridgeLibrary.OuterSingleton;
}
URiderAgentBridgeLibrary::URiderAgentBridgeLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URiderAgentBridgeLibrary);
URiderAgentBridgeLibrary::~URiderAgentBridgeLibrary() {}
// ********** End Class URiderAgentBridgeLibrary ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Plugins_Developer_RiderLink_Source_RiderAgentTools_Private_RiderAgentBridgeLibrary_h__Script_RiderAgentTools_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URiderAgentBridgeLibrary, URiderAgentBridgeLibrary::StaticClass, TEXT("URiderAgentBridgeLibrary"), &Z_Registration_Info_UClass_URiderAgentBridgeLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URiderAgentBridgeLibrary), 2839432023U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Plugins_Developer_RiderLink_Source_RiderAgentTools_Private_RiderAgentBridgeLibrary_h__Script_RiderAgentTools_5268148(TEXT("/Script/RiderAgentTools"),
	Z_CompiledInDeferFile_FID_PUBG_Plugins_Developer_RiderLink_Source_RiderAgentTools_Private_RiderAgentBridgeLibrary_h__Script_RiderAgentTools_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Plugins_Developer_RiderLink_Source_RiderAgentTools_Private_RiderAgentBridgeLibrary_h__Script_RiderAgentTools_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
