#include "\Edaly_Client\version.hpp"

class CfgPatches
{
	class Edaly_Animals_Griffon
	{
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredAddons[]={"Edaly_Client","Edaly_Sounds_Assets_1"};
		requiredVersion=ARMA3_VERSION;
		units[]={};
		weapons[]={};
	};
};

#include "\Edaly_Animals\Horse\configs\CfgMovesBasic.hpp"
#include "\Edaly_Animals\Griffon\configs\CfgMoves.hpp"
#include "\Edaly_Animals\Griffon\configs\CfgGestures.hpp"
#include "\Edaly_Animals\Horse\configs\CfgFaces.hpp"
#include "\Edaly_Animals\Horse\configs\CfgHeads.hpp"
#include "\Edaly_Animals\Horse\configs\CfgIdentities.hpp"

class CfgVehicleClasses
{
	class Edaly_Griffon
	{
		displayName = "Griffons";
	};
};

class CfgVehicles
{
	class SoldierWB;

	class Edaly_Griffon_Base: SoldierWB
	{
		moves = "CfgMoves_Griffon_Edaly";
		gestures = "CfgGestures_Griffon_Edaly";
		movesFatigue = "CfgMoves_Griffon_Edaly";
		boneHead = "LION__Head";
		boneHeadCutScene = "LION__Head";
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
		class Wounds /// changes material of skin according to damage
		{
			tex[] = {};
			mat[] = {
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat"
			};
		};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		side = 3;
		class SoundEnvironExt
		{
			normal[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			rock[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			stony[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			gravel[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			tiling[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			sand[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			drygrass[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			grass[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			debris[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			wood[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			concrete[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			metal[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			dirt[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			wavymetal[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			water[] = {
				{"run",{"soundset","footsteps_water_run_SoundSet"}},
				{"walk",{"soundset","footsteps_water_walk_SoundSet"}},
				{"sprint",{"soundset","footsteps_water_sprint_SoundSet"}},
				{"tactical",{"soundset","footsteps_water_tactical_SoundSet"}},
				{"crawl",{"soundset","footsteps_water_crawl_SoundSet"}}};
			virtual[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			int_concrete[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			int_wood[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			int_metal[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			int_tiles[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			tarmac[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			concrete_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			int_concrete_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			pavement_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			int_pavement_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			stones_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			int_solidwood_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			softwood_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			int_softwood_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			steel_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			metalplate_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			int_metalplate_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			metalplatepressed_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			wavymetal_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			gridmetal_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			int_carpet_exp[] = {
				{"run",{"soundset","footsteps_carpet_int_run_Exp_SoundSet","footsteps_carpet_int_rev_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_carpet_int_walk_Exp_SoundSet","footsteps_carpet_int_rev_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_carpet_int_sprint_Exp_SoundSet","footsteps_carpet_int_rev_sprint_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_carpet_int_tactical_Exp_SoundSet","footsteps_carpet_int_rev_walk_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_carpet_int_crawl_Exp_SoundSet"}}};
			int_mat_exp[] = {
				{"run",{"soundset","footsteps_mat_int_run_Exp_SoundSet","footsteps_mat_int_rev_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_mat_int_walk_Exp_SoundSet","footsteps_mat_int_rev_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_mat_int_sprint_Exp_SoundSet","footsteps_mat_int_rev_sprint_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_mat_int_tactical_Exp_SoundSet","footsteps_mat_int_rev_walk_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_mat_int_crawl_Exp_SoundSet"}}};
			mud_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			straw_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			lino_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			int_lino_exp[] = {
				{"run",{"soundset","footsteps_lino_int_run_Exp_SoundSet","footsteps_lino_int_rev_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_lino_int_walk_Exp_SoundSet","footsteps_lino_int_rev_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_lino_int_sprint_Exp_SoundSet","footsteps_lino_int_rev_sprint_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_lino_int_tactical_Exp_SoundSet","footsteps_lino_int_rev_walk_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_lino_int_crawl_Exp_SoundSet"}}};
			rooftiles_exp[] = {
				{"run",{"soundset","footsteps_rooftiles_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_rooftiles_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_rooftiles_sprint_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_rooftiles_tactical_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_rooftiles_crawl_Exp_SoundSet"}}};
			gravel_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			dirt_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			asphalt_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			water_exp[] = {
				{"run",{"soundset","footsteps_water_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_water_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_water_sprint_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_water_tactical_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_water_crawl_Exp_SoundSet"}}};
			grass_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			grasstall_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			sand_exp[] = {
				{"run",{"soundset","footsteps_sand_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_sand_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_sand_sprint_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			seabed_exp[] = {
				{"run",{"soundset","footsteps_seabed_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_seabed_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_seabed_sprint_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_seabed_tactical_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_seabed_crawl_Exp_SoundSet"}}};
			forest_exp[] = {
				{"run",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
		};

		class SoundEquipment {
			civilian[] = {
				{"walk",{"Edaly_Sounds_Assets_1\data\animals\animals_Griffon_breath_1.ogg",0.3,0.1,10}},
				{"tactical",{"Edaly_Sounds_Assets_1\data\animals\animals_Griffon_breath_2.ogg",0.45,1,10}},
				{"run",{"Edaly_Sounds_Assets_1\data\animals\animals_Griffon_breath_3.ogg",0.25,1,10}},
				{"sprint",{"Edaly_Sounds_Assets_1\data\animals\animals_Griffon_breath_1.ogg",0.28,1,10}}
			};
		};
	};

	class Edaly_Griffon: Edaly_Griffon_Base {
		scope = 2;
		displayName = "Griffon";
		model = "\Edaly_Animals\Griffon\Griffon.p3d";
	};
};
