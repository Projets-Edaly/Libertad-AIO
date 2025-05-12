class CfgLocationTypes
{
	class Name
	{
		name = "$STR_NAME";
		drawStyle = "name";
		texture = "";
		color[] = {0.2,0.2,0.2,0.95};
		size = 0;
		font = "BerlinSansFB";
		textSize = 0.05;
		shadow = 1;
	};
	class Strategic: Name
	{
		name = "$STR_A3_CfgLocationTypes_Strategic0";
		texture = "#(argb,8,8,3)color(1,1,1,1)";
		color[] = {0.251,0.251,0.251,0.95};
		size = 16;
		textSize = 0.06;
	};
	class StrongpointArea: Strategic
	{
		name = "$STR_A3_CfgLocationTypes_StrongpointArea0";
	};
	class FlatArea: Strategic
	{
		name = "$STR_A3_CfgLocationTypes_FlatArea0";
	};
	class FlatAreaCity: FlatArea
	{
		name = "$STR_A3_CfgLocationTypes_FlatAreaCity0";
	};
	class FlatAreaCitySmall: FlatAreaCity
	{
		name = "$STR_A3_CfgLocationTypes_FlatAreaCitySmall0";
	};
	class CityCenter: Strategic
	{
		name = "$STR_A3_CfgLocationTypes_CityCenter0";
	};
	class Airport: Strategic
	{
		name = "$STR_A3_CfgLocationTypes_Airport0";
		texture = "#(argb,8,8,3)color(1,1,1,1)";
		importance = 20;
		textSize = 0.05;
		font = "BerlinSansFB";
	};
	class NameMarine: Name
	{
		name = "$STR_NAME_MARINE";
		color[] = {0.427,0.498,0.533,0.95};
		textSize = 0.02;
		font = "BerlinSansFB";
		importance = 3;
	};
	class NameCityCapital: Name
	{
		name = "$STR_NAME_CAPITAL";
		textSize = 0.087;
		importance = 7;
	};
	class NameCity: Name
	{
		name = "$STR_NAME_CITY";
		textSize = 0.08;
		importance = 6;
	};
	class NameVillage: Name
	{
		name = "$STR_NAME_VILLAGE";
		textSize = 0.06;
		importance = 5;
	};
	class NameLocal: Name
	{
		name = "$STR_NAME_LOCALNAME";
		color[] = {1,1,1,0.8};
		textSize = 0.03;
		font = "BerlinSansFB";
		importance = 4;
	};
	class Hill
	{
        name = "";
		textSize = 0.08;
		font = "BerlinSansFB";
		color[] = {1,1,1,0.7};
	};
	class RockArea: Hill
	{
		name = "$STR_NAME_ROCKAREA";
		texture = "#(argb,8,8,3)color(1,1,1,1)";
		color[] = {0,0,0,1};
		size = 12;
		shadow = 0;
		importance = 2;
	};
	class BorderCrossing: Hill
	{
		name = "$STR_NAME_BCROSS";
		texture = "#(argb,8,8,3)color(1,1,1,1)";
		color[] = {0.325,0.737,0.749,1};
		size = 16;
		shadow = 0;
		importance = 1;
	};
	class VegetationBroadleaf: Hill
	{
		name = "$STR_NAME_VEGB";
		texture = "#(argb,8,8,3)color(1,1,1,1)";
		color[] = {0.094,0.165,0.133,0.95};
		size = 18;
		shadow = 0;
		importance = 2;
	};
	class VegetationFir: Hill
	{
		name = "$STR_NAME_VEGF";
		texture = "#(argb,8,8,3)color(1,1,1,1)";
		color[] = {0.094,0.165,0.133,0.95};
		size = 18;
		shadow = 0;
		importance = 2;
	};
	class VegetationPalm: Hill
	{
		name = "$STR_NAME_VEGP";
		texture = "#(argb,8,8,3)color(1,1,1,1)";
		color[] = {0.094,0.165,0.133,0.95};
		size = 18;
		shadow = 0;
		importance = 2;
	};
	class VegetationVineyard: Hill
	{
		name = "$STR_NAME_VEGV";
		texture = "#(argb,8,8,3)color(1,1,1,1)";
		color[] = {0.094,0.165,0.133,0.95};
		size = 16;
		shadow = 0;
		importance = 2;
	};
};
class RscDisplayMainMap
{
	class controls
	{
		class CA_MainBackground: RscText
		{
			idc = 1020;
			x = "safezoneXAbs";
			w = "safezoneWAbs";
			y = "0 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY)";
			h = "1.5 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.165,0.169,0.18,1};
		};
		class CA_MainBackgroundGradient: RscPicture
		{
			x = "safezoneXAbs";
			w = "safezoneWAbs";
			idc = 1200;
			text = "";
			y = "0 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY)";
			h = "1.5 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0,0,0,0};
		};
		class CA_TopicsBackground: RscText
		{
			idc = 1021;
			colorbackgroundx[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			x = "1 *(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX)";
			y = "2 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY)";
			w = "6 *(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "18 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.165,0.169,0.18,0.93};
		};
		class CA_SubTopicsBackground: RscText
		{
			idc = 1022;
			colorbackgroundx[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			x = "7.2 *(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX)";
			y = "2 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY)";
			w = "10 *(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "18 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.165,0.169,0.18,0.93};
		};
		class CA_ContentBackgroundd: RscText
		{
			idc = 1023;
			colorbackgroundx[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			x = "17.4 *(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX)";
			y = "2 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY)";
			w = "21.5 *(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "18 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.165,0.169,0.18,0.93};
		};
	};
};
class CfgWrapperUI
{
	class Cursors
	{
		class Track
		{
			texture = "\Edaly_UI_Assets\Data\CfgActions\use_ca.paa";
			width = 24;
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			color[] = {0.773,0.133,0.122,1};
			shadow = 0;
		};
		class Move
		{
			texture = "\Edaly_UI_Assets\Data\CfgActions\use_ca.paa";
			width = 24;
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			color[] = {0.094,0.502,0.22,1};
			shadow = 0;
		};
		class Scroll
		{
			texture = "\Edaly_UI_Assets\Data\CfgActions\use_ca.paa";
			width = 24;
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			color[] = {0.89,0.455,0.0,1};
			shadow = 0;
		};
	};
};
