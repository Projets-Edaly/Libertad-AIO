#include "\Edaly_Client\version.hpp"

class CfgPatches
{
    class Edaly_Flags_config
    {
        author=$STR_EDALY_AUTHOR;
        url=$STR_EDALY_WEBSITE;
        requiredAddons[]={"Edaly_Client","Edaly_Editor_Categories","Edaly_Flags"};
        requiredVersion=ARMA3_VERSION;
        units[]={ "Edaly_Flags_NuevaIsla_01_F","Edaly_Flags_URSS_01_F","Edaly_Flags_USA_01_F" };
        weapons[]={};
    };
};

class CfgVehicles
{
	// FLAG CARRIER
	class FlagCarrierCore;
	class Edaly_FlagCarrier_01: FlagCarrierCore
	{
		author="Hugo - Edaly";
		scope=0;
		scopeCurator=0;
		displayName="";
		model="\Edaly_Flags\Flags_01_F\Flags_01_F\Edaly_Flags_01_F.p3d";
		icon="iconObject_circle";
		editorCategory = "EdCat_Edaly";
		editorSubcategory="EdSubcat_Edaly_Props";
		vehicleClass="Flag";
		cost=1000;
		keepHorizontalPlacement=0;
		accuracy=1000;
		animated=0;
		nameSound="obj_flag";
		supplyRadius=2;
	};
	class Edaly_FlagCarrier_02: FlagCarrierCore
	{
		author="Hugo - Edaly";
		scope=0;
		scopeCurator=0;
		displayName="";
		model="\Edaly_Flags\Flags_01_F\Flags_02_F\Edaly_Flags_02_F.p3d";
		icon="iconObject_circle";
		editorCategory = "EdCat_Edaly";
		editorSubcategory="EdSubcat_Edaly_Props";
		vehicleClass="Flag";
		cost=1000;
		keepHorizontalPlacement=0;
		accuracy=1000;
		animated=0;
		nameSound="obj_flag";
		supplyRadius=2;
	};
	class Edaly_FlagCarrier_03: FlagCarrierCore
	{
		author="Hugo - Edaly";
		scope=0;
		scopeCurator=0;
		displayName="";
		model="\Edaly_Flags\Flags_01_F\Flags_03_F\Edaly_Flags_03_F.p3d";
		icon="iconObject_circle";
		editorCategory = "EdCat_Edaly";
		editorSubcategory="EdSubcat_Edaly_Props";
		vehicleClass="Flag";
		cost=1000;
		keepHorizontalPlacement=0;
		accuracy=1000;
		animated=0;
		nameSound="obj_flag";
		supplyRadius=2;
	};
	// FLAG CARRIER

	// FLAGS CONFIG
	class Edaly_Flags_NuevaIsla_01_F: Edaly_FlagCarrier_01
	{
		author="Hugo - Edaly";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{

				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Edaly_Flags_NuevaIsla_01_F";
		scope=2;
		scopeCurator=2;
		displayName="Drapeau Nueva Isla Incline";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\Edaly_Flags\data\flag_nuevaisla_co.paa'";
		};
	};
	class Edaly_Flags_URSS_01_F: Edaly_FlagCarrier_02
	{
		author="Hugo - Edaly";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{

				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Edaly_Flags_URSS_01_F";
		scope=2;
		scopeCurator=2;
		displayName="Drapeau URSS Incline";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\Edaly_Flags\data\flag_urss_co.paa'";
		};
	};
	class Edaly_Flags_USA_01_F: Edaly_FlagCarrier_03
	{
		author="Hugo - Edaly";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{

				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Edaly_Flags_USA_01_F";
		scope=2;
		scopeCurator=2;
		displayName="Drapeau USA Incline";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\Edaly_Flags\data\flag_us_co.paa'";
		};
	};
    class Furniture_base_F;
    class Edaly_Flags_NuevaIsla_02_IslaNueva_F: Furniture_base_F
    {
        scope=2;
        author="Hugo - Edaly";
        displayName="Drapeau NuevaIsla Fixe";
        model="\Edaly_Flags\Flags_02_F\Edaly_Flags_02_F.p3d";
        hiddenSelections[] = {"flag"};
        hiddenSelectionsTextures[] = {"Edaly_Flags\data\flag_nuevaisla_co.paa"};
        vehicleClass="Edaly_Flags_02_F";
        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Props";
    };
    class Edaly_Flags_NuevaIsla_02_URSS_F: Edaly_Flags_NuevaIsla_02_IslaNueva_F
    {
        scope=2;
        author="Hugo - Edaly";
        displayName="Drapeau URSS Fixe";
        model="\Edaly_Flags\Flags_02_F\Edaly_Flags_02_F.p3d";
        hiddenSelections[] = {"flag"};
        hiddenSelectionsTextures[] = {"Edaly_Flags\data\flag_urss_co.paa"};
        vehicleClass="Edaly_Flags_02_F";
        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Props";
    };
    class Edaly_Flags_NuevaIsla_02_USA_F: Edaly_Flags_NuevaIsla_02_IslaNueva_F
    {
        scope=2;
        author="Hugo - Edaly";
        displayName="Drapeau USA Fixe";
        model="\Edaly_Flags\Flags_02_F\Edaly_Flags_02_F.p3d";
        hiddenSelections[] = {"flag"};
        hiddenSelectionsTextures[] = {"Edaly_Flags\data\flag_us_co.paa"};
        vehicleClass="Edaly_Flags_02_F";
        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Props";
    };
    class Edaly_Flags_NuevaIsla_03_IslaNueva_F: Furniture_base_F
    {
        scope=2;
        author="Hugo - Edaly";
        displayName="Drapeau NuevaIsla Cable Fixe";
        model="\Edaly_Flags\Flags_03_F\Edaly_Flags_03_F.p3d";
        vehicleClass="Edaly_Flags_NuevaIsla_03_IslaNueva_F";
        hiddenSelections[] = {"flag"};
        hiddenSelectionsTextures[] = {"\Edaly_Flags\data\flag_nuevaisla_co.paa"};
        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Props";
    };
    class Edaly_Flags_NuevaIsla_03_URSS_F: Edaly_Flags_NuevaIsla_03_IslaNueva_F
    {
        scope=2;
        author="Hugo - Edaly";
        displayName="Drapeau URSS Cable Fixe";
        model="\Edaly_Flags\Flags_03_F\Edaly_Flags_03_F.p3d";
        vehicleClass="Edaly_Flags_NuevaIsla_03_URSS_F";
        hiddenSelections[] = {"flag"};
        hiddenSelectionsTextures[] = {"\Edaly_Flags\data\flag_urss_co.paa"};
        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Props";
    };
    class Edaly_Flags_NuevaIsla_03_USA_F: Edaly_Flags_NuevaIsla_03_IslaNueva_F
    {
        scope=2;
        author="Hugo - Edaly";
        displayName="Drapeau USA Cable Fixe";
        model="\Edaly_Flags\Flags_03_F\Edaly_Flags_03_F.p3d";
        vehicleClass="Edaly_Flags_NuevaIsla_03_USA_F";
        hiddenSelections[] = {"flag"};
        hiddenSelectionsTextures[] = {"\Edaly_Flags\data\flag_us_co.paa"};
        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Props";
    };
    class Edaly_Flags_NuevaNew_04_F: Furniture_base_F
    {
        scope=2;
        author=$STR_EDALY_AUTHOR;
        displayName="Drapeau Nueva Cable (2)";
        model="\Edaly_Flags\Flags_04_F\Edaly_Flags_04_F.p3d";
        vehicleClass="Edaly_Flags_Nueva_04_F";
        hiddenSelections[] = {"flag"};
        hiddenSelectionsTextures[] = {"\Edaly_Flags\Flags_04_F\data\flag_nueva_co.paa"};
        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Props";
    };
    class Edaly_Flags_StGeo_04_F: Furniture_base_F
    {
        scope=2;
        author=$STR_EDALY_AUTHOR;
        displayName="Drapeau Saint George Cable (2)";
        model="\Edaly_Flags\Flags_04_F\Edaly_Flags_04_F.p3d";
        vehicleClass="Edaly_Flags_Nueva_04_F";
        hiddenSelections[] = {"flag"};
        hiddenSelectionsTextures[] = {"\Edaly_Flags\Flags_04_F\data\flag_stgeo_co.paa"};
        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Props";
    };
    class Edaly_Flags_NuevaOld_04_F: Furniture_base_F
    {
        scope=2;
        author=$STR_EDALY_AUTHOR;
        displayName="Drapeau Pre-Revolution Cable (2)";
        model="\Edaly_Flags\Flags_04_F\Edaly_Flags_04_F.p3d";
        vehicleClass="Edaly_Flags_Nueva_04_F";
        hiddenSelections[] = {"flag"};
        hiddenSelectionsTextures[] = {"\Edaly_Flags\Flags_04_F\data\flag_oldnueva_co.paa"};
        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Props";
    };
    // FLAGS CONFIG
};

class CfgCloth
{
	class Flag
	{
		stepSize=0.0049999999;
		colPoints=9;
		rowPoints=5;
		stretchCoef=1000;
		fricCoef=1;
		windCoef=10;
		gravCoef=0.75;
	};
};

class CfgNonAiVehicles
{
	class ProxyFlag_F_01
	{
		scope=1;
		model="\Edaly_Flags\Flags_01_F\Flags_01_F\flag_f_01";
		autocenter=0;
		reversed=0;
		selectionFabric="latka";
		simulation="flag";
	};
	class ProxyFlag_F_02
	{
		scope=1;
		model="\Edaly_Flags\Flags_01_F\Flags_02_F\flag_f_02";
		autocenter=0;
		reversed=0;
		selectionFabric="latka";
		simulation="flag";
	};
	class ProxyFlag_F_03
	{
		scope=1;
		model="\Edaly_Flags\Flags_01_F\Flags_03_F\flag_f_03";
		autocenter=0;
		reversed=0;
		selectionFabric="latka";
		simulation="flag";
	};
};
