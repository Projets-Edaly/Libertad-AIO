#include "\Edaly_Client\version.hpp"

class CfgPatches
{
	class Edaly_Animals_Crab
	{
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredAddons[]={"Edaly_Client"};
		requiredVersion=ARMA3_VERSION;
		units[]={};
		weapons[]={};
	};
};

#include "\Edaly_Crab\configs\CfgMoves.hpp"
#include "\Edaly_Crab\configs\CfgGestures.hpp"
#include "\Edaly_Crab\configs\CfgFaces.hpp"
#include "\Edaly_Crab\configs\CfgHeads.hpp"
#include "\Edaly_Crab\configs\CfgIdentities.hpp"

class CfgVehicleClasses
{
	class Edaly_Crab
	{
		displayName = "Crabs";
	};
};

class CfgVehicles
{
	class SoldierWB;

	class Edaly_Crab_Base: SoldierWB
	{
		Icon = "iconAnimal";
		moves = "CfgMoves_Crab_Edaly";
		gestures = "CfgGestures_Crab_Edaly";
		movesFatigue = "CfgMoves_Crab_Edaly";
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

	class Edaly_Crab: Edaly_Crab_Base {
		scope = 2;
		displayName = $STR_EDALY_ANIMAL_CRAB;
		model = "\Edaly_Crab\Crab.p3d";
	};
};
