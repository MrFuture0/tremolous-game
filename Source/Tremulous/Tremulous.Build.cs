// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tremulous : ModuleRules
{
	public Tremulous(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
