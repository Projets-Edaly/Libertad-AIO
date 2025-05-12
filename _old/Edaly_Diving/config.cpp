#define _ARMA_
#include "\Edaly_Client\version.hpp"

class CfgPatches
{
	class Edaly_Diving
	{
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredAddons[]={"Edaly_Client"};
		requiredVersion=ARMA3_VERSION;
		units[]={};
		weapons[]={"Edaly_Rebreather_F"};
	};
};	

class CfgWeapons
{	

	class ItemCore;
	class ItemInfo;
	// Veste
	class VestItem;
	
	class Edaly_Vest_Base: ItemCore
	{
		author = "Edaly - Hugo";
		scope = 0;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		picture = "\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
		model = "\A3\Weapons_F\Ammo\mag_univ.p3d";
		hiddenSelections[] = {"camo"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
			hiddenSelections[] = {"camo"};
			containerClass = "Supply0";
			mass = 0;
		};
	};
	class Edaly_Rebreather_F: Edaly_Vest_Base
	{
		author = "Edaly - Hugo";
		scope = 2;
		displayName = "Bouteille de plongee";
		picture = "\A3\characters_f\Data\UI\icon_V_RebreatherB_CA.paa";
		model = "Edaly_Diving\Rebreather\Rebreather_F.p3d";
		hiddenUnderwaterSelections[] = {"hide"};
		shownUnderwaterSelections[] = {"unhide","unhide2"};
		hiddenUnderwaterSelectionsTextures[] = {"\Edaly_Diving\Rebreather\noir.paa","\Edaly_Diving\Rebreather\noir.paa"};
		hiddenSelectionsTextures[] = {"\Edaly_Diving\Rebreather\noir.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\Edaly_Diving\Rebreather\Rebreather_F.p3d";
			containerClass = "Supply0";
			mass = 80;
			vestType = "Rebreather";
			hiddenUnderwaterSelections[] = {"hide"};
			shownUnderwaterSelections[] = {"unhide","unhide2"};
			hiddenUnderwaterSelectionsTextures[] = {"\Edaly_Diving\Rebreather\noir.paa","\Edaly_Diving\Rebreather\noir.paa","\Edaly_Diving\Rebreather\noir.paa"};
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 8;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.2;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 8;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
};
// Masque
class CfgGlasses
{
	class G_Diving;
	class None;
	class Edaly_DivingMask_F: None
	{
		author = "Edaly - Hugo";
		scope = 2;
		displayname = "Masque de plongee";
		model = "Edaly_Diving\Mask\DivingMask_F.p3d";
		hiddenSelections[] = {"camo"};
		picture = "\A3\Characters_F_EPB\Heads\Glasses\data\UI\icon_g_diving_nato_ca.paa";
		mass = 4;
	};
};