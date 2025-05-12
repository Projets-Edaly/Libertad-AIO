class CfgPatches
{
	class Edaly_Structures_Assets_1_Civil_Apartment_02
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
	class Edaly_Str_Apartment_02_F: House_F
	{
		scope = 2;
		displayName = "Appartement 02";
        author = "GeK";
		editorCategory = "EdCat_Edaly_Structures";
		editorSubcategory = "EdSubcat_Edaly_Civil";
		model = "Edaly_Structures_Assets_1\Civilian\Apartment\Apart02\Apartment_02.p3d";
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
			class Glass_1_source
			{
				source = "Hit";
				hitpoint = "Glass_1_hitpoint";
				raw = 1;
			};
			class Glass_2_source : Glass_1_source
			{
				hitpoint = "Glass_2_hitpoint";
			};
			class Glass_3_source : Glass_1_source
			{
				hitpoint = "Glass_3_hitpoint";
			};
			class Glass_4_source : Glass_1_source
			{
				hitpoint = "Glass_4_hitpoint";
			};
			class Glass_5_source : Glass_1_source
			{
				hitpoint = "Glass_5_hitpoint";
			};
			class Glass_6_source : Glass_1_source
			{
				hitpoint = "Glass_6_hitpoint";
			};
			class Glass_7_source : Glass_1_source
			{
				hitpoint = "Glass_7_hitpoint";
			};
			class Glass_8_source : Glass_1_source
			{
				hitpoint = "Glass_8_hitpoint";
			};
			class Glass_9_source : Glass_1_source
			{
				hitpoint = "Glass_9_hitpoint";
			};
        };
		class Hitpoints
		{
			class Glass_1_hitpoint
			{
				armor = 0.001;
				material = -1;
				name = "Glass_1";
				visual = "Glass_1_hide";
				passThrough = 0;
				radius = 0.4;
				convexComponent = "Glass_1_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1N_1100_2150";
						position = "Glass_1_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2
					{
						simulation = "particles";
						type = "BrokenGlass2N_1100_2150";
						position = "Glass_1_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3
					{
						simulation = "particles";
						type = "BrokenGlass3N_1100_2150";
						position = "Glass_1_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4
					{
						simulation = "particles";
						type = "BrokenGlass4N_1100_2150";
						position = "Glass_1_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5
					{
						simulation = "particles";
						type = "BrokenGlass5N_1100_2150";
						position = "Glass_1_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6
					{
						simulation = "particles";
						type = "BrokenGlass6N_1100_2150";
						position = "Glass_1_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7
					{
						simulation = "particles";
						type = "BrokenGlass7N_1100_2150";
						position = "Glass_1_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass1S
					{
						simulation = "particles";
						type = "BrokenGlass1S_1100_2150";
						position = "Glass_1_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2S
					{
						simulation = "particles";
						type = "BrokenGlass2S_1100_2150";
						position = "Glass_1_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3S
					{
						simulation = "particles";
						type = "BrokenGlass3S_1100_2150";
						position = "Glass_1_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4S
					{
						simulation = "particles";
						type = "BrokenGlass4S_1100_2150";
						position = "Glass_1_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5S
					{
						simulation = "particles";
						type = "BrokenGlass5S_1100_2150";
						position = "Glass_1_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6S
					{
						simulation = "particles";
						type = "BrokenGlass6S_1100_2150";
						position = "Glass_1_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7S
					{
						simulation = "particles";
						type = "BrokenGlass7S_1100_2150";
						position = "Glass_1_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
				};
			};
			class Glass_2_hitpoint
			{
				armor = 0.001;
				material = -1;
				name = "Glass_2";
				visual = "Glass_2_hide";
				passThrough = 0;
				radius = 0.4;
				convexComponent = "Glass_2_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1N_1250_2200";
						position = "Glass_2_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2
					{
						simulation = "particles";
						type = "BrokenGlass2N_1250_2200";
						position = "Glass_2_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3
					{
						simulation = "particles";
						type = "BrokenGlass3N_1250_2200";
						position = "Glass_2_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4
					{
						simulation = "particles";
						type = "BrokenGlass4N_1250_2200";
						position = "Glass_2_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5
					{
						simulation = "particles";
						type = "BrokenGlass5N_1250_2200";
						position = "Glass_2_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6
					{
						simulation = "particles";
						type = "BrokenGlass6N_1250_2200";
						position = "Glass_2_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7
					{
						simulation = "particles";
						type = "BrokenGlass7N_1250_2200";
						position = "Glass_2_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass1S
					{
						simulation = "particles";
						type = "BrokenGlass1S_1250_2200";
						position = "Glass_2_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2S
					{
						simulation = "particles";
						type = "BrokenGlass2S_1250_2200";
						position = "Glass_2_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3S
					{
						simulation = "particles";
						type = "BrokenGlass3S_1250_2200";
						position = "Glass_2_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4S
					{
						simulation = "particles";
						type = "BrokenGlass4S_1250_2200";
						position = "Glass_2_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5S
					{
						simulation = "particles";
						type = "BrokenGlass5S_1250_2200";
						position = "Glass_2_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6S
					{
						simulation = "particles";
						type = "BrokenGlass6S_1250_2200";
						position = "Glass_2_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7S
					{
						simulation = "particles";
						type = "BrokenGlass7S_1250_2200";
						position = "Glass_2_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
				};
			};
			class Glass_3_hitpoint
			{
				armor = 0.001;
				material = -1;
				name = "Glass_3";
				visual = "Glass_3_hide";
				passThrough = 0;
				radius = 0.4;
				convexComponent = "Glass_3_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1N_1250_2200";
						position = "Glass_3_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2
					{
						simulation = "particles";
						type = "BrokenGlass2N_1250_2200";
						position = "Glass_3_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3
					{
						simulation = "particles";
						type = "BrokenGlass3N_1250_2200";
						position = "Glass_3_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4
					{
						simulation = "particles";
						type = "BrokenGlass4N_1250_2200";
						position = "Glass_3_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5
					{
						simulation = "particles";
						type = "BrokenGlass5N_1250_2200";
						position = "Glass_3_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6
					{
						simulation = "particles";
						type = "BrokenGlass6N_1250_2200";
						position = "Glass_3_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7
					{
						simulation = "particles";
						type = "BrokenGlass7N_1250_2200";
						position = "Glass_3_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass1S
					{
						simulation = "particles";
						type = "BrokenGlass1S_1250_2200";
						position = "Glass_3_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2S
					{
						simulation = "particles";
						type = "BrokenGlass2S_1250_2200";
						position = "Glass_3_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3S
					{
						simulation = "particles";
						type = "BrokenGlass3S_1250_2200";
						position = "Glass_3_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4S
					{
						simulation = "particles";
						type = "BrokenGlass4S_1250_2200";
						position = "Glass_3_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5S
					{
						simulation = "particles";
						type = "BrokenGlass5S_1250_2200";
						position = "Glass_3_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6S
					{
						simulation = "particles";
						type = "BrokenGlass6S_1250_2200";
						position = "Glass_3_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7S
					{
						simulation = "particles";
						type = "BrokenGlass7S_1250_2200";
						position = "Glass_3_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
				};
			};
			class Glass_4_hitpoint
			{
				armor = 0.001;
				material = -1;
				name = "Glass_4";
				visual = "Glass_4_hide";
				passThrough = 0;
				radius = 0.4;
				convexComponent = "Glass_4_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1N_1250_2200";
						position = "Glass_4_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2
					{
						simulation = "particles";
						type = "BrokenGlass2N_1250_2200";
						position = "Glass_4_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3
					{
						simulation = "particles";
						type = "BrokenGlass3N_1250_2200";
						position = "Glass_4_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4
					{
						simulation = "particles";
						type = "BrokenGlass4N_1250_2200";
						position = "Glass_4_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5
					{
						simulation = "particles";
						type = "BrokenGlass5N_1250_2200";
						position = "Glass_4_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6
					{
						simulation = "particles";
						type = "BrokenGlass6N_1250_2200";
						position = "Glass_4_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7
					{
						simulation = "particles";
						type = "BrokenGlass7N_1250_2200";
						position = "Glass_4_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass1S
					{
						simulation = "particles";
						type = "BrokenGlass1S_1250_2200";
						position = "Glass_4_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2S
					{
						simulation = "particles";
						type = "BrokenGlass2S_1250_2200";
						position = "Glass_4_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3S
					{
						simulation = "particles";
						type = "BrokenGlass3S_1250_2200";
						position = "Glass_4_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4S
					{
						simulation = "particles";
						type = "BrokenGlass4S_1250_2200";
						position = "Glass_4_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5S
					{
						simulation = "particles";
						type = "BrokenGlass5S_1250_2200";
						position = "Glass_4_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6S
					{
						simulation = "particles";
						type = "BrokenGlass6S_1250_2200";
						position = "Glass_4_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7S
					{
						simulation = "particles";
						type = "BrokenGlass7S_1250_2200";
						position = "Glass_4_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
				};
			};
			class Glass_5_hitpoint
			{
				armor = 0.001;
				material = -1;
				name = "Glass_5";
				visual = "Glass_5_hide";
				passThrough = 0;
				radius = 0.4;
				convexComponent = "Glass_5_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1N_1250_2200";
						position = "Glass_5_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2
					{
						simulation = "particles";
						type = "BrokenGlass2N_1250_2200";
						position = "Glass_5_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3
					{
						simulation = "particles";
						type = "BrokenGlass3N_1250_2200";
						position = "Glass_5_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4
					{
						simulation = "particles";
						type = "BrokenGlass4N_1250_2200";
						position = "Glass_5_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5
					{
						simulation = "particles";
						type = "BrokenGlass5N_1250_2200";
						position = "Glass_5_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6
					{
						simulation = "particles";
						type = "BrokenGlass6N_1250_2200";
						position = "Glass_5_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7
					{
						simulation = "particles";
						type = "BrokenGlass7N_1250_2200";
						position = "Glass_5_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass1S
					{
						simulation = "particles";
						type = "BrokenGlass1S_1250_2200";
						position = "Glass_5_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2S
					{
						simulation = "particles";
						type = "BrokenGlass2S_1250_2200";
						position = "Glass_5_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3S
					{
						simulation = "particles";
						type = "BrokenGlass3S_1250_2200";
						position = "Glass_5_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4S
					{
						simulation = "particles";
						type = "BrokenGlass4S_1250_2200";
						position = "Glass_5_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5S
					{
						simulation = "particles";
						type = "BrokenGlass5S_1250_2200";
						position = "Glass_5_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6S
					{
						simulation = "particles";
						type = "BrokenGlass6S_1250_2200";
						position = "Glass_5_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7S
					{
						simulation = "particles";
						type = "BrokenGlass7S_1250_2200";
						position = "Glass_5_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
				};
			};
			class Glass_6_hitpoint
			{
				armor = 0.001;
				material = -1;
				name = "Glass_6";
				visual = "Glass_6_hide";
				passThrough = 0;
				radius = 0.4;
				convexComponent = "Glass_6_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1N_1250_2200";
						position = "Glass_6_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2
					{
						simulation = "particles";
						type = "BrokenGlass2N_1250_2200";
						position = "Glass_6_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3
					{
						simulation = "particles";
						type = "BrokenGlass3N_1250_2200";
						position = "Glass_6_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4
					{
						simulation = "particles";
						type = "BrokenGlass4N_1250_2200";
						position = "Glass_6_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5
					{
						simulation = "particles";
						type = "BrokenGlass5N_1250_2200";
						position = "Glass_6_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6
					{
						simulation = "particles";
						type = "BrokenGlass6N_1250_2200";
						position = "Glass_6_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7
					{
						simulation = "particles";
						type = "BrokenGlass7N_1250_2200";
						position = "Glass_6_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass1S
					{
						simulation = "particles";
						type = "BrokenGlass1S_1250_2200";
						position = "Glass_6_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2S
					{
						simulation = "particles";
						type = "BrokenGlass2S_1250_2200";
						position = "Glass_6_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3S
					{
						simulation = "particles";
						type = "BrokenGlass3S_1250_2200";
						position = "Glass_6_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4S
					{
						simulation = "particles";
						type = "BrokenGlass4S_1250_2200";
						position = "Glass_6_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5S
					{
						simulation = "particles";
						type = "BrokenGlass5S_1250_2200";
						position = "Glass_6_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6S
					{
						simulation = "particles";
						type = "BrokenGlass6S_1250_2200";
						position = "Glass_6_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7S
					{
						simulation = "particles";
						type = "BrokenGlass7S_1250_2200";
						position = "Glass_6_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
				};
			};
			class Glass_7_hitpoint
			{
				armor = 0.001;
				material = -1;
				name = "Glass_7";
				visual = "Glass_7_hide";
				passThrough = 0;
				radius = 0.4;
				convexComponent = "Glass_7_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1N_1250_2200";
						position = "Glass_7_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2
					{
						simulation = "particles";
						type = "BrokenGlass2N_1250_2200";
						position = "Glass_7_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3
					{
						simulation = "particles";
						type = "BrokenGlass3N_1250_2200";
						position = "Glass_7_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4
					{
						simulation = "particles";
						type = "BrokenGlass4N_1250_2200";
						position = "Glass_7_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5
					{
						simulation = "particles";
						type = "BrokenGlass5N_1250_2200";
						position = "Glass_7_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6
					{
						simulation = "particles";
						type = "BrokenGlass6N_1250_2200";
						position = "Glass_7_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7
					{
						simulation = "particles";
						type = "BrokenGlass7N_1250_2200";
						position = "Glass_7_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass1S
					{
						simulation = "particles";
						type = "BrokenGlass1S_1250_2200";
						position = "Glass_7_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2S
					{
						simulation = "particles";
						type = "BrokenGlass2S_1250_2200";
						position = "Glass_7_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3S
					{
						simulation = "particles";
						type = "BrokenGlass3S_1250_2200";
						position = "Glass_7_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4S
					{
						simulation = "particles";
						type = "BrokenGlass4S_1250_2200";
						position = "Glass_7_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5S
					{
						simulation = "particles";
						type = "BrokenGlass5S_1250_2200";
						position = "Glass_7_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6S
					{
						simulation = "particles";
						type = "BrokenGlass6S_1250_2200";
						position = "Glass_7_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7S
					{
						simulation = "particles";
						type = "BrokenGlass7S_1250_2200";
						position = "Glass_7_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
				};
			};
			class Glass_8_hitpoint
			{
				armor = 0.001;
				material = -1;
				name = "Glass_8";
				visual = "Glass_8_hide";
				passThrough = 0;
				radius = 0.4;
				convexComponent = "Glass_8_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1N_1250_2200";
						position = "Glass_8_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2
					{
						simulation = "particles";
						type = "BrokenGlass2N_1250_2200";
						position = "Glass_8_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3
					{
						simulation = "particles";
						type = "BrokenGlass3N_1250_2200";
						position = "Glass_8_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4
					{
						simulation = "particles";
						type = "BrokenGlass4N_1250_2200";
						position = "Glass_8_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5
					{
						simulation = "particles";
						type = "BrokenGlass5N_1250_2200";
						position = "Glass_8_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6
					{
						simulation = "particles";
						type = "BrokenGlass6N_1250_2200";
						position = "Glass_8_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7
					{
						simulation = "particles";
						type = "BrokenGlass7N_1250_2200";
						position = "Glass_8_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass1S
					{
						simulation = "particles";
						type = "BrokenGlass1S_1250_2200";
						position = "Glass_8_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2S
					{
						simulation = "particles";
						type = "BrokenGlass2S_1250_2200";
						position = "Glass_8_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3S
					{
						simulation = "particles";
						type = "BrokenGlass3S_1250_2200";
						position = "Glass_8_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4S
					{
						simulation = "particles";
						type = "BrokenGlass4S_1250_2200";
						position = "Glass_8_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5S
					{
						simulation = "particles";
						type = "BrokenGlass5S_1250_2200";
						position = "Glass_8_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6S
					{
						simulation = "particles";
						type = "BrokenGlass6S_1250_2200";
						position = "Glass_8_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7S
					{
						simulation = "particles";
						type = "BrokenGlass7S_1250_2200";
						position = "Glass_8_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
				};
			};
			class Glass_9_hitpoint
			{
				armor = 0.001;
				material = -1;
				name = "Glass_9";
				visual = "Glass_9_hide";
				passThrough = 0;
				radius = 0.4;
				convexComponent = "Glass_9_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1N_1250_2200";
						position = "Glass_9_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2
					{
						simulation = "particles";
						type = "BrokenGlass2N_1250_2200";
						position = "Glass_9_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3
					{
						simulation = "particles";
						type = "BrokenGlass3N_1250_2200";
						position = "Glass_9_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4
					{
						simulation = "particles";
						type = "BrokenGlass4N_1250_2200";
						position = "Glass_9_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5
					{
						simulation = "particles";
						type = "BrokenGlass5N_1250_2200";
						position = "Glass_9_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6
					{
						simulation = "particles";
						type = "BrokenGlass6N_1250_2200";
						position = "Glass_9_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7
					{
						simulation = "particles";
						type = "BrokenGlass7N_1250_2200";
						position = "Glass_9_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass1S
					{
						simulation = "particles";
						type = "BrokenGlass1S_1250_2200";
						position = "Glass_9_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2S
					{
						simulation = "particles";
						type = "BrokenGlass2S_1250_2200";
						position = "Glass_9_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3S
					{
						simulation = "particles";
						type = "BrokenGlass3S_1250_2200";
						position = "Glass_9_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4S
					{
						simulation = "particles";
						type = "BrokenGlass4S_1250_2200";
						position = "Glass_9_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5S
					{
						simulation = "particles";
						type = "BrokenGlass5S_1250_2200";
						position = "Glass_9_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6S
					{
						simulation = "particles";
						type = "BrokenGlass6S_1250_2200";
						position = "Glass_9_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7S
					{
						simulation = "particles";
						type = "BrokenGlass7S_1250_2200";
						position = "Glass_9_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
				};
			};
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
		};
		numberOfDoors = 9;
	};
};