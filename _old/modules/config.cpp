class CfgPatches
{
	class Edaly_Structures_Assets_2_Civil_module_test
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
	class Edaly_Str_module_test_01_F: House_F
	{
		scope = 2;
		displayName = "module_test";
        author = "GeK";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Structures";
		model = "Edaly_Structures_Assets_2\Civilian\Houses\modules\archdoor_woodfence.p3d";
		mapSize = 7;
		cost = 40000;

		class AnimationSources
		{
			class door_front_source
			{
				source = "user";
				animPeriod = 0.7;
				initPhase=0;
				sound = "GenericDoorsSound";
			};
			class Door_1_source: door_front_source {};
			class Door_2_source: door_front_source {};
			class Door_3_source: door_front_source {};
			class Door_4_source: door_front_source {};
		};
	};
};
