class CfgPatches
{
	class Edaly_Structures_Assets_1_Civil_Apartment_25
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
	class Edaly_Str_Apartment_25_F: House_F
	{
		scope = 2;
		displayName = "Appartement 25";
        author = "GeK";
		editorCategory = "EdCat_Edaly_Structures";
		editorSubcategory = "EdSubcat_Edaly_Civil";
		model = "Edaly_Structures_Assets_1\Civilian\Apartment\Apart25\Apartment_25.p3d";
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
            class Door_5_source: door_front_source {};
            class Door_6_source: door_front_source {};
            class Door_7_source: door_front_source {};
            class Door_8_source: door_front_source {};
            class Door_9_source: door_front_source {};
            class Door_10_source: door_front_source {};
            class Door_11_source: door_front_source {};
            class Door_12_source: door_front_source {};
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
            class OpenDoors5 : OpenDoors
            {
                position="Door_5_trigger";
                condition="(this animationPhase 'Door_5_rot' < 0.5) && ((this getVariable ['bis_disabled_Door_5',0]) isEqualTo 0)";
                statement="this animate [""Door_5_rot"", 1]";
            };
            class CloseDoors5 : CloseDoors
            {
                position="Door_5_trigger";
                condition="this animationPhase ""Door_5_rot"" >= 0.5";
                statement="this animate [""Door_5_rot"", 0]";
            };
            class OpenDoors6 : OpenDoors
            {
                position="Door_6_trigger";
                condition="(this animationPhase 'Door_6_rot' < 0.5) && ((this getVariable ['bis_disabled_Door_6',0]) isEqualTo 0)";
                statement="this animate [""Door_6_rot"", 1]";
            };
            class CloseDoors6 : CloseDoors
            {
                position="Door_6_trigger";
                condition="this animationPhase ""Door_6_rot"" >= 0.5";
                statement="this animate [""Door_6_rot"", 0]";
            };
            class OpenDoors7 : OpenDoors
            {
                position="Door_7_trigger";
                condition="(this animationPhase 'Door_7_rot' < 0.5) && ((this getVariable ['bis_disabled_Door_7',0]) isEqualTo 0)";
                statement="this animate [""Door_7_rot"", 1]";
            };
            class CloseDoors7 : CloseDoors
            {
                position="Door_7_trigger";
                condition="this animationPhase ""Door_7_rot"" >= 0.5";
                statement="this animate [""Door_7_rot"", 0]";
            };
            class OpenDoors8 : OpenDoors
            {
                position="Door_8_trigger";
                condition="(this animationPhase 'Door_8_rot' < 0.5) && ((this getVariable ['bis_disabled_Door_8',0]) isEqualTo 0)";
                statement="this animate [""Door_8_rot"", 1]";
            };
            class CloseDoors8 : CloseDoors
            {
                position="Door_8_trigger";
                condition="this animationPhase ""Door_8_rot"" >= 0.5";
                statement="this animate [""Door_8_rot"", 0]";
            };
            class OpenDoors9 : OpenDoors
            {
                position="Door_9_trigger";
                condition="(this animationPhase 'Door_9_rot' < 0.5) && ((this getVariable ['bis_disabled_Door_9',0]) isEqualTo 0)";
                statement="this animate [""Door_9_rot"", 1]";
            };
            class CloseDoors9 : CloseDoors
            {
                position="Door_9_trigger";
                condition="this animationPhase ""Door_9_rot"" >= 0.5";
                statement="this animate [""Door_9_rot"", 0]";
            };
            class OpenDoors10 : OpenDoors
            {
                position="Door_10_trigger";
                condition="(this animationPhase 'Door_10_rot' < 0.5) && ((this getVariable ['bis_disabled_Door_10',0]) isEqualTo 0)";
                statement="this animate [""Door_10_rot"", 1]";
            };
            class CloseDoors10 : CloseDoors
            {
                position="Door_10_trigger";
                condition="this animationPhase ""Door_10_rot"" >= 0.5";
                statement="this animate [""Door_10_rot"", 0]";
            };
            class OpenDoors11 : OpenDoors
            {
                position="Door_11_trigger";
                condition="(this animationPhase 'Door_11_rot' < 0.5) && ((this getVariable ['bis_disabled_Door_11',0]) isEqualTo 0)";
                statement="this animate [""Door_11_rot"", 1]";
            };
            class CloseDoors11 : CloseDoors
            {
                position="Door_11_trigger";
                condition="this animationPhase ""Door_11_rot"" >= 0.5";
                statement="this animate [""Door_11_rot"", 0]";
            };
            class OpenDoors12 : OpenDoors
            {
                position="Door_12_trigger";
                condition="(this animationPhase 'Door_12_rot' < 0.5) && ((this getVariable ['bis_disabled_Door_12',0]) isEqualTo 0)";
                statement="this animate [""Door_12_rot"", 1]";
            };
            class CloseDoors12 : CloseDoors
            {
                position="Door_12_trigger";
                condition="this animationPhase ""Door_12_rot"" >= 0.5";
                statement="this animate [""Door_12_rot"", 0]";
            };
		};
		numberOfDoors = 13;
	};
};