// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerState/GlobalPlayerState.h"
#include "GenericTeamAgentInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGlobalPlayerState() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
PUBG_API UClass* Z_Construct_UClass_AGlobalPlayerState();
PUBG_API UClass* Z_Construct_UClass_AGlobalPlayerState_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackManagerComponent_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UCharacterAttributeSet_NoRegister();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EKillFeedType();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGlobalPlayerState Function Multicast_KillFeed ***************************
struct GlobalPlayerState_eventMulticast_KillFeed_Parms
{
	FString KillerName;
	FString VictimName;
	EKillFeedType FeedType;
};
static FName NAME_AGlobalPlayerState_Multicast_KillFeed = FName(TEXT("Multicast_KillFeed"));
void AGlobalPlayerState::Multicast_KillFeed(const FString& KillerName, const FString& VictimName, EKillFeedType FeedType)
{
	GlobalPlayerState_eventMulticast_KillFeed_Parms Parms;
	Parms.KillerName=KillerName;
	Parms.VictimName=VictimName;
	Parms.FeedType=FeedType;
	UFunction* Func = FindFunctionChecked(NAME_AGlobalPlayerState_Multicast_KillFeed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AGlobalPlayerState_Multicast_KillFeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerState/GlobalPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KillerName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VictimName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_KillerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VictimName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FeedType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FeedType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGlobalPlayerState_Multicast_KillFeed_Statics::NewProp_KillerName = { "KillerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalPlayerState_eventMulticast_KillFeed_Parms, KillerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KillerName_MetaData), NewProp_KillerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGlobalPlayerState_Multicast_KillFeed_Statics::NewProp_VictimName = { "VictimName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalPlayerState_eventMulticast_KillFeed_Parms, VictimName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VictimName_MetaData), NewProp_VictimName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGlobalPlayerState_Multicast_KillFeed_Statics::NewProp_FeedType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGlobalPlayerState_Multicast_KillFeed_Statics::NewProp_FeedType = { "FeedType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalPlayerState_eventMulticast_KillFeed_Parms, FeedType), Z_Construct_UEnum_PUBG_EKillFeedType, METADATA_PARAMS(0, nullptr) }; // 234721871
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGlobalPlayerState_Multicast_KillFeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlobalPlayerState_Multicast_KillFeed_Statics::NewProp_KillerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlobalPlayerState_Multicast_KillFeed_Statics::NewProp_VictimName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlobalPlayerState_Multicast_KillFeed_Statics::NewProp_FeedType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGlobalPlayerState_Multicast_KillFeed_Statics::NewProp_FeedType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGlobalPlayerState_Multicast_KillFeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGlobalPlayerState_Multicast_KillFeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGlobalPlayerState, nullptr, "Multicast_KillFeed", Z_Construct_UFunction_AGlobalPlayerState_Multicast_KillFeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlobalPlayerState_Multicast_KillFeed_Statics::PropPointers), sizeof(GlobalPlayerState_eventMulticast_KillFeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGlobalPlayerState_Multicast_KillFeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGlobalPlayerState_Multicast_KillFeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(GlobalPlayerState_eventMulticast_KillFeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGlobalPlayerState_Multicast_KillFeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGlobalPlayerState_Multicast_KillFeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGlobalPlayerState::execMulticast_KillFeed)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KillerName);
	P_GET_PROPERTY(FStrProperty,Z_Param_VictimName);
	P_GET_ENUM(EKillFeedType,Z_Param_FeedType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_KillFeed_Implementation(Z_Param_KillerName,Z_Param_VictimName,EKillFeedType(Z_Param_FeedType));
	P_NATIVE_END;
}
// ********** End Class AGlobalPlayerState Function Multicast_KillFeed *****************************

// ********** Begin Class AGlobalPlayerState *******************************************************
void AGlobalPlayerState::StaticRegisterNativesAGlobalPlayerState()
{
	UClass* Class = AGlobalPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Multicast_KillFeed", &AGlobalPlayerState::execMulticast_KillFeed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamId_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerState/GlobalPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterAbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterAttributeSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackpackManagerComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGlobalPlayerState_Multicast_KillFeed, "Multicast_KillFeed" }, // 3883717591
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGlobalPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlobalPlayerState_Statics::NewProp_CharacterAbilitySystemComponent = { "CharacterAbilitySystemComponent", nullptr, (EPropertyFlags)0x01440000000b0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGlobalPlayerState, CharacterAbilitySystemComponent), Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAbilitySystemComponent_MetaData), NewProp_CharacterAbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlobalPlayerState_Statics::NewProp_CharacterAttributeSet = { "CharacterAttributeSet", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGlobalPlayerState, CharacterAttributeSet), Z_Construct_UClass_UCharacterAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAttributeSet_MetaData), NewProp_CharacterAttributeSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlobalPlayerState_Statics::NewProp_BackpackManagerComponent = { "BackpackManagerComponent", nullptr, (EPropertyFlags)0x01440000000b0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGlobalPlayerState, BackpackManagerComponent), Z_Construct_UClass_UBackpackManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackpackManagerComponent_MetaData), NewProp_BackpackManagerComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGlobalPlayerState_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGlobalPlayerState, TeamId), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamId_MetaData), NewProp_TeamId_MetaData) }; // 2198226523
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGlobalPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalPlayerState_Statics::NewProp_CharacterAbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalPlayerState_Statics::NewProp_CharacterAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalPlayerState_Statics::NewProp_BackpackManagerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalPlayerState_Statics::NewProp_TeamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGlobalPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGlobalPlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AGlobalPlayerState, IAbilitySystemInterface), false },  // 1199015870
	{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AGlobalPlayerState, IGenericTeamAgentInterface), false },  // 657866642
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGlobalPlayerState_Statics::ClassParams = {
	&AGlobalPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGlobalPlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
#if VALIDATE_CLASS_REPS
void AGlobalPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_TeamId(TEXT("TeamId"));
	const bool bIsValid = true
		&& Name_TeamId == ClassReps[(int32)ENetFields_Private::TeamId].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGlobalPlayerState"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(AGlobalPlayerState);
AGlobalPlayerState::~AGlobalPlayerState() {}
// ********** End Class AGlobalPlayerState *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PlayerState_GlobalPlayerState_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGlobalPlayerState, AGlobalPlayerState::StaticClass, TEXT("AGlobalPlayerState"), &Z_Registration_Info_UClass_AGlobalPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGlobalPlayerState), 2038755126U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PlayerState_GlobalPlayerState_h__Script_PUBG_3940216334(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PlayerState_GlobalPlayerState_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PlayerState_GlobalPlayerState_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
