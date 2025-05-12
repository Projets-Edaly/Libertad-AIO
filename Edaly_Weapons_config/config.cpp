#include "\Edaly_Client\version.hpp"

class CfgPatches
{
	class Edaly_Weapons_config
	{
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredAddons[]={"Edaly_Client","Edaly_Weapons_1","Edaly_Weapons_2","Edaly_Editor_Categories","Edaly_Anims"};
		requiredVersion=ARMA3_VERSION;
		units[]={};
		weapons[]={};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;

#include "cfgMagazines.hpp"
#include "cfgSoundShaders.hpp"
#include "cfgSoundSets.hpp"

class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;

	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};

    class Pistol;
    class Pistol_Base_F: Pistol
    {
        class WeaponSlotsInfo;
        class GunParticles;
    };
	class Edaly_flashlight_base: Pistol_Base_F
	{
		author = $STR_EDALY_AUTHOR;
		_generalMacro = "Edaly_tl122";
		scope = 0;
		model = "Edaly_Weapons_1\Flashlight\flashlight_01_EL.p3d";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_flashlight.paa";
		magazines[] = {};
		displayname =$STR_EDALY_TOOL_FLASHLIGHT;
		descriptionShort = "Lampe de poche TL-122";
		class Library
		{
			libTextDesc = "Lampe de poche TL-122";
		};
		drySound[] = {};
		reloadMagazineSound[] = {};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\closure_4_Five_01",0.31622776,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\closure_4_Five_02",0.31622776,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_01",1,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_02",1,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_03",1,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4_Five_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4_Five_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4_Five_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
			};
			recoil = "recoil_pistol_heavy";
			recoilProne = "recoil_prone_pistol_heavy";
			reloadTime = 0.1;
			dispersion = 0.01;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		inertia = 0.3;
		dexterity = 1.7;
		initSpeed = 380;
		cursor = "";
		cursoraim = "";
		class WeaponSlotsInfo
		{
			mass = 40;
		};
	};
	class Edaly_flashlight_01: Edaly_flashlight_base
	{
		_generalMacro = "Edaly_flashlight_01";
		displayname = "Lampe TL-122";
		scope = 2;
		class FlashLight
		{
	        color[] = {239,213,162};
	        ambient[] = {239,213,162};
			position = "flash dir";
			direction = "flash pos";
			angle = 30;
			size = 1;
			innerAngle = 30;
			outerAngle = 80;
			coneFadeCoef = 8;
			intensity = 40;
			scale[] = {0};
			useFlare = 1;
			dayLight = 1;
			flareSize = 1.5;
		};
	};
	class Edaly_fishingrod_01: Edaly_flashlight_base
	{
		_generalMacro = "Edaly_fishingrod_01";
		displayname =$STR_EDALY_TOOL_FISHINGROD;
		model = "Edaly_Weapons_1\FishingRod\fishingrod.p3d";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_fishingrod_01.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Edaly_Weapons_1\FishingRod\data\anims\anim_fishingrod_idle.rtm"};
		scope = 2;
		class FlashLight
		{
	        color[] = {239,213,162};
	        ambient[] = {239,213,162};
			position = "flash dir";
			direction = "flash pos";
			angle = 30;
			size = 1;
			innerAngle = 30;
			outerAngle = 80;
			coneFadeCoef = 8;
			intensity = 20;
			scale[] = {0};
			useFlare = 0;
			dayLight = 1;
			flareSize = 1.5;
		};
	};
	class Edaly_Arme_01_Base_F: Rifle_Base_F
	{
		author = $STR_EDALY_AUTHOR;
		magazines[] = {};
		reloadAction = "GestureReloadMX";
		magazineReloadSwitchPhase = 0.4;
		discreteDistanceInitIndex = 0;
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		inertia = 0.5;
		initSpeed = -1;
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {};
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 200;
			class MuzzleSlot: MuzzleSlot //SILENCIEUX
			{
				iconPicture = "\a3\data_f\default_ti_ca.paa";
				iconPosition[] = {0,0};
				iconScale = 0;
			};
			class CowsSlot: CowsSlot //VISEUR
			{
				iconPicture = "\a3\data_f\default_ti_ca.paa";
				iconPosition[] = {0,0};
				iconScale = 0;
			};
			class PointerSlot: PointerSlot //POINTEUR
			{
				iconPicture = "\a3\data_f\default_ti_ca.paa";
				iconPosition[] = {0,0};
				iconScale = 0;
			};
			class UnderBarrelSlot: UnderBarrelSlot //BIPIED
			{
				iconPicture = "\a3\data_f\default_ti_ca.paa";
				iconPosition[] = {0,0};
				iconScale = 0;
			};
		};
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		descriptionShort = "";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\MX_gl.rtm"};
		dexterity = 1.8;
		caseless[] = {"",1,1,1};
		soundBullet[] = {"caseless",1};
		selectionFireAnim = "muzzleFlash";
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",1.4125376,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",1.4125376,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\MX\mx-st-full-1",1.4125376,1,1200};
				begin2[] = {"A3\sounds_f\weapons\MX\mx-st-full-2",1.4125376,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.7943282,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.7943282,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.7943282,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.006;
			dispersion = 0.00087;
			recoil = "";
			recoilProne = "";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",1.4125376,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",1.4125376,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\MX\mx-st-full-1",1.4125376,1,1200};
				begin2[] = {"A3\sounds_f\weapons\MX\mx-st-full-2",1.4125376,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.7943282,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.7943282,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.7943282,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.096;
			dispersion = 0.00087;
			recoil = "";
			recoilProne = "";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
		aiDispersionCoefY = 6;
		aiDispersionCoefX = 4;
		drySound[] = {"Edaly_Sounds_Assets_1\data\ahem.ogg",0.56234133,1,10};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX",0.39810717,1,30};
	};

    class Edaly_Arme_02_Base_F: Rifle_Base_F
    {
        author =$STR_EDALY_AUTHOR;
        magazines[] = {};
        reloadAction = "GestureReloadMX";
        magazineReloadSwitchPhase = 0.4;
        discreteDistanceInitIndex = 0;
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        inertia = 0.5;
        initSpeed = -1;
        hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
        hiddenSelectionsTextures[] = {};
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        class GunParticles: GunParticles
        {
            class SecondEffect
            {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        //      iconPosition[] = {HORIZONTALE + DROITE  .  HAUTEUR + BAS};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 200;
            class MuzzleSlot: MuzzleSlot //SILENCIEUX
            {
                iconPicture = "\a3\data_f\default_ti_ca.paa";
                iconPosition[] = {0,0};
                iconScale = 0;
            };
            class CowsSlot: CowsSlot //VISEUR
            {
                iconPicture = "\a3\data_f\default_ti_ca.paa";
                iconPosition[] = {0,0};
                iconScale = 0;
            };
            class PointerSlot: PointerSlot //POINTEUR
            {
                iconPicture = "\a3\data_f\default_ti_ca.paa";
                iconPosition[] = {0,0};
                iconScale = 0;
            };
            class UnderBarrelSlot: UnderBarrelSlot //BIPIED
            {
                iconPicture = "\a3\data_f\default_ti_ca.paa";
                iconPosition[] = {0,0};
                iconScale = 0;
            };
        };
        opticsZoomMin = 0.375;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "";
        handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\MX_gl.rtm"};
        dexterity = 1.8;
        caseless[] = {"",1,1,1};
        soundBullet[] = {"caseless",1};
        selectionFireAnim = "muzzleFlash";
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
        class Single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",1.4125376,1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",1.4125376,1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\MX\mx-st-full-1",1.4125376,1,1200};
                begin2[] = {"A3\sounds_f\weapons\MX\mx-st-full-2",1.4125376,1,1200};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
            };
            class SilencedSound: BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.7943282,1,100};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.7943282,1,100};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.7943282,1,100};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 0.096;
            dispersion = 0.00087;
            recoil = "";
            recoilProne = "";
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
        };
        class FullAuto: Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",1.4125376,1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",1.4125376,1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\MX\mx-st-full-1",1.4125376,1,1200};
                begin2[] = {"A3\sounds_f\weapons\MX\mx-st-full-2",1.4125376,1,1200};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
            };
            class SilencedSound: BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.7943282,1,100};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.7943282,1,100};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.7943282,1,100};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 0.096;
            dispersion = 0.00087;
            recoil = "";
            recoilProne = "";
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
        };
        class fullauto_medium: FullAuto
        {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1: Single
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2: single_medium_optics1
        {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        aiDispersionCoefY = 6;
        aiDispersionCoefX = 4;
        drySound[] = {"Edaly_Sounds_Assets_1\data\ahem.ogg",0.56234133,1,10};
        reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX",0.39810717,1,30};
    };

    class Weapon_M1_Carabine: Edaly_Arme_01_Base_F
    {
        author=$STR_EDALY_AUTHOR;
        scope = 2;
        displayName = "Carabine M1";
        model = "\Edaly_Weapons_1\M1_Carabine\M1_Carabine.p3d";
        picture = "\Edaly_Weapons_1\M1_Carabine\data\UI\Carabine_M1.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
        weaponInfoType = "RscWeaponZeroing";
        hiddenSelectionsTextures[] = {""};

        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Weapons";

        opticsZoomMin = 0.375;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 100;
        distanceZoomMax = 100;

        magazines[] = {"15Rnd_762x54_M1"};
        reloadAction = "GestureReloadEBR";
        handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\data\Anim\DMR_06.rtm"};

        drySound[] = {"Edaly_Sounds_Assets_1\data\ahem.ogg",0.56234133,1,10};
        reloadMagazineSound[] = {"\Edaly_Weapons_1\M1_Carabine\Sons\m1_reloading.ogg",0.39810717,1,30};

        modes[] = {"Single"};
        class Single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                closure1[] = {"\Edaly_Weapons_1\M1_Carabine\Sons\m1_close_0.ogg",0.70794576,1,10};
                closure2[] = {"\Edaly_Weapons_1\M1_Carabine\Sons\m1_close_1.ogg",0.70794576,1.1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[] = {"\Edaly_Weapons_1\M1_Carabine\Sons\m1_far_0.ogg",4.4,1,1400};
                begin2[] = {"\Edaly_Weapons_1\M1_Carabine\Sons\m1_far_1.ogg",4.4,1,1400};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
                soundSetShot[] = {"DMR05_Shot_SoundSet","DMR05_tail_SoundSet","DMR05_InteriorTail_SoundSet"};
            };
            reloadTime = 0.2;
            dispersion = 0.00075;
            recoil = "recoil_auto_ebr";
            recoilProne = "recoil_auto_prone_ebr";
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.2;
        };

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 140;
            class MuzzleSlot: MuzzleSlot //SILENCIEUX
            {
                compatibleItems[] = {};
            };
            class CowsSlot: CowsSlot
            {
                compatibleItems[] = {};
            };
            class PointerSlot: PointerSlot //POINTEUR
            {
                compatibleItems[] = {};
            };
            class UnderBarrelSlot: UnderBarrelSlot //BIPIED
            {
                compatibleItems[] = {};
            };
        };
    };
    class Weapon_SVT40: Edaly_Arme_01_Base_F
    {
        author=$STR_EDALY_AUTHOR;
        scope = 2;
        displayName = "SVT-40";
        model = "\Edaly_weapons_1\svt40\svt40.p3d";
        picture = "\Edaly_Weapons_1\SVT40\data\UI\UI_svt40_ca.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
        weaponInfoType = "RscWeaponZeroing";
        hiddenSelectionsTextures[] = {""};

        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Weapons";

        opticsZoomMin = 0.375;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 100;
        distanceZoomMax = 100;

        magazines[] = {"10Rnd_762x54_SVT40"};
        reloadAction = "GestureReloadEBR";
        handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\data\Anim\DMR_06.rtm"};

        drySound[] = {"\Edaly_Weapons_1\M1_Carabine\Sons\m1_dry.ogg",0.56234133,1,10};
        reloadMagazineSound[] = {"\Edaly_Weapons_1\M1_Carabine\Sons\m1_reloading.ogg",0.39810717,1,30};

        modes[] = {"Single"};
        class Single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                closure1[] = {"\Edaly_Weapons_1\M1_Carabine\Sons\m1_close_0.ogg",0.70794576,1,10};
                closure2[] = {"\Edaly_Weapons_1\M1_Carabine\Sons\m1_close_1.ogg",0.70794576,1.1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[] = {"\Edaly_Weapons_1\M1_Carabine\Sons\m1_far_0.ogg",4.4,1,1400};
                begin2[] = {"\Edaly_Weapons_1\M1_Carabine\Sons\m1_far_1.ogg",4.4,1,1400};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
                soundSetShot[] = {"DMR05_Shot_SoundSet","DMR05_tail_SoundSet","DMR05_InteriorTail_SoundSet"};
            };
            reloadTime = 0.2;
            dispersion = 0.00075;
            recoil = "recoil_auto_ebr";
            recoilProne = "recoil_auto_prone_ebr";
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.2;
        };

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 140;
            class MuzzleSlot: MuzzleSlot //SILENCIEUX
            {
                compatibleItems[] = {};
            };
            class CowsSlot: CowsSlot
            {
                compatibleItems[] = {};
            };
            class PointerSlot: PointerSlot //POINTEUR
            {
                compatibleItems[] = {};
            };
            class UnderBarrelSlot: UnderBarrelSlot //BIPIED
            {
                compatibleItems[] = {};
            };
        };
    };
    class Weapon_FNFAL: Edaly_Arme_01_Base_F
    {
        author=$STR_EDALY_AUTHOR;
        scope = 2;
        displayName = "KN-KAL59";
        picture = "\edaly_Weapons_1\FNFAL\data\UI\UI_knfal_ca.paa";
        model = "\Edaly_weapons_1\fnfal\fnfal.p3d";
        weaponInfoType = "RscWeaponZeroing";

        hiddenSelectionsTextures[] = {""};

        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Weapons";

        opticsZoomMin = 0.3;
        opticsZoomMax = 0.7;
        opticsZoomInit = 0.75;
        distanceZoomMin = 100;
        distanceZoomMax = 100;

        magazines[] = {"15Rnd_762x51_FNFAL"};
        reloadAction = "Edaly_Reload_Fal";
        handAnim[] = {"OFP2_ManSkeleton","\Edaly_Anims\Edaly_Weapons\rtm\anim_knfal_handanim.rtm"};

        drySound[] = {"\Edaly_Weapons_1\M1_Carabine\Sons\m1_dry.ogg",0.56234133,1,10};
        reloadMagazineSound[] = {"\Edaly_Weapons_1\M1_Carabine\Sons\m1_reloading.ogg",0.39810717,1,30};

        modes[] = {"Single","Burst","FullAuto"};
        class Single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                closure1[] = {"\Edaly_Weapons_1\FNFAL\sounds\FNFAL_closeShot_01.ogg",0.70794576,1,10};
                closure2[] = {"\Edaly_Weapons_1\FNFAL\sounds\FNFAL_closeShot_02.ogg",0.70794576,1.1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[] = {"\Edaly_Weapons_1\FNFAL\sounds\FNFAL_01.ogg",4.4,1,1400};
                begin2[] = {"\Edaly_Weapons_1\FNFAL\sounds\FNFAL_02.ogg",4.4,1,1400};
                begin3[] = {"\Edaly_Weapons_1\FNFAL\sounds\FNFAL_03.ogg",4.4,1,1400};
                soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
                soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet"};
            };
            reloadTime = 0.13;
            dispersion = 0.00075;
            recoil = "recoil_auto_prone_ebr";
            recoilProne = "recoil_auto_prone_ebr";
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.2;
        };
        class FullAuto: Mode_FullAuto
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                closure1[] = {"\Edaly_Weapons_1\FNFAL\sounds\FNFAL_closeShot_01.ogg",0.70794576,1,10};
                closure2[] = {"\Edaly_Weapons_1\FNFAL\sounds\FNFAL_closeShot_02.ogg",0.70794576,1.1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[] = {"\Edaly_Weapons_1\FNFAL\sounds\FNFAL_01.ogg",4.4,1,1400};
                begin2[] = {"\Edaly_Weapons_1\FNFAL\sounds\FNFAL_02.ogg",4.4,1,1400};
                begin3[] = {"\Edaly_Weapons_1\FNFAL\sounds\FNFAL_03.ogg",4.4,1,1400};
                soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
                class SoundTails
                {
                    class TailInterior
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior",1.5848932,1,1200};
                        frequency = 1;
                        volume = "interior";
                    };
                    class TailTrees
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees",1.0,1,1200};
                        frequency = 1;
                        volume = "(1-interior/1.4)*trees";
                    };
                    class TailForest
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest",1.0,1,1200};
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailMeadows
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows",1.0,1,1200};
                        frequency = 1;
                        volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
                    };
                    class TailHouses
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses",1.0,1,1200};
                        frequency = 1;
                        volume = "(1-interior/1.4)*houses";
                    };
                };
            };
            reloadTime = 0.09;
            dispersion = 0.00116;
            recoil = "recoil_auto_prone_ebr";
            recoilProne = "recoil_auto_prone_ebr";
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            aiRateOfFireDistance = 50;
        };
		class Burst: Mode_Burst
		{
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                closure1[] = {"\Edaly_Weapons_1\FNFAL\sounds\FNFAL_closeShot_01.ogg",0.70794576,1,10};
                closure2[] = {"\Edaly_Weapons_1\FNFAL\sounds\FNFAL_closeShot_02.ogg",0.70794576,1.1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[] = {"\Edaly_Weapons_1\FNFAL\sounds\FNFAL_01.ogg",4.4,1,1400};
                begin2[] = {"\Edaly_Weapons_1\FNFAL\sounds\FNFAL_02.ogg",4.4,1,1400};
                begin3[] = {"\Edaly_Weapons_1\FNFAL\sounds\FNFAL_03.ogg",4.4,1,1400};
                soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
                class SoundTails
                {
                    class TailInterior
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior",1.5848932,1,1200};
                        frequency = 1;
                        volume = "interior";
                    };
                    class TailTrees
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees",1.0,1,1200};
                        frequency = 1;
                        volume = "(1-interior/1.4)*trees";
                    };
                    class TailForest
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest",1.0,1,1200};
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailMeadows
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows",1.0,1,1200};
                        frequency = 1;
                        volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
                    };
                    class TailHouses
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses",1.0,1,1200};
                        frequency = 1;
                        volume = "(1-interior/1.4)*houses";
                    };
                };
            };
			textureType = "dual";
			burst = 2;
			reloadTime = 0.15;
			dispersion = 0.00087;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
		};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 140;
            class MuzzleSlot: MuzzleSlot //SILENCIEUX
            {
                compatibleItems[] = {};
            };
            class CowsSlot: CowsSlot
            {
                compatibleItems[] = {};
            };
            class PointerSlot: PointerSlot //POINTEUR
            {
                compatibleItems[] = {};
            };
            class UnderBarrelSlot: UnderBarrelSlot //BIPIED
            {
                compatibleItems[] = {};
            };
        };
    };
	class Edaly_Pistols_01_Base_F: Pistol_Base_F
	{
		author = $STR_EDALY_AUTHOR;
		_generalMacro = "Edaly_Pistols_01_Base_F";
		scope = 1;
		selectionFireAnim = "muzzleFlash";
		model = "\A3\weapons_F\Pistols\P07\p07_F.p3d";
		picture = "\A3\weapons_F\Pistols\P07\data\UI\gear_p07_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[] = {};
		reloadAction = "GestureReloadPistol";
		recoil = "recoil_pistol_p07";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		displayname = "";
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\dry_P07",0.39810717,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1.0,1,10};
		modes[] = {"Single"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 200;
			class MuzzleSlot: MuzzleSlot //SILENCIEUX
			{
				iconPicture = "\a3\data_f\default_ti_ca.paa";
				iconPosition[] = {0,0};
				iconScale = 0;
			};
			class CowsSlot: CowsSlot //VISEUR
			{
				iconPicture = "\a3\data_f\default_ti_ca.paa";
				iconPosition[] = {0,0};
				iconScale = 0;
			};
			class PointerSlot: PointerSlot //POINTEUR
			{
				iconPicture = "\a3\data_f\default_ti_ca.paa";
				iconPosition[] = {0,0};
				iconScale = 0;
			};
			class UnderBarrelSlot: UnderBarrelSlot //BIPIED
			{
				iconPicture = "\a3\data_f\default_ti_ca.paa";
				iconPosition[] = {0,0};
				iconScale = 0;
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_01",0.22387211,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_02",0.22387211,1.2,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_01",3.9810717,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_02",3.9810717,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_03",3.9810717,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_interior",1.0,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_trees",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_forest",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_meadows",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_houses",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_01",0.56234133,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_02",0.56234133,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_03",0.56234133,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.13;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.5011872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.5011872,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.5011872,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.5011872,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.39810717,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.39810717,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.39810717,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.39810717,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.22387211,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.22387211,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.22387211,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.22387211,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		sounds[] = {"StandardSound","SilencedSound"};
		class Library
		{
			libTextDesc = "";
		};
		descriptionShort = "";
		inertia = 0.1;
		dexterity = 1.9;
		initSpeed = 410;
		maxZeroing = 100;
		class ItemInfo
		{
			priority = 2;
		};
	};

    class Weapon_M16: Edaly_Arme_02_Base_F
    {
        author =$STR_EDALY_AUTHOR;
        scope = 2;
        displayName = "M16";
        model = "\Edaly_Weapons_2\M16\M16.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_M16.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
        weaponInfoType = "RscWeaponZeroing";

        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Weapons";

        opticsZoomMin = 0.375;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 100;
        distanceZoomMax = 100;

        magazines[] = {"15Rnd_556x45"};
        reloadAction = "GestureReloadEBR";
        handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};

        drySound[] = {"Edaly_Weapons_1\M1_Carabine\Sons\m1_dry.ogg",0.56234133,1,10};
        reloadMagazineSound[] = {"Edaly_Weapons_1\M1_Carabine\Sons\m1_reloading.ogg",0.39810717,1,30};

        modes[] = {"Single"};
        class Single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                closure1[] = {"Edaly_Weapons_1\M1_Carabine\Sons\m1_close_0.ogg",0.70794576,1,10};
                closure2[] = {"Edaly_Weapons_1\M1_Carabine\Sons\m1_close_1.ogg",0.70794576,1.1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[] = {"Edaly_Weapons_1\M1_Carabine\Sons\m1_far_0.ogg",4.4,1,1400};
                begin2[] = {"Edaly_Weapons_1\M1_Carabine\Sons\m1_far_1.ogg",4.4,1,1400};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
                soundSetShot[] = {"Type115_Shot_SoundSet","Type115_Tail_SoundSet","Type115_interiorTail_SoundSet"};
            };
            reloadTime = 0.2;
            dispersion = 0.00075;
            recoil = "recoil_auto_ebr";
            recoilProne = "recoil_auto_prone_ebr";
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.2;
        };

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 88;
            class MuzzleSlot: MuzzleSlot //SILENCIEUX
            {
                compatibleItems[] = {};
            };
            class CowsSlot: CowsSlot
            {
                compatibleItems[] = {};
            };
            class PointerSlot: PointerSlot //POINTEUR
            {
                compatibleItems[] = {};
            };
            class UnderBarrelSlot: UnderBarrelSlot //BIPIED
            {
                compatibleItems[] = {};
            };
        };
    };

    class Weapon_Model8: Edaly_Arme_02_Base_F
    {
        author =$STR_EDALY_AUTHOR;
        scope = 2;
        displayName = "Model 8";
        model = "\Edaly_Weapons_1\Model8\Model8.p3d";
        picture = "Edaly_Items_Assets_1\UI\Edaly_Weapons_Model_8.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
        weaponInfoType = "RscWeaponZeroing";
        hiddenSelectionsTextures[] = {""};

        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Weapons";

        opticsZoomMin = 0.375;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 100;
        distanceZoomMax = 100;

        magazines[] = {"5Rnd_R35_Model8"};
        reloadAction = "GestureReloadLRR";
        handAnim[] = {"OFP2_ManSkeleton","\Edaly_Weapons_1\Model8\anims\anim_model8.rtm"};

        drySound[] = {"Edaly_Weapons_1\M1_Carabine\Sons\m1_dry.ogg",0.56234133,1,10};
        reloadMagazineSound[] = {"Edaly_Weapons_1\M1_Carabine\Sons\m1_reloading.ogg",0.39810717,1,30};

        modes[] = {"Single"};
        class Single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                closure1[] = {"Edaly_Weapons_1\M1_Carabine\Sons\m1_close_0.ogg",0.70794576,1,10};
                closure2[] = {"Edaly_Weapons_1\M1_Carabine\Sons\m1_close_1.ogg",0.70794576,1.1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[] = {"Edaly_Weapons_1\M1_Carabine\Sons\m1_far_0.ogg",4.4,1,1400};
                begin2[] = {"Edaly_Weapons_1\M1_Carabine\Sons\m1_far_1.ogg",4.4,1,1400};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
                soundSetShot[] = {"DMR05_Shot_SoundSet","DMR05_tail_SoundSet","DMR05_InteriorTail_SoundSet"};
            };
            reloadTime = 0.2;
            dispersion = 0.00075;
            recoil = "recoil_auto_ebr";
            recoilProne = "recoil_auto_prone_ebr";
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.2;
        };

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 130;
            class MuzzleSlot: MuzzleSlot //SILENCIEUX
            {
                compatibleItems[] = {};
            };
            class CowsSlot: CowsSlot
            {
                compatibleItems[] = {};
            };
            class PointerSlot: PointerSlot //POINTEUR
            {
                compatibleItems[] = {};
            };
            class UnderBarrelSlot: UnderBarrelSlot //BIPIED
            {
                compatibleItems[] = {};
            };
        };
    };
    class MeleeWeapon : Rifle
    {
        scope = 2;
        distanceZoomMin = 50;
        distanceZoomMax = 50;
        canDrop = 0;
        cursor = "EmptyCursor";
        cursorAim = "throw";
        cursorSize = 1;
        weaponInfoType = "RscWeaponEmpty";
    };

    class Tool_Hammer_F: Edaly_Pistols_01_Base_F
    {
        author=$STR_EDALY_AUTHOR;
        scope=2;
        model="\Edaly_Weapons_1\Hammer\Hammer_F.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Hammer_F.paa";
        magazines[]=
        {
            "Tools_Magazine_Swing"
        };
        displayname=$STR_EDALY_TOOL_HAMMER;
        descriptionShort="Any";//$STR_EDALY_DESC_HAMMER;
        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Weapons";


		class bg_weaponparameters
		{

			class onFired_Action
			{
			HandAction = "Edaly_Tool_Swing_01";
			Actiondelay = 0;
			Sound = "";
			Sound_Location = "RightHandMiddle1";
			hasOptic = 0;
			};
		};

        modes[]={"Single"};

            class Single : Mode_SemiAuto
            {
                sounds[] = {StandardSound};
                class BaseSoundModeType
                {
                    weaponSoundEffect  = "DefaultRifle";
                    closure1[] = {"", 0.00006, 1, 10};
                    closure2[] = {"", 0.00006, 1, 10};
                    soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
                };
                class StandardSound: BaseSoundModeType
                {
                    begin1[] = {"\Edaly_Sounds_Assets_2\data\Swing.wav", 1.994328, 0.95, 10};
                    begin2[] = {"\Edaly_Sounds_Assets_2\data\Swing.wav", 1.994328, 0.70, 10};
                    begin3[] = {"\Edaly_Sounds_Assets_2\data\Swing.wav", 1.994328, 0.60, 10};
                    begin4[] = {"\Edaly_Sounds_Assets_2\data\Swing.wav", 1.994328, 0.80, 10};
                    soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
                };
                dispersion = 0.0092;
                soundContinuous = 0;
                reloadTime = 0.6;
                recoil = "recoil_single_primary_prone_1outof10";
                recoilProne = "";
            };
		drySound[] = {"Edaly_Sounds_Assets_1\data\ahem.ogg",0.56234133,1,10};
		reloadMagazineSound[] = {"Edaly_Sounds_Assets_1\data\ahem.ogg",0.39810717,1,30};
        inertia=0.2;
        aimTransitionSpeed=1.6;
        dexterity=1.8;
        initSpeed=280;

        maxZeroing=100;
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=20;
            holsterScale=0.94999999;
            class MuzzleSlot: MuzzleSlot //SILENCIEUX
            {
                iconPicture = "\a3\data_f\default_ti_ca.paa";
                iconPosition[] = {0,0};
                iconScale = 0;
                compatibleItems[]={};
            };
            class CowsSlot: CowsSlot //VISEUR
            {
                iconPicture = "\a3\data_f\default_ti_ca.paa";
                iconPosition[] = {0,0};
                iconScale = 0;
                compatibleItems[]={};
            };
            class PointerSlot: PointerSlot //POINTEUR
            {
                iconPicture = "\a3\data_f\default_ti_ca.paa";
                iconPosition[] = {0,0};
                iconScale = 0;
                compatibleItems[]={};
            };
        };
    };
    class Tool_Baton_F: Edaly_Pistols_01_Base_F
    {
        author=$STR_EDALY_AUTHOR;
        scope=2;
        model="\Edaly_Weapons_2\Baton\Baton_F.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Hammer_F.paa"; // to replace
        magazines[]=
        {
            "Tools_Magazine_Swing"
        };
        displayname=$STR_EDALY_TOOL_BATON;
        descriptionShort="Any";//$STR_EDALY_DESC_HAMMER;
        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Weapons";


        class bg_weaponparameters
        {

            class onFired_Action
            {
            HandAction = "Edaly_Tool_Swing_01";
            Actiondelay = 0;
            Sound = "";
            Sound_Location = "RightHandMiddle1";
            hasOptic = 0;
            };
        };

        modes[]={"Single"};

            class Single : Mode_SemiAuto
            {
                sounds[] = {StandardSound};
                class BaseSoundModeType
                {
                    weaponSoundEffect  = "DefaultRifle";
                    closure1[] = {"", 0.00006, 1, 10};
                    closure2[] = {"", 0.00006, 1, 10};
                    soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
                };
                class StandardSound: BaseSoundModeType
                {
                    begin1[] = {"\Edaly_Sounds_Assets_2\data\Swing.wav", 1.994328, 0.95, 10};
                    begin2[] = {"\Edaly_Sounds_Assets_2\data\Swing.wav", 1.994328, 0.70, 10};
                    begin3[] = {"\Edaly_Sounds_Assets_2\data\Swing.wav", 1.994328, 0.60, 10};
                    begin4[] = {"\Edaly_Sounds_Assets_2\data\Swing.wav", 1.994328, 0.80, 10};
                    soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
                };
                dispersion = 0.0092;
                soundContinuous = 0;
                reloadTime = 0.6;
                recoil = "recoil_single_primary_prone_1outof10";
                recoilProne = "";
            };
        drySound[] = {"Edaly_Sounds_Assets_1\data\ahem.ogg",0.56234133,1,10};
        reloadMagazineSound[] = {"Edaly_Sounds_Assets_1\data\ahem.ogg",0.39810717,1,30};
        inertia=0.2;
        aimTransitionSpeed=1.6;
        dexterity=1.8;
        initSpeed=280;

        maxZeroing=100;
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=20;
            holsterScale=0.94999999;
            class MuzzleSlot: MuzzleSlot //SILENCIEUX
            {
                iconPicture = "\a3\data_f\default_ti_ca.paa";
                iconPosition[] = {0,0};
                iconScale = 0;
                compatibleItems[]={};
            };
            class CowsSlot: CowsSlot //VISEUR
            {
                iconPicture = "\a3\data_f\default_ti_ca.paa";
                iconPosition[] = {0,0};
                iconScale = 0;
                compatibleItems[]={};
            };
            class PointerSlot: PointerSlot //POINTEUR
            {
                iconPicture = "\a3\data_f\default_ti_ca.paa";
                iconPosition[] = {0,0};
                iconScale = 0;
                compatibleItems[]={};
            };
        };
    };

};
