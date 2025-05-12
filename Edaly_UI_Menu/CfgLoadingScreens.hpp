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

class CfgLoadingScreens
{
	class World
	{
		General[] =
		{
			"\Edaly_UI_Menu\data\load_02.jpg"
		};
	};
};

class RscDisplayLoadEdaly : RscStandardDisplay 
{
	#include "LoadingScreenBase.hpp"
};

class RscDisplayLoadMission : RscStandardDisplay 
{
	#include "LoadingScreenBase.hpp"
};

class RscDisplayLoadCustom : RscStandardDisplay 
{
	#include "LoadingScreenBase.hpp"
};

class RscDisplayNotFreeze : RscStandardDisplay 
{
	#include "LoadingScreenBase.hpp"
};

class RscDisplayClientWait : RscStandardDisplay 
{
	#include "LoadingScreenBase.hpp"
};

/*
class RscDisplayClient : RscStandardDisplay 
{
	#include "LoadingScreenBase.hpp"
};


*/

class RscDisplayLoading {
	idd = 102;
	onLoad = "[""onLoad"",_this,""RscDisplayLoading""] call compile preprocessfilelinenumbers ""Edaly_UI_Menu\RscDisplayLoading.sqf""";
	onUnload = "[""onUnload"",_this,""RscDisplayLoading""] call compile preprocessfilelinenumbers ""Edaly_UI_Menu\RscDisplayLoading.sqf""";
	
	class Variants {
		class LoadingOne : RscDisplayLoadEdaly {};
		class Loading : RscDisplayLoadEdaly {};
	};
};
