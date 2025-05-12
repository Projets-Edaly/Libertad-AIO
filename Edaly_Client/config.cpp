#include "version.hpp"

class CfgPatches
{
	class Edaly_Client
	{
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredAddons[]={"cba_main"};
		requiredVersion=ARMA3_VERSION;
		units[]={"WildlifeModule"};
		weapons[]={};
	};
};

#include "CfgFunctions.hpp"
#include "CfgAnimals.hpp"
#include "modules.hpp"
