// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/PickupItem.h"

#ifdef PUBG_PickupItem_generated_h
#error "PickupItem.generated.h already included, missing '#pragma once' in PickupItem.h"
#endif
#define PUBG_PickupItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APickupItem **************************************************************
#define FID_PUBG_Source_PUBG_Public_Actor_PickupItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_ItemDefinition);


PUBG_API UClass* Z_Construct_UClass_APickupItem_NoRegister();

#define FID_PUBG_Source_PUBG_Public_Actor_PickupItem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupItem(); \
	friend struct Z_Construct_UClass_APickupItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_APickupItem_NoRegister(); \
public: \
	DECLARE_CLASS2(APickupItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_APickupItem_NoRegister) \
	DECLARE_SERIALIZER(APickupItem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ItemDefinition=NETFIELD_REP_START, \
		Quantity, \
		SavedAttachments, \
		SavedAttributes, \
		NETFIELD_REP_END=SavedAttributes	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_PUBG_Source_PUBG_Public_Actor_PickupItem_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APickupItem(APickupItem&&) = delete; \
	APickupItem(const APickupItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupItem) \
	NO_API virtual ~APickupItem();


#define FID_PUBG_Source_PUBG_Public_Actor_PickupItem_h_14_PROLOG
#define FID_PUBG_Source_PUBG_Public_Actor_PickupItem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_Actor_PickupItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_Actor_PickupItem_h_17_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_Actor_PickupItem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APickupItem;

// ********** End Class APickupItem ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_Actor_PickupItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
