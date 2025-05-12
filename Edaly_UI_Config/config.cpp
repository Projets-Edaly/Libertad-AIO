#include "\Edaly_Client\version.hpp"

class CfgPatches
{
	class Edaly_UI_Config
	{
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredAddons[]={"A3_UI_F", "Edaly_Client","Edaly_UI_Assets","Edaly_Fonts"};
		requiredVersion=ARMA3_VERSION;
		units[]={};
		weapons[]={};
	};
};

#include "displayCtrlIds.hpp"
#include "RscMapControl.hpp"
#include "controls.hpp"
//#include "RscDisplayMainMap.hpp"

#include "RscDisplayDefault.hpp"

class RscTitles {
	#include "RscTitleDefault.hpp"
	#include "RscTitleProgress.hpp"
	#include "RscTitleMessage.hpp"
};

#include "RscDisplayEdit.hpp"
#include "RscDisplayCombo.hpp"
#include "RscDisplayText.hpp"
