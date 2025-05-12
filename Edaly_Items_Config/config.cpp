#include "\Edaly_Client\version.hpp"

class CfgPatches
{
	class Edaly_Items_Config
	{
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredAddons[]={"Edaly_Client", "A3_Weapons_F"};
		requiredVersion=ARMA3_VERSION;
		units[]={};
		weapons[]={};
	};
};

class CfgWeapons
{
    #include "CfgWeapons.hpp"
};

class CfgGlasses
{
    #include "CfgGlasses.hpp"
};

class CfgVehicles
{
    #include "CfgVehicles.hpp"
};
