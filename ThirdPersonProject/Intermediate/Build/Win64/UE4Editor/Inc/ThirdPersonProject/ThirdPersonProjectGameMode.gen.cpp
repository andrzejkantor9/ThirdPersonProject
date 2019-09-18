// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonProject/ThirdPersonProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonProjectGameMode() {}
// Cross Module References
	THIRDPERSONPROJECT_API UClass* Z_Construct_UClass_AThirdPersonProjectGameMode_NoRegister();
	THIRDPERSONPROJECT_API UClass* Z_Construct_UClass_AThirdPersonProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonProject();
// End Cross Module References
	void AThirdPersonProjectGameMode::StaticRegisterNativesAThirdPersonProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_AThirdPersonProjectGameMode_NoRegister()
	{
		return AThirdPersonProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AThirdPersonProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdPersonProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ThirdPersonProjectGameMode.h" },
		{ "ModuleRelativePath", "ThirdPersonProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdPersonProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonProjectGameMode_Statics::ClassParams = {
		&AThirdPersonProjectGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AThirdPersonProjectGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AThirdPersonProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThirdPersonProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThirdPersonProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThirdPersonProjectGameMode, 1950863931);
	template<> THIRDPERSONPROJECT_API UClass* StaticClass<AThirdPersonProjectGameMode>()
	{
		return AThirdPersonProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThirdPersonProjectGameMode(Z_Construct_UClass_AThirdPersonProjectGameMode, &AThirdPersonProjectGameMode::StaticClass, TEXT("/Script/ThirdPersonProject"), TEXT("AThirdPersonProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
