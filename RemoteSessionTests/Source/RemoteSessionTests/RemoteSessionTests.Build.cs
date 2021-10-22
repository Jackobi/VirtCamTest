// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class RemoteSessionTests : ModuleRules
{
	public RemoteSessionTests(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] 
		{
			"Composure",
			"Core",
			"CoreUObject",
			"VPUtilities",
			"CinematicCamera",
			"Engine",
			"GameplayTags",
			"TimeManagement",
			"UMG",
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
			"ApplicationCore",
			"RenderCore",
			"RHI",
		});

		if (Target.bBuildEditor == true)
		{
			PrivateDependencyModuleNames.AddRange(new string[]
			{
				"Blutility",
				"LevelEditor",
				"UnrealEd",
				"ViewportInteraction",
				"Concert",
				"ConcertSyncClient",
				"MultiUserClient"
			});
		}
	}
}
