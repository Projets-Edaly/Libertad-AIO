#include "\Edaly_Client\version.hpp"

class CfgPatches
{
	class Edaly_Animals_flamingo
	{
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredAddons[]={"Edaly_Client"};
		requiredVersion=ARMA3_VERSION;
		units[]={};
		weapons[]={};
	};
};

#include "\Edaly_flamingo\configs\CfgMoves.hpp"
#include "\Edaly_flamingo\configs\CfgGestures.hpp"
#include "\Edaly_flamingo\configs\CfgFaces.hpp"
#include "\Edaly_flamingo\configs\CfgHeads.hpp"
#include "\Edaly_flamingo\configs\CfgIdentities.hpp"

class CfgVehicleClasses
{
	class Edaly_flamingo
	{
		displayName = "flamingos";
	};
};

class CfgVehicles
{
	class SoldierWB;

	class Edaly_flamingo_Base: SoldierWB
	{
		Icon = "iconAnimal";
		moves = "CfgMoves_flamingo_Edaly";
		gestures = "CfgGestures_flamingo_Edaly";
		movesFatigue = "CfgMoves_flamingo_Edaly";
		boneHead = "Head";
		boneHeadCutScene = "Head";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		faceType = "Edaly_DefaultFace";
		fsmDanger = "";
		fsmFormation = "";
		identityTypes[] = {"Edaly_DefaultFace"};
		selectionLLegWound = "injury_legs";
		selectionLLegWound1 = "injury_legs";
		selectionLLegWound2 = "hl";
		weapons[] = {};
		extCameraPosition[] = {0, 0.1, -1};
		armor = 5;
		impactEffectsSea = "ImpactEffectsSeaMen";
		canCarryBackPack = 1;
		editorCategory = "EdCat_Edaly_Characters";
        editorSubcategory = "EdSubcat_Edaly_Animals";
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		side = 3;
		class SoundEnvironExt
		{};
		class SoundGear
		{};
	};

	class Edaly_flamingo: Edaly_flamingo_Base {
		scope = 0;
		displayName = "FLAMINGO";
		model = "\Edaly_flamingo\flamingo.p3d";
	};
};
