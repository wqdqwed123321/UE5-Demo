// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/BulletProjectile.h"

#ifdef PUBG_BulletProjectile_generated_h
#error "BulletProjectile.generated.h already included, missing '#pragma once' in BulletProjectile.h"
#endif
#define PUBG_BulletProjectile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ABulletProjectile ********************************************************
#define FID_PUBG_Source_PUBG_Public_Actor_BulletProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleHit);


PUBG_API UClass* Z_Construct_UClass_ABulletProjectile_NoRegister();

#define FID_PUBG_Source_PUBG_Public_Actor_BulletProjectile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABulletProjectile(); \
	friend struct Z_Construct_UClass_ABulletProjectile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_ABulletProjectile_NoRegister(); \
public: \
	DECLARE_CLASS2(ABulletProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_ABulletProjectile_NoRegister) \
	DECLARE_SERIALIZER(ABulletProjectile)


#define FID_PUBG_Source_PUBG_Public_Actor_BulletProjectile_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABulletProjectile(ABulletProjectile&&) = delete; \
	ABulletProjectile(const ABulletProjectile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABulletProjectile) \
	NO_API virtual ~ABulletProjectile();


#define FID_PUBG_Source_PUBG_Public_Actor_BulletProjectile_h_14_PROLOG
#define FID_PUBG_Source_PUBG_Public_Actor_BulletProjectile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_Actor_BulletProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_Actor_BulletProjectile_h_17_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_Actor_BulletProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABulletProjectile;

// ********** End Class ABulletProjectile **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_Actor_BulletProjectile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
