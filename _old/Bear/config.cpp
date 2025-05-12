#include "\Edaly_Client\version.hpp"

class CfgPatches
{
	class Edaly_Animals_Bear
	{
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredAddons[]={"Edaly_Client"};
		requiredVersion=ARMA3_VERSION;
		units[]={};
		weapons[]={};
	};
};

#include "\Edaly_Animals\Horse\configs\CfgMovesBasic.hpp"
#include "\Edaly_Animals\Bear\configs\CfgMoves.hpp"
#include "\Edaly_Animals\Bear\configs\CfgGestures.hpp"
#include "\Edaly_Animals\Horse\configs\CfgFaces.hpp"
#include "\Edaly_Animals\Horse\configs\CfgHeads.hpp"
#include "\Edaly_Animals\Horse\configs\CfgIdentities.hpp"

class CfgVehicleClasses
{
	class Edaly_Bear
	{
		displayName = "Bears";
	};
};

class CfgVehicles
{
	class SoldierWB;

	class Edaly_Bear_Base: SoldierWB
	{
		moves = "CfgMoves_Bear_Edaly";
		gestures = "CfgGestures_Bear_Edaly";
		movesFatigue = "CfgMoves_Bear_Edaly";
		boneHead = "Head";
		boneHeadCutScene = "Head";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		faceType = "Edaly_DefaultFace";
		memoryPointLStep = "footstepL";
		memoryPointRStep = "footstepR";
		fsmDanger = "";
		fsmFormation = "";
		identityTypes[] = {"Edaly_DefaultFace"};
		selectionLLegWound = "injury_legs";
		selectionLLegWound1 = "injury_legs";
		selectionLLegWound2 = "hl";
		weapons[] = {};
		extCameraPosition[] = {0, 0.300000, -3.500000};
		armor = 50;
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
		{
			primary[] = {{"walk",{"A3\sounds_F\dummysound",1,1,10}},{"walk",{"A3\sounds_F\dummysound",1,1,10}},{"walk",{"A3\sounds_F\dummysound",1,1,10}},{"walk",{"A3\sounds_F\dummysound",1,1,10}},{"walk",{"A3\sounds_f\characters\movements\soldier_gear_walk_05",0.0398107,1,30}},{"walk",{"A3\sounds_f\characters\movements\soldier_gear_walk_06",0.0398107,1,30}},{"walk",{"A3\sounds_F\dummysound",1,1,10}},{"walk",{"A3\sounds_f\characters\movements\soldier_gear_walk_08",0.0398107,1,30}},{"tactical",{"A3\sounds_f\characters\movements\soldier_gear_run_01",0.0446684,1,35}},{"tactical",{"A3\sounds_f\characters\movements\soldier_gear_run_02",0.0446684,1,35}},{"tactical",{"A3\sounds_f\characters\movements\soldier_gear_run_03",0.0446684,1,35}},{"tactical",{"A3\sounds_f\characters\movements\soldier_gear_run_04",0.0446684,1,35}},{"tactical",{"A3\sounds_f\characters\movements\soldier_gear_run_05",0.0446684,1,35}},{"tactical",{"A3\sounds_f\characters\movements\soldier_gear_run_06",0.0446684,1,35}},{"tactical",{"A3\sounds_f\characters\movements\soldier_gear_run_07",0.0446684,1,35}},{"tactical",{"A3\sounds_f\characters\movements\soldier_gear_run_08",0.0446684,1,35}},{"run",{"A3\sounds_f\characters\movements\soldier_gear_run_01",0.0501187,1,35}},{"run",{"A3\sounds_f\characters\movements\soldier_gear_run_02",0.0501187,1,35}},{"run",{"A3\sounds_f\characters\movements\soldier_gear_run_03",0.0501187,1,35}},{"run",{"A3\sounds_f\characters\movements\soldier_gear_run_04",0.0501187,1,35}},{"run",{"A3\sounds_f\characters\movements\soldier_gear_run_05",0.0501187,1,35}},{"run",{"A3\sounds_f\characters\movements\soldier_gear_run_06",0.0501187,1,35}},{"run",{"A3\sounds_f\characters\movements\soldier_gear_run_07",0.0501187,1,35}},{"run",{"A3\sounds_f\characters\movements\soldier_gear_run_08",0.0501187,1,35}},{"sprint",{"A3\sounds_f\characters\movements\soldier_gear_sprint_01",0.0707946,1,45}},{"sprint",{"A3\sounds_f\characters\movements\soldier_gear_sprint_02",0.0707946,1,45}},{"sprint",{"A3\sounds_f\characters\movements\soldier_gear_sprint_03",0.0707946,1,45}},{"sprint",{"A3\sounds_f\characters\movements\soldier_gear_sprint_04",0.0707946,1,45}},{"sprint",{"A3\sounds_f\characters\movements\soldier_gear_sprint_05",0.0707946,1,45}},{"sprint",{"A3\sounds_f\characters\movements\soldier_gear_sprint_06",0.0707946,1,45}},{"sprint",{"A3\sounds_f\characters\movements\soldier_gear_sprint_07",0.0707946,1,45}},{"sprint",{"A3\sounds_f\characters\movements\soldier_gear_sprint_08",0.0707946,1,45}}};

			secondary[] = {{"run",{"A3\sounds_F\dummysound",1,1,10}},{"run",{"A3\sounds_F\dummysound",1,1,10}},{"sprint",{"A3\sounds_F\dummysound",1,1,10}}};
		};
	};

	class Edaly_Bear: Edaly_Bear_Base {
		scope = 2;
		displayName = "Bear";
		model = "\Edaly_Animals\Bear\Bear.p3d";
	};
};