class RscDisplayMain : RscStandardDisplay 
{
	idd = 0;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayMain""] call compile preprocessfilelinenumbers ""Edaly_UI_Menu\RscDisplayMain.sqf""";
	onUnload = "[""onUnload"",_this,""RscDisplayMain""] call compile preprocessfilelinenumbers ""Edaly_UI_Menu\RscDisplayMain.sqf""";
	
	class ControlsBackground 
	{
		class Mainback : RscPicture 
		{
			idc = 2310;
			text = "\Edaly_UI_Menu\data\main_title_01.jpg";
			x = "0 * safezoneW + safezoneX";
			y = "0 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "1 * safezoneH";
		};
		delete BackgroundLeft;
		delete BackgroundRight;
		delete MouseArea;
		delete Picture;
		delete CA_ARMA2;
		delete Vignette;
		delete TileGroup;
	};
	
	
	delete Spotlight;
	
	class Controls 
	{
		delete Button3DEditor;
		
		delete Exit;

		delete TitleIconMultiplayer;
		delete TitleIconOptions;
		delete TitleIconTutorials;
		
		//Some cancer can't be removed, hide it instead
		class BackgroundBar : RscPicture
		{	
			x = 0;
			y = 0;
			w = 0;
			h = 0;
		};
		
		class BackgroundBarLeft : RscPicture
		{
			x = 0;
			y = 0;
			w = 0;
			h = 0;
		};
		
		class BackgroundSpotlight : RscPicture
		{
			x = 0;
			y = 0;
			w = 0;
			h = 0;
		};
		
		class BackgroundSpotlightLeft : RscPicture
		{
			x = 0;
			y = 0;
			w = 0;
			h = 0;
		};
		
		class AllMissions : RscText
		{
			x = 0;
			y = 0;
			w = 0;
			h = 0;
		};
		
		class GroupSingleplayer: RscControlsGroupNoScrollbars
		{
		    idc = 1001;
		    x = 0;
		    y = 0;
		    w = 0;
		    h = 0;
		    class Controls{};
		};
		
		class InfoMods : RscControlsGroupNoHScrollbars
		{
			idc = 1030;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			class Controls{};
		};
		
		class InfoNews : RscControlsGroupNoHScrollbars
		{
			idc = 1032;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			class Controls{};
		};
		
		class TitleIconSingleplayer : RscButton
		{
			x = 0;
			y = 0;
			w = 0;
			h = 0;
		};
		class GroupOptions: GroupSingleplayer
		{
		    idc = 1004;
		    x = 0;
		    y = 0;
		    w = 0;
		    h = 0;
		    class Controls{};
		};		
		class TitleSingleplayer : RscButtonMenu
		{
			x = 0;
			y = 0;
			w = 0;
			h = 0;
		};

		delete BackgroundBarRight;
		delete BackgroundCenter;
		delete BackgroundSpotlightRight;
		delete Footer;
		delete GroupMultiplayer;
		delete GroupSession;
		delete GroupTutorials;
		delete InfoDLCs;
		delete InfoDLCsOwned;
		delete InfoVersion;
		delete Logo;
		delete LogoApex;
		delete ProofsOfConcept;
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete SpotlightBase;
		
		delete TitleMultiplayer;
		delete TitleOptions;
		delete TitleSession;
		delete TitleTutorials;
		
		delete B_Player;
		delete B_SinglePlayer;
		delete B_SingleMission;
		delete B_MultiPlayer;
		delete B_MissionEditor;
		delete B_Credits;
		delete B_Quit;
		delete B_Campaign;
		delete B_Expansions;
		delete B_Options;
		delete Date;
		delete Version;
		delete Modlist;
		delete CA_ARMA2;
		delete CA_PlayerName;
		delete CA_Version;
		delete CA_SinglePlayer;
		delete CA_Editor;
		delete CA_PlayerProfile;
		delete CA_MP;
		delete CA_Options;
		delete CA_Expansions;
		delete CA_Exit;
		delete CA_MenuBack;
		delete CA_TitleBack;
		delete CA_BottomBack;
		delete Mainback;
		
		delete GameLogo;
		/*
		class GameLogo : RscPicture {
			idc = 1202;
			text = "\A3\Ui_f\data\Logos\arma3_white_ca.paa";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "10.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		*/

		delete Title;

		/*
		class Title : RscTitle {
			idc = 1003;
			style = 0;
			shadow = false;
			colorBackground[] = {0, 0, 0, 1};
			text = "$STR_A3_RscDisplayMain_Title";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "14.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		*/
		
		//delete PlayersName;
		class PlayersName : RscTitle {
			idc = 109;
			style = 1;
			shadow = false;
			text = "$STR_A3_RscDisplayMain_PlayersName";
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			//x = "6 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			//y = "14.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			//w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			//h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		delete ButtonPlay;
		/*
		class ButtonPlay : RscButtonMenu {
			idc = 138;
			text = "$STR_A3_RscDisplayMain_ButtonPlay";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "15.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = $STR_MAIN_SINGLEPLAYER_TOOLTIP;
		};
		*/
		
		delete ButtonCampaign;
		/*
		class ButtonCampaign : RscButtonMenu {
			idc = 101;
			onbuttonclick = "uinamespace setvariable ['RscDisplayCampaignLoad_title', toUpper (localize 'STR_A3_RSCDISPLAYMAIN_BUTTONCAMPAIGN')];";
			text = "$STR_A3_RscDisplayMain_ButtonCampaign";
			x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "10.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = $STR_TOOLTIP_MAIN_CAMPAIGN;
		};
		*/
		
		delete ButtonShowcases;
		/*
		class ButtonShowcases : RscButtonMenu {
			idc = 150;
			onbuttonclick = "uinamespace setvariable ['RscDisplaySingleMission_title', toUpper (localize 'STR_A3_RSCDISPLAYMAIN_BUTTONSHOWCASES')];";
			text = "$STR_A3_RscDisplayMain_ButtonShowcases";
			x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "12 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = $STR_TOOLTIP_MAIN_SHOWCASES;
		};
		*/
		
		delete ButtonChallenges;
		/*
		class ButtonChallenges : RscButtonMenu {
			idc = 151;
			onbuttonclick = "uinamespace setvariable ['RscDisplaySingleMission_title', toUpper (localize 'STR_A3_RSCDISPLAYMAIN_BUTTONCHALLENGES')];";
			text = "$STR_A3_RscDisplayMain_ButtonChallenges";
			x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "13.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = "$STR_A3_RscDisplayMain_ButtonChallenges_tooltip";
		};
		*/
		
		delete ButtonScenarios;
		/*
		class ButtonScenarios : RscButtonMenu {
			idc = 103;
			onbuttonclick = "uinamespace setvariable ['RscDisplaySingleMission_title', toUpper (localize 'STR_A3_RSCDISPLAYMAIN_BUTTONSCENARIOS')];";
			text = "$STR_A3_RscDisplayMain_ButtonScenarios";
			x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "14.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = $STR_TOOLTIP_MAIN_SCENARIOS;
		};
		*/		
		

		
		
		delete ButtonLearn;
		/*
		class ButtonLearn : RscButtonMenu {
			idc = 2423;
			text = "$STR_A3_RscDisplayMain_ButtonLearn";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "17.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = "$STR_A3_RscDisplayMain_ButtonLearn_tooltip";
		};
		*/
		
		delete ButtonBootcamp;
		/*
		class ButtonBootcamp : RscButtonMenu {
			idc = 149;
			onbuttonclick = "uinamespace setvariable ['RscDisplayCampaignLoad_title', toUpper (localize 'STR_A3_RSCDISPLAYMAIN_BUTTONBOOTCAMP')];";
			text = "$STR_A3_RscDisplayMain_ButtonBootcamp";
			x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "13.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = "$STR_A3_RscDisplayMain_ButtonBootcamp_tooltip";
		};
		*/
		
		delete ButtonVRTraining;
		/*
		class ButtonVRTraining : RscButtonMenu {
			idc = 152;
			text = "$STR_A3_RscDisplayMain_ButtonVRTraining";
			x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "14.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = "$STR_A3_RscDisplayMain_ButtonVRTraining_tooltip";
		};
		*/
		delete ButtonVirtualArsenal;
		/*
		class ButtonVirtualArsenal : RscButtonMenu {
			onbuttonclick = "playMission['','\A3\UI_F_Bootcamp\Scenarios\Arsenal.VR']";
			idc = 2421;
			text = "$STR_A3_RscDisplayMain_ButtonVirtualArsenal";
			x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "15.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = "$STR_A3_RscDisplayMain_ButtonVirtualArsenal_tooltip";
		};
		*/	
		delete ButtonTutorialHints;
		/*
		class ButtonTutorialHints : RscButtonMenu {
			idc = 143;
			text = "$STR_A3_RscDisplayMain_ButtonTutorialHints";
			x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "16.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = $STR_TOOLTIP_MAIN_FIELDMANUAL;
		};
		*/
		
		delete ButtonCommunityGuide;
		/*
		class ButtonCommunityGuide : RscButtonMenu {
			onbuttonclick = "(ctrlparent (_this select 0)) createDisplay 'RscDisplayCommunityGuide'";
			idc = 2422;
			text = "$STR_A3_RscDisplayMain_ButtonCommunityGuide";
			x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "17.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = "$STR_A3_RscDisplayMain_ButtonCommunityGuide_tooltip";
		};
		*/
		
		delete ButtonOptions;
		/*
		class ButtonOptions : RscButtonMenu {
			idc = 102;
			text = "$STR_A3_RscDisplayMain_ButtonOptions";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "18.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = $STR_TOOLTIP_MAIN_OPTIONS_A3;
		};
		*/
		
		delete ButtonCredits;
		
		/*
		class ButtonCredits : RscButtonMenu {
			onButtonClick = "0 = _this spawn (uinamespace getvariable 'bis_fnc_credits');";
			idc = 2405;
			text = "$STR_A3_RscDisplayMain_ButtonCredits";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "19.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = $STR_TOOLTIP_MAIN_CREDITS;
		};
		*/
		delete ButtonEditor;
		delete Arsenal;

		/*class ButtonMultiplayer : RscActiveText {
			idc = 105;
			style = 48;
			default = 1;
			text = "\Edaly_UI_Menu\menu\button_play.jpg";
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.412026 * safezoneH + safezoneY;
			w = 0.608437 * safezoneW;
			h = 0.153955 * safezoneH;
			//tooltip = "Play";
			color[] = { 1, 1, 1, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "";
			onMouseEnter = "ctrlSetFocus (_this select 0); (_this select 0) ctrlSetText '\Edaly_UI_Menu\menu\button_play_hover.jpg'";
			onMouseExit = "ctrlSetFocus (_this select 0); (_this select 0) ctrlSetText '\Edaly_UI_Menu\menu\button_play.jpg'";
		};*/
		
		// Options Menu
		
		class ButtonVideo : RscActiveText {
			idc = 301;
			style = 48;
			text = "\Edaly_UI_Menu\menu\button_video.jpg";
			x = 0.597969 * safezoneW + safezoneX;
			y = 0.576977 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.0769773 * safezoneH;
			//tooltip = $STR_TOOLTIP_MAIN_VIDEO;
			color[] = { 1, 1, 1, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "";
			onMouseEnter = "ctrlSetFocus (_this select 0); (_this select 0) ctrlSetText '\Edaly_UI_Menu\menu\button_video_hover.jpg'";
			onMouseExit = "ctrlSetFocus (_this select 0); (_this select 0) ctrlSetText '\Edaly_UI_Menu\menu\button_video.jpg'";
		};
		
		class ButtonAudio : RscActiveText {
			idc = 302;
			style = 48;
			text = "\Edaly_UI_Menu\menu\button_audio.jpg";
			x = 0.597969 * safezoneW + safezoneX;
			y = 0.664951 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.0769773 * safezoneH;
			//tooltip = $STR_TOOLTIP_MAIN_AUDIO;
			color[] = { 1, 1, 1, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "";
			onMouseEnter = "ctrlSetFocus (_this select 0); (_this select 0) ctrlSetText '\Edaly_UI_Menu\menu\button_audio_hover.jpg'";
			onMouseExit = "ctrlSetFocus (_this select 0); (_this select 0) ctrlSetText '\Edaly_UI_Menu\menu\button_audio.jpg'";
		};
		
		class ButtonControls : RscActiveText {
			idc = 303;
			style = 48;
			text = "\Edaly_UI_Menu\menu\button_settings.jpg";
			x = 0.597969 * safezoneW + safezoneX;
			y = 0.752925 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.0769773 * safezoneH;
			//tooltip = $STR_TOOLTIP_MAIN_CONTROLS;
			color[] = { 1, 1, 1, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "";
			onMouseEnter = "ctrlSetFocus (_this select 0); (_this select 0) ctrlSetText '\Edaly_UI_Menu\menu\button_settings_hover.jpg'";
			onMouseExit = "ctrlSetFocus (_this select 0); (_this select 0) ctrlSetText '\Edaly_UI_Menu\menu\button_settings.jpg'";
		};
		delete ButtonGame;
		/*class ButtonGame : RscActiveText {
			idc = 307;
			style = 48;
			text = "\Edaly_UI_Menu\menu\button_game_hover.paa";
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.5572 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.055 * safezoneH;
			//tooltip = $STR_TOOLTIP_MAIN_GAME;
			color[] = { 1, 1, 1, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "";
			onMouseEnter = "ctrlSetFocus (_this select 0); (_this select 0) ctrlSetText '\Edaly_UI_Menu\menu\button_game.paa'";
			onMouseExit = "ctrlSetFocus (_this select 0); (_this select 0) ctrlSetText '\Edaly_UI_Menu\menu\button_game_hover.paa'";
		};*/
		delete ButtonProfile;
		/*class ButtonProfile : RscActiveText {
			idc = 1001;
			style = 48;
			text = "\Edaly_UI_Menu\menu\button_profile_hover.paa";
			onButtonClick = "disableSerialization; _display = ctrlParent (_this select 0); _ctrl109 =_display displayCtrl 109; ctrlActivate _ctrl109;";
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.066 * safezoneH;
			//tooltip = $STR_TOOLTIP_MAIN_PLAYER;
			color[] = { 1, 1, 1, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "";
			onMouseEnter = "ctrlSetFocus (_this select 0); (_this select 0) ctrlSetText '\Edaly_UI_Menu\menu\button_profile.paa'";
			onMouseExit = "ctrlSetFocus (_this select 0); (_this select 0) ctrlSetText '\Edaly_UI_Menu\menu\button_profile_hover.paa'";
		};*/
		
		delete ButtonExpansions;
		
		// End Of Options Menu
		
		class ButtonExit : RscActiveText {
			idc = 106;
			style = 48;
			shortcuts[] = {0x00050000 + 3};
			text = "\Edaly_UI_Menu\menu\button_exit.jpg";
			x = 0.649531 * safezoneW + safezoneX;
			y = 0.8409 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.0769773 * safezoneH;
			//tooltip = "Exit";
			color[] = { 1, 1, 1, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "";
			onMouseEnter = "ctrlSetFocus (_this select 0); (_this select 0) ctrlSetText '\Edaly_UI_Menu\menu\button_exit_hover.jpg'";
			onMouseExit = "ctrlSetFocus (_this select 0); (_this select 0) ctrlSetText '\Edaly_UI_Menu\menu\button_exit.jpg'";
		};

		delete ButtonAllMissions;
		delete News;
		delete CopyrightText;
		/*
		class CopyrightText : RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			w = "safezoneW - 2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			shadow = false;
			font = "PuristaLight";
			idc = 1006;
			text = $STR_COPYRIGHT_DISCLAIMER;
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		*/
		
		class VersionNumber : RscText {
			idc = 118;
			style = 1;
			x = "safezoneX + safezoneW - 4.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			shadow = false;
			font = "PuristaLight";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "3.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class VersionText : RscText {
			style = 1;
			x = "safezoneX + safezoneW - 12.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			shadow = false;
			font = "PuristaLight";
			idc = 1008;
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		delete ModIconsBackground;
		delete ModIcons;
		delete OwnedDLCIconsBackground;
		delete OwnedDLCIcons;
		delete DLCIconsBackground;
		delete DLCIcons;
		delete ListSort;
	};
	

	class IconPicture : RscPictureKeepAspect {
		spacing = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		text = "";
		x = 0;
		y = 0;
		w = 0;
		h = 0;
	};

	class DlcOwnedIconPicture : RscPictureKeepAspect {
		spacing = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		text = "";
		x = 0;
		y = 0;
		w = 0;
		h = 0;
	};

	class DlcIconPicture : RscPictureKeepAspect {
		spacing = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		text = "";
		x = 0;
		y = 0;
		w = 0;
		h = 0;
	};
	class SpotlightPrev: RscActivePictureKeepAspect
	{
		idc = 1060;
		color[] = {-1,-1,-1,-1};
		fade = 1;
		text = ""; 
		x = 0;
		y = 0;
		w = 0;
		h = 0;
		colorActive[] = {1,1,1,1};
	};
	class SpotlightNext: SpotlightPrev
	{
		idc = 1061;
		angle = 180;
		text = ""; 
		x = 0;
		y = 0;
		w = 0;
		h = 0;
		colorActive[] = {-1,-1,-1,-1};
	};
};
