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
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EKillMessageRole();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGlobalPlayerController Function Client_KillMessage **********************
struct GlobalPlayerController_eventClient_KillMessage_Parms
{
	FString KillerName;
	FString VictimName;
	FString WeaponName;
	bool bKnock;
	bool bFriendlyFire;
	int32 KillCount;
	EKillMessageRole InRole;
};
static FName NAME_AGlobalPlayerController_Client_KillMessage = FName(TEXT("Client_KillMessage"));
void AGlobalPlayerController::Client_KillMessage(const FString& KillerName, const FString& VictimName, const FString& WeaponName, bool bKnock, bool bFriendlyFire, int32 KillCount, EKillMessageRole InRole)
{
	GlobalPlayerController_eventClient_KillMessage_Parms Parms;
	Parms.KillerName=KillerName;
	Parms.VictimName=VictimName;
	Parms.WeaponName=WeaponName;
	Parms.bKnock=bKnock ? true : false;
	Parms.bFriendlyFire=bFriendlyFire ? true : false;
	Parms.KillCount=KillCount;
	Parms.InRole=InRole;
	UFunction* Func = FindFunctionChecked(NAME_AGlobalPlayerController_Client_KillMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerController/GlobalPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KillerName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VictimName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_KillerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VictimName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WeaponName;
	static void NewProp_bKnock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKnock;
	static void NewProp_bFriendlyFire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFriendlyFire;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KillCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InRole_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InRole;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_KillerName = { "KillerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalPlayerController_eventClient_KillMessage_Parms, KillerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KillerName_MetaData), NewProp_KillerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_VictimName = { "VictimName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalPlayerController_eventClient_KillMessage_Parms, VictimName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VictimName_MetaData), NewProp_VictimName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_WeaponName = { "WeaponName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalPlayerController_eventClient_KillMessage_Parms, WeaponName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponName_MetaData), NewProp_WeaponName_MetaData) };
void Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_bKnock_SetBit(void* Obj)
{
	((GlobalPlayerController_eventClient_KillMessage_Parms*)Obj)->bKnock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_bKnock = { "bKnock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GlobalPlayerController_eventClient_KillMessage_Parms), &Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_bKnock_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_bFriendlyFire_SetBit(void* Obj)
{
	((GlobalPlayerController_eventClient_KillMessage_Parms*)Obj)->bFriendlyFire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_bFriendlyFire = { "bFriendlyFire", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GlobalPlayerController_eventClient_KillMessage_Parms), &Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_bFriendlyFire_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_KillCount = { "KillCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalPlayerController_eventClient_KillMessage_Parms, KillCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_InRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_InRole = { "InRole", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalPlayerController_eventClient_KillMessage_Parms, InRole), Z_Construct_UEnum_PUBG_EKillMessageRole, METADATA_PARAMS(0, nullptr) }; // 470993802
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_KillerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_VictimName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_WeaponName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_bKnock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_bFriendlyFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_KillCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_InRole_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::NewProp_InRole,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGlobalPlayerController, nullptr, "Client_KillMessage", Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::PropPointers), sizeof(GlobalPlayerController_eventClient_KillMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(GlobalPlayerController_eventClient_KillMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGlobalPlayerController::execClient_KillMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KillerName);
	P_GET_PROPERTY(FStrProperty,Z_Param_VictimName);
	P_GET_PROPERTY(FStrProperty,Z_Param_WeaponName);
	P_GET_UBOOL(Z_Param_bKnock);
	P_GET_UBOOL(Z_Param_bFriendlyFire);
	P_GET_PROPERTY(FIntProperty,Z_Param_KillCount);
	P_GET_ENUM(EKillMessageRole,Z_Param_InRole);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_KillMessage_Implementation(Z_Param_KillerName,Z_Param_VictimName,Z_Param_WeaponName,Z_Param_bKnock,Z_Param_bFriendlyFire,Z_Param_KillCount,EKillMessageRole(Z_Param_InRole));
	P_NATIVE_END;
}
// ********** End Class AGlobalPlayerController Function Client_KillMessage ************************

// ********** Begin Class AGlobalPlayerController **************************************************
void AGlobalPlayerController::StaticRegisterNativesAGlobalPlayerController()
{
	UClass* Class = AGlobalPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Client_KillMessage", &AGlobalPlayerController::execClient_KillMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGlobalPlayerController_Client_KillMessage, "Client_KillMessage" }, // 2180440559
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_AGlobalPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AGlobalPlayerController, AGlobalPlayerController::StaticClass, TEXT("AGlobalPlayerController"), &Z_Registration_Info_UClass_AGlobalPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGlobalPlayerController), 170716020U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PlayerController_GlobalPlayerController_h__Script_PUBG_815424260(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PlayerController_GlobalPlayerController_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PlayerController_GlobalPlayerController_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
