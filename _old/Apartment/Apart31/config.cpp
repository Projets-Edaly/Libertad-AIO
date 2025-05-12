class CfgPatches
{
	class Edaly_Structures_Assets_1_Civil_Apartment_31
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Structures_F"};
	};
};

class CfgVehicles
{
	class House;
	class House_F: House{};
	class Edaly_Str_Apartment_31_F: House_F
	{
		scope = 2;
		displayName = "Appartement 31";
        author = "GeK";
		editorCategory = "EdCat_Edaly_Structures";
		editorSubcategory = "EdSubcat_Edaly_Civil";
		model = "Edaly_Structures_Assets_1\Civilian\Apartment\Apart31\Apartment_31.p3d";
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

		class UserActions
		{
			class OpenDoors
            {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "$STR_DN_OUT_O_DOOR";
                position="door_front_trigger";
                radius=1.5;
				onlyForPlayer = 0;
                condition="(this animationPhase 'door_front_rot' < 0.5) && ((this getVariable ['bis_disabled_door_front',0]) isEqualTo 0)";
                statement="this animate [""door_front_rot"", 1]";
            };
            class CloseDoors
            {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "$STR_DN_OUT_C_DOOR";
                position="door_front_trigger";
                radius=1.5;
				onlyForPlayer = 0;
                condition="this animationPhase ""door_front_rot"" >= 0.5";
                statement="this animate [""door_front_rot"", 0]";
            };
            class OpenDoors1 : OpenDoors
            {
                position="Door_1_trigger";
                condition="(this animationPhase 'Door_1_rot' < 0.5) && ((this getVariable ['bis_disabled_Door_1',0]) isEqualTo 0)";
                statement="this animate [""Door_1_rot"", 1]";
            };
            class CloseDoors1 : CloseDoors
            {
                position="Door_1_trigger";
                condition="this animationPhase ""Door_1_rot"" >= 0.5";
                statement="this animate [""Door_1_rot"", 0]";
            };
            class OpenDoors2 : OpenDoors
            {
                position="Door_2_trigger";
                condition="(this animationPhase 'Door_2_rot' < 0.5) && ((this getVariable ['bis_disabled_Door_2',0]) isEqualTo 0)";
                statement="this animate [""Door_2_rot"", 1]";
            };
            class CloseDoors2 : CloseDoors
            {
                position="Door_2_trigger";
                condition="this animationPhase ""Door_2_rot"" >= 0.5";
                statement="this animate [""Door_2_rot"", 0]";
            };
            class OpenDoors3 : OpenDoors
            {
                position="Door_3_trigger";
                condition="(this animationPhase 'Door_3_rot' < 0.5) && ((this getVariable ['bis_disabled_Door_3',0]) isEqualTo 0)";
                statement="this animate [""Door_3_rot"", 1]";
            };
            class CloseDoors3 : CloseDoors
            {
                position="Door_3_trigger";
                condition="this animationPhase ""Door_3_rot"" >= 0.5";
                statement="this animate [""Door_3_rot"", 0]";
            };
            class OpenDoors4 : OpenDoors
            {
                position="Door_4_trigger";
                condition="(this animationPhase 'Door_4_rot' < 0.5) && ((this getVariable ['bis_disabled_Door_4',0]) isEqualTo 0)";
                statement="this animate [""Door_4_rot"", 1]";
            };
            class CloseDoors4 : CloseDoors
            {
                position="Door_4_trigger";
                condition="this animationPhase ""Door_4_rot"" >= 0.5";
                statement="this animate [""Door_4_rot"", 0]";
            };
		};
		numberOfDoors = 5;
	};
};