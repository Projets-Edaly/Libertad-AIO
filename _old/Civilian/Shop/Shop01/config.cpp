class CfgPatches
{
	class Edaly_Structures_Assets_1_Civil_Shop_01
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Structures_F","Edaly_Editor_Categories"};
	};
};
class CfgVehicles
{
	class House;
	class House_F: House{};
	class Land_Edaly_Shop_01_F: House_F
	{
		scope = 2;
		mapSize = 7;
		cost = 40000;
		author = "Edaly - Hugo";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Structures";
		destrType = "DestructNo";
		displayName = "Edaly Shop 01";
		model = "\Edaly_Structures_Assets_1\Civilian\Shop\Shop01\Land_Edaly_Shop_01_F.p3d";
		numberOfDoors = 4;


		class AnimationSources
		{
			class door_1_source
			{
				source = "user";
				animPeriod = 0.7;
				initPhase=0;
				sound = "GenericDoorsSound";
			};
			class door_2_source: door_1_source {};
			class door_3_source: door_1_source {};
			class door_4_source: door_1_source {};
		};
	};

	class Land_Edaly_Shop_02_F: Land_Edaly_Shop_01_F
	{
		scope = 2;
		displayName = "Edaly Shop 02";
		model = "\Edaly_Structures_Assets_1\Civilian\Shop\Shop01\Land_Edaly_Shop_02_F.p3d";
		numberOfDoors = 4;
	};

	class Land_Edaly_Shop_03_F: Land_Edaly_Shop_01_F
	{
		scope = 2;
		displayName = "Edaly Shop 03";
		model = "\Edaly_Structures_Assets_1\Civilian\Shop\Shop01\Land_Edaly_Shop_03_F.p3d";
		numberOfDoors = 4;
	};
	
	class Land_Edaly_Shop_04_F: Land_Edaly_Shop_01_F
	{
		scope = 2;
		displayName = "Edaly Shop 04";
		model = "\Edaly_Structures_Assets_1\Civilian\Shop\Shop01\Land_Edaly_Shop_04_F.p3d";
		numberOfDoors = 4;
	};
};
