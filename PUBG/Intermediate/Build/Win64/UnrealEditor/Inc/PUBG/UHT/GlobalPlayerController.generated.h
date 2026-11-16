// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerController/GlobalPlayerController.h"

#ifdef PUBG_GlobalPlayerController_generated_h
#error "GlobalPlayerController.generated.h already included, missing '#pragma once' in GlobalPlayerController.h"
#endif
#define PUBG_GlobalPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGlobalPlayerController **************************************************
PUBG_API UClass* Z_Construct_UClass_AGlobalPlayerController_NoRegister();

#define FID_PUBG_Source_PUBG_Public_PlayerController_GlobalPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGlobalPlayerController(); \
	friend struct Z_Construct_UClass_AGlobalPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_AGlobalPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AGlobalPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_AGlobalPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AGlobalPlayerController)


#define FID_PUBG_Source_PUBG_Public_PlayerController_GlobalPlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGlobalPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGlobalPlayerController(AGlobalPlayerController&&) = delete; \
	AGlobalPlayerController(const AGlobalPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGlobalPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGlobalPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGlobalPlayerController) \
	NO_API virtual ~AGlobalPlayerController();


#define FID_PUBG_Source_PUBG_Public_PlayerController_GlobalPlayerController_h_15_PROLOG
#define FID_PUBG_Source_PUBG_Public_PlayerController_GlobalPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_PlayerController_GlobalPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_PlayerController_GlobalPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGlobalPlayerController;

// ********** End Class AGlobalPlayerController ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_PlayerController_GlobalPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
