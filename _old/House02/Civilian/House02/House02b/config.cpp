class CfgPatches
{
	class Edaly_Structures_Assets_1_Civil_House02b
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
	class Edaly_Str_House02b_F: House_F
	{
		scope = 2;
		displayName = "Maison de Campagne 02b";
        author = "GeK";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Structures";
		model = "Edaly_Structures_Assets_4\Civilian\House02\House02b\House02b.p3d";
		mapSize = 7;
		cost = 40000;

		class AnimationSources
		{
			class Door_1_source
			{
				source = "user";
				animPeriod = 0.7;
				initPhase=0;
				sound = "GenericDoorsSound";
			};
			class Door_2_source: Door_1_source {};
			class Door_3_source: Door_1_source {};
			class Door_4_source: Door_1_source {};
			class Door_5_source: Door_1_source {};
		};
	};
};
