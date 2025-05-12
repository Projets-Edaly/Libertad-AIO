
#define private		0
#define protected		1
#define public		2

#define true	1
#define false	0


class CfgPatches
{
	class edaly_svt40
	{
		addonRootClass="Edaly_weapons_1";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Weapons_F", "Edaly_Client"};
		author = "Edaly / Brutalzic";
		version= 1.00;
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

#include "cfgRecoils.hpp"
#include "cfgSoundShaders.hpp"
#include "cfgSoundSets.hpp"


class CfgMovesBasic {
	class default;
	class Actions;
 	class DefaultDie;
 	class ManActions
 	{
 		GestureSVT40[] = {"GestureSVT40", "gesture"};
 		ReloadSVT40[] = {"ReloadSVT40", "gesture"};
 	};
 };

 class CfgGesturesMale{
 	class States
 	{
	 	class GestureReloadMX;
 		class GestureSVT40 : GestureReloadMX
 		{
 			file = "\Edaly_weapons_1\edaly_svt40\anims\anim_SVT40.rtm";
			mask = "handsWeapon";
			canPullTrigger = 0;
 		};
 		class ReloadSVT40 : GestureReloadMX
 		{
 			file = "\Edaly_weapons_1\edaly_svt40\anims\reload_SVT40.rtm";
			mask = "weaponSwitching";
			canPullTrigger = 0;
			InterpolateTo[] =
                 {
                     "GestureSVT40", 2
                 };
 		};
	};
 };

class CfgCloudlets {
	class Default;
	class heatParticule : Default {
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1.1;
		lifeTime = 3;
		moveVelocity[] = {"-0.15*directionX", "-0.15*directionY", "-0.15*directionZ"};
		rotationVelocity = 1;
		weight = 1.2;
		volume = 1;
		rubbing = 0.1;
		size[] = {0.1, 0.15};
		color[] = {{0.06, 0.06, 0.06, 0.32}, {0.3, 0.3, 0.3, 0.28}, {0.3, 0.3, 0.3, 0.25}, {0.3, 0.3, 0.3, 0.22}, {0.3, 0.3, 0.3, 0.1}};
		colorCoef[] = {1, 1, 1, 1};
		animationSpeed[] = {2, 1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		blockAIVisibility = 0;
		sizeCoef = 0.5;
		animationSpeedCoef = 1;
		position[] = {"positionX", "positionY", "positionZ"};
		lifeTimeVar = 0;
		positionVar[] = {0, 0, 0};
		MoveVelocityVar[] = {0, 0, 0};
		rotationVelocityVar = 20;
		sizeVar = 0.05;
		colorVar[] = {0, 0, 0, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;

class heatTrail {
	class heatTrail {
		simulation = "particles";
		type = "heatParticule";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};

class CA_Magazine;
#include "\edaly_weapons_1\edaly_svt40\cfgMagazines.hpp"

class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
		class Eventhandlers;
	};

	class edaly_svt40_base: Rifle_Base_F
	{
		author = "Edaly / Brutalzic";
		scope = 1;
		magazines[] = {
			"Edaly_10Rnd_762x54_Mag"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Edaly_weapons_1\edaly_svt40\anims\anim_SVT40.rtm"
		};
		reloadAction="ReloadSVT40";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\reload_Mk20",1,1,10};
		//magazineReloadSwitchPhase = 0.4;
		discreteDistanceInitIndex = 0;
		model = "Edaly_weapons_1\edaly_svt40\edaly_svt40.p3d";
		optics = 0;
		maxRecoilSway=0.0125;
        swayDecaySpeed=1.25;
		inertia = 0.3;

		class GunParticles : GunParticles
		{
			class FirstEffect {
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "heatTrail";
			};
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		weaponInfoType = "RscWeaponZeroing";
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		jsrs_soundeffect = "JSRS2_Distance_Effects_kaybhar";
		descriptionShort = "base svt 40";
		dexterity = 1.8;
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",0.562341,1,10};
		selectionFireAnim = "muzzleFlash";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};

		muzzles[]={"this"};
		modes[] = {"Single"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.630957, 1, 15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.630957, 1, 15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.630957, 1, 15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.630957, 1, 15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.630957, 1, 15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.630957, 1, 15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.630957, 1, 15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.630957, 1, 15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.630957, 1, 15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.630957, 1, 15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.630957, 1, 15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.630957, 1, 15};
		soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
		changeFiremodeSound[]= {"A3\sounds_f\weapons\closure\firemode_changer_2",0.56234133,1,20};

		class BaseSoundModeType;
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"edaly_FNFAL_Shot_SoundSet","edaly_FNFAL_Tail_SoundSet"};
			};

			reloadTime = 0.02;
			dispersion = 0.00087;
			recoil = "recoil_single_Test_rifle_01";
			recoilProne = "recoil_single_prone_Test_rifle_01";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
	};

	class edaly_svt40: edaly_svt40_base
	{
		scope = 2;
		displayName = "SVT 40";
		picture = "\edaly_weapons_1\edaly_svt40\UI\w_edaly_svt40_x_ca.paa";
		descriptionShort = "SVT 40";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Weapons";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};
	};
};

class CfgVehicles
{
	class GroundWeaponHolder;
	class weapon_edaly_svt40: GroundWeaponHolder
	{
		scope=2;
		scopeCurator=2;
		displayName="SVT 40";
		author="Edaly / Brutalzic";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Weapons";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class edaly_svt40
			{
				weapon="edaly_svt40";
				count=1;
			};
		};
		class TransportMagazines
		{
			class Edaly_20Rnd_762x50_Mag
			{
				magazine="Edaly_10Rnd_762x54_Mag";
				count=1;
			};
		};
	};
};
