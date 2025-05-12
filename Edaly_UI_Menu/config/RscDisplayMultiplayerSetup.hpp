
class RscDisplayMultiplayerSetup : RscStandardDisplay
{
	onLoad = "[""onLoad"",_this,""RscDisplayLoading"",'Loading'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
	onUnload = "[""onUnload"",_this,""RscDisplayLoading"",'Loading'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
	west = "A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\flag_bluefor_ca.paa";
	east = "A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\flag_opfor_ca.paa";
	guer = "A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\flag_indep_ca.paa";
	civl = "A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\flag_civil_ca.paa";
	none = "#(argb,8,8,3)color(0,0,0,0)";
	westUnlocked = "A3\ui_f\data\map\diary\icons\playerWest_ca.paa";
	westLocked = "A3\ui_f\data\map\diary\icons\playerBriefWest_ca.paa";
	eastUnlocked = "A3\ui_f\data\map\diary\icons\playerEast_ca.paa";
	eastLocked = "A3\ui_f\data\map\diary\icons\playerBriefEast_ca.paa";
	guerUnlocked = "A3\ui_f\data\map\diary\icons\playerGuer_ca.paa";
	guerLocked = "A3\ui_f\data\map\diary\icons\playerBriefGuer_ca.paa";
	civlUnlocked = "A3\ui_f\data\map\diary\icons\playerCiv_ca.paa";
	civlLocked = "A3\ui_f\data\map\diary\icons\playerBriefCiv_ca.paa";
	disabledAllAI = $STR_DISP_MULTI_ENABLE_AI;
	enabledAllAI = $STR_DISP_MULTI_DISABLE_AI;
	hostLocked = $STR_DISP_MULTI_UNLOCK;
	hostUnlocked = $STR_DISP_MULTI_LOCK;
	colorNotAssigned[] = {1, 1, 1, 0.25};
	colorAssigned[] = {1, 1, 1, 1};
	colorConfirmed[] = {0, 1, 0, 1};

	class controlsbackground
	{
		delete Vignette;
		delete TileGroup;

		class Background: RscPicture
		{
			idc = 1200;
			text = "\Edaly_UI_Menu\lobby\background.paa";
			x = -0.0341874 * safezoneW + safezoneX;
			y = -0.4504 * safezoneH + safezoneY;
			w = 1.0725 * safezoneW;
			h = 1.903 * safezoneH;
		};

		delete RscTitleBackground;
		delete MainBackground;
		delete MissionSettingsBackground;
		delete NumOfPlayersBackground;
		delete SideBackground;
		delete RolesBackground;
		delete ChatBackground;
		delete PlayersPoolHeaderBackground;
		delete PlayersPoolBackground;

		class PlayersList: RscPicture
		{
			idc = 1201;
			text = "Edaly_UI_Menu\lobby\list_ca.paa";
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.214084 * safezoneH + safezoneY;
			w = 0.221719 * safezoneW;
			h = 0.571832 * safezoneH;
		};
	};

	class controls
	{
		delete B_Civilian;
		delete B_Guerrila;
		delete B_East;
		delete B_West;
		delete B_Side;
		delete B_OK;
		delete B_Cancel;
		delete B_Kick;
		delete B_EnableAll;
		delete B_Lock;
		delete TextDescription;
		delete ValueDescription;
		delete TextMessage;
		delete ValueRoles;
		delete TextParam1;
		delete TextParam2;
		delete ValueParam1;
		delete ValueParam2;
		delete ValuePool;
		delete B_Params;
		delete TextPool;
		delete TextRoles;

		delete Title;
		delete PlayersName;

		class CA_TextVotingTimeLeft : RscTitle {
			idc = 121;
			style = 0;
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		delete ValueMission;
		delete CA_TextDescription;
		delete CA_ValueDescription;
		delete TextIsland;
		delete TextSide;


		class CA_B_EnableAll : RscButtonMenu {
			idc = 117;
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			//x = "13.45 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			//y = "16.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY) + 0.7*(safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			//w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			//h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = 0.206094 * safezoneW + safezoneX;
			y = 0.29103 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.0219968 * safezoneH;
		};

		class CA_B_Lock : RscButtonMenu {
			idc = 118;
			//x = "safezoneX + SafezoneW - (13.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			//y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			//w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			//h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = 0.206094 * safezoneW + safezoneX;
			y = 0.225081 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.0219968 * safezoneH;
		};

		class CA_B_Params : RscButtonMenu {
			idc = 128;
			shortcuts[] = {0x00050000 + 2};
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			//x = "(26.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 		(SafezoneX) + 1*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			text = $STR_DISP_XBOX_EDITOR_WIZARD_PARAMS;
			//y = "4.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			//w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			//h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = 0.726875 * safezoneW + safezoneX;
			y = 0.752925 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.0219968 * safezoneH;
		};

		class ButtonSteamWorkshop : RscButtonMenuSteam {
			idc = 130;
			text = "$STR_A3_RscDisplayMultiplayerSetup_ButtonSteamWorkshop";
			tooltip = "$STR_A3_RscDisplayMultiplayerSetup_ButtonSteamWorkshop_tooltip";
			//x = "safezoneX + SafezoneW - (19.95 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			//y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			//w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			//h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = 0.726875 * safezoneW + safezoneX;
			y = 0.719935 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.0219968 * safezoneH;
		};

		class CA_B_Kick : RscButtonMenu {
			idc = 116;
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			//x = "safezoneX + SafezoneW - (7.45 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			//y = "SafezoneY + SafezoneH - (3.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			text = $STR_DISP_MP_KICKOFF;
			//w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			//h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = 0.206094 * safezoneW + safezoneX;
			y = 0.258071 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.0219968 * safezoneH;
		};

		class CA_ButtonContinue : RscButtonMenuOK {
			default = 1;
			x = 0.721719 * safezoneW + safezoneX;
			y = 0.236078 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.0219968 * safezoneH;
			color[] = { 1, 1, 1, 1 };
			//action = "";
			//onMouseButtonClick = "disableSerialization; _display = ctrlParent (_this select 0); _ctrl1 =_display displayCtrl 1; ctrlActivate _ctrl1;";
		};

		class ButtonCancel : RscButtonMenuCancel {
			idc=4;
			style = 48;
			default = 0;
			x = 0.721719 * safezoneW + safezoneX;
			y = 0.269068 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.0219968 * safezoneH;
			color[] = { 1, 1, 1, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			onMouseButtonClick = "disableSerialization; _display = ctrlParent (_this select 0); _ctrl2 =_display displayCtrl 2; ctrlActivate _ctrl2;";
		};


		//class CA_ButtonContinue : RscButtonMenuOK {
		//	x = 0;
		//	y = 0;
		//	w = 0;
		//	h = 0;
		//};

		//Fake Disconnect Button - Activated by cool looking custom bp version
		//DO NOT REMOVE use internally in the engine idc = 2;
		class CA_ButtonCancel : RscButtonMenuCancel {
			default = 0;
			x = 0.721719 * safezoneW + safezoneX;
			y = 0.302058 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.0219968 * safezoneH;
		};

		/*
		class CA_ButtonCancel : RscActiveText {
			idc=2;
			shortcuts[]={"0x00050000 + 1"};
			style = 48;
			text = "\Edaly_UI_Menu\lobby\button_disconnect.paa";
			x = 0.0276874 * safezoneW + safezoneX;
			y = 0.9202 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.033 * safezoneH;
			color[] = { 1, 1, 1, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "";
			onMouseEnter = "ctrlSetFocus (_this select 0); (_this select 0) ctrlSetText '\Edaly_UI_Menu\lobby\button_disconnect_hover.paa'";
			onMouseExit = "(_this select 0) ctrlSetText '\Edaly_UI_Menu\lobby\button_disconnect.paa'";
			soundPush[]={"\A3\ui_f\data\sound\RscButtonMenuOK\soundPush",0.09,1};
		};
		*/

		delete TextMission;
		delete TextRole;
		delete TextPlayersPool;
		delete TextListedPlayers;

		class ValueIsland : RscText {
			idc = 102;
			text = "Altis";
			style = 1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			x = 0;
			y = 0;
			w = 0;
			h = 0;
		};

		class ValueListedPlayers : RscText {
			idc = 1015;
			text = "0";
			style = 1;
			sizeEx = (			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * GUI_GRID_H;
			x = 0.962875 * safezoneW + safezoneX;
			y = 0.0505927 * safezoneH + safezoneY;
			w = 0.02475 * safezoneW;
			h = 0.0175975 * safezoneH;
		};

		class ButtonPlayers : RscButtonTextOnly {
			idc = 133;
			style = 0;
			sizeEx = "0";
			colorFocused[] = {1, 1, 1, 0};
			colorFocused2[] = {1, 1, 1, 0};
			period = 1.2;
			x = 0;
			w = 0;
			y = 0;
			h = 0;
			text = "$STR_A3_RscDisplayMultiplayerSetup_TextPlayersPool";
		};
		//delete ButtonPlayers;
		class CA_B_West : RscActiveText {
			picture = "\A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\flag_bluefor_empty_ca.paa";
			text = $STR_WEST;
			idc = 104;
			sideToggle = "A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\flag_bluefor_ca.paa";
			sideDisabled = "A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\flag_none_ca.paa";
			pictureHeight = 1;
			pictureWidth = 1;
			color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])", "(profilenamespace getvariable ['Map_BLUFOR_G',1])", "(profilenamespace getvariable ['Map_BLUFOR_B',1])", 0.75};
			colorActive[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])", "(profilenamespace getvariable ['Map_BLUFOR_G',1])", "(profilenamespace getvariable ['Map_BLUFOR_B',1])", 1};
			colorDisabled[] = {1, 1, 1, 0};
			colorShade[] = {1, 1, 1, 1};
			colorText[] = {1, 1, 1, 1};
			textHeight = 0.38;
			//x = "1.45 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			//y = "7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			//w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			//h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = 0;
			y = 0;
			w = 0;
			h = 0;
		};

		class CA_B_East : CA_B_West {
			text = $STR_EAST;
			idc = 105;
			picture = "A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\flag_opfor_empty_ca.paa";
			sideToggle = "A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\flag_opfor_ca.paa";
			color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])", "(profilenamespace getvariable ['Map_OPFOR_G',1])", "(profilenamespace getvariable ['Map_OPFOR_B',1])", 0.75};
			colorActive[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])", "(profilenamespace getvariable ['Map_OPFOR_G',1])", "(profilenamespace getvariable ['Map_OPFOR_B',1])", 1};
			//x = "1.45 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			//y = "8.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			//w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			//h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = 0;
			y = 0;
			w = 0;
			h = 0;
		};

		class CA_B_Guerrila : CA_B_West {
			text = $STR_GUERRILA;
			idc = 106;
			picture = "A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\flag_indep_empty_ca.paa";
			sideToggle = "A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\flag_indep_ca.paa";
			color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])", "(profilenamespace getvariable ['Map_Independent_G',1])", "(profilenamespace getvariable ['Map_Independent_B',1])", 0.75};
			colorActive[] = {"(profilenamespace getvariable ['Map_Independent_R',0])", "(profilenamespace getvariable ['Map_Independent_G',1])", "(profilenamespace getvariable ['Map_Independent_B',1])", 1};
			//x = "1.45 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			//y = "10.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			//w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			//h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = 0;
			y = 0;
			w = 0;
			h = 0;
		};

		class CA_B_Civilian : CA_B_West {
			text = $STR_CIVILIAN;
			idc = 107;
			picture = "A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\flag_civil_empty_ca.paa";
			sideToggle = "A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\flag_civil_ca.paa";
			color[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])", "(profilenamespace getvariable ['Map_Civilian_G',1])", "(profilenamespace getvariable ['Map_Civilian_B',1])", 0.75};
			colorActive[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])", "(profilenamespace getvariable ['Map_Civilian_G',1])", "(profilenamespace getvariable ['Map_Civilian_B',1])", 1};
			//x = "1.45 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			//y = "12.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			//w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			//h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = 0;
			y = 0;
			w = 0;
			h = 0;
		};
		class CA_ValueRoles: RscListBox
		{
			idc = 109;
			font = "BerlinSansFB";
			colorPlayer[] = {0,0,0,1};
			colorAI[] = {1,0,0,1};
			colorNobody[] = {1,1,1,0.55};
			colorBackground[] = {-1, -1, -1, -1};
			enabledAI = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayersetup\enabledai_ca.paa";
			disabledAI = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayersetup\disabledai_ca.paa";
			rowHeight = "1.75 * 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.236078 * safezoneH + safezoneY;
			w = 0.190781 * safezoneW;
			h = 0.527845 * safezoneH;
			colorSelectBackground[] = {-1, -1, -1, -1};
			colorSelectBackground2[] = {-1, -1, -1, -1};
			class ScrollBar
			{
			  thumb = "\Edaly_UI_Menu\lobby\scollbar\thumb_ca.paa";
			  arrowEmpty = "\Edaly_UI_Menu\lobby\scollbar\arrowEmpty_ca.paa";
		      arrowFull = "\Edaly_UI_Menu\lobby\scollbar\arrowFull_ca.paa";
			  border = "\Edaly_UI_Menu\lobby\scollbar\border_ca.paa";
			  color[] = {1,1,1,0.6};
			  colorActive[] = {1,1,1,1};
			  colorDisabled[] = {1,1,1,0.3};
			};
		};
		class CA_ValuePool: RscListNBox
		{
			idc = 114;
			canDrag = 1;
			rows = 25;
			x = 0.0307812 * safezoneW + safezoneX;
			y = 0.785916 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.175948 * safezoneH;
			sizeEx = (			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * GUI_GRID_H * GUI_GRID_H;
			colorSelectBackground2[] = {1,1,1,0.3};
			colorPictureSelected[] = {1,1,1,1};
			columns[] = {"safezoneX + (19.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))","safezoneX + (32.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 1*(safezoneW - 				((safezoneW / safezoneH) min 1.2))","safezoneX + (38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 1*(safezoneW - 				((safezoneW / safezoneH) min 1.2))"};
			class MuteCheckBoxTemplate: RscCheckBox
			{
				x = 0;
				y = 0;
				w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				textureChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				textureUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
				textureFocusedChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				textureFocusedUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
				textureHoverChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				textureHoverUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
				texturePressedChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				texturePressedUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
				textureDisabledChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				textureDisabledUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
			};
		};
		delete SortPlayers;
		delete ButtonPing;
		delete SortPing;
		delete MuteAll;

	};
};
