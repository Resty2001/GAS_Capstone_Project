// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GASSkillSystem : ModuleRules
{
	public GASSkillSystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate",
            "GameplayAbilities",  
			"GameplayTasks",        
			"GameplayTags"            
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"GASSkillSystem",
			"GASSkillSystem/Variant_Platforming",
			"GASSkillSystem/Variant_Platforming/Animation",
			"GASSkillSystem/Variant_Combat",
			"GASSkillSystem/Variant_Combat/AI",
			"GASSkillSystem/Variant_Combat/Animation",
			"GASSkillSystem/Variant_Combat/Gameplay",
			"GASSkillSystem/Variant_Combat/Interfaces",
			"GASSkillSystem/Variant_Combat/UI",
			"GASSkillSystem/Variant_SideScrolling",
			"GASSkillSystem/Variant_SideScrolling/AI",
			"GASSkillSystem/Variant_SideScrolling/Gameplay",
			"GASSkillSystem/Variant_SideScrolling/Interfaces",
			"GASSkillSystem/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
