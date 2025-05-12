class CfgPatches
{
	class Edaly_Structures_Assets_1_Civil_Test
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
	class Edaly_Str_Apartment_Test_F: House_F
	{
		scope = 2;
		displayName = "Test_House";
        author = "GeK";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Structures";
		model = "Edaly_Structures_Assets_2\Test\Test_House\Test_House.p3d";
		mapSize = 7;
		cost = 40000;

		class AnimationSources
		{
			class Door_1_source
			{
				source = "user";
				animPeriod = 0.7;
				initPhase=0;
			};
		};

		class UserActions
		{
			class OpenDoors
            {
                displayName="Ouvrir Porte";
                position="Door_1_trigger";
                radius=2.500000;
				onlyForPlayer = 0;
                condition="(this animationPhase 'Door_1_rot' < 0.5) && ((this getVariable ['bis_disabled_Door_1',0]) isEqualTo 0)";
                statement="this animate [""Door_1_rot"", 1]";
            };
            class CloseDoors
            {
                displayName="Fermer Porte";
                position="Door_1_trigger";
                radius=2.500000;
				onlyForPlayer = 0;
                condition="this animationPhase ""Door_1_rot"" >= 0.5";
                statement="this animate [""Door_1_rot"", 0]";
            };
		};
		numberOfDoors = 1;
	};
};
