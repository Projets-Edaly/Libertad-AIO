#include "\Edaly_Client\version.hpp"

class CfgPatches
{
	class Edaly_Animals_Horse
	{
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredAddons[]={"Edaly_Client"};
		requiredVersion=ARMA3_VERSION;
		units[]={"edaly_horse_01","edaly_horse_02","edaly_horse_03", "edaly_horse_04", "edaly_horse_05", "edaly_horse_06", "edaly_horse_07", "edaly_horse_09", "edaly_horse_10", "edaly_horse_nosaddle_01"};
		weapons[]={};
	};
};

#include "\Edaly_Horse\configs\CfgMoves.hpp"
#include "\Edaly_Horse\configs\CfgGestures.hpp"
#include "\Edaly_Horse\configs\CfgFaces.hpp"
#include "\Edaly_Horse\configs\CfgHeads.hpp"
#include "\Edaly_Horse\configs\CfgIdentities.hpp"

class CfgVehicleClasses
{
	class Edaly_Horse
	{
		displayName = "Horses";
	};
};
class CfgMovesFatigue_Horse
{
	staminaDuration = 60;
	staminaCooldown = 10;
	staminaRestoration = 30;
	aimPrecisionSpeedCoef = 5;
	terrainDrainSprint = -1;
	terrainDrainRun = -1;
	terrainSpeedCoef = 0.9;
};

class CfgVehicles
{
	class CAManBase;
	class Edaly_Horse_Base: CAManBase
	{
		Icon = "iconAnimal";
		moves = "CfgMoves_Horse_Edaly";
		gestures = "CfgGestures_Horse_Edaly";
		movesFatigue = "CfgMovesFatigue_Horse";
		side = 3;
		armor = 30;

		boneHead = "head";
		boneHeadCutScene = "head";
		boneLEye = "";
		boneREye = "";

		oxygenCapacity = 800000;

		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		memoryPointLStep = "";
		memoryPointRStep = "";

		fsmDanger = "";
		fsmFormation = "";

		identityTypes[] = {"Edaly_DefaultFace"};
		faceType = "Edaly_DefaultFace";

		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

		weapons[] = {};
		extCameraPosition[] = {0.4,-0.1,-2.5};

		impactEffectsSea = "ImpactEffectsSeaMen";
		canCarryBackPack = 0;

		editorCategory = "EdCat_Edaly_Characters";
        editorSubcategory = "EdSubcat_Edaly_Animals";

		canBleed = 1;

		selectionHeadWound = "injury_head";
		selectionBodyWound = "injury_body";
		selectionLLegWound = "injury_legs";
		selectionRLegWound = "injury_legs";

		hiddenSelections[] = {"camo","camo2","camo1","camo3"};
		hiddenSelectionsTextures[] = {"\Edaly_Horse\data\main_dark_co.paa","\Edaly_Horse\data\saddle_co.paa","\Edaly_Horse\data\black_hair_ca.paa","\Edaly_Horse\data\black_hair_ca.paa"};

		class Wounds
		{
			tex[] = {};
			mat[] = {"Edaly_Horse\data\main.rvmat","Edaly_Horse\data\main_injury.rvmat","Edaly_Horse\data\main_injury.rvmat"};
		};

		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "Face_Hub";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 2;
				material = -1;
				name = "Neck";
				passThrough = 0.1;
				radius = 0.23;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "Head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor				= 5;
				material			= -1;
				name				= "Pelvis";
				passThrough			= 0.1;
				radius				= 0.4;
				explosionShielding	= 1;
				visual				= "injury_body";
				minimalHit			= 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor				= 3;
				material			= -1;
				name				= "Spine";
				passThrough			= 0.1;
				radius				= 0.4;
				explosionShielding	= 1;
				visual				= "injury_body";
				minimalHit			= 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor				= 4;
				material			= -1;
				name				= "Spine1";
				passThrough			= 0.1;
				radius				= 0.4;
				explosionShielding  = 6;
				visual				= "injury_body";
				minimalHit			= 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor				= 6;
				material			= -1;
				name				= "Spine2";
				passThrough			= 0.1;
				radius				= 0.45;
				explosionShielding	= 6;
				visual				= "injury_body";
				minimalHit			= 0.01;
			};
			class HitBody: HitChest
			{
				armor				= 10;
				material			= -1;
				name				= "Body";
				passThrough			= 0.1;
				radius				= 0.26;
				explosionShielding	= 6;
				visual				= "injury_body";
				minimalHit			= 0.01;
				depends				= "HitPelvis max HitAbdomen max HitDiaphragm max HitChest"; // depends work only for hit points defined in inheritance chain
			};
			class HitLegs: HitBody
			{
				armor = 5;
				material = -1;
				name = "Legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 0.3;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "Body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};

		class UserActions
		{
			class MountDriver
			{
				displayName = "Mount as driver";
				displayNameDefault = "<img size='2' image='\Edaly_UI_Assets\Data\horse-saddle.paa'/>";
				priority = 10;
				radius = 2;
				position = "Spine1";
				showWindow = 1;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "alive this && !isPlayer this && isNull(attachedTo player) && isNull(this getVariable ['driver', objNull])";
				statement = "[this, 'driver'] spawn EdalyHorse_fnc_mount;";
			};
			class MountPassenger: MountDriver {
				displayName = "Mount as passenger";
				statement = "[this, 'passenger'] spawn EdalyHorse_fnc_mount;";
				condition = "alive this && !isPlayer this && isNull(attachedTo player) && isNull(this getVariable ['passenger', objNull])";
			};
			class Dismount
			{
				displayName = "Dismount";
				displayNameDefault = "<img size='2' image='\Edaly_UI_Assets\Data\horse-saddle.paa'/>";
				priority = 10;
				radius = 2;
				position = "Spine1";
				showWindow = 1;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "GetOut";
				condition = "(attachedTo player) isEqualTo this";
				statement = "[true] spawn EdalyHorse_fnc_dismount;";
			};
		};
		class SoundEnvironExt
		{
			generic[] = {
				{"squeal6",{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_squeals_6.ogg",1,1,35}},
				{"breath",{"\Edaly_Sounds_Assets_1\data\animals\horse\horse_breathing_01.ogg",1,1,35}},
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_default_horse_run_SoundSet","equipment_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_horse_run_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"healself",{"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWrflDnon_medic",0.891251,0.8,35}},
				{"healselfprone",{"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWrflDnon_medic",0.891251,0.8,35}},
				{"healselfpistolkneelin",{"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medicIn",0.891251,0.8,35}},
				{"healselfpistolkneel",{"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medic",0.891251,0.8,35}},
				{"healselfpistolkneelout",{"\A3\Sounds_F\characters\ingame\AinvPknlMstpSlayWpstDnon_medicOut",0.891251,0.8,35}},
				{"healselfpistolpromein",{"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medicin",0.891251,0.8,35}},
				{"healselfpistolprone",{"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medic",0.891251,0.8,35}},
				{"healselfpistolpromeout",{"\A3\Sounds_F\characters\ingame\AinvPpneMstpSlayWpstDnon_medicOut",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.891251,0.8,35}},
				{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short1",0.158489,0.8,35}},
				{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short2",0.158489,0.8,35}},
				{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short3",0.158489,0.8,35}},
				{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short4",0.158489,0.8,35}},
				{"adjust_short",{"\A3\sounds_f\characters\stances\adjust_short5",0.158489,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\adjust_short1",0.158489,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\adjust_short1",0.158489,0.8,35}},
				{"adjust_kneelhigh_to_standlow",{"\A3\sounds_f\characters\stances\adjust_short3",0.158489,0.8,35}},
				{"adjust_standlow_to_kneelhigh",{"\A3\sounds_f\characters\stances\adjust_short1",0.158489,0.8,35}},
				{"over_the_obstacle_slow",{"\A3\sounds_f\characters\movements\over_the_obstacle_slow",0.316228,0.8,35}},
				{"over_the_obstacle_fast",{"\A3\sounds_f\characters\movements\over_the_obstacle_fast",0.316228,0.8,35}},
				{"overstep",{"A3\sounds_f\characters\movements\overstep_1",0.451189,1,32}},
				{"overstep",{"A3\sounds_f\characters\movements\overstep_2",0.451189,1,32}},
				{"grenade_throw",{"\A3\sounds_f\characters\stances\grenade_throw1",0.354813,0.8,35}},
				{"grenade_throw",{"\A3\sounds_f\characters\stances\grenade_throw2",0.354813,0.8,35}},
				{"inventory_in",{"\A3\sounds_f\characters\stances\adjust_short1",0.451189,0.8,35}},
				{"inventory_out",{"\A3\sounds_f\characters\stances\adjust_short2",0.451189,0.8,35}},
				{"handgun_to_rifle",{"\A3\Sounds_F\characters\stances\handgun_to_rifle",1,0.8,35}},
				{"handgun_to_launcher",{"\A3\sounds_f\characters\stances\handgun_to_launcher",1,0.8,35}},
				{"launcher_to_rifle",{"\A3\sounds_f\characters\stances\launcher_to_rifle",1,0.8,35}},
				{"launcher_to_handgun",{"\A3\sounds_f\characters\stances\launcher_to_handgun",1,0.8,35}},
				{"rifle_to_handgun",{"\A3\Sounds_F\characters\stances\rifle_to_handgun",1,0.8,35}},
				{"rifle_to_handgun_prn",{"\A3\Sounds_F\characters\stances\rifle_to_handgun_prn",1,0.8,35}},
				{"rifle_to_launcher",{"\A3\sounds_f\characters\stances\rifle_to_launcher",1,0.8,35}},
				{"rifle_to_binoc",{"\A3\sounds_f\characters\stances\rifle_to_binoculars",1,0.8,35}},
				{"handgun_to_binoc",{"\A3\sounds_f\characters\stances\handgun_to_binoculars",1,0.8,35}},
				{"launcher_to_binoc",{"\A3\sounds_f\characters\stances\launcher_to_binoculars",1,0.8,35}},
				{"launcher_to_binoc_knl",{"\A3\sounds_f\characters\stances\launcher_to_binoculars_knl",1,0.8,35}},
				{"unarmed_to_binoc",{"\A3\sounds_f\characters\stances\unarmed_to_binoculars",1,0.8,35}},
				{"binoc_to_rifle",{"\A3\sounds_f\characters\stances\binoculars_to_rifle",1,0.8,35}},
				{"binoc_to_rifle_2",{"\A3\sounds_f\characters\stances\binoculars_to_rifle_2",1,0.8,35}},
				{"binoc_to_handgun",{"\A3\sounds_f\characters\stances\binoculars_to_handgun",1,0.8,35}},
				{"binoc_to_launcher",{"\A3\sounds_f\characters\stances\binoculars_to_launcher",1,0.8,35}},
				{"binoc_to_unarmed",{"\A3\sounds_f\characters\stances\binoculars_to_unarmed",1,0.8,35}},
				{"low_rifle",{"A3\sounds_f\characters\stances\low_rifle",0.501187,0.8,35}},
				{"lift_rifle",{"A3\sounds_f\characters\stances\lift_rifle",0.501187,0.8,35}},
				{"low_handgun",{"A3\sounds_f\characters\stances\low_handgun",0.501187,0.8,35}},
				{"lift_handgun",{"A3\sounds_f\characters\stances\lift_handgun",0.501187,0.8,35}},
				{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_01",0.501187,0.8,35}},
				{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_02",0.501187,0.8,35}},
				{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_03",0.501187,0.8,35}},
				{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_04",0.501187,0.8,35}},
				{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_05",0.501187,0.8,35}},
				{"ladder",{"\A3\Sounds_F\characters\movements\ladder\ladder_06",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"heli_get_in_init",{"soundset","heli_get_in_init_SoundSet"}},
				{"Acts_CrouchGetLowGesture",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchGetLowGesture",0.891251,0.8,35}},
				{"Acts_listeningToRadio_in",{"A3\Sounds_F\characters\cutscenes\Acts_listeningToRadio_in",0.891251,0.8,35}},
				{"Acts_listeningToRadio_Loop",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_1.ogg",0.891251,0.8,35}},
				{"Acts_listeningToRadio_Out",{"\A3\Sounds_F\characters\cutscenes\Acts_listeningToRadio_Out",0.891251,0.8,35}},
				{"Acts_LyingWounded_loop1",{"\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop1",0.891251,0.8,35}},
				{"Acts_LyingWounded_loop2",{"\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop2",0.891251,0.8,35}},
				{"Acts_LyingWounded_loop3",{"\A3\Sounds_F\characters\cutscenes\Acts_LyingWounded_loop3",0.891251,0.8,35}},
				{"Acts_NavigatingChopper_In",{"\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_In",0.562341,0.8,35}},
				{"Acts_NavigatingChopper_Loop",{"\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_Loop",0.562341,0.8,35}},
				{"Acts_NavigatingChopper_Out",{"\A3\Sounds_F\characters\cutscenes\Acts_NavigatingChopper_Out",0.562341,0.8,35}},
				{"Acts_PercMstpSlowWrflDnon_handup1",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1",0.562341,0.8,35}},
				{"Acts_PercMstpSlowWrflDnon_handup1b",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1b",0.562341,0.8,35}},
				{"Acts_PercMstpSlowWrflDnon_handup1c",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup1c",0.562341,0.8,35}},
				{"Acts_PercMstpSlowWrflDnon_handup2",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2",0.562341,0.8,35}},
				{"Acts_PercMstpSlowWrflDnon_handup2b",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2b",0.891251,0.8,35}},
				{"Acts_PercMstpSlowWrflDnon_handup2c",{"\A3\Sounds_F\characters\cutscenes\Acts_PercMstpSlowWrflDnon_handup2c",0.562341,0.8,35}},
				{"Acts_SignalToCheck",{"\A3\Sounds_F\characters\cutscenes\Acts_SignalToCheck",0.562341,0.8,35}},
				{"Acts_ShowingTheRightWay_in",{"\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_in",0.562341,0.8,35}},
				{"Acts_ShowingTheRightWay_loop",{"\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_Loop",0.562341,0.8,35}},
				{"Acts_ShowingTheRightWay_out",{"\A3\Sounds_F\characters\cutscenes\Acts_ShowingTheRightWay_Out",0.562341,0.8,35}},
				{"Acts_ShieldFromSun_loop",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_1.ogg",0.562341,0.8,35}},
				{"Acts_ShieldFromSun_out",{"\A3\Sounds_F\characters\cutscenes\Acts_ShieldFromSun_Out",0.562341,0.8,35}},
				{"Acts_TreatingWounded01",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded01",0.562341,0.8,35}},
				{"Acts_TreatingWounded02",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded02",0.562341,0.8,35}},
				{"Acts_TreatingWounded03",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded03",0.562341,0.8,35}},
				{"Acts_TreatingWounded04",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded04",0.562341,0.8,35}},
				{"Acts_TreatingWounded05",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded05",0.562341,0.8,35}},
				{"Acts_TreatingWounded06",{"\A3\Sounds_F\characters\cutscenes\Acts_TreatingWounded06",0.562341,0.8,35}},
				{"Acts_AidlPercMstpSlowWrflDnon_pissing",{"\A3\Sounds_F\characters\cutscenes\Acts_AidlPercMstpSlowWrflDnon_pissing",0.891251,0.8,35}},
				{"Acts_BoatAttacked01",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked01",0.891251,0.8,35}},
				{"Acts_BoatAttacked02",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked02",0.891251,0.8,35}},
				{"Acts_BoatAttacked03",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked03",0.891251,0.8,35}},
				{"Acts_BoatAttacked04",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked04",0.891251,0.8,35}},
				{"Acts_BoatAttacked05",{"\A3\Sounds_F\characters\cutscenes\Acts_BoatAttacked05",0.891251,0.8,35}},
				{"acts_CrouchingCoveringRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingCoveringRifle01",0.562341,0.8,35}},
				{"acts_CrouchingIdleRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingIdleRifle01",0.562341,0.8,35}},
				{"acts_CrouchingReloadingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingReloadingRifle01",0.562341,0.8,35}},
				{"acts_CrouchingWatchingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_CrouchingWatchingRifle01",0.562341,0.8,35}},
				{"acts_InjuredAngryRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredAngryRifle01",0.562341,0.8,35}},
				{"acts_InjuredCoughRifle02",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredCoughRifle02",0.562341,0.8,35}},
				{"acts_InjuredLookingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle01",0.562341,0.8,35}},
				{"acts_InjuredLookingRifle02",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle02",0.562341,0.8,35}},
				{"acts_InjuredLookingRifle03",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle03",0.562341,0.8,35}},
				{"acts_InjuredLookingRifle04",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle04",0.562341,0.8,35}},
				{"acts_InjuredLookingRifle05",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLookingRifle05",0.562341,0.8,35}},
				{"acts_InjuredLyingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredLyingRifle01",0.562341,0.8,35}},
				{"acts_InjuredSpeakingRifle01",{"\A3\Sounds_F\characters\cutscenes\Acts_InjuredSpeakingRIfle01",0.562341,0.8,35}},
				{"Acts_PknlMstpSlowWrflDnon",{"\A3\Sounds_F\characters\cutscenes\Acts_PknlMstpSlowWrflDnon",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_loop1",{"\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop1",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_loop2",{"\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_loop3",{"\A3\Sounds_F\characters\cutscenes\Acts_SittingJumpingSaluting_loop3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisekneeBendA",{"\A3\Sounds_F\characters\cutscenes\AmovPercMstpSnonWnonDnon_exercisekneeBendA",0.562341,0.8,35}}};
			normal[] = {
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_default_horse_run_SoundSet","equipment_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_horse_run_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_concrete_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			rock[] = {
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_stones_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.562341,0.8,35}},
				{"acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_1.ogg",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			stony[] = {
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_stones_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			gravel[] = {
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_gravel_run_SoundSet","footsteps_gravel_boots_run_SoundSet"}},
				{"walk",{"soundset","footsteps_gravel_walk_SoundSet","footsteps_gravel_boots_walk_SoundSet"}},
				{"sprint",{"soundset","footsteps_gravel_sprint_SoundSet","footsteps_gravel_boots_sprint_SoundSet"}},
				{"tactical",{"soundset","footsteps_gravel_walk_SoundSet","footsteps_gravel_boots_tactical_SoundSet"}},
				{"crawl",{"soundset","footsteps_gravel_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\gravel_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\gravel_roll_2",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\gravel_roll_3",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_2",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_3",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\gravel_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\gravel_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_1",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_3",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			tiling[] = {
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_rooftiles_run_SoundSet"}},
				{"walk",{"soundset","footsteps_rooftiles_walk_SoundSet"}},
				{"sprint",{"soundset","footsteps_rooftiles_sprint_SoundSet"}},
				{"tactical",{"soundset","footsteps_rooftiles_tactical_SoundSet"}},
				{"crawl",{"soundset","footsteps_rooftiles_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			sand[] = {
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_sand_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_sand_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_sand_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_sand_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\sand_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\sand_roll_2",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\sand_roll_3",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_sand_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_sand_roll_2",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_sand_roll_3",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\sand_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\sand_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_sand_1",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_sand_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_sand_3",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\grass_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\grass_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\grass_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\grass_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\grass_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			drygrass[] = {
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\grass_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\grass_roll_2",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\grass_roll_3",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_2",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_3",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\grass_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\grass_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_drygrass_1",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_drygrass_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_drygrass_3",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\grass_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\grass_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\grass_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\grass_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\grass_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			grass[] = {
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_grass_run_SoundSet","footsteps_grass_boots_run_SoundSet"}},
				{"walk",{"soundset","footsteps_default_walk_horse_SoundSet","footsteps_grass_boots_walk_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_walk_horse_SoundSet","footsteps_grass_boots_sprint_SoundSet"}},
				{"tactical",{"soundset","footsteps_default_walk_horse_SoundSet","footsteps_grass_boots_tactical_SoundSet"}},
				{"crawl",{"soundset","footsteps_grass_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\grass_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\grass_roll_2",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\grass_roll_3",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_2",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_grass_roll_3",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\grass_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\grass_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_grass_1",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_grass_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_grass_3",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\grass_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\grass_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\grass_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\grass_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\grass_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\grass_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\grass_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\grass_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\grass_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\grass_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			debris[] = {
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_gravel_run_SoundSet","footsteps_gravel_boots_run_SoundSet"}},
				{"walk",{"soundset","footsteps_gravel_walk_SoundSet","footsteps_gravel_boots_run_SoundSet"}},
				{"sprint",{"soundset","footsteps_gravel_sprint_SoundSet","footsteps_gravel_boots_run_SoundSet"}},
				{"tactical",{"soundset","footsteps_gravel_walk_SoundSet","footsteps_gravel_boots_tactical_SoundSet"}},
				{"crawl",{"soundset","footsteps_gravel_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\gravel_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\gravel_roll_2",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\gravel_roll_3",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_2",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_gravel_roll_3",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\gravel_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\gravel_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_1",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_3",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			wood[] = {
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_softwood_run_SoundSet"}},
				{"walk",{"soundset","footsteps_softwood_walk_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_base_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_1",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_3",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			concrete[] = {
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_concrete_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			metal[] = {
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_metalPlate_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_1",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_3",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			dirt[] = {
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_dirt_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_dirt_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_dirt_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_dirt_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\dirt_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\dirt_roll_2",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\dirt_roll_3",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\dirt_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\dirt_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_1.ogg",0.501187,0.8,35}},
				{"bodyfall",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_1.ogg",0.501187,0.8,35}},
				{"bodyfall",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_1.ogg",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			wavymetal[] = {
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_wavymetal_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			water[] = {
				{"run",{"soundset","footsteps_water_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_water_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_water_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_water_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\crawl\crawl_water_7",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\crawl\crawl_water_7",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\water_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\water_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_water_1",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_water_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_water_3",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"dive",{"A3\Sounds_F\characters\movements\diver-swim-1",0.501187,0.8,35}},
				{"dive",{"A3\Sounds_F\characters\movements\diver-swim-2",0.501187,0.8,35}},
				{"dive",{"A3\Sounds_F\characters\movements\diver-swim-3",0.501187,0.8,35}},
				{"dive",{"A3\Sounds_F\characters\movements\diver-swim-4",0.501187,0.8,35}},
				{"dive",{"A3\Sounds_F\characters\movements\diver-swim-5",0.501187,0.8,35}},
				{"dive",{"A3\Sounds_F\characters\movements\diver-swim-6",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			virtual[] = {
				{"run",{"soundset","footsteps_default_horse_run_SoundSet","equipment_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_horse_run_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_pavement_crawl_SoundSet"}},
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"adjust_short",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side1",1,0.8,35}},
				{"adjust_short",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side2",1,0.8,35}},
				{"adjust_short",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side3",1,0.8,35}},
				{"adjust_short",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel1",1,0.8,35}},
				{"adjust_short",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel2",1,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side1",1,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side2",1,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side3",1,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel1",1,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel2",1,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_kneel_to_stand1",1,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_kneel_to_stand2",1,0.8,35}},
				{"adjust_kneelhigh_to_standlow",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel1",1,0.8,35}},
				{"adjust_standlow_to_kneelhigh",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_kneel2",1,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_prone",1,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_to_stand",1,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_up",1,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_up_back",1,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side1",1,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side2",1,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_side3",1,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_left",1,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_right",1,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\Sounds_F_Bootcamp\Characters\Stances\virtual_adjust_kneel_to_prone",1,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_prone_to_kneel",1,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_left_prone",1,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_stand_to_right_prone",1,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_left_prone_to_stand",1,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f_bootcamp\characters\stances\virtual_adjust_right_prone_to_stand",1,0.8,35}},
				{"adjust_stand_to_left_prone",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_1.ogg",1,0.8,35}},
				{"adjust_stand_to_right_prone",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_1.ogg",1,0.8,35}},
				{"adjust_kneelhigh_to_standlow",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_1.ogg",1,0.8,35}},
				{"adjust_standlow_to_kneelhigh",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_1.ogg",1,0.8,35}},
				{"over_the_obstacle_fast",{"\A3\sounds_f_bootcamp\characters\stances\virtual_over_the_obstacle_fast",1,0.8,35}},
				{"over_the_obstacle_slow",{"\A3\sounds_f_bootcamp\characters\stances\virtual_over_the_obstacle_slow",1,0.8,35}},
				{"bodyfall",{"\A3\sounds_f_bootcamp\characters\movements\bodyfalls\bodyfall_virtual_1",0.501187,1,25}},
				{"bodyfall",{"\A3\sounds_f_bootcamp\characters\movements\bodyfalls\bodyfall_virtual_2",0.501187,1,25}},
				{"bodyfall",{"\A3\sounds_f_bootcamp\characters\movements\bodyfalls\bodyfall_virtual_3",0.501187,1,25}},
				{"laydown",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_1.ogg",0.501187,0.8,35}},
				{"laydown",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_1.ogg",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"crawl",{"A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_1",0.562341,0.8,35}},
				{"crawl",{"A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_2",0.562341,0.8,35}},
				{"crawl",{"A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_3",0.562341,0.8,35}},
				{"crawl",{"A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_4",0.562341,0.8,35}},
				{"crawl",{"A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_5",0.562341,0.8,35}},
				{"crawl",{"A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_6",0.562341,0.8,35}},
				{"crawl",{"A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_7",0.562341,0.8,35}},
				{"crawl",{"A3\Sounds_F_Bootcamp\Characters\Crawl\crawl_virtual_8",0.562341,0.8,35}},
				{"roll",{"A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_1",0.398107,0.8,35}},
				{"roll",{"A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_2",0.398107,0.8,35}},
				{"roll",{"A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_3",0.398107,0.8,35}},
				{"roll",{"A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_4",0.398107,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_1",0.398107,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_2",0.398107,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_3",0.398107,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F_Bootcamp\Characters\Movements\roll_virtual_4",0.398107,0.8,35}},
				{"Acts_carFixingWheel",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F_Bootcamp\characters\cutscenes\virtual_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			int_concrete[] = {
				{"run",{"soundset","footsteps_concrete_int_run_SoundSet","footsteps_concrete_int_rev_run_SoundSet"}},
				{"walk",{"soundset","footsteps_concrete_int_walk_SoundSet","footsteps_concrete_int_rev_walk_SoundSet"}},
				{"sprint",{"soundset","footsteps_concrete_int_sprint_SoundSet","footsteps_concrete_int_rev_sprint_SoundSet"}},
				{"tactical",{"soundset","footsteps_concrete_int_tactical_SoundSet","footsteps_concrete_int_rev_walk_SoundSet"}},
				{"crawl",{"soundset","footsteps_concrete_int_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			int_wood[] = {
				{"run",{"soundset","footsteps_softWood_int_run_SoundSet","footsteps_softWood_int_rev_run_SoundSet"}},
				{"walk",{"soundset","footsteps_softWood_int_walk_SoundSet","footsteps_softWood_int_rev_walk_SoundSet"}},
				{"sprint",{"soundset","footsteps_softWood_int_sprint_SoundSet","footsteps_softWood_int_rev_sprint_SoundSet"}},
				{"tactical",{"soundset","footsteps_softWood_int_tactical_SoundSet","footsteps_softWood_int_rev_walk_SoundSet"}},
				{"crawl",{"soundset","footsteps_base_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_1",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_3",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			int_metal[] = {
				{"run",{"soundset","footsteps_metalPlate_int_run_SoundSet","footsteps_metalPlate_int_rev_run_SoundSet"}},
				{"walk",{"soundset","footsteps_metalPlate_int_walk_SoundSet","footsteps_metalPlate_int_rev_walk_SoundSet"}},
				{"sprint",{"soundset","footsteps_metalPlate_int_sprint_SoundSet","footsteps_metalPlate_int_rev_sprint_SoundSet"}},
				{"tactical",{"soundset","footsteps_metalPlate_int_tactical_SoundSet","footsteps_metalPlate_int_rev_walk_SoundSet"}},
				{"crawl",{"soundset","footsteps_metalPlate_int_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_1",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_3",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			int_tiles[] = {
				{"run",{"soundset","footsteps_pavement_int_run_SoundSet","footsteps_pavement_int_rev_run_SoundSet"}},
				{"walk",{"soundset","footsteps_pavement_int_walk_SoundSet","footsteps_pavement_int_rev_walk_SoundSet"}},
				{"sprint",{"soundset","footsteps_pavement_int_sprint_SoundSet","footsteps_pavement_int_rev_sprint_SoundSet"}},
				{"tactical",{"soundset","footsteps_pavement_int_tactical_SoundSet","footsteps_pavement_int_rev_walk_SoundSet"}},
				{"crawl",{"soundset","footsteps_pavement_int_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",0.501187,0.8,35}},
				{"swim",{"soundset","movement_swim_SoundSet"}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,0.8,35}}};
			tarmac[] = {
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_asphalt_crawl_SoundSet"}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.451189,0.8,35}},
				{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.451189,0.8,35}},
				{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.451189,0.8,35}},
				{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.451189,0.8,35}},
				{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.451189,0.8,35}},
				{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.451189,0.8,35}},
				{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.451189,0.8,35}},
				{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.451189,0.8,35}},
				{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.451189,0.8,35}},
				{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.451189,0.8,35}},
				{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.451189,0.8,35}},
				{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.451189,0.8,35}},
				{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.451189,0.8,35}},
				{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.451189,0.8,35}},
				{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.451189,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_1",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_2",0.891251,0.8,35}},
				{"roll",{"A3\Sounds_F\characters\movements\roll\concrete_roll_3",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_1",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_2",0.891251,0.8,35}},
				{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_concrete_roll_3",0.891251,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_1",0.501187,0.8,35}},
				{"laydown",{"\A3\Sounds_F\characters\movements\laydown\concrete_laydown_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",0.501187,0.8,35}},
				{"bodyfall",{"\A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",0.501187,0.8,35}},
				{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_carFixingWheel",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf",0.562341,0.8,35}},
				{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PercMwlkSlowWrflDf2",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_out",0.562341,0.8,35}},
				{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WalkingChecking",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle02",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle03",0.562341,0.8,35}},
				{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_CrouchingFiringLeftRifle04",0.562341,0.8,35}},
				{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_HUBABriefing",0.562341,0.8,35}},
				{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_PointingLeftUnarmed",0.562341,0.8,35}},
				{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_SittingJumpingSaluting_in",0.562341,0.8,35}},
				{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_StandingSpeakingUnarmed",0.562341,0.8,35}},
				{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_in",0.562341,0.8,35}},
				{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_TreatingWounded_out",0.562341,0.8,35}},
				{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_UnconsciousStandUp_part1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,0.8,35}},
				{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\concrete_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,0.8,35}},
				{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\concrete_AmovPercMstpSnonWnonDnon_exercisePushup",1,0.8,35}}};
			concrete_exp[] = {
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_concrete_crawl_Exp_SoundSet"}}};
			int_concrete_exp[] = {
				{"run",{"soundset","footsteps_concrete_int_run_Exp_SoundSet","footsteps_concrete_int_rev_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_concrete_int_walk_Exp_SoundSet","footsteps_concrete_int_rev_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_concrete_int_sprint_Exp_SoundSet","footsteps_concrete_int_rev_sprint_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_concrete_int_tactical_Exp_SoundSet","footsteps_concrete_int_rev_walk_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_concrete_int_crawl_Exp_SoundSet"}}};
			pavement_exp[] = {
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_cobblestone_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_cobblestone_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_cobblestone_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_cobblestone_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_pavement_crawl_Exp_SoundSet"}}};
			int_pavement_exp[] = {
				{"run",{"soundset","footsteps_pavement_int_run_Exp_SoundSet","footsteps_pavement_int_rev_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_pavement_int_walk_Exp_SoundSet","footsteps_pavement_int_rev_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_pavement_int_sprint_Exp_SoundSet","footsteps_pavement_int_rev_sprint_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_pavement_int_tactical_Exp_SoundSet","footsteps_pavement_int_rev_walk_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_pavement_int_crawl_Exp_SoundSet"}}};
			stones_exp[] = {
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_stones_crawl_Exp_SoundSet"}}};
			int_solidwood_exp[] = {
				{"run",{"soundset","footsteps_solidWood_int_run_Exp_SoundSet","footsteps_solidWood_int_rev_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_solidWood_int_walk_Exp_SoundSet","footsteps_solidWood_int_rev_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_solidWood_int_sprint_Exp_SoundSet","footsteps_solidWood_int_rev_sprint_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_solidWood_int_tactical_Exp_SoundSet","footsteps_solidWood_int_rev_walk_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_base_crawl_Exp_SoundSet"}}};
			softwood_exp[] = {
				{"neigh",{"\Edaly_Sounds_Assets_1\data\animals\animals_horse_neigh_1.ogg",1,1,35}},
				{"run",{"soundset","footsteps_softwood_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_softwood_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_softwood_sprint_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_softwood_tactical_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_base_crawl_Exp_SoundSet"}}};
			int_softwood_exp[] = {
				{"run",{"soundset","footsteps_softWood_int_run_Exp_SoundSet","footsteps_softWood_int_rev_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_softWood_int_walk_Exp_SoundSet","footsteps_softWood_int_rev_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_softWood_int_sprint_Exp_SoundSet","footsteps_softWood_int_rev_sprint_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_softWood_int_walk_Exp_SoundSet","footsteps_softWood_int_rev_walk_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_base_crawl_Exp_SoundSet"}}};
			steel_exp[] = {
				{"run",{"soundset","footsteps_steel_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_steel_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_steel_tactical_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_steel_crawl_Exp_SoundSet"}}};
			metalplate_exp[] = {
				{"run",{"soundset","footsteps_metalplate_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_metalplate_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_metalplate_sprint_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_metalplate_tactical_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_metalplate_crawl_Exp_SoundSet"}}};
			int_metalplate_exp[] = {
				{"run",{"soundset","footsteps_metalPlate_int_run_Exp_SoundSet","footsteps_metalPlate_int_rev_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_metalPlate_int_walk_Exp_SoundSet","footsteps_metalPlate_int_rev_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_metalPlate_int_sprint_Exp_SoundSet","footsteps_metalPlate_int_rev_sprint_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_metalPlate_int_walk_Exp_SoundSet","footsteps_metalPlate_int_rev_walk_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_metalPlate_int_crawl_Exp_SoundSet"}}};
			metalplatepressed_exp[] = {
				{"run",{"soundset","footsteps_metalplatepressed_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_metalplatepressed_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_metalplatepressed_sprint_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_metalplatepressed_tactical_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_metalplatepressed_crawl_Exp_SoundSet"}}};
			wavymetal_exp[] = {
				{"run",{"soundset","footsteps_wavymetal_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_wavymetal_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_wavymetal_sprint_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_wavymetal_tactical_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_wavymetal_crawl_Exp_SoundSet"}}};
			gridmetal_exp[] = {
				{"run",{"soundset","footsteps_gridmetal_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_gridmetal_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_gridmetal_sprint_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_gridmetal_walk_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_gridmetal_crawl_Exp_SoundSet"}}};
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
				{"run",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_mud_crawl_Exp_SoundSet"}}};
			straw_exp[] = {
				{"run",{"soundset","footsteps_straw_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_straw_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_straw_sprint_Exp_SoundSet"}},
				{"tactical",{"soundset","footsteps_straw_tactical_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_straw_crawl_Exp_SoundSet"}}};
			lino_exp[] = {
				{"run",{"soundset","footsteps_lino_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_lino_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_horse_run_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_lino_tactical_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_lino_crawl_Exp_SoundSet"}}};
			int_lino_exp[] = {
				{"run",{"soundset","footsteps_lino_int_run_Exp_SoundSet","footsteps_lino_int_rev_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_lino_int_walk_Exp_SoundSet","footsteps_lino_int_rev_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_horse_run_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_lino_int_tactical_Exp_SoundSet","footsteps_lino_int_rev_walk_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_lino_int_crawl_Exp_SoundSet"}}};
			rooftiles_exp[] = {
				{"run",{"soundset","footsteps_rooftiles_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_rooftiles_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_horse_run_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_rooftiles_tactical_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_rooftiles_crawl_Exp_SoundSet"}}};
			gravel_exp[] = {
				{"run",{"soundset","footsteps_gravel_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_gravel_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_horse_run_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_gravel_tactical_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_gravel_crawl_Exp_SoundSet"}}};
			dirt_exp[] = {
				{"run",{"soundset","footsteps_dirt_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_dirt_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_horse_run_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_dirt_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_dirt_crawl_Exp_SoundSet"}}};
			asphalt_exp[] = {
				{"run",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_horse_run_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_asphalt_crawl_Exp_SoundSet"}}};
			water_exp[] = {
				{"run",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_default_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_water_crawl_Exp_SoundSet"}}};
			grass_exp[] = {
				{"run",{"soundset","footsteps_forest_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_forest_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_horse_run_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_forest_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_grass_crawl_Exp_SoundSet"}}};
			grasstall_exp[] = {
				{"run",{"soundset","footsteps_forest_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_forest_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_forest_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_grasstall_crawl_Exp_SoundSet","equipment_walk_horse_SoundSet"}}};
			sand_exp[] = {
				{"run",{"soundset","footsteps_default_horse_run_SoundSet","equipment_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_sand_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_horse_run_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_sand_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_sand_crawl_Exp_SoundSet"}}};
			seabed_exp[] = {
				{"run",{"soundset","footsteps_seabed_run_Exp_SoundSet"}},
				{"walk",{"soundset","footsteps_seabed_walk_Exp_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_horse_run_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_seabed_tactical_Exp_SoundSet"}},
				{"crawl",{"soundset","footsteps_seabed_crawl_Exp_SoundSet"}}};
			forest_exp[] = {
				{"run",{"soundset","footsteps_forest_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"walk",{"soundset","footsteps_forest_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"sprint",{"soundset","footsteps_default_horse_run_SoundSet","equipment_walk_horse_SoundSet"}},
				{"tactical",{"soundset","footsteps_forest_walk_horse_SoundSet","equipment_walk_horse_SoundSet"}},
				{"crawl",{"soundset","footsteps_forest_crawl_Exp_SoundSet"}}};
		};
		class SoundEquipment
		{
			civilian[] = {
				{"walk",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_6.ogg",0.5,1,10}},
				{"walk",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_5.ogg",0.4,1,10}},
				{"walk",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_7.ogg",0.2,1,10}},
				{"walk",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_8.ogg",0.45,1,10}},
				{"walk",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_BlowLips.ogg",0.02,1,45}},
				{"tactical",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_6.ogg",0.45,1,10}},
				{"tactical",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_5.ogg",0.35,1,10}},
				{"tactical",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_7.ogg",0.55,1,10}},
				{"tactical",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_8.ogg",0.15,1,10}},
				{"run",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_6.ogg",0.25,1,10}},
				{"run",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_5.ogg",0.45,1,10}},
				{"run",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_7.ogg",0.65,1,10}},
				{"run",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_8.ogg",0.35,1,10}},
				{"sprint",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_5.ogg",0.78,1,10}},
				{"sprint",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_6.ogg",0.68,1,10}},
				{"sprint",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_7.ogg",0.48,1,10}},
				{"sprint",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_saddle_movenements_8.ogg",0.68,1,10}},
				{"sprint",{"Edaly_Sounds_Assets_1\data\animals\animals_horse_BlowLips.ogg",0.02,1,45}}};
		};
	};

	class edaly_horse_01: Edaly_Horse_Base
	{
		scope = 2;
		scopecurator=2;

		model = "Edaly_Horse\Horse_01.p3d";
		vehicleclass = "edaly_horse";
		displayName = $STR_EDALY_ANIMAL_HORSE_1;

		hiddenSelections[] = {"camo","camo2","camo1","camo3"};
		hiddenSelectionsTextures[] = {"\Edaly_Horse\data\main_dark_co.paa","\Edaly_Horse\data\saddle_co.paa","\Edaly_Horse\data\black_hair_ca.paa","\Edaly_Horse\data\black_hair_ca.paa"};

		editorCategory = "EdCat_Edaly_Characters";
		editorSubcategory = "EdSubcat_Edaly_Animals";
	};
	class edaly_horse_02: edaly_horse_01
	{
		scope = 2;
		scopecurator=2;
		displayName = $STR_EDALY_ANIMAL_HORSE_2;
		hiddenSelections[] = {"camo","camo2","camo1","camo3"};
		hiddenSelectionsTextures[] = {"\Edaly_Horse\data\main_grey_02_co.paa","\Edaly_Horse\data\saddle_co.paa","\Edaly_Horse\data\black_hair_ca.paa","\Edaly_Horse\data\black_hair_ca.paa"};
	};
	class edaly_horse_03: edaly_horse_01
	{
		scope = 2;
		scopecurator=2;
		model = "Edaly_Horse\Horse_01.p3d";
		displayName = $STR_EDALY_ANIMAL_HORSE_3;
		hiddenSelections[] = {"camo","camo2","camo1","camo3"};
		hiddenSelectionsTextures[] = {"\Edaly_Horse\data\main_brown_01_co.paa","\Edaly_Horse\data\saddle_co.paa","\Edaly_Horse\data\brown_hair_ca.paa","\Edaly_Horse\data\brown_hair_ca.paa"};
	};
	class edaly_horse_04: edaly_horse_01
	{
		scope = 2;
		scopecurator=2;
		model = "Edaly_Horse\Horse_01.p3d";
		displayName = $STR_EDALY_ANIMAL_HORSE_4;
		hiddenSelections[] = {"camo","camo2","camo1","camo3"};
		hiddenSelectionsTextures[] = {"\Edaly_Horse\data\plainwhite_co.paa","\Edaly_Horse\data\saddle_co.paa","\Edaly_Horse\data\grey_hair_ca.paa","\Edaly_Horse\data\grey_hair_ca.paa"};
	};
	class edaly_horse_05: edaly_horse_01
	{
		scope = 2;
		scopecurator=2;
		model = "Edaly_Horse\Horse_01.p3d";
		displayName = $STR_EDALY_ANIMAL_HORSE_5;
		hiddenSelections[] = {"camo","camo2","camo1","camo3"};
		hiddenSelectionsTextures[] = {"\Edaly_Horse\data\main_grey_02_co.paa","\Edaly_Horse\data\saddle_co.paa","\Edaly_Horse\data\grey_hair_ca.paa","\Edaly_Horse\data\grey_hair_ca.paa"};
	};
	class edaly_horse_06: edaly_horse_01
	{
		scope = 2;
		scopecurator=2;
		model = "Edaly_Horse\Horse_01.p3d";
		displayName = $STR_EDALY_ANIMAL_HORSE_1;
		hiddenSelections[] = {"camo","camo2","camo1","camo3"};
		hiddenSelectionsTextures[] = {"\Edaly_Horse\data\main_beige_01_co.paa","\Edaly_Horse\data\saddle_co.paa","\Edaly_Horse\data\black_hair_ca.paa","\Edaly_Horse\data\black_hair_ca.paa"};
	};
	class edaly_horse_07: edaly_horse_01
	{
		scope = 2;
		scopecurator=2;
		model = "Edaly_Horse\Horse_01.p3d";
		displayName = $STR_EDALY_ANIMAL_HORSE_1;
		hiddenSelections[] = {"camo","camo2","camo1","camo3"};
		hiddenSelectionsTextures[] = {"\Edaly_Horse\data\brownstains_co.paa","\Edaly_Horse\data\saddle_co.paa","\Edaly_Horse\data\brown_hair_ca.paa","\Edaly_Horse\data\brown_hair_ca.paa"};
	};
	class edaly_horse_10: edaly_horse_01
	{
		scope = 2;
		scopecurator=2;
		model = "Edaly_Horse\Horse_01.p3d";
		displayName = $STR_EDALY_ANIMAL_HORSE_1;
		hiddenSelections[] = {"camo","camo2","camo1","camo3"};
		hiddenSelectionsTextures[] = {"\Edaly_Horse\data\main_brown_02_co.paa","\Edaly_Horse\data\saddle_co.paa","\Edaly_Horse\data\brown_hair_ca.paa","\Edaly_Horse\data\brown_hair_ca.paa"};
	};
	class edaly_horse_08: edaly_horse_01
	{
		scope = 2;
		scopecurator=2;
		model = "Edaly_Horse\Horse_01.p3d";
		displayName = $STR_EDALY_ANIMAL_HORSE_1;
		hiddenSelections[] = {"camo","camo2","camo1","camo3"};
		hiddenSelectionsTextures[] = {"\Edaly_Horse\data\whitblackstain_co.paa","\Edaly_Horse\data\saddle_co.paa","\Edaly_Horse\data\black_hair_ca.paa","\Edaly_Horse\data\black_hair_ca.paa"};
	};
	class edaly_horse_09: edaly_horse_01
	{
		scope = 2;
		scopecurator=2;
		model = "Edaly_Horse\Horse_01.p3d";
		displayName = $STR_EDALY_ANIMAL_HORSE_1;
		hiddenSelections[] = {"camo","camo2","camo1","camo3"};
		hiddenSelectionsTextures[] = {"\Edaly_Horse\data\stalion_co.paa","\Edaly_Horse\data\saddle_co.paa","\Edaly_Horse\data\brown_hair_ca.paa","\Edaly_Horse\data\blond_hair_ca.paa"};
	};
	class edaly_horse_nosaddle_01: edaly_horse_01
	{
		scope = 2;
		scopecurator=2;
		model = "Edaly_Horse\Horse_02.p3d";
		displayName = $STR_EDALY_ANIMAL_HORSE_10;
		hiddenSelections[] = {"camo","camo2","camo1","camo3"};
		hiddenSelectionsTextures[] = {"\Edaly_Horse\data\main_brown_01_co.paa","\Edaly_Horse\data\saddle_co.paa","\Edaly_Horse\data\brown_hair_ca.paa","\Edaly_Horse\data\brown_hair_ca.paa"};
	};
	class edaly_donkey_01: edaly_horse_01
	{
		scope = 0;
		model = "Edaly_Horse\Donkey_01.p3d";
		displayName = "Mule";
		hiddenSelections[] = {"camo","camo2","camo1","camo3"};
		hiddenSelectionsTextures[] = {"\Edaly_Horse\data\donkey_co.paa","\Edaly_Horse\data\saddle_co.paa","\Edaly_Horse\data\brown_hair_ca.paa","\Edaly_Horse\data\brown_hair_ca.paa"};
	};
};

class CfgFunctions {
	class EdalyHorse {
		tag="EdalyHorse";
		class functions {
			file="\Edaly_Horse\functions";
			class init {
				postInit=1;
			};
            class mount {};
            class dismount {};
		};
	};
};
