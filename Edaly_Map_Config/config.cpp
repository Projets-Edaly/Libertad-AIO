
class CfgPatches
{
	class Edaly_Map_Config
	{
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredAddons[]={"Edaly_Map_Alpha","A3_Sounds_F_Exp"};
		preLoadAddons[] ={"Edaly_Map_Alpha"};
		requiredVersion=ARMA3_VERSION;
		units[]={};
		weapons[]={};
	};
};
class CfgWorlds
{
	class WaterExPars;
	class CfgEnvSpatialSounds;
	class DefaultWorld
	{};

	class CAWorld: DefaultWorld
	{
		class Grid{};
		class WaterExPars : WaterExPars {
			fogDensity = 0.03;
			fogColor[]={0.012, 0.118, 0.118};
			fogColorExtinctionSpeed[] = {0.32814, 0.0149, 0.00511};
			ligtExtinctionSpeed[] = {0.32814, 0.0149, 0.00511};
			diffuseLigtExtinctionSpeed[] = {0.36814, 0.0449, 0.02511};
			fogGradientCoefs[] = {0.35, 1.0, 1.7};
			fogColorLightInfluence[] = {0.82, 0.22, 1.2};
			shadowIntensity = 0.0;
			ssReflectionStrength = 0.85;
			ssReflectionMaxJitter = 1.0;
			ssReflectionRippleInfluence = 0.2;
			ssReflectionEdgeFadingCoef = 10.0;
			ssReflectionDistFadingCoef = 4.0;
			refractionMinCoef = 0.03;
			refractionMaxCoef = 0.14;
			refractionMaxDist = 5.1;
			specularMaxIntensity = 100;
			specularPowerOvercast0 = 750;
			specularPowerOvercast1 = 50;
			specularNormalModifyCoef = 0.015;
			foamAroundObjectsIntensity = 0.15;
			foamAroundObjectsFadeCoef = 8.0;
			foamColorCoef = 2.0;
			foamDeformationCoef = 0.02;
			foamTextureCoef = 0.2;
			foamTimeMoveSpeed = 0.2;
			foamTimeMoveAmount = 0.1;
			shoreDarkeningMaxCoef = 0.45;
			shoreDarkeningOffset = 0.36;
			shoreDarkeningGradient = 0.08;
			shoreWaveTimeScale = 0.8;
			shoreWaveShifDerivativeOffset = -0.8;
			shoreFoamIntensity = 0.25;
			shoreMaxWaveHeight = 0.15;
			shoreWetLayerReflectionIntensity = 0.55;
		};
	};

	class Edaly_Map_Alpha: CAWorld
	{
		description = $STR_EDALY_DESCRIPTION;
		loadingTexts[] =
		{
			$STR_EDALY_LOADINGTEXT_1,
			$STR_EDALY_LOADINGTEXT_2,
			$STR_EDALY_LOADINGTEXT_3,
			$STR_EDALY_LOADINGTEXT_4
		};

		minHeight = -10;
		maxHillsAltitude = 450;
		safePositionAnchor[] = {3100,5500};
		centerPosition[] = {4242,3705,1};
		enableBloodSplashes = 1;
		enableTracks = 1;
		startTime = "17:00";
		startDate = "14/03/1962";
		class Names
		{
			class Marila
			{
				name = $STR_EDALY_CITY_MARILLA;
				position[] = {5749.84,3278.37};
				type = "NameCityCapital";
				radiusA = 400.0;
				radiusB = 120.0;
				angle = 0.0;
			};
			class SantaLuz
			{
				name = $STR_EDALY_CITY_SANTA_LUZ;
				position[] = {2574.17,4099.93};
				type = "NameCity";
				radiusA = 300.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class GranCallao
			{
				name = $STR_EDALY_CITY_GRAN_CALLAO;
				position[] = {4295.46,2485.25};
				type = "NameCity";
				radiusA = 300.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class Campeones
			{
				name = $STR_EDALY_CITY_CAMPEONES;
				position[] = {5300.91,4158.42};
				type = "NameVillage";
				radiusA = 300.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class Pajana
			{
				name = $STR_EDALY_CITY_PAJANA;
				position[] = {4553.07,3376.13};
				type = "NameVillage";
				radiusA = 300.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class Soledad
			{
				name = $STR_EDALY_CITY_SOLEDAD;
				position[] = {3143.91,3254.05};
				type = "NameVillage";
				radiusA = 200.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class OldAirstrip
			{
				name = $STR_EDALY_CITY_ST_GEORGE_AIRSTRIP;
				position[] = {4394.30,1781.21};
				type = "Airport";
				radiusA = 300.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class Mine01
			{
				name = $STR_EDALY_CITY_MINE;
				position[] = {3622.61,5280.4,0};
				type = "NameVillage";
				radiusA = 400.0;
				radiusB = 120.0;
				angle = 0.0;
			};
			class SulfurLake
			{
				name = $STR_EDALY_CITY_AZUFRE;
				position[] = {3473.22,4020.86};
				type = "NameVillage";
				radiusA = 400.0;
				radiusB = 120.0;
				angle = 0.0;
			};
			class BaieCapitale
			{
				name = $STR_EDALY_CITY_LA_BAHIA_DEL_DRAGON;
				position[] = {4736.28,2475.68};
				type = "NameVillage";
				radiusA = 450.0;
				radiusB = 150.0;
				angle = 0.0;
			};
		};
		class CfgEnvSounds;
		class EnvSounds: CfgEnvSounds
		{
			soundSetEnvironment[] =
			{
				"ForestMorning_SoundSet",
				"ForestAfternoon_SoundSet",
				"ForestNight_SoundSet",
				"HousesDay_SoundSet",
				"HousesNight_SoundSet",
				"MeadowsDay_SoundSet",
				"MeadowsNight_SoundSet",
				"WindForest_Low_SoundSet",
				"WindForest_High_SoundSet",
				"WindMeadows_Low_SoundSet",
				"WindMeadows_High_SoundSet",
				"WindHouses_Low_SoundSet",
				"WindHouses_High_SoundSet",
				"RainForest_Low_SoundSet",
				"RainForest_Medium_SoundSet",
				"RainForest_High_SoundSet",
				"RainMeadows_Low_SoundSet",
				"RainMeadows_Medium_SoundSet",
				"RainMeadows_High_SoundSet",
				"RainHouses_High_SoundSet",
				"Sea_SoundSet",
				"Coast_SoundSet",
				"Wind_Generic_Low_SoundSet",
				"Wind_Generic_High_SoundSet"
			};
			class CfgEnvSpatialSounds: CfgEnvSpatialSounds
			{
				class sound_shrub_smallleaves_1
				{
					memPoint = "sound_shrub_smallleaves_1";
					soundSets[] = {"Rain_PlantA_Light_SoundSet","Rain_PlantA_Medium_SoundSet","Rain_PlantA_Heavy_SoundSet","Insect_Day_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_swamps_trees_1
				{
					memPoint = "sound_swamps_trees_1";
					soundSets[] = {"Swamps_SoundSet","Swamps_SoundSet","Swamps_SoundSet","Swamps_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_shrub_smallleaves_2
				{
					memPoint = "sound_shrub_smallleaves_2";
					soundSets[] = {"Rain_PlantA_Light_SoundSet","Rain_PlantA_Medium_SoundSet","Rain_PlantA_Heavy_SoundSet","Insect_Day_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_shrub_smallleaves_3
				{
					memPoint = "sound_shrub_smallleaves_3";
					soundSets[] = {"Rain_PlantA_Light_SoundSet","Rain_PlantA_Medium_SoundSet","Rain_PlantA_Heavy_SoundSet","Insect_Day_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_shrub_mediumleaves_1
				{
					memPoint = "sound_shrub_mediumleaves_1";
					soundSets[] = {"Rain_PlantB_Light_SoundSet","Rain_PlantB_Medium_SoundSet","Rain_PlantB_Heavy_SoundSet","Insect_Day_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_shrub_bigleaves_1
				{
					memPoint = "sound_shrub_bigleaves_1";
					soundSets[] = {"Rain_PlantC_Light_SoundSet","Rain_PlantC_Medium_SoundSet","Rain_PlantC_Heavy_SoundSet","Insect_Day_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_tree_bigleaves_1
				{
					memPoint = "sound_tree_bigleaves_1";
					soundSets[] = {"Rain_PlantC_Light_SoundSet","Rain_PlantC_Medium_SoundSet","Rain_PlantC_Heavy_SoundSet","Insect_Day_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_smalltree_mediumleaves_1
				{
					memPoint = "sound_smalltree_mediumleaves_1";
					soundSets[] = {"Rain_Tree_Light_SoundSet","Rain_Tree_Medium_SoundSet","Rain_Tree_Heavy_SoundSet","Wind_LeavesC_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_smalltree_smallleaves_1
				{
					memPoint = "sound_smalltree_smallleaves_1";
					soundSets[] = {"Rain_SmallTree_Light_SoundSet","Rain_SmallTree_Medium_SoundSet","Rain_SmallTree_Heavy_SoundSet","Wind_LeavesA_Narrow_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_tree_smallleaves_1
				{
					memPoint = "sound_tree_smallleaves_1";
					soundSets[] = {"Rain_Tree_Light_SoundSet","Rain_Tree_Medium_SoundSet","Rain_Tree_Heavy_SoundSet","Wind_LeavesA_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_tree_mediumleaves_1
				{
					memPoint = "sound_tree_mediumleaves_1";
					soundSets[] = {"Rain_Tree_Light_SoundSet","Rain_Tree_Light_SoundSet","Rain_Tree_Light_SoundSet","Wind_LeavesC_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_widetree_smallleaves_1
				{
					memPoint = "sound_widetree_smallleaves_1";
					soundSets[] = {"Rain_Tree_Light_SoundSet","Rain_Tree_Light_SoundSet","Rain_Tree_Light_SoundSet","Wind_LeavesC_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_widetree_mediumleaves_1
				{
					memPoint = "_sound_bigwidetree_stem_1";
					soundSets[] = {"Rain_Tree_Light_SoundSet","Rain_Tree_Light_SoundSet","Rain_Tree_Light_SoundSet","Wind_LeavesC_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_watertree_mediumleaves_1
				{
					memPoint = "sound_watertree_mediumleaves_1";
					soundSets[] = {"Rain_Tree_Light_SoundSet","Rain_Tree_Medium_SoundSet","Rain_Tree_Heavy_SoundSet","Wind_LeavesC_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_tree_palmleaves_1
				{
					memPoint = "sound_tree_palmleaves_1";
					soundSets[] = {"Rain_Tree_Light_SoundSet","Rain_Tree_Medium_SoundSet","Rain_Tree_Heavy_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_rain_metalTin_tiny_1
				{
					memPoint = "sound_rain_metalTin_tiny_1";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet","Rock_DebrisWind_Small_SoundShader"};
				};
				class sound_rain_metalTin_tiny_2
				{
					memPoint = "sound_rain_metalTin_tiny_2";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_3
				{
					memPoint = "sound_rain_metalTin_tiny_3";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_4
				{
					memPoint = "sound_rain_metalTin_tiny_4";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_5
				{
					memPoint = "sound_rain_metalTin_tiny_5";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_6
				{
					memPoint = "sound_rain_metalTin_tiny_6";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_7
				{
					memPoint = "sound_rain_metalTin_tiny_7";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_8
				{
					memPoint = "sound_rain_metalTin_tiny_8";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_9
				{
					memPoint = "sound_rain_metalTin_tiny_9";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_10
				{
					memPoint = "sound_rain_metalTin_tiny_10";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_11
				{
					memPoint = "sound_rain_metalTin_tiny_11";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_12
				{
					memPoint = "sound_rain_metalTin_tiny_12";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_13
				{
					memPoint = "sound_rain_metalTin_tiny_13";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_14
				{
					memPoint = "sound_rain_metalTin_tiny_14";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_15
				{
					memPoint = "sound_rain_metalTin_tiny_15";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_16
				{
					memPoint = "sound_rain_metalTin_tiny_16";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_17
				{
					memPoint = "sound_rain_metalTin_tiny_17";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_18
				{
					memPoint = "sound_rain_metalTin_tiny_18";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_19
				{
					memPoint = "sound_rain_metalTin_tiny_19";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_20
				{
					memPoint = "sound_rain_metalTin_tiny_20";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_21
				{
					memPoint = "sound_rain_metalTin_tiny_21";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_22
				{
					memPoint = "sound_rain_metalTin_tiny_22";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_23
				{
					memPoint = "sound_rain_metalTin_tiny_23";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_1
				{
					memPoint = "sound_rain_metalTin_small_1";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_2
				{
					memPoint = "sound_rain_metalTin_small_2";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_3
				{
					memPoint = "sound_rain_metalTin_small_3";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_4
				{
					memPoint = "sound_rain_metalTin_small_4";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_narrow_1
				{
					memPoint = "sound_rain_metalTin_small_narrow_1";
					soundSets[] = {"Rain_MetalAn_Light_SoundSet","Rain_MetalAn_Medium_SoundSet","Rain_MetalAn_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_narrow_2
				{
					memPoint = "sound_rain_metalTin_small_narrow_2";
					soundSets[] = {"Rain_MetalAn_Light_SoundSet","Rain_MetalAn_Medium_SoundSet","Rain_MetalAn_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_narrow_3
				{
					memPoint = "sound_rain_metalTin_small_narrow_3";
					soundSets[] = {"Rain_MetalAn_Light_SoundSet","Rain_MetalAn_Medium_SoundSet","Rain_MetalAn_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_narrow_4
				{
					memPoint = "sound_rain_metalTin_small_narrow_4";
					soundSets[] = {"Rain_MetalAn_Light_SoundSet","Rain_MetalAn_Medium_SoundSet","Rain_MetalAn_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_medium_1
				{
					memPoint = "sound_rain_metalTin_medium_1";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_2
				{
					memPoint = "sound_rain_metalTin_medium_2";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_3
				{
					memPoint = "sound_rain_metalTin_medium_3";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_4
				{
					memPoint = "sound_rain_metalTin_medium_4";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_5
				{
					memPoint = "sound_rain_metalTin_medium_5";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_narrow_1
				{
					memPoint = "sound_rain_metalTin_medium_narrow_1";
					soundSets[] = {"Rain_MetalBn_Light_SoundSet","Rain_MetalBn_Medium_SoundSet","Rain_MetalBn_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_narrow_2
				{
					memPoint = "sound_rain_metalTin_medium_narrow_2";
					soundSets[] = {"Rain_MetalBn_Light_SoundSet","Rain_MetalBn_Medium_SoundSet","Rain_MetalBn_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_narrow_3
				{
					memPoint = "sound_rain_metalTin_medium_narrow_3";
					soundSets[] = {"Rain_MetalBn_Light_SoundSet","Rain_MetalBn_Medium_SoundSet","Rain_MetalBn_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_narrow_4
				{
					memPoint = "sound_rain_metalTin_medium_narrow_4";
					soundSets[] = {"Rain_MetalBn_Light_SoundSet","Rain_MetalBn_Medium_SoundSet","Rain_MetalBn_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_large_1
				{
					memPoint = "sound_rain_metalTin_large_1";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_2
				{
					memPoint = "sound_rain_metalTin_large_2";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_3
				{
					memPoint = "sound_rain_metalTin_large_3";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_4
				{
					memPoint = "sound_rain_metalTin_large_4";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_narrow_1
				{
					memPoint = "sound_rain_metalTin_large_narrow_1";
					soundSets[] = {"Rain_MetalCn_Light_SoundSet","Rain_MetalCn_Medium_SoundSet","Rain_MetalCn_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_narrow_2
				{
					memPoint = "sound_rain_metalTin_large_narrow_2";
					soundSets[] = {"Rain_MetalCn_Light_SoundSet","Rain_MetalCn_Medium_SoundSet","Rain_MetalCn_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_narrow_3
				{
					memPoint = "sound_rain_metalTin_large_narrow_3";
					soundSets[] = {"Rain_MetalCn_Light_SoundSet","Rain_MetalCn_Medium_SoundSet","Rain_MetalCn_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_narrow_4
				{
					memPoint = "sound_rain_metalTin_large_narrow_4";
					soundSets[] = {"Rain_MetalCn_Light_SoundSet","Rain_MetalCn_Medium_SoundSet","Rain_MetalCn_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalPlate_small_1
				{
					memPoint = "sound_rain_metalPlate_small_1";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_small_2
				{
					memPoint = "sound_rain_metalPlate_small_2";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet"};
				};
				class sound_metal_stairs_1
				{
					memPoint = "sound_metal_stairs_1";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_Stress_High_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_metal_stairs_2
				{
					memPoint = "sound_metal_stairs_2";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_Stress_High_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_metal_stairs_3
				{
					memPoint = "sound_metal_stairs_3";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_Stress_High_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_metal_stairs_solid_1
				{
					memPoint = "sound_metal_stairs_solid_1";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_metal_stairs_solid_2
				{
					memPoint = "sound_metal_stairs_solid_2";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_metal_stairs_solid_3
				{
					memPoint = "sound_metal_stairs_solid_3";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalPlate_medium_1
				{
					memPoint = "sound_rain_metalPlate_medium_1";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_2
				{
					memPoint = "sound_rain_metalPlate_medium_2";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_3
				{
					memPoint = "sound_rain_metalPlate_medium_3";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_4
				{
					memPoint = "sound_rain_metalPlate_medium_4";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_5
				{
					memPoint = "sound_rain_metalPlate_medium_5";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_6
				{
					memPoint = "sound_rain_metalPlate_medium_6";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_large_1
				{
					memPoint = "sound_rain_metalPlate_large_1";
					soundSets[] = {"Rain_PlateB_Medium_SoundSet","Rain_PlateB_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_large_2
				{
					memPoint = "sound_rain_metalPlate_large_2";
					soundSets[] = {"Rain_PlateB_Medium_SoundSet","Rain_PlateB_Heavy_SoundSet"};
				};
				class sound_gutter_1
				{
					memPoint = "sound_gutter_1";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_2
				{
					memPoint = "sound_gutter_2";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_3
				{
					memPoint = "sound_gutter_3";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_4
				{
					memPoint = "sound_gutter_4";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_5
				{
					memPoint = "sound_gutter_5";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_6
				{
					memPoint = "sound_gutter_6";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_7
				{
					memPoint = "sound_gutter_7";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_8
				{
					memPoint = "sound_gutter_8";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_air_condition_1
				{
					memPoint = "sound_air_condition_1";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_air_condition_2
				{
					memPoint = "sound_air_condition_2";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_air_condition_3
				{
					memPoint = "sound_air_condition_3";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_air_condition_4
				{
					memPoint = "sound_air_condition_4";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_air_condition_5
				{
					memPoint = "sound_air_condition_5";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_electric_box_1
				{
					memPoint = "sound_electric_box_1";
					soundSets[] = {"Electric_Box_SoundSet"};
				};
				class sound_electric_box_2
				{
					memPoint = "sound_electric_box_2";
					soundSets[] = {"Electric_Box_SoundSet"};
				};
				class sound_electric_box_3
				{
					memPoint = "sound_electric_box_3";
					soundSets[] = {"Electric_Box_SoundSet"};
				};
				class sound_electric_box_4
				{
					memPoint = "sound_electric_box_4";
					soundSets[] = {"Electric_Box_SoundSet"};
				};
				class sound_electric_box_5
				{
					memPoint = "sound_electric_box_5";
					soundSets[] = {"Electric_Box_SoundSet"};
				};
				class sound_metal_tension_1
				{
					memPoint = "sound_metal_tension_1";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_2
				{
					memPoint = "sound_metal_tension_2";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_3
				{
					memPoint = "sound_metal_tension_3";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_4
				{
					memPoint = "sound_metal_tension_4";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_5
				{
					memPoint = "sound_metal_tension_5";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_6
				{
					memPoint = "sound_metal_tension_6";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_7
				{
					memPoint = "sound_metal_tension_7";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_8
				{
					memPoint = "sound_metal_tension_8";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_9
				{
					memPoint = "sound_metal_tension_9";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_10
				{
					memPoint = "sound_metal_tension_10";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_11
				{
					memPoint = "sound_metal_tension_11";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_ruins_1
				{
					memPoint = "sound_ruins_1";
					soundSets[] = {"Rock_Debris_High_SoundSet","Metal_DebrisWind_Small_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_ruins_2
				{
					memPoint = "sound_ruins_2";
					soundSets[] = {"Rock_Debris_High_SoundSet","Metal_DebrisWind_Small_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_ruins_3
				{
					memPoint = "sound_ruins_3";
					soundSets[] = {"Rock_Debris_High_SoundSet","Metal_DebrisWind_Small_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_stone_small_1
				{
					memPoint = "sound_rain_stone_small_1";
					soundSets[] = {"Rock_Debris_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_stone_medium_1
				{
					memPoint = "sound_rain_stone_medium_1";
					soundSets[] = {"Rock_Debris_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_head
				{
					memPoint = "sound_head";
					soundSets[] = {"Forest_Birds_Temp_SoundSet"};
				};
				class sound_clothes_1
				{
					memPoint = "sound_clothes_1";
					soundSets[] = {"ClothesWind_SoundSet"};
				};
				class sound_clothes_2
				{
					memPoint = "sound_clothes_2";
					soundSets[] = {"ClothesWind_SoundSet"};
				};
				class sound_net_fence_1
				{
					memPoint = "sound_net_fence_1";
					soundSets[] = {"MetalFenceWind_SoundSet"};
				};
				class sound_shed_1
				{
					memPoint = "sound_shed_1";
					soundSets[] = {"Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_slum_1
				{
					memPoint = "sound_slum_1";
					soundSets[] = {"Metal_DebrisWind_Small_SoundSet"};
				};
			};
		};

		class Clutter
		{
			///////////////////////////////////////////////////////////////
			///              Edaly_Map_Grass_Short_Character           ///
			/////////////////////////////////////////////////////////////
			class c_Grass_short_small
			{
				affectedByWind = 0.1;
				model = "Edaly_Vegetation\Clutter\grass\c_Grass_short_small.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 1.9;
				scaleMin = 1;
				swLighting = 1;
			};
			class c_Grass_short_bunch
			{
				affectedByWind = 0.1;
				model = "Edaly_Vegetation\Clutter\grass\c_Grass_short_bunch.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 1.5;
				scaleMin = 1;
				swLighting = 1;
			};
			class c_Grass_short_leaf
			{
				affectedByWind = 0.1;
				model = "Edaly_Vegetation\Clutter\grass\c_Grass_short_leaf.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 1.6;
				scaleMin = 1;
				swLighting = 1;
			};
			class c_Grass_short_mimosa
			{
				affectedByWind = 0.1;
				model = "Edaly_Vegetation\Clutter\grass\c_Grass_short_mimosa.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 1.5;
				scaleMin = 1;
				swLighting = 1;
			};
			class c_Grass_short_nettle
			{
				affectedByWind = 0.1;
				model = "Edaly_Vegetation\Clutter\grass\c_Grass_short_nettle.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 1.5;
				scaleMin = 1;
				swLighting = 1;
			};

			//////////////////////////////////////////////////////////
			///              Edaly_Map_Jungle_Character              ///
			////////////////////////////////////////////////////////
			class c_forest_roots
			{
				affectedByWind = 0;
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_roots.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 3.2;
				scaleMin = 0.4;
				swLighting = 0;
			};
			class c_forest_violet_leaves
			{
				affectedByWind = 0.1;
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_violet_leaves.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 2.05;
				scaleMin = 0.7;
				swLighting = 1;
			};
			class c_forest_violet_leaves2
			{
				affectedByWind = 0.1;
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_violet_leaves2.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 2.15;
				scaleMin = 0.5;
				swLighting = 0;
			};
			class c_forest_violet_single
			{
				affectedByWind = 0.1;
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_violet_single.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 2.1;
				scaleMin = 0.9;
				swLighting = 1;
			};
			class c_forest_fern
			{
				affectedByWind = 0.1;
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_fern.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 2.65;
				scaleMin = 0.8;
				swLighting = 0;
			};
			class c_forest_BiglLeaves
			{
				affectedByWind = 0.1;
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_BiglLeaves.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 2.4;
				scaleMin = 0.5;
				swLighting = 1;
			};
			class c_forest_BiglLeaves2
			{
				affectedByWind = 0.1;
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_BiglLeaves2.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 2.4;
				scaleMin = 0.5;
				swLighting = 1;
			};

			//////////////////////////////////////////////////////////////
			///              Edaly_Map_Grass_Tall_Character              ///
			////////////////////////////////////////////////////////////
			class c_GrassBunch_HI
			{
				affectedByWind = 0.2;
				model = "Edaly_Vegetation\Clutter\grass\c_GrassBunch_HI.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 1.3;
				scaleMin = 0.8;
				swLighting = 1;
			};
			class c_GrassBunch_LO
			{
				affectedByWind = 0.2;
				model = "Edaly_Vegetation\Clutter\grass\c_GrassBunch_LO.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 1.4;
				scaleMin = 0.65;
				swLighting = 1;
			};
			class c_GrassTropic
			{
				affectedByWind = 0.2;
				model = "Edaly_Vegetation\Clutter\grass\c_Grass_Tropic.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 1.4;
				scaleMin = 0.65;
				swLighting = 1;
			};
			class c_Grass_nettle
			{
				affectedByWind = 0.2;
				model = "Edaly_Vegetation\Clutter\grass\c_Grass_nettle.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 1.6;
				scaleMin = 0.8;
				swLighting = 0;
			};
			class c_Grass_Leaves_coltsfoot
			{
				affectedByWind = 0.1;
				model = "Edaly_Vegetation\Clutter\grass\c_Grass_Leaves_coltsfoot.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 1.4;
				scaleMin = 0.5;
				swLighting = 0;
			};
			class c_Grass_leaf_big
			{
				affectedByWind = 0.1;
				model = "Edaly_Vegetation\Clutter\grass\c_Grass_leaf_big.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 1.4;
				scaleMin = 0.5;
				swLighting = 1;
			};

			//////////////////////////////////////////////////////////////
			///              Edaly_Map_Swamp_Character                ///
			////////////////////////////////////////////////////////////
			class c_fern_01
			{
				affectedByWind = 0.2;
				model = "Edaly_Vegetation\Clutter\grass\c_fern_01.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 1.3;
				scaleMin = 0.8;
				swLighting = 1;
			};
			class c_grass_01
			{
				affectedByWind = 0.2;
				model = "Edaly_Vegetation\Clutter\grass\c_grass_01.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 1.4;
				scaleMin = 0.65;
				swLighting = 1;
			};
			class c_grass_02
			{
				affectedByWind = 0.2;
				model = "Edaly_Vegetation\Clutter\grass\c_grass_02.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 1.4;
				scaleMin = 0.65;
				swLighting = 1;
			};
			class c_grass_03
			{
				affectedByWind = 0.2;
				model = "Edaly_Vegetation\Clutter\grass\c_grass_03.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 1.6;
				scaleMin = 0.8;
				swLighting = 0;
			};
			class c_grass_04
			{
				affectedByWind = 0.1;
				model = "Edaly_Vegetation\Clutter\grass\c_grass_04.p3d";
				relativeColor[] = {1,1,1,1};
				scaleMax = 1.4;
				scaleMin = 0.5;
				swLighting = 0;
			};
		};

		class Grid: Grid
		{
			offsetX = 0;
			offsetY = 8960;
			class Zoom1
			{
				zoomMax = 0.05;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = -100;
			};
			class Zoom2
			{
				zoomMax = 0.5;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = -1000;
			};
			class Zoom3
			{
				zoomMax = 1e+030;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = -10000;
			};
		};
	};
};
