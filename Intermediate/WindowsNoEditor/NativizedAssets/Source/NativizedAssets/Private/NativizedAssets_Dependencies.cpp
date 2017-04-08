#include "NativizedAssets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
namespace
{
	static const FBlueprintDependencyObjectRef NativizedCodeDependenties[] =
	{
	FBlueprintDependencyObjectRef(TEXT("/Game/props/axe"), TEXT("SM_axe"), TEXT("SM_axe"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/axe"), TEXT("M_axeHead"), TEXT("M_axeHead"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/chop"), TEXT("wc_1"), TEXT("wc_1"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/chop"), TEXT("wc_2"), TEXT("wc_2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/chop"), TEXT("wc_3"), TEXT("wc_3"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/chop"), TEXT("wc_4"), TEXT("wc_4"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/chop"), TEXT("wc_5"), TEXT("wc_5"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/chop"), TEXT("wc_6"), TEXT("wc_6"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/chop"), TEXT("wc_7"), TEXT("wc_7"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/chop"), TEXT("wc_8"), TEXT("wc_8"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/texture"), TEXT("wtx_1"), TEXT("wtx_1"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/texture"), TEXT("wtx_2"), TEXT("wtx_2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/texture"), TEXT("wtx_3"), TEXT("wtx_3"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/texture"), TEXT("wtx_4"), TEXT("wtx_4"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/texture"), TEXT("wtx_5"), TEXT("wtx_5"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/woosh"), TEXT("swoosh_01"), TEXT("swoosh_01"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/woosh"), TEXT("swoosh_02"), TEXT("swoosh_02"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/woosh"), TEXT("swoosh_03"), TEXT("swoosh_03"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/woosh"), TEXT("swoosh_04"), TEXT("swoosh_04"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/woosh"), TEXT("swoosh_05"), TEXT("swoosh_05"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/woosh"), TEXT("swoosh_06"), TEXT("swoosh_06"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints/spawners"), TEXT("axeSpawner"), TEXT("axeSpawner_C"), TEXT("/Script/Engine"), TEXT("BlueprintGeneratedClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualRealityBP/Blueprints"), TEXT("BP_MotionController"), TEXT("BP_MotionController_C"), TEXT("/Script/Engine"), TEXT("BlueprintGeneratedClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/holster"), TEXT("ui_wood_confirm"), TEXT("ui_wood_confirm"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio"), TEXT("chopEffectAttenuation"), TEXT("chopEffectAttenuation"), TEXT("/Script/Engine"), TEXT("SoundAttenuation")),
	FBlueprintDependencyObjectRef(TEXT("/Game/VirtualRealityBP/Blueprints"), TEXT("PickupActorInterface"), TEXT("PickupActorInterface_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/log"), TEXT("log"), TEXT("log"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/particles"), TEXT("woodchipParticle"), TEXT("woodchipParticle"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/freeze"), TEXT("ui_casual_pops_back"), TEXT("ui_casual_pops_back"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/materials/physicalMat"), TEXT("bigTreeLeafPhysicalMat"), TEXT("bigTreeLeafPhysicalMat"), TEXT("/Script/Engine"), TEXT("PhysicalMaterial")),
	FBlueprintDependencyObjectRef(TEXT("/Game/materials/physicalMat"), TEXT("bigTreeTrunkPhysicalMat"), TEXT("bigTreeTrunkPhysicalMat"), TEXT("/Script/Engine"), TEXT("PhysicalMaterial")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/thump"), TEXT("wood_thump_low"), TEXT("wood_thump_low"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/branchFallDebris"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_064"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_064"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/branchFallDebris"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_065"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_065"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/branchFallDebris"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_066"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_066"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/branchFallDebris"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_067"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_067"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/branchFallDebris"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_068"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_068"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/branchFallDebris"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_069"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_069"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/branchFallDebris"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_070"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_070"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/branchFallDebris"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_071"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_071"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/branchFallDebris"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_072"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_072"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/branchFallDebris"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_073"), TEXT("WOOD_Branch_Fall_Debris_SBPWD1_073"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/logFall"), TEXT("WOOD_Impact_Log_SBPWD1_267"), TEXT("WOOD_Impact_Log_SBPWD1_267"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/logFall"), TEXT("WOOD_Impact_Log_SBPWD1_268"), TEXT("WOOD_Impact_Log_SBPWD1_268"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/logFall"), TEXT("WOOD_Impact_Log_SBPWD1_269"), TEXT("WOOD_Impact_Log_SBPWD1_269"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/logFall"), TEXT("WOOD_Impact_Log_SBPWD1_270"), TEXT("WOOD_Impact_Log_SBPWD1_270"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/logFall"), TEXT("WOOD_Impact_Log_SBPWD1_271"), TEXT("WOOD_Impact_Log_SBPWD1_271"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints/spawners"), TEXT("holsterSpawner"), TEXT("holsterSpawner_C"), TEXT("/Script/Engine"), TEXT("BlueprintGeneratedClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints/choppableItems"), TEXT("choppable"), TEXT("choppable_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints/choppableItems"), TEXT("choppableHitMass"), TEXT("choppableHitMass"), TEXT("/Script/CoreUObject"), TEXT("Enum")),
	FBlueprintDependencyObjectRef(TEXT("/Game/ProtoVRHand/Blueprints/Example"), TEXT("Enum_Grip"), TEXT("Enum_Grip"), TEXT("/Script/CoreUObject"), TEXT("Enum")),
	FBlueprintDependencyObjectRef(TEXT("/Game/materials/menu"), TEXT("MenuTextMatInst"), TEXT("MenuTextMatInst"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints/pawn"), TEXT("log_pawn"), TEXT("log_pawn_C"), TEXT("/Script/Engine"), TEXT("BlueprintGeneratedClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints/menus"), TEXT("menu"), TEXT("menu_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineFonts"), TEXT("RobotoDistanceField"), TEXT("RobotoDistanceField"), TEXT("/Script/Engine"), TEXT("Font")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints/game"), TEXT("ForestrySaveGame"), TEXT("ForestrySaveGame_C"), TEXT("/Script/Engine"), TEXT("BlueprintGeneratedClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/materials/menu"), TEXT("bsodMat"), TEXT("bsodMat"), TEXT("/Script/Engine"), TEXT("Material")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/button"), TEXT("SM_button"), TEXT("SM_button"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/materials/buttons"), TEXT("buttonReleasedMatInst"), TEXT("buttonReleasedMatInst"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
	FBlueprintDependencyObjectRef(TEXT("/Game/materials/buttons"), TEXT("buttonPressedMatInst"), TEXT("buttonPressedMatInst"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
	FBlueprintDependencyObjectRef(TEXT("/Game/materials/buttons"), TEXT("buttonRedMatInst"), TEXT("buttonRedMatInst"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/menu"), TEXT("SM_menu"), TEXT("SM_menu"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints/buttons"), TEXT("BT_pdDown"), TEXT("BT_pdDown_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints/buttons"), TEXT("BT_master"), TEXT("BT_master_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints/buttons"), TEXT("BT_pdUp"), TEXT("BT_pdUp_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints/buttons"), TEXT("BT_reset"), TEXT("BT_reset_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints/pawn"), TEXT("graphicsPresets"), TEXT("graphicsPresets"), TEXT("/Script/CoreUObject"), TEXT("Enum")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/cabin"), TEXT("SM_cabin"), TEXT("SM_cabin"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/cooler"), TEXT("SM_cooler"), TEXT("SM_cooler"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio"), TEXT("radioAttenuation"), TEXT("radioAttenuation"), TEXT("/Script/Engine"), TEXT("SoundAttenuation")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/radio"), TEXT("SM_radio"), TEXT("SM_radio"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/soundtrack"), TEXT("ForestryRadioUnreal"), TEXT("ForestryRadioUnreal"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/lantern"), TEXT("SM_lantern"), TEXT("SM_lantern"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/tent"), TEXT("SM_tent"), TEXT("SM_tent"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/mushrooms/cave_mushroom"), TEXT("cave_mushroom"), TEXT("cave_mushroom"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/mushrooms/mushroom4v2"), TEXT("mushroom4v2"), TEXT("mushroom4v2"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/mushrooms/mushroomThreeMulti"), TEXT("mushroomThreeMulti"), TEXT("mushroomThreeMulti"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/rockFormationOne"), TEXT("SM_rockFormation"), TEXT("SM_rockFormation"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/mushrooms/mushroomTwo"), TEXT("mushroomTwo"), TEXT("mushroomTwo"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/haybale"), TEXT("SM_bale"), TEXT("SM_bale"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/target"), TEXT("SM_target"), TEXT("SM_target"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints/weapons"), TEXT("weapon"), TEXT("weapon_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/walkieTalkie"), TEXT("walkieTalkieAttenuation"), TEXT("walkieTalkieAttenuation"), TEXT("/Script/Engine"), TEXT("SoundAttenuation")),
	FBlueprintDependencyObjectRef(TEXT("/Game/audio/soundtrack"), TEXT("04_Hard_Time_Killin__Floor_Blues_mp3"), TEXT("04_Hard_Time_Killin__Floor_Blues_mp3"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/walkieTalkie"), TEXT("SM_walkieTalkie"), TEXT("SM_walkieTalkie"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/mushrooms/mushroomWall"), TEXT("mushroomWall"), TEXT("mushroomWall"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/mushrooms/mushroomThreeSingle"), TEXT("mushroomThreeSingle"), TEXT("mushroomThreeSingle"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/mushrooms/mushroom4v3"), TEXT("mushroom4v3"), TEXT("mushroom4v3"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/mushrooms/mushroom4v1"), TEXT("mushroom4v1"), TEXT("mushroom4v1"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/lightsaberPlatform"), TEXT("lightsaber_platform"), TEXT("lightsaber_platform"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/rockFormationOne"), TEXT("M_rockFormation"), TEXT("M_rockFormation"), TEXT("/Script/Engine"), TEXT("MaterialInstanceConstant")),
	FBlueprintDependencyObjectRef(TEXT("/Game/props/boulder"), TEXT("SM_boulder"), TEXT("SM_boulder"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	};
}
const FBlueprintDependencyObjectRef& F__NativeDependencies::Get(int16 Index)
{
static const FBlueprintDependencyObjectRef& NullObjectRef = FBlueprintDependencyObjectRef();
if (Index == -1) { return NullObjectRef; }
	check((Index >= 0) && (Index < 92));
	return ::NativizedCodeDependenties[Index];
};
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
