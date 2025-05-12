#include "\Edaly_Client\version.hpp"

class CfgPatches
{
	class Edaly_Map_Categories
	{
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredAddons[]={"Edaly_Editor_Categories"};
		requiredVersion=ARMA3_VERSION;
		units[]={};
		weapons[]={};
	};
};

class CfgVehicles
{
	class Static;
    class Thing;
	#include "A3_Tree_Culture_EXP.hpp"
	#include "A3_Tree_EXP.hpp"
	#include "A3_Tree_Altis.hpp"
	#include "A3_Arbuste_EXP.hpp"
	#include "A3_Arbuste_Altis.hpp"
	#include "A3_Structure.hpp"
	#include "A3_Infrastructure_Pont_EXP.hpp"
	#include "A3_Roads_Decals.hpp"
	#include "A3_Structure_Hopital_Altis.hpp"
};
