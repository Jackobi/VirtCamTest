// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class RemoteCameraCore : ModuleRules
{
	public RemoteCameraCore(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Composure",
			"Core",
			"RemoteCameraUtilities",
			"VPUtilities",
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"CoreUObject",
			"Engine",
			"Slate",
			"SlateCore",
			"UMG",
			"CinematicCamera",
			"LiveLink",
			"LiveLinkInterface",
			"MediaIOCore",
			"RemoteSession",
			"InputCore",
			"GameplayTags"
		});

		if (Target.bBuildEditor == true)
		{
			PrivateDependencyModuleNames.AddRange(new string[]
			{
				"LevelEditor",
				"UnrealEd",
				"Concert",
				"ConcertSyncClient",
				"MultiUserClient"
			});

		}
	}
}