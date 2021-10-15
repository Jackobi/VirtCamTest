// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class RemoteCameraUtilities : ModuleRules
{
	public RemoteCameraUtilities(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"CinematicCamera",
			"Composure",
			"Core",
			"CoreUObject",
			"Engine",
			"GameplayTags",
			"TimeManagement",
			"UMG",
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"ApplicationCore",
			"RenderCore",
			"RHI",
			"Slate",
			"SlateCore",
		});

		if (Target.bBuildEditor == true)
		{
			PrivateDependencyModuleNames.AddRange(new string[]
			{
				"Blutility",
				"LevelEditor",
				"UnrealEd",
				"ViewportInteraction",
				"VREditor"
			});

		}
	}
}