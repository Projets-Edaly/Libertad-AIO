
class CfgPatches
{
	class Edaly_Structures_Assets_7_Civil_Old_Secondary_Bank
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Structures_F", "Edaly_Editor_Categories"};
	};
};

class CfgVehicles
{
	class House;
	class House_F: House{};
	class Edaly_Str_Old_Secondary_Bank_F: House_F
	{
		scope = 2;
		displayName = "Old Secondary Bank";
        author = "Sayriss";
		editorCategory = "EdCat_Edaly_Structures";
		editorSubcategory = "EdSubcat_Edaly_Civil";
		model = "Edaly_Structures_Assets_7\Civilian\Old_Country_Bank\Old_Country_Bank.p3d";
		mapSize = 7;
		cost = 40000;
	};
};
