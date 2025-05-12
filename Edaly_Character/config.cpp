
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
		units[]	= {};
	};
};
class CfgGlasses
{
	class None;
	class Edaly_Glasses_01_F: None
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		mass=3;
		displayName=$STR_EDALY_CIV_GLASSES;
		model="\Edaly_Character\Civilian\Headgear\Glasses_BigLenses_F.p3d";
		//picture="\Edaly_Character\Civilian\Headgear\Glasse_BigLenses_F.paa";
		identityTypes[]={};
	};
	class Edaly_Watch_01_F: None
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		mass=3;
		displayName=$STR_EDALY_CIV_WATCH;
		picture="\Edaly_Character\UI\Edaly_Char_watch.paa";
		model="\Edaly_Character\Civilian\Headgear\Watch_01_F.p3d";
		identityTypes[]={};
	};
	class Edaly_Mil_Gloves_01_EL: None
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		mass=3;
		displayName=$STR_EDALY_MILI_GLOVES;
		picture="\Edaly_Character\UI\Edaly_Char_gloves.paa";
		model="\Edaly_Character\Military\Mil_Gloves_01_EL.p3d";
		//picture="\Edaly_Character\Civilian\Headgear\Glasse_BigLenses_F.paa";
		identityTypes[]={};
	};
	class Edaly_Guer_Armband_01: None
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		mass=3;
		displayName=$STR_EDALY_GUER_ARMBAND;
		picture="\Edaly_Character\UI\Edaly_Char_gra.paa";
		model="\Edaly_Character\Guerillero\Guer_Armband_01_EL.p3d";
		//picture="\Edaly_Character\Civilian\Headgear\Glasse_BigLenses_F.paa";
		identityTypes[]={};
	};
	class Edaly_Guer_Scarf_01: None
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		mass=3;
		displayName="scarf";
		model="\Edaly_Character\Guerillero\Guer_Scarf_01_EL.p3d";
		picture="\Edaly_Character\UI\Edaly_Char_scarf.paa";
		//picture="\Edaly_Character\Civilian\Headgear\Glasse_BigLenses_F.paa";
		identityTypes[]={};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class B_Carryall_Base;
	class Man;
	/*class CAManBase: Man
	{
		extCameraPosition[] = {0.3,-0.10,-1.50};
	};*/

	class F_Man_Base_EL: B_Soldier_base_F
	{
		author=$STR_EDALY_AUTHOR;
		scope=0;
		displayName=$STR_EDALY_SIA_UNIFORM_FORMAL;
		model="a3\characters_f\Civil\Scientist_01_Formal_F.p3d";
		vehicleClass="Edaly_Gear";
		uniformClass="F_S_C_Agent_01";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
		hiddenSelections[] = {"camo1","badge"};
		weapons[] = {"Weapon_FNFAL","Throw","Put"};
		respawnWeapons[] = {"Weapon_FNFAL","Throw","Put"};
		respawnMagazines[] = {"HandGrenade","HandGrenade"};
		linkedItems[] = {"Vest_S_C_Guer_01","Mil_Cap_01_EL","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"Vest_S_C_Guer_01","Mil_Cap_01_EL","ItemMap","ItemCompass","ItemWatch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Civilian\Agent\data\american_formal_co.paa","\Edaly_Character\Civilian\Agent\data\badge_co.paa"};
	};

	class F_Man_Agent_01_F: F_Man_Base_EL
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName=$STR_EDALY_SIA_UNIFORM_FORMAL;
		model="a3\characters_f\Civil\Scientist_01_Formal_F.p3d";
		vehicleClass="Edaly_Gear";
		uniformClass="F_S_C_Agent_01";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
		hiddenSelections[] = {"camo1","badge"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Civilian\Agent\data\american_formal_co.paa","\Edaly_Character\Civilian\Agent\data\badge_co.paa"};
	};
	class F_Man_Agent_02_F: F_Man_Base_EL
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName=$STR_EDALY_SIA_UNIFORM_INFORMAL;
		model="a3\characters_f\Civil\Scientist_01_Formal_F.p3d";
		vehicleClass="Edaly_Gear";
		uniformClass="F_S_C_Agent_02";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
		hiddenSelections[] = {"camo1","badge"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Civilian\Agent\data\american_unformal_co.paa","\Edaly_Character\Civilian\Agent\data\badge_co.paa"};
	};
	class F_Man_CSuit_01_F: F_Man_Base_EL
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="Teue formelle de civil";
		model="a3\characters_f\Civil\Scientist_01_Formal_F.p3d";
		vehicleClass="Edaly_Gear";
		uniformClass="F_S_CSuit_01";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
		hiddenSelections[] = {"camo1","badge"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Civilian\Suit\data\CMan_01_main_co.paa",""};
	};
	class F_C_Policeman_Base: F_Man_Base_EL
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="Police Uniform (Blue)";
		model="Edaly_Character\Police\Police_Uniform_01_EL.p3d";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_policeman.paa";
		vehicleClass="Edaly_Gear";
		uniformClass="F_S_C_Policeman_Base";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"\Edaly_Character\Police\data\cloth_co.paa"};
	};
	class F_C_Policeman_Beige: F_C_Policeman_Base
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="Police Uniform (Beige)";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_policeman.paa";
		vehicleClass="Edaly_Gear";
		uniformClass="F_S_C_Policeman_Beige";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Edaly_Character\Police\data\cloth_beige_co.paa"};
	};

	class F_C_Guer_Base: F_Man_Base_EL
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="Guerillero";
		model="Edaly_Character\Guerillero\Guer_Uniform_01_EL.p3d";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_policeman.paa"; // TODO
		vehicleClass="Edaly_Gear";
		uniformClass="F_S_C_Guer_Base";
		linkedItems[] = {"Vest_S_C_Guer_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"Vest_S_C_Guer_01","ItemMap","ItemCompass","ItemWatch"};
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Guerillero\data\shirt_co.paa","\Edaly_Character\Guerillero\data\pants_co.paa","\Edaly_Character\Guerillero\data\boot_co.paa"};
	};
	class F_C_Guer_01: F_C_Guer_Base
	{
		displayName="Guerillero 01";
		model="Edaly_Character\Guerillero\Guer_Uniform_01_EL.p3d";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_policeman.paa"; // TODO
		uniformClass="F_S_C_Guer_01";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Guerillero\data\shirt_b_01_co.paa","\Edaly_Character\Guerillero\data\pants_b_01_co.paa","\Edaly_Character\Guerillero\data\boot_black_co.paa"};
	};
	class F_C_Guer_02: F_C_Guer_Base
	{
		displayName="Guerillero 02";
		model="Edaly_Character\Guerillero\Guer_Uniform_01_EL.p3d";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_policeman.paa"; // TODO
		uniformClass="F_S_C_Guer_02";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Guerillero\data\shirt_co.paa","\Edaly_Character\Guerillero\data\pants_b_01_co.paa","\Edaly_Character\Guerillero\data\boot_black_co.paa"};
	};
	class F_C_Guer_03: F_C_Guer_Base
	{
		displayName="Guerillero 03";
		model="Edaly_Character\Guerillero\Guer_Uniform_01_EL.p3d";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_policeman.paa"; // TODO
		uniformClass="F_S_C_Guer_03";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Guerillero\data\shirt_co.paa","\Edaly_Character\Guerillero\data\pants_co.paa","\Edaly_Character\Guerillero\data\boot_black_co.paa"};
	};
	class U_C_Mil_Base_01: F_Man_Base_EL
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="Mili";
		model="Edaly_Character\Military\Mil_Uniform_01_EL.p3d";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_policeman.paa"; // TODO
		vehicleClass="Edaly_Gear";
		uniformClass="U_S_C_Mil_Base_01";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\1cl\cloth_army_1stcl_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};
	};
	class U_C_Mil_1stCl_01: U_C_Mil_Base_01
	{
		displayName="Uni  Mili 1st Cl";
		uniformClass="U_S_C_Mil_1stCl_01";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\1cl\cloth_army_1stcl_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};
	};
	class U_C_Mil_adj_01: U_C_Mil_Base_01
	{
		displayName="Uni  Mili adj Cl";
		uniformClass="U_S_C_Mil_adj_01";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\adj\cloth_army_adj_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};
	};
	class U_C_Mil_cpl_01: U_C_Mil_Base_01
	{
		displayName="Uni  Mili cpl Cl";
		uniformClass="U_S_C_Mil_cpl_01";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\cpl\cloth_army_cpl_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};
	};
	class U_C_Mil_cplsup_01: U_C_Mil_Base_01
	{
		displayName="Uni  Mili cplsup Cl";
		uniformClass="U_S_C_Mil_cplsup_01";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\cplsup\cloth_army_cplsup_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};
	};
	class U_C_Mil_cmd_01: U_C_Mil_Base_01
	{
		displayName="Uni  Mili Commandant";
		uniformClass="U_S_C_Mil_cmd_01";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\cmd\cloth_army_cmd_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};
	};
	class U_C_Mil_col_01: U_C_Mil_Base_01
	{
		displayName="Uni  Mili Colonel";
		uniformClass="U_S_C_Mil_col_01";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\col\cloth_army_col_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};
	};
	class U_C_Mil_cpt_01: U_C_Mil_Base_01
	{
		displayName="Uni  Mili Capitaine";
		uniformClass="U_S_C_Mil_cpt_01";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\cpt\cloth_army_cpt_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};
	};
	class U_C_Mil_gen_01: U_C_Mil_Base_01
	{
		displayName="Uni  Mili General";
		uniformClass="U_S_C_Mil_gen_01";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\gen\cloth_army_gen_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};
	};
	class U_C_Mil_lt_01: U_C_Mil_Base_01
	{
		displayName="Uni  Mili Lieutenant";
		uniformClass="U_S_C_Mil_lt_01";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\lt\cloth_army_lt_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};
	};
	class U_C_Mil_sgt_01: U_C_Mil_Base_01
	{
		displayName="Uni  Mili Sergent";
		uniformClass="U_S_C_Mil_sgt_01";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\sgt\cloth_army_sgt_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};
	};
	class U_C_Mil_sgt2da_01: U_C_Mil_Base_01
	{
		displayName="Uni  Mili Sergent 2DA";
		uniformClass="U_S_C_Mil_sgt2da_01";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\sgt2da\cloth_army_sgt2da_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};
	};

	class Backpack_C_01: B_Carryall_Base
	{
		author=$STR_EDALY_AUTHOR;
		displayName="Backpack 01";
		mapSize=0.55;
		scope=2;
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_backpack02.paa";
		model="Edaly_Character\Civilian\Backpack\Backpack_01_F.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Edaly_Character\Civilian\Backpack\data\m_Bag_co.paa"};
		maximumLoad=220;
		mass=50;
	};
	class Backpack_C_02: Backpack_C_01
	{
		author=$STR_EDALY_AUTHOR;
		displayName="Backpack 02";
		mapSize=0.55;
		scope=2;
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_backpack02.paa";
		model="Edaly_Character\Civilian\Backpack\Backpack_01_F.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Edaly_Character\Civilian\Backpack\data\m_Bag_fabric_g_co.paa"};
		maximumLoad=110;
		mass=30;
	};
	class Backpack_02_C_01: Backpack_C_01
	{
		author=$STR_EDALY_AUTHOR;
		displayName="Backpack 03";
		mapSize=0.55;
		scope=2;
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_backpack01.paa";
		model="Edaly_Character\Civilian\Backpack\Backpack_02_F.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\Edaly_Character\Civilian\Backpack\data\m_Bag_fabric_g_co.paa"};
		maximumLoad=110;
		mass=30;
	};
};

class CfgWeapons
{
	class ItemCore;
	class VestItem;
	class HeadgearItem;
	class H_HelmetB;
	class InventoryItem_Base_F;
	class V_HarnessOSpec_brn;

	class UniformItem: InventoryItem_Base_F
	{
		type = 801;
	};
	class Uniform_Base: ItemCore
	{
		scope = 0;
		allowedSlots[] = {901};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Soldier_F";
			containerClass = "Supply0";
			mass = 0;
		};
	};
	class Hat_01_Straw : H_HelmetB
	{
		author=$STR_EDALY_AUTHOR;
		weaponPoolAvailable = 1;
		displayName = "Straw hat";
		model = "\Edaly_Character\Civilian\Headgear\Hat_01_EL.p3d";
		picture="\Edaly_Character\UI\Edaly_Char_straw_hat_01.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Civilian\Headgear\data\wicker_co.paa"};
		hiddenSelectionsMaterials[] = {"\Edaly_Character\Civilian\Headgear\data\wicker.rvmat"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\Edaly_Character\Civilian\Headgear\Hat_01_EL.p3d";
			modelSides[] = { TCivilian, TWest };
			hiddenSelections[] = { "camo" };

			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 7;
					passThrough = 0.75;
				};
			};
		};
	};
	class Hat_02_Wicker: H_HelmetB
	{
		author=$STR_EDALY_AUTHOR;
		weaponPoolAvailable = 1;
		displayName = "Wicker hat 02";
		model = "\Edaly_Character\Civilian\Headgear\Hat_01_EL.p3d";
		picture="\Edaly_Character\UI\Edaly_Char_straw_hat_02.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Civilian\Headgear\data\wicker_co.paa"};
		hiddenSelectionsMaterials[] = {"\Edaly_Character\Civilian\Headgear\data\wicker.rvmat"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\Edaly_Character\Civilian\Headgear\Hat_02_EL.p3d";
			modelSides[] = { TCivilian, TWest };
			hiddenSelections[] = { "camo" };

			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 7;
					passThrough = 0.75;
				};
			};
		};
	};
	class Hat_02_Straw: Hat_02_Wicker
	{
		displayName = "Straw hat 02";
		picture="\Edaly_Character\UI\Edaly_Char_straw_hat_03.paa";
		hiddenSelectionsTextures[] = {"\Edaly_Character\Civilian\Headgear\data\straw_ca.paa"};
		hiddenSelectionsMaterials[] = {"\Edaly_Character\Civilian\Headgear\data\straw.rvmat"};
	};

	class Police_Cap_01_EL : H_HelmetB
	{
		author=$STR_EDALY_AUTHOR;
		weaponPoolAvailable = 1;
		displayName = "[PNN] Police Cap";
		model = "\Edaly_Character\Police\Police_Cap_01_EL.p3d";
		picture="\Edaly_Character\UI\Edaly_Char_police_cap.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Police\data\belt-holster_co.paa"};

		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\Edaly_Character\Police\Police_Cap_01_EL.p3d";
			modelSides[] = { TCivilian, TWest };
			hiddenSelections[] = { "camo" };

			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 10;
					passThrough = 0.75;
				};
			};
		};
	};
	class Guer_Beret_01_EL : H_HelmetB
	{
		author=$STR_EDALY_AUTHOR;
		weaponPoolAvailable = 1;
		displayName = "Beret (Red)";
		model = "\Edaly_Character\Guerillero\Guer_Beret_01_EL.p3d";
		picture="\Edaly_Character\UI\Edaly_Char_beret_02.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Guerillero\data\beret_co.paa"};

		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\Edaly_Character\Guerillero\Guer_Beret_01_EL.p3d";
			modelSides[] = { TCivilian, TWest };
			hiddenSelections[] = { "camo" };

			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 10;
					passThrough = 0.75;
				};
			};
		};
	};
	class Guer_Beret_02_EL : Guer_Beret_01_EL
	{
		author=$STR_EDALY_AUTHOR;
		weaponPoolAvailable = 1;
		displayName = "Beret (Black)";
		model = "\Edaly_Character\Guerillero\Guer_Beret_01_EL.p3d";
		picture="\Edaly_Character\UI\Edaly_Char_beret_01.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Guerillero\data\beret_black_co.paa"};
	};
	class Mil_Cap_01_EL : H_HelmetB
	{
		author=$STR_EDALY_AUTHOR;
		weaponPoolAvailable = 1;
		displayName = "[ERN] Patrol Cap";
		model = "\Edaly_Character\Military\Mil_Cap_01_EL.p3d";
		picture="\Edaly_Character\UI\Edaly_Char_cap.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\cap_co.paa"};

		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\Edaly_Character\Military\Mil_Cap_01_EL.p3d";
			modelSides[] = { TCivilian, TWest };
			hiddenSelections[] = { "camo" };

			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 10;
					passThrough = 0.75;
				};
			};
		};
	};
	class Mil_Helmet_01_EL : H_HelmetB
	{
		author=$STR_EDALY_AUTHOR;
		weaponPoolAvailable = 1;
		displayName = "[ERN] Helmet Vz51";
		model = "\Edaly_Character\Military\Mil_Helmet_01_EL.p3d";
		picture="\Edaly_Character\UI\Edaly_Char_helmet.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\helmet_co.paa"};

		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\Edaly_Character\Military\Mil_Helmet_01_EL.p3d";
			modelSides[] = { TCivilian, TWest };
			hiddenSelections[] = { "camo" };

			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 10;
					passThrough = 0.75;
				};
			};
		};
	};

	class F_S_C_Agent_01: Uniform_Base
	{
		author=$STR_EDALY_AUTHOR;
		displayName="[SIA] Agent outfit 01";
		scope=2;
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_agent01.paa";
		model="\Edaly_Items_Assets_3\Suitpack\suitpack.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Civilian\Agent\data\american_formal_co.paa"};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "F_Man_Agent_01_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class F_S_C_Agent_02: Uniform_Base
	{
		author=$STR_EDALY_AUTHOR;
		displayName="[SIA] Agent outfit 02";
		scope=2;
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_agent02.paa";
		model="\Edaly_Items_Assets_3\Suitpack\suitpack.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Civilian\Agent\data\american_unformal_co.paa"};

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "F_Man_Agent_02_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class F_S_CSuit_01: Uniform_Base
	{
		author=$STR_EDALY_AUTHOR;
		displayName="Civilian clothes 01";
		scope=2;
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_suit01.paa";
		model="\Edaly_Items_Assets_3\Suitpack\suitpack.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Civilian\Suit\data\CMan_01_main_co.paa"};

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "F_Man_CSuit_01_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class F_S_C_Policeman_Base: Uniform_Base
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="[PNN] Police Uniform (Blue)";
		picture="\Edaly_Character\UI\Edaly_Char_Police_01.paa";
		model="\Edaly_Items_Assets_3\Suitpack\suitpack.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Police\data\cloth_co.paa"};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="F_C_Policeman_Base";
			containerClass="Supply140";
			mass=1;
		};
	};
	class F_S_C_Guer_Base: Uniform_Base
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="[GRA] Uniform 04";
		picture="\Edaly_Character\UI\Edaly_Char_Guer_01.paa";
		model="\Edaly_Items_Assets_3\Suitpack\suitpack.p3d";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Guerillero\data\shirt_co.paa","\Edaly_Character\Guerillero\data\pants_co.paa","\Edaly_Character\Guerillero\data\boot_co.paa"};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="F_C_Guer_Base";
			containerClass="Supply140";
			mass=1;
		};
	};
	class U_S_C_Mil_Base_01: Uniform_Base
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="[ERN] Base";
		picture="\Edaly_Character\UI\Edaly_Char_Mili_01.paa";
		model="\Edaly_Items_Assets_3\Suitpack\suitpack.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\1cl\cloth_army_1stcl_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="U_C_Mil_Base_01";
			containerClass="Supply140";
			mass=1;
		};
	};
	class U_S_C_Mil_1stCl_01: U_S_C_Mil_Base_01
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="[ERN] 1st Class";
		picture="\Edaly_Character\UI\Edaly_Char_Mili_01.paa";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\1cl\cloth_army_1stcl_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="U_C_Mil_1stCl_01";
			containerClass="Supply140";
			mass=1;
		};
	};
	class U_S_C_Mil_adj_01: U_S_C_Mil_Base_01
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="[ERN] Adjudant";
		picture="\Edaly_Character\UI\Edaly_Char_Mili_01.paa";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\adj\cloth_army_adj_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="U_C_Mil_adj_01";
			containerClass="Supply140";
			mass=1;
		};
	};
	class U_S_C_Mil_cpl_01: U_S_C_Mil_Base_01
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="[ERN] Corporal";
		picture="\Edaly_Character\UI\Edaly_Char_Mili_01.paa";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\cpl\cloth_army_cpl_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="U_C_Mil_cpl_01";
			containerClass="Supply140";
			mass=1;
		};
	};
	class U_S_C_Mil_cplsup_01: U_S_C_Mil_Base_01
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="[ERN] Corporal Sup";
		picture="\Edaly_Character\UI\Edaly_Char_Mili_01.paa";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\cplsup\cloth_army_cplsup_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="U_C_Mil_cplsup_01";
			containerClass="Supply140";
			mass=1;
		};
	};
	class U_S_C_Mil_cmd_01: U_S_C_Mil_Base_01
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="[ERN] Commander";
		picture="\Edaly_Character\UI\Edaly_Char_Mili_01.paa";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\cmd\cloth_army_cmd_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="U_C_Mil_cmd_01";
			containerClass="Supply140";
			mass=1;
		};
	};
	class U_S_C_Mil_col_01: U_S_C_Mil_Base_01
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="[ERN] Colonel";
		picture="\Edaly_Character\UI\Edaly_Char_Mili_01.paa";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\col\cloth_army_col_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="U_C_Mil_col_01";
			containerClass="Supply140";
			mass=1;
		};
	};
	class U_S_C_Mil_cpt_01: U_S_C_Mil_Base_01
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="[ERN] Captain";
		picture="\Edaly_Character\UI\Edaly_Char_Mili_01.paa";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\cpt\cloth_army_cpt_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="U_C_Mil_cpt_01";
			containerClass="Supply140";
			mass=1;
		};
	};
	class U_S_C_Mil_gen_01: U_S_C_Mil_Base_01
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="[ERN] General";
		picture="\Edaly_Character\UI\Edaly_Char_Mili_01.paa";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\gen\cloth_army_gen_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="U_C_Mil_gen_01";
			containerClass="Supply140";
			mass=1;
		};
	};
	class U_S_C_Mil_lt_01: U_S_C_Mil_Base_01
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="[ERN] Lieutenant";
		picture="\Edaly_Character\UI\Edaly_Char_Mili_01.paa";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\lt\cloth_army_lt_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="U_C_Mil_lt_01";
			containerClass="Supply140";
			mass=1;
		};
	};
	class U_S_C_Mil_sgt_01: U_S_C_Mil_Base_01
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="[ERN] Sergent";
		picture="\Edaly_Character\UI\Edaly_Char_Mili_01.paa";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\sgt\cloth_army_sgt_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="U_C_Mil_sgt_01";
			containerClass="Supply140";
			mass=1;
		};
	};
	class U_S_C_Mil_sgt2da_01: U_S_C_Mil_Base_01
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="[ERN] Sergent 2DA";
		picture="\Edaly_Character\UI\Edaly_Char_Mili_01.paa";
		hiddenSelections[] = {"camo","camo1","camo2","patch"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Military\data\sgt2da\cloth_army_sgt2da_co.paa","\Edaly_Character\Military\data\pants_main_co.paa","\Edaly_Character\Military\data\boots_army_co.paa","\Edaly_Character\Military\data\tag_co.paa"};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="U_C_Mil_sgt2da_01";
			containerClass="Supply140";
			mass=1;
		};
	};

	class F_S_C_Guer_01: Uniform_Base
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="[GRA] Uniform 01";
		picture="\Edaly_Character\UI\Edaly_Char_Guer_01.paa";
		model="\Edaly_Items_Assets_3\Suitpack\suitpack.p3d";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Guerillero\data\shirt_b_01_co.paa","\Edaly_Character\Guerillero\data\pants_b_01_co.paa","\Edaly_Character\Guerillero\data\boot_black_co.paa"};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="F_C_Guer_01";
			containerClass="Supply140";
			mass=1;
		};
	};
	class F_S_C_Guer_02: Uniform_Base
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="[GRA] Uniform 02";
		picture="\Edaly_Character\UI\Edaly_Char_Guer_02.paa";
		model="\Edaly_Items_Assets_3\Suitpack\suitpack.p3d";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Guerillero\data\shirt_co.paa","\Edaly_Character\Guerillero\data\pants_b_01_co.paa","\Edaly_Character\Guerillero\data\boot_black_co.paa"};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="F_C_Guer_02";
			containerClass="Supply140";
			mass=1;
		};
	};
	class F_S_C_Guer_03: Uniform_Base
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="[GRA] Uniform 03";
		picture="\Edaly_Character\UI\Edaly_Char_Guer_03.paa";
		model="\Edaly_Items_Assets_3\Suitpack\suitpack.p3d";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Guerillero\data\shirt_co.paa","\Edaly_Character\Guerillero\data\pants_co.paa","\Edaly_Character\Guerillero\data\boot_black_co.paa"};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="F_C_Guer_03";
			containerClass="Supply140";
			mass=1;
		};
	};
	class F_S_C_Policeman_Beige: Uniform_Base
	{
		author=$STR_EDALY_AUTHOR;
		scope=2;
		displayName="[PNN] Uniform (beige)";
		picture="\Edaly_Character\UI\Edaly_Char_Police_01.paa";
		model="\Edaly_Items_Assets_3\Suitpack\suitpack.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Edaly_Character\Police\data\cloth_beige_co.paa"};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="F_C_Policeman_Beige";
			containerClass="Supply140";
			mass=1;
		};
	};
	class Vest_S_C_Suitcase_01: V_HarnessOSpec_brn
	{
		author = $STR_EDALY_AUTHOR;
		scope = 2;
		displayName = "Briefcase";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_suitcase.paa";
		model = "Edaly_Character\Civilian\Backpack\Suitcase_01.p3d";
		class ItemInfo: VestItem
		{
			uniformModel = "Edaly_Character\Civilian\Backpack\Suitcase_01.p3d";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class Vest_S_C_Guer_01: V_HarnessOSpec_brn
	{
		author = $STR_EDALY_AUTHOR;
		scope = 2;
		displayName = "[GRA] Vest";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Item_suitcase.paa";
		model = "Edaly_Character\Guerillero\Guer_Vest_01_EL.p3d";
		class ItemInfo: VestItem
		{
			uniformModel = "Edaly_Character\Guerillero\Guer_Vest_01_EL.p3d";
			containerClass = "Supply30";
			mass = 30;
		};
	};
};
// S for Suitpack
