// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonActivatableWidget/ActivatableWidget_EquipmentSlot.h"

#ifdef PUBG_ActivatableWidget_EquipmentSlot_generated_h
#error "ActivatableWidget_EquipmentSlot.generated.h already included, missing '#pragma once' in ActivatableWidget_EquipmentSlot.h"
#endif
#define PUBG_ActivatableWidget_EquipmentSlot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActivatableWidget_EquipmentSlot *****************************************
#define FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_EquipmentSlot_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnInventoryChangedHandler);


PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_EquipmentSlot_NoRegister();

#define FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_EquipmentSlot_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActivatableWidget_EquipmentSlot(); \
	friend struct Z_Construct_UClass_UActivatableWidget_EquipmentSlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_EquipmentSlot_NoRegister(); \
public: \
	DECLARE_CLASS2(UActivatableWidget_EquipmentSlot, UBaseCommonActivatableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_UActivatableWidget_EquipmentSlot_NoRegister) \
	DECLARE_SERIALIZER(UActivatableWidget_EquipmentSlot)


#define FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_EquipmentSlot_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActivatableWidget_EquipmentSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActivatableWidget_EquipmentSlot(UActivatableWidget_EquipmentSlot&&) = delete; \
	UActivatableWidget_EquipmentSlot(const UActivatableWidget_EquipmentSlot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActivatableWidget_EquipmentSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivatableWidget_EquipmentSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActivatableWidget_EquipmentSlot) \
	NO_API virtual ~UActivatableWidget_EquipmentSlot();


#define FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_EquipmentSlot_h_16_PROLOG
#define FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_EquipmentSlot_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_EquipmentSlot_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_EquipmentSlot_h_19_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_EquipmentSlot_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActivatableWidget_EquipmentSlot;

// ********** End Class UActivatableWidget_EquipmentSlot *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_EquipmentSlot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
