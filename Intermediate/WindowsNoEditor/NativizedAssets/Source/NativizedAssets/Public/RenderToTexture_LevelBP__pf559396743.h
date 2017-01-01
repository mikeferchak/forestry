#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "RenderToTexture_Enum__pf2123454684.h"
#include "RenderToTexture_Imposter_Enum__pf2123454684.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "PhysMesh__pf559396743.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "TilingMesh__pf559396743.h"
class UStaticMesh;
class UBoxComponent;
class USceneCaptureComponent2D;
class UStaticMeshComponent;
class UTextRenderComponent;
class UCameraComponent;
class UMaterialInstance;
class AActor;
class AStaticMeshActor;
class ADirectionalLight;
class UTexture;
class UTexture2D;
class UMaterialInstanceDynamic;
class UMaterialInstanceConstant;
class UParticleSystem;
class UMaterialInterface;
#include "RenderToTexture_LevelBP__pf559396743.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Engine/ArtTools/RenderToTexture/Blueprints/RenderToTexture_LevelBP.RenderToTexture_LevelBP_C", OverrideNativeName="RenderToTexture_LevelBP_C"))
class ARenderToTexture_LevelBP_C__pf559396743 : public APawn
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BottomCollision-LargeMeshesOnly"))
	UBoxComponent* bpv__BottomCollisionxLargeMeshesOnly__pfG;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SceneCapture Motion Position 1"))
	USceneCaptureComponent2D* bpv__SceneCapturexMotionxPositionx1__pfTTT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TopOutline"))
	UBoxComponent* bpv__TopOutline__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PreviewMesh"))
	UStaticMeshComponent* bpv__PreviewMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TilingPreviewCapture"))
	USceneCaptureComponent2D* bpv__TilingPreviewCapture__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BottomCollision"))
	UBoxComponent* bpv__BottomCollision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box5"))
	UBoxComponent* bpv__Box5__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box4"))
	UBoxComponent* bpv__Box4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box3"))
	UBoxComponent* bpv__Box3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box2"))
	UBoxComponent* bpv__Box2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PlaneMesh"))
	UStaticMeshComponent* bpv__PlaneMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Debug"))
	UTextRenderComponent* bpv__Debug__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Camera1"))
	UCameraComponent* bpv__Camera1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Root"))
	UStaticMeshComponent* bpv__Root__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rotation Array", Category="Default", OverrideNativeName="RotationArray"))
	TArray<FRotator> bpv__RotationArray__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Render Type", Category="Capture Settings", tooltip="This option decides what mode the blueprint tool will use. Find additional settings for each mode under the matching grouped categories below.", OverrideNativeName="Render Type"))
	E__RenderToTexture_Enum__pf bpv__RenderxType__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Viewport Size (See Tooltip)", Category="Capture Settings", tooltip="Due to a current codebug this option does not function. It is recommended that you click the play drop down button -> advanced settings and set window size to 512x512.", OverrideNativeName="Viewport size (see Tooltip)"))
	int32 bpv__ViewportxsizexxseexTooltipx__pfTTLTK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Resolution Multiplier", Category="Capture Settings", tooltip="Resolution Multiplier for capturing high res shots.", OverrideNativeName="ResolutionMultiplier"))
	int32 bpv__ResolutionMultiplier__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Base Color", Category="Capture Settings", OverrideNativeName="BaseColor"))
	bool bpv__BaseColor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Specular", Category="Capture Settings", OverrideNativeName="Specular"))
	bool bpv__Specular__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Metallic", Category="Capture Settings", OverrideNativeName="Metallic"))
	bool bpv__Metallic__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Normal", Category="Capture Settings", OverrideNativeName="Normal"))
	bool bpv__Normal__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Opacity", Category="Capture Settings", OverrideNativeName="Opacity"))
	bool bpv__Opacity__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Roughness", Category="Capture Settings", OverrideNativeName="Roughness"))
	bool bpv__Roughness__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Ambient Occlusion", Category="Capture Settings", OverrideNativeName="AmbientOcclusion"))
	bool bpv__AmbientOcclusion__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Material Ambient Occlusion", Category="Capture Settings", OverrideNativeName="MaterialAmbientOcclusion"))
	bool bpv__MaterialAmbientOcclusion__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Decal Mask", Category="Capture Settings", OverrideNativeName="Decal Mask"))
	bool bpv__DecalxMask__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Lighting Only", Category="Capture Settings", OverrideNativeName="Lighting Only"))
	bool bpv__LightingxOnly__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Subsurface Color", Category="Capture Settings", OverrideNativeName="Subsurface Color"))
	bool bpv__SubsurfacexColor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Imposter Static Mesh", Category="Render 3D Imposter Sprites", tooltip="Which static mesh to render Imposters for.", OverrideNativeName="Imposter Static Mesh"))
	UStaticMesh* bpv__ImposterxStaticxMesh__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Buffer Commands", Category="Debug", tooltip="This is the string that the blueprint enters to specify which buffer targets to export.", OverrideNativeName="BufferCommands"))
	FString bpv__BufferCommands__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Res Command", Category="Debug", OverrideNativeName="ResCommand"))
	FString bpv__ResCommand__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sheet Size", Category="Debug", tooltip="Can be used to modify size of the render sheet. In most cases there is no need to change this.", OverrideNativeName="SheetSize"))
	float bpv__SheetSize__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Shot Command", Category="Default", OverrideNativeName="ShotCommand"))
	FString bpv__ShotCommand__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mesh Scale", Category="Render 3D Imposter Sprites", tooltip="Only change this if for some reason the mesh has innaccurate bounds. Always watch the preview for edge artifacts when adjusting scale.", OverrideNativeName="MeshScale"))
	float bpv__MeshScale__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Imposter Material Instance Array", Category="Render 3D Imposter Sprites", tooltip="You can specify material overrides for each index by adding to this array.", OverrideNativeName="Imposter MaterialInstanceArray"))
	TArray<UMaterialInstance*> bpv__ImposterxMaterialInstanceArray__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Material Color 2", Category="Default", OverrideNativeName="MaterialColor2"))
	FLinearColor bpv__MaterialColor2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sector Size", Category="Default", OverrideNativeName="SectorSize"))
	float bpv__SectorSize__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Initial Offset", Category="Default", OverrideNativeName="InitialOffset"))
	FVector bpv__InitialOffset__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Initialscale", Category="Default", OverrideNativeName="initialscale"))
	float bpv__initialscale__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Internalscalefactor", Category="Default", OverrideNativeName="Internalscalefactor"))
	float bpv__Internalscalefactor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Static Mesh Component", Category="Default", OverrideNativeName="StaticMeshComponent"))
	UStaticMeshComponent* bpv__StaticMeshComponent__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level Static Mesh Actor Array", Category="Default", OverrideNativeName="LevelStaticMeshActorArray"))
	TArray<AActor*> bpv__LevelStaticMeshActorArray__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Render To Texture Mesh", Category="Render Unwrapped Mesh", tooltip="Specify a static mesh in the world to unwrap.", OverrideNativeName="Render to Texture Mesh"))
	AStaticMeshActor* bpv__RenderxtoxTexturexMesh__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Use Level Meshes For Depth", Category="Render Depth Map", tooltip="When true, the blueprint will not spawn a mesh since it will be assumed the user will place the mesh in the correct location/orientation.", OverrideNativeName="Use Level Meshes for Depth"))
	bool bpv__UsexLevelxMeshesxforxDepth__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Light Vector", Category="Render Depth Map", tooltip="Only used when no directional light is specified. This lets you set which light vector to capture depths from.", OverrideNativeName="LightVector"))
	FVector bpv__LightVector__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Directional Light", Category="Render Depth Map", tooltip="You can specify a directional light actor to guarentee depths will match the correct lighting direction.", OverrideNativeName="Directional Light"))
	ADirectionalLight* bpv__DirectionalxLight__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Opacity Mask Textures", Category="Render 3D Imposter Sprites", tooltip="Used during depth pass to make a masked material. Index corresponds to static mesh material index.", OverrideNativeName="Opacity Mask Textures"))
	TArray<UTexture*> bpv__OpacityxMaskxTextures__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Opacity Mask Channels", Category="Render 3D Imposter Sprites", tooltip="Index Corresponds with Opacity Textures. Used to tell which channel(s) to use.", OverrideNativeName="Opacity Mask Channels"))
	TArray<FLinearColor> bpv__OpacityxMaskxChannels__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Frames Around Z Rotation", Category="Render 3D Imposter Sprites", tooltip="This is the number of X frames, which stores the Z rotation.", OverrideNativeName="Frames around Z rotation"))
	int32 bpv__FramesxaroundxZxrotation__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Aspect Ratio 1 By", Category="Render 3D Imposter Sprites", tooltip="Generally leaf this at 1. This sets divisor for the Y frame count. ", OverrideNativeName="Aspect Ratio 1 by"))
	int32 bpv__AspectxRatiox1xby__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Use Level Placed Meshes", Category="Render 3D Imposter Sprites", tooltip="Use this when capturing imposeters that have been shifted into place using the \'ke * adjust\' PIE command. Useful for static lighting hacks.", OverrideNativeName="Use Level Placed Meshes"))
	bool bpv__UsexLevelxPlacedxMeshes__pfTTT;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Lightmap Mesh", Category="Render Lightmaps", tooltip="Specify a static mesh in the world to unwrap.", OverrideNativeName="Lightmap Mesh"))
	AStaticMeshActor* bpv__LightmapxMesh__pfT;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Lightmap Mesh 2-sided, Side 1", Category="Render Lightmaps 2-sided", tooltip="Rendering 2-sided lightmaps is a very special case that requires importing a second static mesh that has flipped faces for the backfaces. The UVs must be exactly the same. Specify side1 here.", OverrideNativeName="Lightmap Mesh 2-sided, Side 1"))
	AStaticMeshActor* bpv__LightmapxMeshx2xsidedxxSidex1__pfTTGHTT;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Lightmap Mesh 2-sided, Side 2", Category="Render Lightmaps 2-sided", tooltip="Rendering 2-sided lightmaps is a very special case that requires importing a second static mesh that has flipped faces for the backfaces. The UVs must be exactly the same. Specify side2 here.", OverrideNativeName="Lightmap Mesh 2-sided, Side 2"))
	AStaticMeshActor* bpv__LightmapxMeshx2xsidedxxSidex2__pfTTGHTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Depth Map Static Mesh", Category="Render Depth Map", tooltip="Which static mesh to capture depths for.", OverrideNativeName="Depth Map Static Mesh"))
	UStaticMesh* bpv__DepthxMapxStaticxMesh__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Unwrap", Category="Render Unwrapped Mesh", tooltip="When this box is checked the mesh will unwrap. Requires the \"UnwrapUVsforRender\" material function be hooked up to worldpositionoffset.", OverrideNativeName="Unwrap"))
	bool bpv__Unwrap__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Depth Material Mask Textures", Category="Render Depth Map", tooltip="This lets you specify any necessary texture masks.", OverrideNativeName="Depth Material Mask Textures"))
	TArray<UTexture2D*> bpv__DepthxMaterialxMaskxTextures__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Flipbook Start Rotation", Category="Render Flipbook", tooltip="Use this setting to modify the starting rotation at frame 0.", OverrideNativeName="Flipbook Start Rotation"))
	FRotator bpv__FlipbookxStartxRotation__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Flipbook Rotation Axis 1", Category="Render Flipbook", tooltip="The primary axis of rotation", OverrideNativeName="Flipbook Rotation Axis 1"))
	FVector bpv__FlipbookxRotationxAxisx1__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Flipbook Rotation Axis 2", Category="Render Flipbook", tooltip="A second flipbook rotation can be used to create more chaotic motion.", OverrideNativeName="Flipbook Rotation Axis 2"))
	FVector bpv__FlipbookxRotationxAxisx2__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Axis 1 Rotations", Category="Render Flipbook", tooltip="More than one rotation does not serve many useful purposes since generally frames will repeat.", OverrideNativeName="Axis 1 Rotations"))
	int32 bpv__Axisx1xRotations__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Axis 2 Rotations", Category="Render Flipbook", tooltip="A second flipbook rotation can be used to create more chaotic motion.", OverrideNativeName="Axis 2 Rotations"))
	int32 bpv__Axisx2xRotations__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Flipbook Columns (X)", Category="Render Flipbook", tooltip="Number of horizontal columns, or the X count.", OverrideNativeName="Flipbook Columns (X)"))
	int32 bpv__FlipbookxColumnsxxXx__pfTTLK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Flipbook Rows (Y)", Category="Render Flipbook", tooltip="Number of vertical rows, or the Y count.", OverrideNativeName="Flipbook Rows (Y)"))
	int32 bpv__FlipbookxRowsxxYx__pfTTLK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Flipbook Material Instance List", Category="Render Flipbook", tooltip="You can specify material overrides for each index by adding to this array.", OverrideNativeName="Flipbook MaterialInstance List"))
	TArray<UMaterialInstance*> bpv__FlipbookxMaterialInstancexList__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Opacity Mask Textures", Category="Render Flipbook", tooltip="Used during Motion Vector pass to make a masked material. Index corresponds to static mesh material index.", OverrideNativeName="Opacity MaskTextures"))
	TArray<UTexture*> bpv__OpacityxMaskTextures__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Opacity Mask Channels", Category="Render Flipbook", tooltip="Index Corresponds with Opacity Textures. Used to tell which channel(s) to use.", OverrideNativeName="Opacity MaskChannels"))
	TArray<FLinearColor> bpv__OpacityxMaskChannels__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Flipbook Static Mesh", Category="Render Flipbook", tooltip="Which static mesh to use.", OverrideNativeName="Flipbook Static Mesh"))
	UStaticMesh* bpv__FlipbookxStaticxMesh__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Flipbook Mesh Scale", Category="Render Flipbook", Tooltip="Useful if you need to use vertex animation and want to give some extra space around the mesh border for that.", OverrideNativeName="Flipbook Mesh scale"))
	float bpv__FlipbookxMeshxscale__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Preview Speed", Category="Render Flipbook", Tooltip="How many seconds to complete a simulated flipbook.", OverrideNativeName="Preview Speed"))
	float bpv__PreviewxSpeed__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Imposter Enum", Category="Render 3D Imposter Sprites", tooltip="3D imposters store every camera angle and require lots of frames. Single axis imposters are great for distant geometry LODs where you don\'t need to view them from above.", OverrideNativeName="ImposterEnum"))
	E__RenderToTexture_Imposter_Enum__pf bpv__ImposterEnum__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Single Rotation Axis", Category="Render 3D Imposter Sprites", tooltip="The axis around which to rotate in the world, based on object Z.", OverrideNativeName="Single Rotation Axis"))
	FVector bpv__SinglexRotationxAxis__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Unwrap Lightmap 2sided", Category="Render Lightmaps 2-sided", tooltip="When this is checked, the mesh will be unwrapped.", OverrideNativeName="Unwrap Lightmap 2sided"))
	bool bpv__UnwrapxLightmapx2sided__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Unwrap 2sided MIDlist A", Category="Render Lightmaps 2-sided", OverrideNativeName="Unwrap2sidedMIDlistA"))
	TArray<UMaterialInstanceDynamic*> bpv__Unwrap2sidedMIDlistA__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Unwrap 2sided MIDList B", Category="Render Lightmaps 2-sided", OverrideNativeName="Unwrap2sidedMIDListB"))
	TArray<UMaterialInstanceDynamic*> bpv__Unwrap2sidedMIDListB__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Lightmap Unwrap Material", Category="Render Lightmaps 2-sided", tooltip="Currently you must configure the lightmap rendering material. This is to allow flexibility in setting up masked materials. The material function \"UnwrapUVsforRender\" is required to be hooked up to world position offset.", OverrideNativeName="Lightmap Unwrap Material"))
	UMaterialInstanceConstant* bpv__LightmapxUnwrapxMaterial__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Unwrap Lightmap", Category="Render Lightmaps", tooltip="When this box is checked the mesh will unwrap. Requires the \"UnwrapUVsforRender\" material function be hooked up to worldpositionoffset.", OverrideNativeName="Unwrap Lightmap"))
	bool bpv__UnwrapxLightmap__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mask Channel", Category="Render Depth Map", tooltip="Each Mask texture will determine which channel to use by looking at the corresponding index of this array.", OverrideNativeName="Mask Channel"))
	TArray<FLinearColor> bpv__MaskxChannel__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Depth Mesh Initial Size", Category="Render Depth Map", OverrideNativeName="DepthMeshInitialSize"))
	FVector bpv__DepthMeshInitialSize__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Depth MID", Category="Render Depth Map", OverrideNativeName="DepthMID"))
	UMaterialInstanceDynamic* bpv__DepthMID__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Scale XY", Category="Render Depth Map", tooltip="Lets you scale the mesh. If this value is changed from 1, the same value needs to be used in the final material when looking up the depths.", OverrideNativeName="Scale XY"))
	float bpv__ScalexXY__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Scale Z", Category="Render Depth Map", Tooltip="How much of the Bounding Sphere the current depth pass needs.", OverrideNativeName="Scale Z"))
	float bpv__ScalexZ__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Fit Vector And Scale Info Onto Texture", Category="Render Depth Map", tooltip="When true, text components will be created showing Vector and Scale info, locations specified by below settings.", OverrideNativeName="Fit Vector and scale info onto texture"))
	bool bpv__FitxVectorxandxscalexinfoxontoxtexture__pfTTTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Text Size", Category="Render Depth Map", tooltip="How large the vector/size info text is.", OverrideNativeName="TextSize"))
	float bpv__TextSize__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Text Locations", Category="Render Depth Map", tooltip="The location of the vector/size info text.", OverrideNativeName="Text Locations"))
	TArray<FVector> bpv__TextxLocations__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Particle System", Category="Particle System Frame Dump", OverrideNativeName="ParticleSystem"))
	UParticleSystem* bpv__ParticleSystem__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Saved Phys Mesh List", Category="Physics Ground", tooltip="After simulating, if you select the blueprint and press \'K\', the meshes will be saved and added to this list so that the meshes can persist after simulation is stopped. To clear saved meshes, use the Trash button on this array.", OverrideNativeName="SavedPhysMeshList"))
	TArray<FPhysMesh__pf559396743> bpv__SavedPhysMeshList__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Simulate Physics", Category="Physics Ground", tooltip="Only disable this if you want to disable the blueprint from running any simulation when simulating in the editor. ", OverrideNativeName="Simulate Physics"))
	bool bpv__SimulatexPhysics__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Keep Tiling Hand Placed Meshes", Category="Physics Ground", tooltip="When true, the meshes you place by hand under \"Tiling Hand Placed Meshes\" will be kept for the physics ", OverrideNativeName="Keep Tiling Hand Placed Meshes"))
	bool bpv__KeepxTilingxHandxPlacedxMeshes__pfTTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Simple Random Placement", Category="Physics Ground", tooltip="When true, physics will be disabled and meshes will simply be spawned randomly. Useful for making quick mesh-fill textures such as tiling grass.", OverrideNativeName="Simple Random Placement"))
	bool bpv__SimplexRandomxPlacement__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Phys Ground Mat", Category="Physics Ground", tooltip="The material to use on the floor plane. Remember you can be creative here and use something that is designed to work with the simulation.", OverrideNativeName="PhysGround Mat"))
	UMaterialInstanceConstant* bpv__PhysGroundxMat__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mesh List", Category="Physics Ground", tooltip="Meshes from this list will be randomly chosen and spawned.", OverrideNativeName="Mesh List"))
	TArray<UStaticMesh*> bpv__MeshxList__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mesh Size Min", Category="Physics Ground", tooltip="Smallest mesh size.", OverrideNativeName="Mesh Size Min"))
	float bpv__MeshxSizexMin__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mesh Size Max", Category="Physics Ground", BlueprintPrivate="true", tooltip="Largest mesh size.", OverrideNativeName="Mesh Size Max"))
	float bpv__MeshxSizexMax__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Size Curve", Category="Physics Ground", tooltip="When 1, the distribution of large to small meshes will be linear. When greater than 1, there will be more small rocks. Less than one causes more big rocks.", OverrideNativeName="Size Curve"))
	float bpv__SizexCurve__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Spawn By Size", Category="Physics Ground", tooltip="When true, large meshes will spawn first. This is an optimization behavior since small rocks covered by large rocks will have little impact on the final texture.", OverrideNativeName="Spawn by Size"))
	bool bpv__SpawnxbyxSize__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Phys Ground Density M^ 2", Category="Physics Ground", OverrideNativeName="PhysGround Density m^2"))
	float bpv__PhysGroundxDensityxmx2__pfTTUy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Count", Category="Physics Ground", OverrideNativeName="Count"))
	int32 bpv__Count__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Number Of Meshes", Category="Physics Ground", tooltip="How many meshes to spawn.", OverrideNativeName="Number of Meshes"))
	int32 bpv__NumberxofxMeshes__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Phys Static Meshes", Category="Physics Ground", OverrideNativeName="PhysStaticMeshes"))
	TArray<UStaticMeshComponent*> bpv__PhysStaticMeshes__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Debug Displacement Depth", Category="Physics Ground", tooltip="When this is enabled, all meshes will be rendered with the displacement material so you can adjust the min/max values to get the best precision. The color will clip to red if white or black are exceeded so that you can get very close to the full range in your displacement texture.", OverrideNativeName="Debug Displacement Depth"))
	bool bpv__DebugxDisplacementxDepth__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Displacement Min", Category="Physics Ground", tooltip="The min world height to capture in the displacement. To preview, use the above \"Debug Displacement Depths\" checkbox after saving a simulation by pressing K and stopping simulation mode.", OverrideNativeName="Displacement Min"))
	float bpv__DisplacementxMin__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Displacement Max", Category="Physics Ground", tooltip="The max world height to capture in the displacement. To preview, use the above \"Debug Displacement Depths\" checkbox after saving a simulation by pressing K and stopping simulation mode.", OverrideNativeName="Displacement Max"))
	float bpv__DisplacementxMax__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Kill Above Z Min", Category="Physics Ground", tooltip="If the very bottom of a mesh settles above this height, it will be respawned.", OverrideNativeName="Kill Above Z Min"))
	float bpv__KillxAbovexZxMin__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Kill Above Z Max", Category="Physics Ground", tooltip="If any part of a mesh settles above this height, it  will be respawned.", OverrideNativeName="Kill Above Z Max"))
	float bpv__KillxAbovexZxMax__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Copied Mesh Array", Category="Physics Ground", OverrideNativeName="Copied Mesh Array"))
	TArray<UStaticMeshComponent*> bpv__CopiedxMeshxArray__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Component", Category="Default", OverrideNativeName="Current Component"))
	UStaticMeshComponent* bpv__CurrentxComponent__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Static Mobility Meshes", Category="Physics Ground", OverrideNativeName="StaticMobilityMeshes"))
	TArray<UStaticMeshComponent*> bpv__StaticMobilityMeshes__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Saved Mesh Components", Category="Physics Ground", tooltip, OverrideNativeName="SavedMeshComponents"))
	TArray<UStaticMeshComponent*> bpv__SavedMeshComponents__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Material Instance", Category="Render Material", tooltip="Specify a simple material instance to bake to its component G-buffer textures.", OverrideNativeName="Material Instance"))
	UMaterialInstance* bpv__MaterialxInstance__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Stadium Offsetting", Category="Render 3D Imposter Sprites", tooltip="Only needed when attempting to bake lighting info billboards. This removes shadow interference.", OverrideNativeName="Stadium Offsetting"))
	bool bpv__StadiumxOffsetting__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Tiling Mesh List", Category="Render Tiling Material from Meshes", tooltip="Add to this List to add meshes. You can specify settings for each mesh. It may be useful to use \'duplicate\' rather than make each mesh from scratch.", OverrideNativeName="TilingMesh List"))
	TArray<FTilingMesh__pf559396743> bpv__TilingMeshxList__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Scene Depth World Units", Category="Capture Settings", OverrideNativeName="SceneDepthWorldUnits"))
	bool bpv__SceneDepthWorldUnits__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Displacement Min", Category="Render Tiling Material from Meshes", tooltip="The min world value to use for displacement.", OverrideNativeName="DisplacementMin"))
	float bpv__DisplacementMin__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Displacement Max", Category="Render Tiling Material from Meshes", tooltip="The max world value to use for displacement.", OverrideNativeName="DisplacementMax"))
	float bpv__DisplacementMax__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Debug Displacement Depth", Category="Render Tiling Material from Meshes", tooltip="When this is enabled, all meshes will be rendered with the displacement material so you can adjust the min/max values to get the best precision. The color will clip to red if white or black are exceeded so that you can get very close to the full range in your displacement texture.", OverrideNativeName="DebugDisplacementDepth"))
	bool bpv__DebugDisplacementDepth__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Custom Depth", Category="Capture Settings", OverrideNativeName="Custom Depth"))
	bool bpv__CustomxDepth__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Displacement Texture Height", Category="Render Tiling Material from Meshes", tooltip="You can specify a displacement texture for each mesh in the list. This value controls how much those displacement textures contribute to the captured world positions.", OverrideNativeName="Displacement Texture Height"))
	float bpv__DisplacementxTexturexHeight__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Preview Tiling", Category="Render Tiling Material from Meshes", OverrideNativeName="Preview Tiling"))
	bool bpv__PreviewxTiling__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Tiling Amount", Category="Render Tiling Material from Meshes", tooltip="Tiling amount for the preview tiling material", OverrideNativeName="Tiling Amount"))
	float bpv__TilingxAmount__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Imposter Array", Category="Render 3D Imposter Sprites", OverrideNativeName="ImposterArray"))
	TArray<FTransform> bpv__ImposterArray__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Preview Location", Category="Debug", MakeEditWidget="true", tooltip="This setting has a 3d widget that you can drag around the world. It lets you move the preview location around.", OverrideNativeName="PreviewLocation"))
	FVector bpv__PreviewLocation__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Output Depth Maps", Category="Render 3D Imposter Sprites", tooltip="Exports scenecolor as image for depth. Used with Pixel Depth Offset in materials to give billboards accurate self shadowing with distance field shadows. Requires inputing any mask textures and channels.", OverrideNativeName="Output Depth Maps"))
	bool bpv__OutputxDepthxMaps__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Imposter Mesh Components", Category="Render 3D Imposter Sprites", OverrideNativeName="ImposterMeshComponents"))
	TArray<UStaticMeshComponent*> bpv__ImposterMeshComponents__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Background Sheet MID", Category="Default", OverrideNativeName="BackgroundSheetMID"))
	UMaterialInstanceDynamic* bpv__BackgroundSheetMID__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Debug Depth", Category="Render 3D Imposter Sprites", tooltip="Useful to set up the masked materials for depth capture", OverrideNativeName="Debug Depth"))
	bool bpv__DebugxDepth__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Max Pitch/ Roll", Category="Physics Ground", tooltip="You can limit the pitch/roll. Most useful when not using physics so that grass etc spawns mostly upwards.", OverrideNativeName="Max Pitch/Roll"))
	float bpv__MaxxPitchxRoll__pfTE;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Render Motion Vectors", Category="Render Flipbook", tooltip="Renders two extra Buffers using WorldPosition and an offset frame. Motion vectors need to be calculated externally by getting the difference in the two images. Note that this option hi-jacks the \"SceneDepth World Units\" buffer!", OverrideNativeName="Render Motion Vectors"))
	bool bpv__RenderxMotionxVectors__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Scene Color", Category="Capture Settings", tooltip="Scene Color will automatically be output when rendering motion vectors, depths or lightmaps.", OverrideNativeName="SceneColor"))
	bool bpv__SceneColor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sheet Height", Category="Capture Settings", tooltip="Z value for background sheet. Some modes use the sheet for collision.", OverrideNativeName="Sheet height"))
	float bpv__Sheetxheight__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Background Sheet Color", Category="Capture Settings", tooltip="Ths background card only shows up in some buffers since it is a translucent material. This is so that an accurate \"decal mask\" can be exported easily without the background sheet filling in the black space.", OverrideNativeName="Background Sheet Color"))
	FLinearColor bpv__BackgroundxSheetxColor__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Flipbook Meshes", Category="Render Flipbook", OverrideNativeName="FlipbookMeshes"))
	TArray<UStaticMeshComponent*> bpv__FlipbookMeshes__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="UV Layout Dilation Amount", Category="Render Flipbook", tooltip="How much to dilate the UVs by.", OverrideNativeName="UV Layout Dilation Amount"))
	float bpv__UVxLayoutxDilationxAmount__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Offset Vectors", Category="Default", OverrideNativeName="OffsetVectors"))
	TArray<FVector> bpv__OffsetVectors__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Empty Spacer", Category="--------------------------------------", tooltip="This does nothing but provide nice visual break after relevant options.", OverrideNativeName="Empty Spacer"))
	bool bpv__EmptyxSpacer__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Render Loc", Category="Default", OverrideNativeName="CurrentRenderLoc"))
	FVector bpv__CurrentRenderLoc__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="UV Dilation Steps", Category="Render Flipbook", tooltip="How many UV dilation steps to perform. More steps will usually result in cleaner edge at the cost of taking longer to render.", OverrideNativeName="UV Dilation Steps"))
	int32 bpv__UVxDilationxSteps__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Material Choice", Category="Render Flipbook", OverrideNativeName="MaterialChoice"))
	UMaterialInstance* bpv__MaterialChoice__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="MVFloors", Category="Default", OverrideNativeName="MVFloors"))
	TArray<UStaticMeshComponent*> bpv__MVFloors__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Flipbook MID", Category="Render Flipbook", OverrideNativeName="FlipbookMID"))
	UMaterialInstanceDynamic* bpv__FlipbookMID__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Motion Dilation Steps", Category="Render Flipbook", tooltip="Motion Dilation superimposes the positions of the next frame using the current frame\'s motion vectors underneath all cells. Doing this helps pixels maintain their motion to their destinations when the pixels leave the silhouette of the shape in the current frame. More steps results in less artifacts at the cost of slower rendering.", OverrideNativeName="Motion Dilation Steps"))
	int32 bpv__MotionxDilationxSteps__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Unwrapped Motion Vector Meshes", Category="Render Flipbook", OverrideNativeName="UnwrappedMotionVectorMeshes"))
	TArray<UStaticMeshComponent*> bpv__UnwrappedMotionVectorMeshes__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Motion Vector Intensity Boost", Category="Render Flipbook", tooltip="Useful to get better precision when the motion vectors are small. Remember to apply the inverse of this number as the vector strength in the flipbook material.", OverrideNativeName="MotionVectorIntensityBoost"))
	float bpv__MotionVectorIntensityBoost__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="S RGB", Category="Default", OverrideNativeName="sRGB"))
	bool bpv__sRGB__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Render Motion Vectors", Category="Render 3D Imposter Sprites", tooltip="Motion Vectors are used to morph between frames to smooth motion popping.", OverrideNativeName="Render MotionVectors"))
	bool bpv__RenderxMotionVectors__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Large Mesh Sink Height", Category="Physics Ground", tooltip="How far below the main ground large meshes should sink.", OverrideNativeName="Large Mesh Sink Height"))
	float bpv__LargexMeshxSinkxHeight__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Large Mesh Size Threshold", Category="Physics Ground", tooltip="Meshes larger than this will \'sink\' below the main ground up to the \'Large Mesh Sink Height\" distance.", OverrideNativeName="Large Mesh Size Threshold"))
	float bpv__LargexMeshxSizexThreshold__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="UV Dilation Pass", Category="Default", OverrideNativeName="UV DilationPass"))
	bool bpv__UVxDilationPass__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Motion Vector Pass", Category="Default", OverrideNativeName="MotionVector Pass"))
	bool bpv__MotionVectorxPass__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Motion Vector Material", Category="Default", OverrideNativeName="MotionVectorMaterial"))
	UMaterialInstanceConstant* bpv__MotionVectorMaterial__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Motion Vectors Applied", Category="Default", OverrideNativeName="MotionVectorsApplied"))
	UMaterialInstanceConstant* bpv__MotionVectorsApplied__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="UV Layout Dilation Amount", Category="Render 3D Imposter Sprites", tooltip="Only used during Motion Vector pass. UV Dilation is used to fix seams along polygon borders. Slowly increase while observing edge artifacts.", OverrideNativeName="UV Layout DilationAmount"))
	float bpv__UVxLayoutxDilationAmount__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="UV Dilation Steps", Category="Render 3D Imposter Sprites", tooltip="More UV Dilation steps can result in much cleaner edges in the motion vector image. Excessive passes can make the blueprint slow to update.", OverrideNativeName="UV DilationSteps"))
	int32 bpv__UVxDilationSteps__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Motion Dilation Steps", Category="Render 3D Imposter Sprites", tooltip="Motion Dilation Helps capture pixels that move beyond the silhouette of the current frame that have different motion vectors than what the current frame can show. Using at least 1 step vastly improves quality.", OverrideNativeName="Motion DilationSteps"))
	int32 bpv__MotionxDilationSteps__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Motion Vector Intensity Boost", Category="Render 3D Imposter Sprites", tooltip="Increasing the intensity of the motion vectors will increase the precision when the texture is sampled as 8-bit. Generally try increasing this until you see red clipping and then back off until the clipping is gone. The inverse (1/x) of this number needs to be input in the material instance.", OverrideNativeName="Motion Vector IntensityBoost"))
	float bpv__MotionxVectorxIntensityBoost__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Motion Vectors Applied Imposter", Category="Default", OverrideNativeName="MotionVectorsApplied_Imposter"))
	UMaterialInstanceConstant* bpv__MotionVectorsApplied_Imposter__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Flipbook Preview Mat", Category="Default", OverrideNativeName="Flipbook Preview Mat"))
	UMaterialInstanceConstant* bpv__FlipbookxPreviewxMat__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Imposter- Single Axis Preview Mat", Category="Default", OverrideNativeName="Imposter-SingleAxis Preview Mat"))
	UMaterialInstanceConstant* bpv__ImposterxSingleAxisxPreviewxMat__pfGTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Imposter- 3D Preview Mat", Category="Default", OverrideNativeName="Imposter-3D Preview Mat"))
	UMaterialInstanceConstant* bpv__Imposterx3DxPreviewxMat__pfGTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="MIDList", Category="Default", OverrideNativeName="MIDList"))
	TArray<UMaterialInstanceDynamic*> bpv__MIDList__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Poly Center", Category="Default", OverrideNativeName="PolyCenter"))
	FVector bpv__PolyCenter__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Offst Phase", Category="Default", OverrideNativeName="Offst Phase"))
	float bpv__OffstxPhase__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Dilation Phase", Category="Default", OverrideNativeName="Dilation Phase"))
	float bpv__DilationxPhase__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Ortho FOV", Category="Render 3D Imposter Sprites", tooltip="Can be useful to fake a certain amount of FOV depending on how close your imposters are intended to be rendered.", OverrideNativeName="Ortho FOV"))
	float bpv__OrthoxFOV__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Indicies To Delete", Category="Default", OverrideNativeName="Indicies to Delete"))
	TArray<int32> bpv__IndiciesxtoxDelete__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Tiling Amount", Category="Physics Ground", tooltip="Tiling amount for the preview image", OverrideNativeName="TilingAmount"))
	float bpv__TilingAmount__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="UVIndex", Category="Render Flipbook", tooltip="Which UV index to use for rendering motion vectors. Needs to be uniquely unwrapped with appropriate padding.", OverrideNativeName="UVIndex"))
	float bpv__UVIndex__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="UV Index", Category="Render 3D Imposter Sprites", OverrideNativeName="UV Index"))
	float bpv__UVxIndex__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var", Category="Default", OverrideNativeName="NewVar"))
	UMaterialInstanceDynamic* bpv__NewVar__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Export Images As EXR", Category="Capture Settings", tooltip="EXR uses floating point data. EXR is a better way to get accurate texture gamma. When converting back to 8-bit in photoshop, make sure to choose \"Do Not Merge\" in order to get accurate sRGB curves.", OverrideNativeName="Export images as EXR"))
	bool bpv__ExportximagesxasxEXR__pfTTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_float_Variable"))
	float b0l__Temp_float_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_float_Variable2"))
	float b0l__Temp_float_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_float_Variable3"))
	float b0l__Temp_float_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_float_Variable4"))
	float b0l__Temp_float_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UStaticMesh* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable2"))
	int32 b0l__Temp_int_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_float_Variable5"))
	float b0l__Temp_float_Variable5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_Origin"))
	FVector b0l__CallFunc_GetComponentBounds_Origin__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_BoxExtent"))
	FVector b0l__CallFunc_GetComponentBounds_BoxExtent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_SphereRadius"))
	float b0l__CallFunc_GetComponentBounds_SphereRadius__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X2"))
	float b0l__CallFunc_BreakVector_X2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y2"))
	float b0l__CallFunc_BreakVector_Y2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z2"))
	float b0l__CallFunc_BreakVector_Z2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X3"))
	float b0l__CallFunc_BreakVector_X3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y3"))
	float b0l__CallFunc_BreakVector_Y3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z3"))
	float b0l__CallFunc_BreakVector_Z3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable3"))
	int32 b0l__Temp_int_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_Origin2"))
	FVector b0l__CallFunc_GetComponentBounds_Origin2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_BoxExtent2"))
	FVector b0l__CallFunc_GetComponentBounds_BoxExtent2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_SphereRadius2"))
	float b0l__CallFunc_GetComponentBounds_SphereRadius2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X4"))
	float b0l__CallFunc_BreakVector_X4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y4"))
	float b0l__CallFunc_BreakVector_Y4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z4"))
	float b0l__CallFunc_BreakVector_Z4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X5"))
	float b0l__CallFunc_BreakVector_X5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y5"))
	float b0l__CallFunc_BreakVector_Y5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z5"))
	float b0l__CallFunc_BreakVector_Z5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_Origin3"))
	FVector b0l__CallFunc_GetComponentBounds_Origin3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_BoxExtent3"))
	FVector b0l__CallFunc_GetComponentBounds_BoxExtent3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_SphereRadius3"))
	float b0l__CallFunc_GetComponentBounds_SphereRadius3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X6"))
	float b0l__CallFunc_BreakVector_X6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y6"))
	float b0l__CallFunc_BreakVector_Y6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z6"))
	float b0l__CallFunc_BreakVector_Z6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X7"))
	float b0l__CallFunc_BreakVector_X7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y7"))
	float b0l__CallFunc_BreakVector_Y7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z7"))
	float b0l__CallFunc_BreakVector_Z7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	UStaticMeshComponent* b0l__CallFunc_Array_Get_Item2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_float_Variable6"))
	float b0l__Temp_float_Variable6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable4"))
	int32 b0l__Temp_int_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item3"))
	int32 b0l__CallFunc_Array_Get_Item3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item4"))
	UStaticMeshComponent* b0l__CallFunc_Array_Get_Item4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item5"))
	UStaticMeshComponent* b0l__CallFunc_Array_Get_Item5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_PhysMesh"))
	FPhysMesh__pf559396743 b0l__K2Node_MakeStruct_PhysMesh__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_float_Variable7"))
	float b0l__Temp_float_Variable7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable2"))
	int32 b0l__Temp_int_Loop_Counter_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable2"))
	int32 b0l__Temp_int_Array_Index_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	E__RenderToTexture_Enum__pf b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AStaticMeshActor*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item6"))
	AStaticMeshActor* b0l__CallFunc_Array_Get_Item6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable5"))
	int32 b0l__Temp_int_Variable5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item7"))
	UStaticMeshComponent* b0l__CallFunc_Array_Get_Item7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_PhysMesh2"))
	FPhysMesh__pf559396743 b0l__K2Node_MakeStruct_PhysMesh2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item8"))
	AActor* b0l__CallFunc_Array_Get_Item8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AddComponent_ReturnValue"))
	UStaticMeshComponent* b0l__CallFunc_AddComponent_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AddComponent_ReturnValue2"))
	UStaticMeshComponent* b0l__CallFunc_AddComponent_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AddComponent_ReturnValue3"))
	UStaticMeshComponent* b0l__CallFunc_AddComponent_ReturnValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable6"))
	int32 b0l__Temp_int_Variable6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item9"))
	UStaticMeshComponent* b0l__CallFunc_Array_Get_Item9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_Origin4"))
	FVector b0l__CallFunc_GetComponentBounds_Origin4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_BoxExtent4"))
	FVector b0l__CallFunc_GetComponentBounds_BoxExtent4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentBounds_SphereRadius4"))
	float b0l__CallFunc_GetComponentBounds_SphereRadius4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X8"))
	float b0l__CallFunc_BreakVector_X8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y8"))
	float b0l__CallFunc_BreakVector_Y8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z8"))
	float b0l__CallFunc_BreakVector_Z8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	bool b0l__K2Node_Select_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item10"))
	FTransform b0l__CallFunc_Array_Get_Item10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorTransform_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorTransform_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select2_Default"))
	float b0l__K2Node_Select2_Default__pf;
	ARenderToTexture_LevelBP_C__pf559396743(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_RenderToTexture_LevelBP_0"))
	void bpf__ExecuteUbergraph_RenderToTexture_LevelBP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_RenderToTexture_LevelBP__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="Match Level Actors to Imposter Array"))
	virtual void bpf__MatchxLevelxActorsxtoxImposterxArray__pfTTTTT();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Buffer Commands"))
	virtual void bpf__SetxBufferxCommands__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FlipBook"))
	virtual void bpf__FlipBook__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Imposter Sprites"))
	virtual void bpf__ImposterxSprites__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Render Depth Map"))
	virtual void bpf__RenderxDepthxMap__pfTT(/*out*/ UMaterialInstanceDynamic*& bpp__MID__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Render Unwrapped Mesh To Textures"))
	virtual void bpf__RenderxUnwrappedxMeshxToxTextures__pfTTTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Render Lightmap"))
	virtual void bpf__RenderxLightmap__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Render LIghtmap 2-sided"))
	virtual void bpf__RenderxLIghtmapx2xsided__pfTTG();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Particle System Frame Dump"))
	virtual void bpf__ParticlexSystemxFramexDump__pfTTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Render Random Tiling Physics Drop"))
	virtual void bpf__RenderxRandomxTilingxPhysicsxDrop__pfTTTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Find Z Bounds"))
	virtual void bpf__FindxZxBounds__pfTT(/*out*/ TArray<UStaticMeshComponent*>& bpp__Meshes__pf, /*out*/ float& bpp__Min__pf, /*out*/ float& bpp__Max__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Copy a mesh"))
	virtual void bpf__Copyxaxmesh__pfTT(UStaticMeshComponent* bpp__MeshxComponent__pfT, FVector bpp__OffsetxVector__pfT, /*out*/ TArray<UStaticMeshComponent*>& bpp__ArrayxtoxPlacexMeshesxin__pfTTTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Render Tiling Material"))
	virtual void bpf__RenderxTilingxMaterial__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Render Tiling Material from Meshes"))
	virtual void bpf__RenderxTilingxMaterialxfromxMeshes__pfTTTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Setup Collision"))
	virtual void bpf__SetupxCollision__pfT(bool bpp__Visible__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="New Mesh"))
	virtual void bpf__NewxMesh__pfT(UStaticMesh* bpp__Mesh__pf, FVector bpp__WorldPos__pf, UMaterialInterface* bpp__Material__pf, FVector bpp__Scale3d__pf, /*out*/ UStaticMeshComponent*& bpp__MeshxComp__pfT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set up MPC"))
	virtual void bpf__SetxupxMPC__pfTT();
public:
};
