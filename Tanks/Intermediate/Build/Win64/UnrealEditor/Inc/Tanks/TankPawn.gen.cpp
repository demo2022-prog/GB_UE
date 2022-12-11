// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks/TankPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankPawn() {}
// Cross Module References
	TANKS_API UClass* Z_Construct_UClass_ATankPawn_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_ATankPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Tanks();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_ATankPlayerController_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_ACannon_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	void ATankPawn::StaticRegisterNativesATankPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATankPawn);
	UClass* Z_Construct_UClass_ATankPawn_NoRegister()
	{
		return ATankPawn::StaticClass();
	}
	struct Z_Construct_UClass_ATankPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurretMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TurretMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurretRotationInterpolationKey_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurretRotationInterpolationKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TankController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TankController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cannon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Cannon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CannonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonSetupPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CannonSetupPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TankPawn.h" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_BodyMesh_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, BodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_BodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_BodyMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretMesh_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretMesh = { "TurretMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, TurretMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_BoxCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_BoxCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretRotationInterpolationKey_MetaData[] = {
		{ "Category", "Movement | Rotation" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretRotationInterpolationKey = { "TurretRotationInterpolationKey", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, TurretRotationInterpolationKey), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretRotationInterpolationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretRotationInterpolationKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController_MetaData[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController = { "TankController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, TankController), Z_Construct_UClass_ATankPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_Cannon_MetaData[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_Cannon = { "Cannon", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, Cannon), Z_Construct_UClass_ACannon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_Cannon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_Cannon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonClass_MetaData[] = {
		{ "Category", "Cannon" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonClass = { "CannonClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, CannonClass), Z_Construct_UClass_ACannon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonSetupPoint_MetaData[] = {
		{ "Category", "Cannon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonSetupPoint = { "CannonSetupPoint", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, CannonSetupPoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonSetupPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonSetupPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_BodyMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_BoxCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretRotationInterpolationKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_Cannon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonSetupPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATankPawn_Statics::ClassParams = {
		&ATankPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATankPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankPawn()
	{
		if (!Z_Registration_Info_UClass_ATankPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATankPawn.OuterSingleton, Z_Construct_UClass_ATankPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATankPawn.OuterSingleton;
	}
	template<> TANKS_API UClass* StaticClass<ATankPawn>()
	{
		return ATankPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPawn);
	struct Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATankPawn, ATankPawn::StaticClass, TEXT("ATankPawn"), &Z_Registration_Info_UClass_ATankPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATankPawn), 507572374U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankPawn_h_1577335810(TEXT("/Script/Tanks"),
		Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
