/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

#define VSoft		0
#define VArmor		1
#define VAir		2

#define private		0
#define protected		1
#define public		2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define true	1
#define false	0

class CfgPatches {
	class Edaly_UI_Menu {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_UI_F","A3_UI_F_Bootcamp","A3_UI_F_Heli","A3_Ui_F_Exp","A3_Ui_F_Exp_A"};
	};
};

class CfgFontFamilies
{
	class sketch
	{
		fonts[] = 
		{
			{"Edaly_UI_Menu\fonts\Sketch\Sketch6","Edaly_UI_Menu\fonts\Sketch\Sketch6"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch10","Edaly_UI_Menu\fonts\Sketch\Sketch10"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch11","Edaly_UI_Menu\fonts\Sketch\Sketch11"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch12","Edaly_UI_Menu\fonts\Sketch\Sketch12"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch13","Edaly_UI_Menu\fonts\Sketch\Sketch13"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch14","Edaly_UI_Menu\fonts\Sketch\Sketch14"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch15","Edaly_UI_Menu\fonts\Sketch\Sketch15"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch16","Edaly_UI_Menu\fonts\Sketch\Sketch16"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch17","Edaly_UI_Menu\fonts\Sketch\Sketch17"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch18","Edaly_UI_Menu\fonts\Sketch\Sketch18"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch19","Edaly_UI_Menu\fonts\Sketch\Sketch19"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch20","Edaly_UI_Menu\fonts\Sketch\Sketch20"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch21","Edaly_UI_Menu\fonts\Sketch\Sketch21"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch22","Edaly_UI_Menu\fonts\Sketch\Sketch22"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch23","Edaly_UI_Menu\fonts\Sketch\Sketch23"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch24","Edaly_UI_Menu\fonts\Sketch\Sketch24"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch25","Edaly_UI_Menu\fonts\Sketch\Sketch25"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch26","Edaly_UI_Menu\fonts\Sketch\Sketch26"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch27","Edaly_UI_Menu\fonts\Sketch\Sketch27"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch28","Edaly_UI_Menu\fonts\Sketch\Sketch28"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch29","Edaly_UI_Menu\fonts\Sketch\Sketch29"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch30","Edaly_UI_Menu\fonts\Sketch\Sketch30"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch31","Edaly_UI_Menu\fonts\Sketch\Sketch31"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch34","Edaly_UI_Menu\fonts\Sketch\Sketch34"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch35","Edaly_UI_Menu\fonts\Sketch\Sketch35"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch37","Edaly_UI_Menu\fonts\Sketch\Sketch37"},
			{"Edaly_UI_Menu\fonts\Sketch\Sketch46","Edaly_UI_Menu\fonts\Sketch\Sketch46"}
		};
	};
};

class RscActivePicture;
class RscActivePictureKeepAspect;
class RscPicture;	// External class reference
class RscStandardDisplay;	// External class reference
class RscText;
class RscLineBreak;
class RscButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscList;
class RscXListBox;
class RscPictureKeepAspect;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscStructuredText;
class RscControlsGroup;
class RscHTML;
class RscVignette;
class RscFrame;
class RscTitle;

class CA_Mainback;
class CA_Back;
class CA_Title_Back;
class CA_Logo_Small;
class CA_RscButton_dialog;

class CA_IGUI_Title;
class RscGearShortcutButton;
class RscIGUIListNBox;
class RscActiveText;
class RscProgress;
class RscProgressNotFreeze;
class RscButtonTextOnly;
class CA_Title;
class RscShortcutButton;
class CA_Black_Back;
class RscMapControl;
class IGUIBack;
class RscObject;
class RscDisplayGetReady;
class RscListBox;
class RscListNBox;
class RscIGUIShortcutButton;
class RscCombo;
class RscIGUIListBox;
class RscButtonMenuCancel;
class VScrollbar;
class HScrollbar;
class RscListBoxKeys;
class RscXSliderH;
class RscXSliderV;
class RscTextCheckBox;
class RscEdit;
class RscButtonMenuSteam;
class RscBackgroundGUI;
class RscBackgroundGUITop;
class RscBackgroundGUILeft;
class RscBackgroundGUIRight;
class RscBackgroundGUIBottom;
class RscCheckBox;
class RscTree;
class RscDebugConsole;
class RscMessageBox;

class Attributes;

#include "config\RscDisplayMain.hpp"
#include "config\RscDisplayStart.hpp"
#include "config\RscDisplayMultiplayer.hpp"
#include "config\RscDisplayMultiplayerSetup.hpp"
#include "CfgLoadingScreens.hpp"
#include "config\RscDisplaySelectIsland.hpp"