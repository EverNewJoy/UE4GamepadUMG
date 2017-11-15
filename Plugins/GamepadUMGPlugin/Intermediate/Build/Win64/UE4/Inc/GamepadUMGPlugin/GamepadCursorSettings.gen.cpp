// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/GamepadUMGPluginPrivatePCH.h"
#include "Public/GamepadCursorSettings.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamepadCursorSettings() {}
// Cross Module References
	GAMEPADUMGPLUGIN_API UClass* Z_Construct_UClass_UGamepadCursorSettings_NoRegister();
	GAMEPADUMGPLUGIN_API UClass* Z_Construct_UClass_UGamepadCursorSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_GamepadUMGPlugin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
	void UGamepadCursorSettings::StaticRegisterNativesUGamepadCursorSettings()
	{
	}
	UClass* Z_Construct_UClass_UGamepadCursorSettings_NoRegister()
	{
		return UGamepadCursorSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UGamepadCursorSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDeveloperSettings();
			Z_Construct_UPackage__Script_GamepadUMGPlugin();
			OuterClass = UGamepadCursorSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100086u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAnalogCursorNoAcceleration, UGamepadCursorSettings);
				UProperty* NewProp_bAnalogCursorNoAcceleration = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAnalogCursorNoAcceleration"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAnalogCursorNoAcceleration, UGamepadCursorSettings), 0x0040000000004001, CPP_BOOL_PROPERTY_BITMASK(bAnalogCursorNoAcceleration, UGamepadCursorSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseEngineAnalogCursor, UGamepadCursorSettings);
				UProperty* NewProp_bUseEngineAnalogCursor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseEngineAnalogCursor"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseEngineAnalogCursor, UGamepadCursorSettings), 0x0040000000004001, CPP_BOOL_PROPERTY_BITMASK(bUseEngineAnalogCursor, UGamepadCursorSettings), sizeof(bool), true);
				UProperty* NewProp_AnalogCursorSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnalogCursorSize"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AnalogCursorSize, UGamepadCursorSettings), 0x0040000000004001);
				UProperty* NewProp_AnalogCursorAccelerationMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnalogCursorAccelerationMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AnalogCursorAccelerationMultiplier, UGamepadCursorSettings), 0x0040000000004001);
				UProperty* NewProp_AnalogCursorDeadZone = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnalogCursorDeadZone"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AnalogCursorDeadZone, UGamepadCursorSettings), 0x0040000000004001);
				UProperty* NewProp_MinAnalogCursorSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MinAnalogCursorSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MinAnalogCursorSpeed, UGamepadCursorSettings), 0x0040000000004001);
				UProperty* NewProp_AnalogCursorDragCoefficientWhenHovered = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnalogCursorDragCoefficientWhenHovered"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AnalogCursorDragCoefficientWhenHovered, UGamepadCursorSettings), 0x0040000000004001);
				UProperty* NewProp_AnalogCursorDragCoefficient = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnalogCursorDragCoefficient"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AnalogCursorDragCoefficient, UGamepadCursorSettings), 0x0040000000004001);
				UProperty* NewProp_MaxAnalogCursorSpeedWhenHovered = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxAnalogCursorSpeedWhenHovered"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxAnalogCursorSpeedWhenHovered, UGamepadCursorSettings), 0x0040000000004001);
				UProperty* NewProp_MaxAnalogCursorSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxAnalogCursorSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxAnalogCursorSpeed, UGamepadCursorSettings), 0x0040000000004001);
				UProperty* NewProp_AnalogCursorAccelerationCurve = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnalogCursorAccelerationCurve"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AnalogCursorAccelerationCurve, UGamepadCursorSettings), 0x0040000000004001, Z_Construct_UScriptStruct_FRuntimeFloatCurve());
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UGamepadCursorSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GamepadCursorSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/GamepadCursorSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("These settings are used with the Gamepad UMG Plugin!\n\nEpic Developer Nick Darnell wrote this Gamepad-friendly UMG code!\n\nI simply compiled the code into a plugin :)\n\n<3 Rama"));
				MetaData->SetValue(NewProp_bAnalogCursorNoAcceleration, TEXT("Category"), TEXT("Analog Cursor"));
				MetaData->SetValue(NewProp_bAnalogCursorNoAcceleration, TEXT("ModuleRelativePath"), TEXT("Public/GamepadCursorSettings.h"));
				MetaData->SetValue(NewProp_bAnalogCursorNoAcceleration, TEXT("ToolTip"), TEXT("If True, AnalogCursorAccelerationCurve will be used as a Velocity Curve"));
				MetaData->SetValue(NewProp_bUseEngineAnalogCursor, TEXT("Category"), TEXT("Analog Cursor"));
				MetaData->SetValue(NewProp_bUseEngineAnalogCursor, TEXT("ModuleRelativePath"), TEXT("Public/GamepadCursorSettings.h"));
				MetaData->SetValue(NewProp_bUseEngineAnalogCursor, TEXT("ToolTip"), TEXT("If true, defaults to the Engine's Analog Cursor"));
				MetaData->SetValue(NewProp_AnalogCursorSize, TEXT("Category"), TEXT("Analog Cursor"));
				MetaData->SetValue(NewProp_AnalogCursorSize, TEXT("ClampMax"), TEXT("128.0"));
				MetaData->SetValue(NewProp_AnalogCursorSize, TEXT("ClampMin"), TEXT("1.0"));
				MetaData->SetValue(NewProp_AnalogCursorSize, TEXT("ModuleRelativePath"), TEXT("Public/GamepadCursorSettings.h"));
				MetaData->SetValue(NewProp_AnalogCursorSize, TEXT("ToolTip"), TEXT("The size (on screen) of the analog cursor"));
				MetaData->SetValue(NewProp_AnalogCursorAccelerationMultiplier, TEXT("Category"), TEXT("Analog Cursor"));
				MetaData->SetValue(NewProp_AnalogCursorAccelerationMultiplier, TEXT("ClampMin"), TEXT("1.0"));
				MetaData->SetValue(NewProp_AnalogCursorAccelerationMultiplier, TEXT("ModuleRelativePath"), TEXT("Public/GamepadCursorSettings.h"));
				MetaData->SetValue(NewProp_AnalogCursorAccelerationMultiplier, TEXT("ToolTip"), TEXT("Multiplied by the value spit out by the normalized acceleration curve"));
				MetaData->SetValue(NewProp_AnalogCursorDeadZone, TEXT("Category"), TEXT("Analog Cursor"));
				MetaData->SetValue(NewProp_AnalogCursorDeadZone, TEXT("ClampMax"), TEXT("1.0"));
				MetaData->SetValue(NewProp_AnalogCursorDeadZone, TEXT("ClampMin"), TEXT("0.0"));
				MetaData->SetValue(NewProp_AnalogCursorDeadZone, TEXT("ModuleRelativePath"), TEXT("Public/GamepadCursorSettings.h"));
				MetaData->SetValue(NewProp_AnalogCursorDeadZone, TEXT("ToolTip"), TEXT("Deadzone value for input from the analog stick"));
				MetaData->SetValue(NewProp_MinAnalogCursorSpeed, TEXT("Category"), TEXT("Analog Cursor"));
				MetaData->SetValue(NewProp_MinAnalogCursorSpeed, TEXT("ClampMin"), TEXT("0.0"));
				MetaData->SetValue(NewProp_MinAnalogCursorSpeed, TEXT("ModuleRelativePath"), TEXT("Public/GamepadCursorSettings.h"));
				MetaData->SetValue(NewProp_MinAnalogCursorSpeed, TEXT("ToolTip"), TEXT("The min speed of the analog cursor. If it goes below this value, the speed is set to 0."));
				MetaData->SetValue(NewProp_AnalogCursorDragCoefficientWhenHovered, TEXT("Category"), TEXT("Analog Cursor"));
				MetaData->SetValue(NewProp_AnalogCursorDragCoefficientWhenHovered, TEXT("ClampMin"), TEXT("0.0"));
				MetaData->SetValue(NewProp_AnalogCursorDragCoefficientWhenHovered, TEXT("ModuleRelativePath"), TEXT("Public/GamepadCursorSettings.h"));
				MetaData->SetValue(NewProp_AnalogCursorDragCoefficientWhenHovered, TEXT("ToolTip"), TEXT("The coefficient of drag applied to the cursor when hovering"));
				MetaData->SetValue(NewProp_AnalogCursorDragCoefficient, TEXT("Category"), TEXT("Analog Cursor"));
				MetaData->SetValue(NewProp_AnalogCursorDragCoefficient, TEXT("ClampMin"), TEXT("0.0"));
				MetaData->SetValue(NewProp_AnalogCursorDragCoefficient, TEXT("ModuleRelativePath"), TEXT("Public/GamepadCursorSettings.h"));
				MetaData->SetValue(NewProp_AnalogCursorDragCoefficient, TEXT("ToolTip"), TEXT("The coefficient of drag applied to the cursor"));
				MetaData->SetValue(NewProp_MaxAnalogCursorSpeedWhenHovered, TEXT("Category"), TEXT("Analog Cursor"));
				MetaData->SetValue(NewProp_MaxAnalogCursorSpeedWhenHovered, TEXT("ClampMin"), TEXT("1.0"));
				MetaData->SetValue(NewProp_MaxAnalogCursorSpeedWhenHovered, TEXT("ModuleRelativePath"), TEXT("Public/GamepadCursorSettings.h"));
				MetaData->SetValue(NewProp_MaxAnalogCursorSpeedWhenHovered, TEXT("ToolTip"), TEXT("The max speed of the Analog Cursor when hovering over a widget that is interactable"));
				MetaData->SetValue(NewProp_MaxAnalogCursorSpeed, TEXT("Category"), TEXT("Analog Cursor"));
				MetaData->SetValue(NewProp_MaxAnalogCursorSpeed, TEXT("ClampMin"), TEXT("1.0"));
				MetaData->SetValue(NewProp_MaxAnalogCursorSpeed, TEXT("ModuleRelativePath"), TEXT("Public/GamepadCursorSettings.h"));
				MetaData->SetValue(NewProp_MaxAnalogCursorSpeed, TEXT("ToolTip"), TEXT("The max speed of the Analog Cursor"));
				MetaData->SetValue(NewProp_AnalogCursorAccelerationCurve, TEXT("Category"), TEXT("Analog Cursor"));
				MetaData->SetValue(NewProp_AnalogCursorAccelerationCurve, TEXT("ModuleRelativePath"), TEXT("Public/GamepadCursorSettings.h"));
				MetaData->SetValue(NewProp_AnalogCursorAccelerationCurve, TEXT("XAxisName"), TEXT("Strength"));
				MetaData->SetValue(NewProp_AnalogCursorAccelerationCurve, TEXT("YAxisName"), TEXT("Acceleration"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGamepadCursorSettings, 311694545);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGamepadCursorSettings(Z_Construct_UClass_UGamepadCursorSettings, &UGamepadCursorSettings::StaticClass, TEXT("/Script/GamepadUMGPlugin"), TEXT("UGamepadCursorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGamepadCursorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
