// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Excommunicado : ModuleRules
{
	public Excommunicado(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"HeadMountedDisplay",
			"Niagra",
			"AIModule",
			"NavigationSystem",
			"GameplayTasks",
			"UMG"
		});
	}
}
