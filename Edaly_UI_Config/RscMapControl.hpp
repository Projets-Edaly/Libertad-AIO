class RscMapControl
{
	alphaFadeEndScale = 2e-005;
	alphaFadeStartScale = 1e-005;
	colorBackground[] = {1.000,1.000,0.906,1};
	colorCountlines[] = {0.572, 0.354, 0.188, 0.25};
	colorCountlinesWater[] = {0.491, 0.577, 0.702, 0.25};
	colorForest[] = {0.518,0.620,0.341, 0.75};
	colorForestBorder[] = {0.384314, 0.729412, 0, 0};
	colorForestTextured[] = {0.384314, 0.729412, 0, 0.25};
	colorGrid[] = {0, 0, 0, 0.3};
	colorGridMap[] = {0, 0, 0, 0.3};
	colorInactive[] = {1, 1, 1, 0.5};
	colorLevels[] = {0, 0, 0, 0.5};
	colorMainCountlines[] = {0.572, 0.354, 0.188, 0.5};
	colorMainCountlinesWater[] = {0.491, 0.577, 0.702, 0.5};
	colorMainRoads[] = {0.851,0.439,0.251, 1};
	colorMainRoadsFill[] = {0.851,0.439,0.251, 1};
	colorNames[] = {0.5, 0.5, 0.5, 0.9};
	colorOutside[] = {0, 0, 0, 1};
	colorPowerLines[] = {0, 0, 0, 1};
	colorRailWay[] = {0.8, 0.2, 0, 1};
	colorRoads[] = {0.705882, 0.705882, 0.705882, 0.75};
	colorRoadsFill[] = {1, 0.843137, 0.407843, 1};
	colorRocks[] = {0.615686, 0.631373, 0.552941, 0};
	colorRocksBorder[] = {0.615686, 0.631373, 0.552941, 0};
	colorSea[] = {0.569,0.812,0.800,1};
	colorText[] = {0.2, 0.2, 0.2, 1};
	colorTown[] = {0.984,0.655,0.325, 1};
	colorTownBorder[] = {0, 0, 0, 0};
	colorTracks[] = {0.596,0.510,0.357, 0.5};
	colorTracksFill[] = {0.647059, 0.611765, 0.494118, 1};
	colorTrails[] = {0.84, 0.76, 0.65, 0.15};
	colorTrailsFill[] = {0.84, 0.76, 0.65, 0.65};
	deletable = 0;
	drawObjects = 1;
	drawShaded = 0.25;
	fade = 0;
	font = "BerlinSansFB";
	fontGrid = "BerlinSansFB";
	fontInfo = "BerlinSansFB";
	fontLabel = "BerlinSansFB";
	fontLevel = "BerlinSansFB";
	fontNames = "RobotoCondensed";
	fontUnits = "RobotoCondensed";
	h = "safezoneH";
	idc = 51;
	idcMarkerColor = -1;
	idcMarkerIcon = -1;
	mapOrientation = 0;
	maxSatelliteAlpha = 0.85;
	moveOnEdges = 0;
	ptsPerSquareCLn = 10;
	ptsPerSquareCost = 10;
	ptsPerSquareExp = 10;
	ptsPerSquareFor = 14;
	ptsPerSquareForEdge = 1000;
	ptsPerSquareForLod1 = 7;
	ptsPerSquareForLod2 = 1;
	ptsPerSquareMainRoad = 14;
	ptsPerSquareMainRoadSimple = 1;
	ptsPerSquareObj = 14;
	ptsPerSquareObjLod1 = 14;
	ptsPerSquareRoad = 14;
	ptsPerSquareRoadSimple = 1;
	ptsPerSquareSea = 20;
	ptsPerSquareTown = 1;
	ptsPerSquareTownEdge = 7;
	ptsPerSquareTxt = 20;
	scaleDefault = 0.16;
	scaleMax = 0.3;
	scaleMin = 0.04;
	shadow = 0;
	showCountourInterval = 0;
	showMarkers = 1;
	sizeEx = 0.04;
	sizeExGrid = 0.02;
	sizeExInfo = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	sizeExLabel = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	sizeExLevel = 0.02;
	sizeExNames = 0.125;
	sizeExUnits = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	stickX[] = {0.2, {"Gamma", 1, 1.5}};
	stickY[] = {0.2, {"Gamma", 1, 1.5}};
	style = 48;
	text = "#(rgb,1,1,1)color(1,1,1,1)";
	textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
	type = 101;
	w = "safezoneWAbs";
	widthPowerLines = 3;
	widthRailWay = 4;
	x = "safezoneXAbs";
	y = "safezoneY";
	class ActiveMarker
	{
		color[] = {0.3, 0.1, 0.9, 1};
		size = 10;
		coefMax = 0.5;
		coefMin = 0.2;
	};
	class Bunker
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		importance = "1.5 * 14 * 0.05";
		size = 14;
	};
	class CustomMark
	{
		coefMax = 0.1;
		coefMin = 0.3;
		color[] = {1, 1, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		importance = 1;
		size = 12;
	};
	class Bush
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.45, 0.64, 0.33, 0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = "0.2 * 14 * 0.05 * 0.05";
		size = "14/2";
	};
	class Command
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {1, 1, 1, 1};
		icon = "\a3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		importance = 1;
		size = 18;
	};

	class Fortress
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		importance = "2 * 16 * 0.05";
		size = 16;
	};
	class Fountain
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
		importance = "1 * 12 * 0.05";
		size = 11;
	};
	class Legend
	{
		color[] = {0, 0, 0, 1};
		colorBackground[] = {1, 1, 1, 0.5};
		font = "RobotoCondensed";
		h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "SafeZoneX + 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "SafeZoneY + safezoneH - 4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};

	class LineMarker
	{
		lineDistanceMin = 3e-005;
		lineLengthMin = 5;
		lineWidthThick = 0.014;
		lineWidthThin = 0.008;
		textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
	};
	class Task
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorCanceled[] = {0.7, 0.7, 0.7, 1};
		colorCreated[] = {1, 1, 1, 1};
		colorDone[] = {0.7, 1, 0.3, 1};
		colorFailed[] = {1, 0.3, 0.2, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
		iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
		iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
		iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
		iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
		importance = 1;
		size = 27;
		taskAssigned = "#(argb,8,8,3)color(1,1,1,1)";
		taskCanceled = "#(argb,8,8,3)color(1,0.5,0,1)";
		taskCreated = "#(argb,8,8,3)color(0,0,0,1)";
		taskFailed = "#(argb,8,8,3)color(1,0,0,1)";
		taskNone = "#(argb,8,8,3)color(0,0,0,0)";
		taskSucceeded = "#(argb,8,8,3)color(0,1,0,1)";
	};
	class Tourism
	{
		coefMax = 4;
		coefMin = 0.7;
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
		importance = "1 * 16 * 0.05";
		size = 16;
	};
	class Tree
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.45, 0.64, 0.33, 0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = "0.9 * 16 * 0.05";
		size = 12;
	};
	class ViewTower
	{
		coefMax = 4;
		coefMin = 0.5;
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
		importance = "2.5 * 16 * 0.05";
		size = 16;
	};
	class Waypoint
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {1, 1, 1, 1};
		icon = "\a3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		importance = 1;
		size = 18;
	};
	class WaypointCompleted
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {1, 1, 1, 1};
		icon = "\a3\ui_f\data\map\mapcontrol\waypointcompleted_ca.paa";
		importance = 1;
		size = 18;
	};
};
