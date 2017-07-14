// Copyright 2015 by Nathan "Rama" Iyer. All Rights Reserved.
using UnrealBuildTool;

public class GamepadUMGPlugin : ModuleRules
{
	public GamepadUMGPlugin(TargetInfo Target)
	{
        PublicDependencyModuleNames.AddRange(
			new string[] { 
				"Core", 
				"CoreUObject", 
				"Engine", 
				"InputCore"
			}
		);

        PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore", "UMG" });
	}
}
