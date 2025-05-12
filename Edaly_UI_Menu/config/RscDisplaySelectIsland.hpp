class RscDisplaySelectIsland: RscStandardDisplay
{
	scriptName = "RscDisplaySelectIsland";
	scriptPath = "GUI";
	onLoad = "[""onLoad"",_this,""RscDisplaySelectIsland"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplaySelectIsland"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	defaultPicture = "\A3\ui_f\data\gui\rsc\rscdisplayselectisland\island_picture_dummy_ca.paa";
	class controlsBackground
	{
		class Background: RscPicture
		{
			idc = 1200;
			text = "\Edaly_UI_Menu\lobby\background.paa";
			x = -0.0341874 * safezoneW + safezoneX;
			y = -0.4504 * safezoneH + safezoneY;
			w = 1.0725 * safezoneW;
			h = 1.903 * safezoneH;
		};
	};
	class controls
	{
		delete Islands;
		delete B_Editor;
		delete B_OK;
		delete B_Cancel;
		delete B_Wizard;
		delete ButtonContinueOld;
		delete Title;
		delete PlayersName;
		delete IslandsBox;
		delete IslandGroup;
		delete NameBackground;
		delete Name;
		delete Author;
		delete ButtonCancel;
		delete ButtonContinue;
	};
};