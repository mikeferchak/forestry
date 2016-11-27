// Some copyright should be here...

using UnrealBuildTool;

public class RuntimeMeshComponentSlicer : ModuleRules
{
	public RuntimeMeshComponentSlicer(TargetInfo Target)
	{

        PublicIncludePaths.Add("RuntimeMeshComponentSlicer/Public");

        PrivateIncludePaths.Add("RuntimeMeshComponentSlicer/Private");
			
		
		PublicDependencyModuleNames.AddRange(
			    new string[]
			    {
				    "Core",
                    "RuntimeMeshComponent"
				    // ... add other public dependencies that you statically link with here ...
			    }
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			    new string[]
			    {
				    "CoreUObject",
				    "Engine",
				    "Slate",
				    "SlateCore",
                    "RenderCore",
                    "ShaderCore",
                    "RHI"
				    // ... add private dependencies that you statically link with here ...	
			    }
			);
	}
}
