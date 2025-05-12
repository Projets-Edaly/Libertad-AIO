
#include "basicdefines_A3.hpp"
class DefaultEventhandlers;
#include "\Edaly_Client\version.hpp"

class CfgPatches
{
	class Edaly_Character
	{
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredVersion=ARMA3_VERSION;
		requiredAddons[] = {"A3_Characters_F"};
		units[]	= {"Edaly_Women_01_F"};
	};
};

class UniformSlotInfo;

class CfgVehicles
{
	class CAManBase;
	class B_Soldier_base_F;
	class Edaly_Women_Base_F: CAManBase
	{
		scope = 0;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		side = 3;
		displayName = "Femme 01";
		_generalMacro = "Edaly_Women_Base_F";
		author=$STR_EDALY_AUTHOR;
		role = "Unarmed";
		model = "Edaly_Character\Women_01\Edaly_Women_01_F.p3d";
		textSingular = "$STR_A3_nameSound_veh_infantry_civilian_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_civilian_p";
		accuracy = 1.6;
		camouflage = 1.2;
		threat[] = {0,0,0.0};
		magazines[] = {};
		cost = 100000;
		minHeadTurnAI = -50;
		maxHeadTurnAI = 50;
		formationX = 2;
		formationZ = 5;
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		primaryAmmoCoef = 0.0;
		secondaryAmmoCoef = 0.0;
		handgunAmmoCoef = 0.0;
		nameSound = "veh_infantry_civilian_s";

	};
	class Edaly_Women_01_F: Edaly_Women_Base_F
	{
		scope = 2;
		displayName = "Femme 01";
		_generalMacro = "Edaly_Women_01_F";
		model = "Edaly_Character\Women_01\Edaly_Women_01_F.p3d";
		author=$STR_EDALY_AUTHOR;
		class NewTurret;
		faceType = "Man_A3";
		faction = "CIV_F";
		genericNames = "GreekMen";
		vehicleClass = "Men";
		editorSubcategory = "EdSubcat_Personnel";
		modelSides[] = {3};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		fsmFormation = "A3\characters_f\scripts\formationC.fsm";
		fsmDanger = "A3\characters_f\scripts\formationCDanger.fsm";
	};
	class Edaly_A_Unif_01_Base: B_Soldier_base_F
	{
		author=$STR_EDALY_AUTHOR;
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="[Army] Uniform";
		nakedUniform="U_BasicBody";
		model="Edaly_Character\Army_Uniforms\Models\Army_01.p3d";
		vehicleClass="Edaly_Gear";
		uniformClass="Edaly_A_Unif_01";
		/*hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Edaly_Character\Army_Uniforms\data\uniform_co.paa"}; */
	};
};

class cfgWeapons
{
	class ItemInfo;
	class ItemCore;
	class VestItem;
	class HeadgearItem;
	class Uniform_Base;
	class UniformItem;
	class Edaly_A_Unif_01: Uniform_Base
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="[Army] Uniform";
		picture="";
		model="\Edaly_Character\Army_Uniforms\Models\Army_01.p3d";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"Edaly_Character\Army_Uniforms\data\uniform_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Edaly_A_Unif_01_Base";
			containerClass="Supply140";
			mass=1;
			allowedSlots[]={"701","801","901"};
			armor=0;
		};
	};
};