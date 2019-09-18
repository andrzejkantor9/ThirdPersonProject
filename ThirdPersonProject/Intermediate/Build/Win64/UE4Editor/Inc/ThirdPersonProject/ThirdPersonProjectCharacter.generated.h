// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THIRDPERSONPROJECT_ThirdPersonProjectCharacter_generated_h
#error "ThirdPersonProjectCharacter.generated.h already included, missing '#pragma once' in ThirdPersonProjectCharacter.h"
#endif
#define THIRDPERSONPROJECT_ThirdPersonProjectCharacter_generated_h

#define ThirdPersonProject_Source_ThirdPersonProject_ThirdPersonProjectCharacter_h_12_RPC_WRAPPERS
#define ThirdPersonProject_Source_ThirdPersonProject_ThirdPersonProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ThirdPersonProject_Source_ThirdPersonProject_ThirdPersonProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThirdPersonProjectCharacter(); \
	friend struct Z_Construct_UClass_AThirdPersonProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AThirdPersonProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThirdPersonProject"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonProjectCharacter)


#define ThirdPersonProject_Source_ThirdPersonProject_ThirdPersonProjectCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAThirdPersonProjectCharacter(); \
	friend struct Z_Construct_UClass_AThirdPersonProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AThirdPersonProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThirdPersonProject"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonProjectCharacter)


#define ThirdPersonProject_Source_ThirdPersonProject_ThirdPersonProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThirdPersonProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThirdPersonProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThirdPersonProjectCharacter(AThirdPersonProjectCharacter&&); \
	NO_API AThirdPersonProjectCharacter(const AThirdPersonProjectCharacter&); \
public:


#define ThirdPersonProject_Source_ThirdPersonProject_ThirdPersonProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThirdPersonProjectCharacter(AThirdPersonProjectCharacter&&); \
	NO_API AThirdPersonProjectCharacter(const AThirdPersonProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThirdPersonProjectCharacter)


#define ThirdPersonProject_Source_ThirdPersonProject_ThirdPersonProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AThirdPersonProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AThirdPersonProjectCharacter, FollowCamera); }


#define ThirdPersonProject_Source_ThirdPersonProject_ThirdPersonProjectCharacter_h_9_PROLOG
#define ThirdPersonProject_Source_ThirdPersonProject_ThirdPersonProjectCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonProject_Source_ThirdPersonProject_ThirdPersonProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonProject_Source_ThirdPersonProject_ThirdPersonProjectCharacter_h_12_RPC_WRAPPERS \
	ThirdPersonProject_Source_ThirdPersonProject_ThirdPersonProjectCharacter_h_12_INCLASS \
	ThirdPersonProject_Source_ThirdPersonProject_ThirdPersonProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ThirdPersonProject_Source_ThirdPersonProject_ThirdPersonProjectCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonProject_Source_ThirdPersonProject_ThirdPersonProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonProject_Source_ThirdPersonProject_ThirdPersonProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ThirdPersonProject_Source_ThirdPersonProject_ThirdPersonProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ThirdPersonProject_Source_ThirdPersonProject_ThirdPersonProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONPROJECT_API UClass* StaticClass<class AThirdPersonProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ThirdPersonProject_Source_ThirdPersonProject_ThirdPersonProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
