// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Proto_Ruby : ModuleRules
{
	public Proto_Ruby(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
