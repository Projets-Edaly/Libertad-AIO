
class RscDisplayStart : RscStandardDisplay 
{
	idd = 104;
	onLoad = "[""onLoad"",_this,""RscDisplayLoading"",'Loading'] call compile preprocessfilelinenumbers ""Edaly_UI_Menu\initDisplay.sqf""";
	onUnload = "[""onUnload"",_this,""RscDisplayLoading"",'Loading'] call compile preprocessfilelinenumbers ""Edaly_UI_Menu\initDisplay.sqf""";
	
	class controlsBackground {
		class Black : RscText {
			colorBackground[] = {0, 0, 0, 1};
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
		delete Map;
		delete CA_Vignette;
		delete Noise;
	};
	
	class controls {
		//class Text {};
		//class Progress {};
		//class Progress2 {};
		delete Text;
		delete Progress;
		delete Progress2;
		
		class LoadingStart : RscPicture {
			idc = 2310;
			text = "\Edaly_UI_Menu\data\load_01.jpg";
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
