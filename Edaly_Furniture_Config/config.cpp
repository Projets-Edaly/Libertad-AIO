#include "\Edaly_Client\version.hpp"
class CfgPatches
{
	class Edaly_Furniture_Config {
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredAddons[]={"Edaly_Client", "A3_Soft_F","Edaly_Editor_Categories","Edaly_Furniture_1","Edaly_Furniture_2"};
		requiredVersion=ARMA3_VERSION;
		units[]={};
		weapons[]={};
	};
};

class SmallFire;
class CfgVehicles
{
	class Furniture_base_F;
	class ThingX;
	class House_F;
	class Land_Edaly_Barrel_01_F: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_RHUM_BARREL;
		model="edaly_furniture_1\Barrel_01\Barrel_01_F.p3d";
		vehicleClass="Land_Edaly_Barrel_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Barrel_01_F.jpg";
	};
	class Land_Edaly_Barrel_02_RD_F: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_RED_BARREL;
		model="edaly_furniture_1\Barrel_02\Barrel_02_RD_F.p3d";
		vehicleClass="Land_Edaly_Barrel_02_RD_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Barrel_02_RD_F.jpg";
	};
	class Land_Edaly_Barrel_02_RS_F: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_RST_BARREL;
		model="edaly_furniture_1\Barrel_02\Barrel_02_RS_F.p3d";
		vehicleClass="Land_Edaly_Barrel_02_RS_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Barrel_02_RS_F.jpg";
	};
	class Land_Edaly_Barrel_02_BL_F: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_BLU_BARREL;
		model="edaly_furniture_1\Barrel_02\Barrel_02_BL_F.p3d";
		vehicleClass="Land_Edaly_Barrel_02_BL_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Barrel_02_BL_F.jpg";
	};
	class Land_Edaly_Barrel_02_BK_F: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_BLK_BARREL;
		model="edaly_furniture_1\Barrel_02\Barrel_02_BK_F.p3d";
		vehicleClass="Land_Edaly_Barrel_02_BK_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Barrel_02_BK_F.jpg";
	};
	class Land_Edaly_Barrel_02_GR_F: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_GRN_BARREL;
		model="edaly_furniture_1\Barrel_02\Barrel_02_GR_F.p3d";
		vehicleClass="Land_Edaly_Barrel_02_GR_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Barrel_02_GR_F.jpg";
	};
	class Land_Edaly_Bed_01_F: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_BED_01;
		model="\Edaly_Furniture_1\Bed_01\Bed_01_EL.p3d";
		vehicleClass="Land_Edaly_Bed_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Bed_01_F.jpg";
	};
	class Land_Edaly_Bed_02_F: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_BED_02;
		model="\Edaly_Furniture_1\Bed_01\Bed_02_EL.p3d";
		vehicleClass="Land_Edaly_Bed_02_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Bed_02_F.jpg";
	};
	class Land_Edaly_MilitaryBed_EL: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_MILITARYBED;
		model="\Edaly_Furniture_3\military_bed\military_bed.p3d";
		vehicleClass="Land_Edaly_MilitaryBed_EL";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_MilitaryBed_EL.paa"; // done
	};
	class Land_Edaly_Barstool_1a_EL: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_BARSTOOL_1A;
		model="\Edaly_Furniture_3\barstool\barstool_1a.p3d";
		vehicleClass="Land_Edaly_Barstool_1a_EL";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Barstool_1a_EL.paa"; // done
	};
	class Land_Edaly_Barstool_1b_EL: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_BARSTOOL_1B;
		model="\Edaly_Furniture_3\barstool\barstool_1b.p3d";
		vehicleClass="Land_Edaly_Barstool_1b_EL";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Barstool_1b_EL.paa"; // done
	};
	class Land_Edaly_Barstool_1c_EL: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_BARSTOOL_1C;
		model="\Edaly_Furniture_3\barstool\barstool_1c.p3d";
		vehicleClass="Land_Edaly_Barstool_1c_EL";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Barstool_1c_EL.paa"; // done
	};
	class Land_Edaly_Barstool_1d_EL: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_BARSTOOL_1D;
		model="\Edaly_Furniture_3\barstool\barstool_1d.p3d";
		vehicleClass="Land_Edaly_Barstool_1d_EL";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Barstool_1d_EL.paa"; // done
	};
	class Land_Edaly_Barstool_1e_EL: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_BARSTOOL_1E;
		model="\Edaly_Furniture_3\barstool\barstool_1e.p3d";
		vehicleClass="Land_Edaly_Barstool_1e_EL";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Barstool_1e_EL.paa"; // done
	};
	class Land_Edaly_Toilet_EL: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_TOILET;
		model="\Edaly_Furniture_3\toilet\toilet_EL.p3d";
		vehicleClass="Land_Edaly_Toilet_EL";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Toilet_EL.paa"; // done
	};
	class Land_Edaly_Bench_01_F: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_BENCH;
		model="\Edaly_Furniture_1\bench_01\Bench_01_F.p3d";
		vehicleClass="Land_Edaly_Bench_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Bench_01_F.jpg";
	};
	class Land_Edaly_Fan_EL: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_FAN;
		model="\Edaly_Furniture_3\fan\fan.p3d";
		vehicleClass="Land_Edaly_Fan_EL";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Fan_EL.paa"; // done
        class selections
        {
            fan = "fan_source";
        };

		class AnimationSources {
	        class fan_source {
	            source = user;
	            initPhase = 0;
	            animPeriod = 1;
	        };
    	};
	};

	class Land_Edaly_Box_05_F: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName="Box 05";
		model="\Edaly_Furniture_1\box_05\Box_05_F.p3d";
		vehicleClass="Land_Edaly_Box_05_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Box_05_F.jpg";


        class selections
        {
            box_top = "box_top_source";
        };

		class AnimationSources {
	        class box_top_source {
	            source = user;
	            initPhase = 0;
	            animPeriod = 1;
	        };
    	};
	};
	class Land_Edaly_Desk_EL: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_OLD_DESK;
		model="\Edaly_Furniture_3\desk\old_desk.p3d";
		vehicleClass="Land_Edaly_Desk_EL";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Cabinet_03_F.jpg";
	};
	class Land_Cash_Register_Desk_01: Furniture_base_F {
        scope=2;
        author=$STR_EDALY_AUTHOR;
        displayName=$STR_EDALY_F_DESK_CASH_REGISTER;
        model="\Edaly_Furniture_1\Cash_Register\Cash_Register_Drawer_EL.p3d";
        vehicleClass="Land_Cash_Register_Desk_01";
        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Props";
        editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Cash_Register_Desk_01.jpg";
    };

	class Land_Cash_Register: Furniture_base_F {
        scope=2;
        author=$STR_EDALY_AUTHOR;
        displayName=$STR_EDALY_F_CASH_REGISTER;
        model="\Edaly_Furniture_1\Cash_Register\Cash_Register_EL.p3d";
        vehicleClass="Land_Cash_Register";
        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Props";
        editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Cash_Register.jpg";
    };
	class Land_Cash_Register_Desk_02: Furniture_base_F {
        scope=2;
        author=$STR_EDALY_AUTHOR;
        displayName=$STR_EDALY_F_DESK_CASH_REGISTER_0;
        model="\Edaly_Furniture_1\Cash_Register\Cash_Register_EL.p3d";
        vehicleClass="Land_Cash_Register_Desk_02";
        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Props";
        editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Cash_Register_Desk_02.jpg";
    };
	class Land_Shelf_01_EL: Furniture_base_F {
        scope=2;
        author=$STR_EDALY_AUTHOR;
        displayName=$STR_EDALY_F_SHELF_01;
        model="\Edaly_Furniture_3\shelf\Shelf_01_EL.p3d";
        vehicleClass="Land_Shelf_01_EL";
        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Props";
        editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Cash_Register_Desk_02.jpg";
    };
	class Land_Edaly_Chair_03_EL: Furniture_base_F {
		scope = 2;
		author =$STR_EDALY_AUTHOR;
		vehicleClass = "Land_Edaly_Chair_03_EL";
		displayName =$STR_EDALY_F_CHAIR_04;
		model = "Edaly_Furniture_3\chair_03\chair_03.p3d";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Chair_03_EL.paa";
	};
	class Land_Edaly_Chair_03_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_CHAIR_03;
		model="\Edaly_Furniture_2\Chair_01\chair_02.p3d";
		vehicleClass="Land_Edaly_Chair_03_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		maximumLoad=100;
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Chair_03_F.paa";
	};
	class Land_Edaly_Chair_05_EL: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_CHAIR_05;
		model="\Edaly_Furniture_3\chair_05\chair_05.p3d";
		vehicleClass="Land_Edaly_Chair_05_EL";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Chair_05_EL.paa";
	};

	class Edaly_Furnace_01_F : Furniture_base_F
	{
		scope = 2;
		displayName =$STR_EDALY_STR_FURNACE;
		model = "Edaly_Furniture_2\Furnace_01\Furnace_01_F.p3d";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Furnace_01_F.paa";
		destrType = "DestructNo";
		keepHorizontalPlacement = 0;

		class AnimationSources
		{
			// Animation sources for doors
			class Furnace_door_bot_source
			{
				source = user; // "user" = custom source = not controlled by some engine value
				initPhase = 0; // Initial value of animations based on this source
				animPeriod = 1; // Coefficient for duration of change of this animation
			};
			class Furnace_door_top_source: Furnace_door_bot_source {};
		};
	};

	class Land_Gas_pump_F: Furniture_base_F
	{
		scope = 2;
		author = $STR_EDALY_AUTHOR;
		displayName = $STR_EDALY_STR_GAS_PUMP;
		model = "Edaly_Furniture_2\Gas_pump\Gas_pump_F.p3d";
		vehicleClass = "Land_Gas_pump_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Gas_pump_F.paa";
	};

	class Land_Edaly_Pallet_01_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_PALET_01;
		model="edaly_furniture_2\Pallet_01\Pallet_01_F.p3d";
		vehicleClass="Land_Edaly_Pallet_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Pallet_01_F.jpg";
	};

	class Land_Edaly_Phone_01_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_PHONE_01;
		model="\edaly_furniture_2\Phone_01\Phone_01_F.p3d";
		vehicleClass="Land_Edaly_Phone_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Phone_01_F.jpg";
	};
	class Land_Edaly_Phone_02a_EL: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_PHONE_02A;
		model="\edaly_furniture_2\Phone_02\Phone_02a.p3d";
		vehicleClass="Land_Edaly_Phone_02a_EL";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Phone_02a_EL.paa";
	};
	class Land_Edaly_Phone_02b_EL: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_PHONE_02B;
		model="\edaly_furniture_2\Phone_02\Phone_02b.p3d";
		vehicleClass="Land_Edaly_Phone_02b_EL";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Phone_02b_EL.paa";
	};
	class Land_Edaly_Phone_02c_EL: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_PHONE_02C;
		model="\edaly_furniture_2\Phone_02\Phone_02c.p3d";
		vehicleClass="Land_Edaly_Phone_02c_EL";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Phone_02c_EL.paa";
	};
	class Land_Edaly_Phone_02d_EL: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_PHONE_02D;
		model="\edaly_furniture_2\Phone_02\Phone_02d.p3d";
		vehicleClass="Land_Edaly_Phone_02d_EL";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Phone_02d_EL.paa";
	};
	class Land_Edaly_Phone_03_EL: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_PHONE_03;
		model="\edaly_furniture_2\Phone_03\Phone_03.p3d";
		vehicleClass="Land_Edaly_Phone_03_EL";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Phone_03_EL.paa";
	};
	class Land_Edaly_Pupitre_01_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_STAND;
		model="\edaly_furniture_2\Pupitre_01\Pupitre.p3d";
		vehicleClass="Land_Edaly_Pupitre_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Pupitre_01_F.jpg";
	};
	class Land_Edaly_Rack_01_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_RACK_01;
		model="\Edaly_Furniture_2\Rack_01\wooden_rack_01.p3d";
		vehicleClass="Land_Edaly_Rack_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Rack_01_F.jpg";
	};
	class Land_Edaly_Rack_01_Large_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_RACK_01_LARGE;
		model="\Edaly_Furniture_2\Rack_01\wooden_rack_01_long.p3d";
		vehicleClass="Land_Edaly_Rack_01_Large_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Rack_01_Large_F.jpg";
	};
	class Land_Edaly_Rack_02_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_RACK_02;
		model="\Edaly_Furniture_2\Rack_01\wooden_rack_02.p3d";
		vehicleClass="Land_Edaly_Rack_02_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Rack_02_F.jpg";
	};
	class Land_Edaly_Rack_02_Large_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_RACK_02_LARGE;
		model="\Edaly_Furniture_2\Rack_01\wooden_rack_02_long.p3d";
		vehicleClass="Land_Edaly_Rack_02_Large_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Rack_02_Large_F.jpg";
	};
	class Land_Edaly_Radio_01_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_RADIO_01;
		model="\edaly_furniture_2\Radio_01\Radio_01_F.p3d";
		vehicleClass="Land_Edaly_Radio_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Radio_01_F.paa";
	};
	class Land_Edaly_Radio_02_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_RADIO_02;
		model="\edaly_furniture_2\Radio_02\Radio_02_F.p3d";
		vehicleClass="Land_Edaly_Radio_02_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Radio_02_F.paa";
	};
	class Land_Edaly_RecordPlayer_01_EL: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_RECORDPLAYER_1;
		model="\Edaly_Furniture_3\recordplayer_01\recordplayer_01.p3d";
		vehicleClass="Land_Edaly_RecordPlayer_01_EL";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_RecordPlayer_01_EL.paa";
	};
	class Land_Edaly_Record_01_EL: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_RECORD_1;
		model="\Edaly_Furniture_3\record\disk.p3d";
		vehicleClass="Land_Edaly_Record_01_EL";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Record_01_EL.paa";
	};
	class Land_Edaly_Safe_01_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_SAFE_01;
		model="\edaly_furniture_2\Safe_01\Safe_01_F.p3d";
		vehicleClass="Land_Edaly_Safe_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Safe_01_F.jpg";

		class UserActions // NEED TO CHANGE TO WORK WITH EYEWATCH
			{
				class Open_Porte_1
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName =$STR_EDALY_F_SAFE_01_ANIM_1;
					position = "Porte_anim_triger";
					priority = 0.4;
					radius = 3;
					onlyForPlayer = false;
					condition = "this animationPhase ""Porte_1_anim"" < 0.9";
					statement = "this animate [""Porte_1_anim"",1];";
				};
				class Close_Porte_1 : Open_Porte_1
				{
					displayNameDefault = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\close_ca.paa' size='2.5' />";
					displayName =$STR_EDALY_F_SAFE_01_ANIM_2;
					condition = "this animationPhase ""Porte_1_anim"" > 0.1";
					statement = "this animate [""Porte_1_anim"",0];";
				};
			};
		class AnimationSources
			{
				class Porte_1_anim
				{
					animPeriod = 1;
					initPhase = 0;
				};
			};
	};
	class Land_Edaly_Sofa_01_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_SOFA_01;
		model="\edaly_furniture_2\Sofa_01\Sofa_01_F.p3d";
		vehicleClass="Land_Edaly_Sofa_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Sofa_01_F.paa";
	};
	class Land_Edaly_Sofa_02_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_SOFA_02;
		model="\edaly_furniture_2\Sofa_02\Sofa_02_F.p3d";
		vehicleClass="Land_Edaly_Sofa_02_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Sofa_02_F.jpg";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Sofa_2.paa";
	};
	class Land_Edaly_Table_01_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_TABLE_02;
		model="\edaly_furniture_2\Table_01\Table_01_F.p3d";
		vehicleClass="Land_Edaly_Table_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Table_01_F.jpg";
	};
	class Land_Edaly_Table_02_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_TABLE_03;
		model="\edaly_furniture_2\Table_02\Table_02_F.p3d";
		vehicleClass="Land_Edaly_Table_02_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Table_02_F.jpg";
	};
	class Land_Edaly_Table_03_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_TABLE_03;
		model="\edaly_furniture_2\Table_03\Table_03.p3d";
		vehicleClass="Land_Edaly_Table_03_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Table_02_F.jpg";
	};

	class Land_Edaly_TV_01_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_TV_01;
		model="\edaly_furniture_2\Television_01\Television_01_F.p3d";
		vehicleClass="Land_Edaly_TV_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_TV_01_F.paa";
	};
	class Land_Edaly_Vase_01_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_VASE_01;
		model="\edaly_furniture_2\Vase_01\Vase_01_F.p3d";
		vehicleClass="Land_Edaly_Vase_03_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Vase_01_F.jpg";
	};
	class Land_Edaly_Globe_01_EL: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_GLOBE;
		model="\Edaly_Furniture_3\globe\globe.p3d";
		vehicleClass="Land_Edaly_Globe_01_EL";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Globe_01_EL.paa";
	};
	class Land_Edaly_Vase_02_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_VASE_02;
		model="\edaly_furniture_2\Vase_02\Vase_02_F.p3d";
		vehicleClass="Land_Edaly_Vase_02_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Vase_02_F.jpg";
	};
	class Land_Edaly_Vase_03_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_VASE_03;
		model="\edaly_furniture_2\Vase_03\Vase_03_F.p3d";
		vehicleClass="Land_Edaly_Vase_03_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Vase_03_F.jpg";
	};
	class Land_Edaly_Wall_01_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_WALL_01;
		model="\edaly_furniture_2\Wall_01\Wall_01_F.p3d";
		vehicleClass="Land_Edaly_Wall_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Wall_01_F.jpg";
	};

	class Land_Edaly_Wall_Angle_01_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_WALL_ANGLE_01;
		model="\edaly_furniture_2\Wall_01\Wall_Angle_01_F.p3d";
		vehicleClass="Land_Edaly_Wall_Angle_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Wall_Angle_01_F.jpg";
	};

	class Land_Edaly_Wall_Full_01_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_WALL_FULL_01;
		model="\edaly_furniture_2\Wall_01\Wall_Full_01_F.p3d";
		vehicleClass="Land_Edaly_Wall_Full_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Wall_Full_01_F.jpg";
	};
	class Land_Edaly_Wall_02_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_WALL_02;
		model="\edaly_furniture_2\Wall_02\Wall_02_F.p3d";
		vehicleClass="Land_Edaly_Wall_02_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Wall_02_F.jpg";
	};

	class Land_Edaly_Wall_Angle_02_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_WALL_ANGLE_02;
		model="\edaly_furniture_2\Wall_02\Wall_Angle_02_F.p3d";
		vehicleClass="Land_Edaly_Wall_Angle_02_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Wall_Angle_02_F.jpg";
	};

	class Land_Edaly_Wall_Full_02_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_WALL_FULL_02;
		model="\edaly_furniture_2\Wall_02\Wall_Full_02_F.p3d";
		vehicleClass="Land_Edaly_Wall_Full_02_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Wall_Full_02_F.jpg";
	};
	class Land_Edaly_WOODEN_PALLET_01_F: Furniture_base_F
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_WOODEN_PALLET_01;
		model="\edaly_furniture_2\Wooden_pallet_01\wooden_pallet_01_F.p3d";
		vehicleClass="Land_Edaly_Wooden_Pallet_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_WOODEN_PALLET_01_F.jpg";
		maximumLoad=750;
	};
    class Lamps_base_F;
    class Land_Edaly_Lantern: Lamps_base_F
    {
        scope=2;
        author=$STR_EDALY_AUTHOR;
       	displayName=$STR_EDALY_I_LANTERN_D;
    	model="\Edaly_Furniture_3\Lantern\Lantern_01.p3d";
    	vehicleClass="Land_Edaly_Lantern";
        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Props";
        //picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Lantern.paa"; TODO
	    class Reflectors
	    {
	        class Light_1
	        {
	            color[] = {239,213,162};
	            ambient[] = {239,213,162};
	            intensity = 2;
	            size = 1;
	            innerAngle = 80;
	            outerAngle = 200;
	            coneFadeCoef = 12;
	            position = "light_pos";
	            direction = "light_dir";
	            hitpoint = "light_hitpoint";
	            selection = "Light_hide";
	            useFlare = 1;
	            flareSize = 1;
	            flareMaxDistance = 50;
	            class Attenuation
	            {
	                start = 0;
	                constant = 0;
	                linear = 2;
	                quadratic = 0.1;
	                hardLimitStart = 35;
	                hardLimitEnd = 55;
	            };
	        };
	    };
    };
	class Land_Edaly_lamp_08_EL: Land_Edaly_Lantern
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_LAMP_08;
		model="\Edaly_Furniture_3\lamp_08\lamp_08.p3d";
		vehicleClass="Land_Edaly_lamp_08_EL";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_lamp_08_EL.paa";
        editorCategory = "EdCat_Edaly";
        editorSubcategory = "EdSubcat_Edaly_Props";
	    class Reflectors
	    {
	        class Light_1
	        {
	            color[] = {239,213,162};
	            ambient[] = {239,213,162};
	            intensity = 1;
	            size = 1;
	            innerAngle = 10;
	            outerAngle = 2000;
	            coneFadeCoef = 20;
	            position = "light_pos";
	            direction = "light_dir";
	            hitpoint = "light_hitpoint";
	            selection = "Light_hide";
	            useFlare = 1;
	            flareSize = 1;
	            flareMaxDistance = 5;
	            class Attenuation
	            {
	                start = 0;
	                constant = 0;
	                linear = 2;
	                quadratic = 0.1;
	                hardLimitStart = 35;
	                hardLimitEnd = 55;
	            };
	        };
	    };
	};
	class Land_Edaly_lamp_09_EL: Land_Edaly_lamp_08_EL
	{
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_LAMP_09;
		model="\Edaly_Furniture_3\lamp_09\lamp_09.p3d";
		vehicleClass="Land_Edaly_lamp_09_EL";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_lamp_09_EL.paa";
	};


	class Land_Edaly_desk_01_F: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_DESK_01;
		model="\Edaly_Furniture_3\desk_01\SM_Desk_01b.p3d";
		vehicleClass="Land_Edaly_desk_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_desk_01_F.paa";


        class selections
        {
			drawer_1 = "drawer_1_source";
			drawer_2 = "drawer_2_source";
			drawer_3 = "drawer_3_source";
			drawer_4 = "drawer_4_source";
			drawer_5 = "drawer_5_source";
        };

		class AnimationSources {
	        class drawer_1_source {
	            source = user;
	            initPhase = 0;
	            animPeriod = 0.5;
	        };

	        class drawer_2_source : drawer_1_source {};
	        class drawer_3_source : drawer_1_source {};
	        class drawer_4_source : drawer_1_source {};
	        class drawer_5_source : drawer_1_source {};

    	};
	};
	class Land_Edaly_coffee_table_01_F: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_COFFEE_TABLE_01;
		model="\Edaly_Furniture_3\coffee_table_01\coffee_table_01_F.p3d";
		vehicleClass="Land_Edaly_coffee_table_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_coffee_table_01_F.paa";
	};
	class Land_Edaly_dresser_04_F: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_DRESSER_04;
		model="\Edaly_Furniture_3\dresser_04\SM_Dresser_04a.p3d";
		vehicleClass="Land_Edaly_dresser_04_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_dresser_04_F.paa";


        class selections
        {
			drawer_1 = "drawer_1_source";
			drawer_2 = "drawer_2_source";
			drawer_3 = "drawer_3_source";
        };

		class AnimationSources {
	        class drawer_1_source {
	            source = user;
	            initPhase = 0;
	            animPeriod = 0.5;
	        };

	        class drawer_2_source : drawer_1_source {};
	        class drawer_3_source : drawer_1_source {};

    	};
	};
	class Land_Edaly_shelf_02_F: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_SHELF_02;
		model="\Edaly_Furniture_3\shelf_02\SM_Shelf_02b.p3d";
		vehicleClass="Land_Edaly_shelf_02_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_shelf_02_F.paa";


        class selections
        {
			drawer_1 = "drawer_1_source";
			drawer_2 = "drawer_2_source";
        };

		class AnimationSources {
	        class drawer_1_source {
	            source = user;
	            initPhase = 0;
	            animPeriod = 0.5;
	        };

	        class drawer_2_source : drawer_1_source {};

    	};
	};

	class Land_Edaly_shelf_03_F: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_SHELF_03;
		model="\Edaly_Furniture_3\shelf_03\SM_Shelf_03.p3d";
		vehicleClass="Land_Edaly_shelf_03_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_shelf_03_F.paa";


        class selections
        {
			drawer_1 = "drawer_1_source";
			drawer_2 = "drawer_2_source";
        };

		class AnimationSources {
	        class drawer_1_source {
	            source = user;
	            initPhase = 0;
	            animPeriod = 0.5;
	        };
	        class drawer_2_source : drawer_1_source {};
    	};
	};


	class Land_Edaly_shelf_13_F: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_SHELF_13;
		model="\Edaly_Furniture_3\shelf_13\SM_Shelf_13.p3d";
		vehicleClass="Land_Edaly_shelf_13_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_shelf_13_F.paa";
	};

	class Land_Edaly_refrigerator_01_F: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_REFRIGERATOR_01;
		model="\Edaly_Furniture_3\refrigerator_01\refrigerator_01.p3d";
		vehicleClass="Land_Edaly_refrigerator_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_refrigerator_01_F.paa";


        class selections
        {
			refrigerator_door_bot = "refrigerator_door_bot_source";
			refrigerator_door_top = "refrigerator_door_top_source";
        };

		class AnimationSources {
	        class refrigerator_door_top_source {
	            source = user;
	            initPhase = 0;
	            animPeriod = 0.5;
	        };
	        class refrigerator_door_bot_source : refrigerator_door_top_source {};
    	};
	};

	class Land_Edaly_Stove_01_F: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_STOVE_01;
		model="\Edaly_Furniture_3\stove_01\SM_Stove_01.p3d";
		vehicleClass="Land_Edaly_Stove_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_Stove_01_F.paa";


        class selections
        {
			stove_door_1 = "stove_door_1_source";
			drawer_1 = "drawer_1_source";
        };

		class AnimationSources {
	        class stove_door_1_source {
	            source = user;
	            initPhase = 0;
	            animPeriod = 0.5;
	        };
	        class drawer_1_source : stove_door_1_source {};
    	};
	};



	class Land_Edaly_LinvingSet_Chair_01_F: Furniture_base_F {
		scope=2;
		author=$STR_EDALY_AUTHOR;
		displayName=$STR_EDALY_F_LinvingSet_Chair_01;
		model="\Edaly_Furniture_3\LinvingSet_01\LinvingSet_01_chair.p3d";
		vehicleClass="Land_Edaly_LinvingSet_Chair_01_F";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Props";
		picture="\Edaly_Items_Assets_1\UI\Edaly_Furniture_LinvingSet_Chair_01_F.paa";
	};
};
