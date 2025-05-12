#include "\Edaly_Client\version.hpp"

class CfgPatches
{
	class Edaly_Markers
	{
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredAddons[]={"Edaly_Client"};
		requiredVersion=ARMA3_VERSION;
		units[]={};
		weapons[]={};
	};
};

class CfgEditorCategories
{
	class Edaly_Markers
	{
		displayName=$STR_EDALY_AUTHOR;
	};
};

class CfgMarkers
{
	#include "CfgMarkers.hpp"
};
