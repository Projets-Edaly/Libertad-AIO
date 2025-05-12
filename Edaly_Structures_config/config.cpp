#include "\Edaly_Client\version.hpp"

class CfgPatches
{
    class Edaly_Structures_config
    {
        author = $STR_EDALY_AUTHOR;
        url = $STR_EDALY_WEBSITE;
        requiredAddons[] = {"Edaly_Client", "Edaly_Editor_Categories", "Edaly_Structures_Assets_1", "Edaly_Structures_Assets_2", "Edaly_Structures_Assets_3", "Edaly_Structures_Assets_4", "Edaly_Structures_Assets_5", "Edaly_Structures_Assets_6", "Edaly_Structures_Assets_7", "Edaly_Structures_Assets_8", "Edaly_Structures_Assets_9", "Edaly_Signs"};
        requiredVersion = ARMA3_VERSION;
        units[] = {};
        weapons[] = {};
    };
};


//ladders[] = { {"ladder_1_start", "ladder_1_end", 2.5, "ladder_1_action"}, {"ladder_2_start", "ladder_2_end", 2.5, "ladder_2_action" } };

#include "\Edaly_Structures_Assets_8\edaly_house_havana_1_F\destructGlass.hpp"
#include "destructionEffectsCustom.hpp"
#include "anim_macro.hpp"

class cfgVehicles
{
    // STRUCTURES
    class House;
    class Lamps_base_F;
    class Static;
    class Furniture_base_F;
    class Thing;

    class House_F: House
    {
        vehicleClass = "Structures";
        spotableDarkNightLightsOff = 0.001;
        spotableNightLightsOff = 0.02;
        spotableNightLightsOn = 4;
        accuracyDarkNightLightsOff = 0.001;
        accuracyNightLightsOff = 0.006;
        accuracyNightLightsOn = 0.1;
        attenuationEffectType = "";
    };

    /******* A3 CONFIG *******/
        class Land_ServiceHangar_01_R_F;
        class Land_ServiceHangar_01_L_F;
        class Land_PierLadder_F;
        class Land_ConcreteWall_01_l_gate_F;

        class Land_Edaly_ServiceHangar_R_F : Land_ServiceHangar_01_R_F
        {
            scope = 2;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            displayName = $STR_EDALY_STR_ServiceHangar_R;
            class UserActions {};
        };
        class Land_Edaly_ServiceHangar_L_F : Land_ServiceHangar_01_L_F
        {
            scope = 2;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            displayName = $STR_EDALY_STR_ServiceHangar_L;
            class UserActions {};
        };
        class Land_Edaly_PierLadder_F : Land_PierLadder_F
        {
            scope = 2;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            displayName = $STR_EDALY_STR_PierLadder;
            class UserActions {};
        };
        class Land_Edaly_ConcreteWall_01_l_gate_F : Land_ConcreteWall_01_l_gate_F {

            scope = 2;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            displayName = $STR_EDALY_STR_ServiceHangar_R;

            class UserActions {};

            class selections
            {
                door_1 = "door_1_source";
            };
        };
    /******* A3 CONFIG *******/

    /******* Edaly_Signs *******/
        class Land_TownSign_Bienvenue_F : Static
        {
            scope = 2;
            displayName = "Panneau (Gran Callao)";
            model = "\Edaly_Signs\Land_TownSign_Bienvenue.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_TownSign_Bienvenue_F.jpg";
        };
        class Land_TownSign_PetitBourg : Static
        {
            scope = 2;
            displayName = "Panneau (Marilla)";
            model = "\Edaly_Signs\Land_TownSign_PetitBourg.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_TownSign_PetitBourg.jpg";
        };
        class Land_TownSign_Wesley : Static
        {
            scope = 2;
            displayName = "Panneau (Santa Luz)";
            model = "\Edaly_Signs\Land_TownSign_Wesley.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_TownSign_Wesley.jpg";
        };
    /******* Edaly_Signs *******/

    /******* Config Edaly_Structures_Assets_1 *******/
        class Land_Edaly_Factory_01_F : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = $STR_EDALY_STR_FACTORY;
            model = "\Edaly_Structures_Assets_1\Factory\Edaly_Factory_01_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Factory_01_F.jpg";
            numberOfDoors = 7;
            ladders[] = {{"Ladder_1_start","Ladder_1_end",2.5,"Ladder_1_action"}};

            class AnimationSources
            {
                class door_1_source
                {
                    source = user;
                    initPhase = 0;
                    animPeriod = 2.5;
                    sound = "rusty_door";
                };
                class door_2_source: door_1_source {};
                class door_3_source: door_1_source
                {
                    animPeriod = 1;
                    sound = "GenericDoorsSound";
                };
                class door_4_source: door_3_source {};
                class door_5_source: door_3_source {};
                class door_6_source: door_3_source {};
                class door_7_source: door_3_source {};

                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)
                DOOR_SOURCE_LOCKED(3)
                DOOR_SOURCE_LOCKED(4)
                DOOR_SOURCE_LOCKED(5)
                DOOR_SOURCE_LOCKED(6)
                DOOR_SOURCE_LOCKED(7)

                GLASS_SOURCE_HITPOINT(1)
                GLASS_SOURCE_HITPOINT(2)
                GLASS_SOURCE_HITPOINT(3)
                GLASS_SOURCE_HITPOINT(4)
                GLASS_SOURCE_HITPOINT(5)
                GLASS_SOURCE_HITPOINT(6)
                GLASS_SOURCE_HITPOINT(7)
                GLASS_SOURCE_HITPOINT(8)
                GLASS_SOURCE_HITPOINT(9)
                GLASS_SOURCE_HITPOINT(10)
                GLASS_SOURCE_HITPOINT(11)
                GLASS_SOURCE_HITPOINT(12)
                GLASS_SOURCE_HITPOINT(13)
                GLASS_SOURCE_HITPOINT(14)
                GLASS_SOURCE_HITPOINT(15)
                GLASS_SOURCE_HITPOINT(16)

            };
            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
                DOOR_USERACTION(3,3)
                DOOR_USERACTION(4,4)
                DOOR_USERACTION(5,5)
                DOOR_USERACTION(6,6)
                DOOR_USERACTION(7,7)
            };

            class HitPoints
            {
                #include "\Edaly_Structures_Assets_1\Factory\hitpoints.hpp"
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
            actionBegin2 = OpenDoor_2;
            actionEnd2 = OpenDoor_2;
            actionBegin3 = OpenDoor_3;
            actionEnd3 = OpenDoor_3;
            actionBegin4 = OpenDoor_4;
            actionEnd4 = OpenDoor_4;
            actionBegin5 = OpenDoor_5;
            actionEnd5 = OpenDoor_5;
            actionBegin6 = OpenDoor_6;
            actionEnd6 = OpenDoor_6;
            actionBegin7 = OpenDoor_7;
            actionEnd7 = OpenDoor_7;
        };
        class Land_Edaly_House_campaign_01_F : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = $STR_EDALY_STR_SMALL_HOUSE_CAMPAIGN;
            model = "\Edaly_Structures_Assets_1\House_campaign\Edaly_House_campaign_01_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_House_campaign_01_F.jpg";
            spotableDarkNightLightsOff = 0.001;
            spotableNightLightsOff = 0.02;
            spotableNightLightsOn = 4;
            accuracyDarkNightLightsOff = 0.001;
            accuracyNightLightsOff = 0.006;
            accuracyNightLightsOn = 0.1;
            attenuationEffectType = "";
            numberOfDoors = 23;

            class AnimationSources
            {
                // Animation sources for doors
                class door_5_source
                {
                    source = "user"; // "user" = custom source = not controlled by some engine value
                    initPhase = 0; // Initial value of animations based on this source
                    animPeriod = 1; // Coefficient for duration of change of this animation
                    sound = "GenericDoorsSound";
                };
                class door_1_source: door_5_source {};
                class door_2_source: door_5_source {};
                class door_3_source: door_5_source {};
                class door_4_source: door_5_source {};

                class window_22_source: door_4_source {};
                class window_23_source: window_22_source {};
                class window_24_source: window_22_source {};
                class window_25_source: window_22_source {};
                class window_26_source: window_22_source {};
                class window_27_source: window_22_source {};
                class window_28_source: window_22_source {};
                class window_29_source: window_22_source {};
                class window_30_source: window_22_source {};
                class window_31_source: window_22_source {};
                class window_32_source: window_22_source {};
                class window_33_source: window_22_source {};
                class window_34_source: window_22_source {};
                class window_35_source: window_22_source {};
                class window_36_source: window_22_source {};
                class window_37_source: window_22_source {};
                class window_38_source: window_22_source {};
                class window_39_source: window_22_source {};

                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)
                DOOR_SOURCE_LOCKED(3)
                DOOR_SOURCE_LOCKED(4)
                DOOR_SOURCE_LOCKED(5)

                GLASS_SOURCE_HITPOINT(1)
                GLASS_SOURCE_HITPOINT(2)
                GLASS_SOURCE_HITPOINT(3)
                GLASS_SOURCE_HITPOINT(4)
                GLASS_SOURCE_HITPOINT(5)
                GLASS_SOURCE_HITPOINT(6)
                GLASS_SOURCE_HITPOINT(7)
                GLASS_SOURCE_HITPOINT(8)
                GLASS_SOURCE_HITPOINT(9)
                GLASS_SOURCE_HITPOINT(10)
                GLASS_SOURCE_HITPOINT(11)
                GLASS_SOURCE_HITPOINT(12)
                GLASS_SOURCE_HITPOINT(13)
                GLASS_SOURCE_HITPOINT(14)
                GLASS_SOURCE_HITPOINT(15)
                GLASS_SOURCE_HITPOINT(16)
                GLASS_SOURCE_HITPOINT(17)
                GLASS_SOURCE_HITPOINT(18)
                GLASS_SOURCE_HITPOINT(19)
                GLASS_SOURCE_HITPOINT(20)
                GLASS_SOURCE_HITPOINT(21)
                GLASS_SOURCE_HITPOINT(22)

            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
                DOOR_USERACTION(3,3)
                DOOR_USERACTION(4,4)
                DOOR_USERACTION(5,5)
                WINDOW_USERACTION(22,6)
                WINDOW_USERACTION(23,7)
                WINDOW_USERACTION(24,8)
                WINDOW_USERACTION(25,9)
                WINDOW_USERACTION(26,10)
                WINDOW_USERACTION(27,11)
                WINDOW_USERACTION(28,12)
                WINDOW_USERACTION(29,13)
                WINDOW_USERACTION(30,14)
                WINDOW_USERACTION(31,15)
                WINDOW_USERACTION(32,16)
                WINDOW_USERACTION(33,17)
                WINDOW_USERACTION(34,18)
                WINDOW_USERACTION(35,19)
                WINDOW_USERACTION(36,20)
                WINDOW_USERACTION(37,21)
                WINDOW_USERACTION(38,22)
                WINDOW_USERACTION(39,23)
            };

            class HitPoints
            {
                #include "\Edaly_Structures_Assets_1\House_campaign\hitpoints.hpp"
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
            actionBegin2 = OpenDoor_2;
            actionEnd2 = OpenDoor_2;
            actionBegin3 = OpenDoor_3;
            actionEnd3 = OpenDoor_3;
            actionBegin4 = OpenDoor_4;
            actionEnd4 = OpenDoor_4;
            actionBegin5 = OpenDoor_5;
            actionEnd5 = OpenDoor_5;
        };
        class Land_Edaly_House_campaign_02_F : Land_Edaly_House_campaign_01_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = $STR_EDALY_STR_BIG_HOUSE_CAMPAIGN;
            model = "Edaly_Structures_Assets_1\House_campaign\Edaly_House_Campaign_02_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_House_campaign_02_F.jpg";
        };
        class Land_Police_01_F : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = $STR_EDALY_STR_POLICE_STATION;
            model = "\Edaly_Structures_Assets_1\Police\Police_01_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Police_01_F.jpg";

            class AnimationSources
            {
                // Animation sources for doors
                class door_1_source
                {
                    source = user; // "user" = custom source = not controlled by some engine value
                    initPhase = 0; // Initial value of animations based on this source
                    animPeriod = 1; // Coefficient for duration of change of this animation
                    sound = "GenericDoorsSound";
                };
                class door_2_source: door_1_source {};
                class door_3_source: door_1_source {};
                class door_4_source: door_1_source {};
                class door_5_source: door_1_source {};
                class door_6_source: door_1_source {};
                class door_7_source: door_1_source {};
                class door_8_source: door_1_source {};
                class door_9_source: door_1_source {};
                class door_10_source: door_1_source {};
                class door_11_source: door_1_source {};
                class door_12_source: door_1_source {};

                class door_13_source: door_1_source {};
                class door_14_source: door_1_source {};
                class door_15_source: door_1_source {};

                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)
                DOOR_SOURCE_LOCKED(3)
                DOOR_SOURCE_LOCKED(4)
                DOOR_SOURCE_LOCKED(5)
                DOOR_SOURCE_LOCKED(6)
                DOOR_SOURCE_LOCKED(7)
                DOOR_SOURCE_LOCKED(8)
                DOOR_SOURCE_LOCKED(9)
                DOOR_SOURCE_LOCKED(10)
                DOOR_SOURCE_LOCKED(11)
                DOOR_SOURCE_LOCKED(12)

                DOOR_SOURCE_LOCKED(13)
                DOOR_SOURCE_LOCKED(14)
                DOOR_SOURCE_LOCKED(15)

                GLASS_SOURCE_HITPOINT(1)
                GLASS_SOURCE_HITPOINT(2)
                GLASS_SOURCE_HITPOINT(3)
                GLASS_SOURCE_HITPOINT(4)
                GLASS_SOURCE_HITPOINT(5)
                GLASS_SOURCE_HITPOINT(6)
                GLASS_SOURCE_HITPOINT(7)
                GLASS_SOURCE_HITPOINT(8)
                GLASS_SOURCE_HITPOINT(9)
                GLASS_SOURCE_HITPOINT(10)
                GLASS_SOURCE_HITPOINT(11)
                GLASS_SOURCE_HITPOINT(12)
                GLASS_SOURCE_HITPOINT(13)
                GLASS_SOURCE_HITPOINT(14)
                GLASS_SOURCE_HITPOINT(15)
                GLASS_SOURCE_HITPOINT(16)
                GLASS_SOURCE_HITPOINT(17)
                GLASS_SOURCE_HITPOINT(18)
                GLASS_SOURCE_HITPOINT(19)
                GLASS_SOURCE_HITPOINT(20)
                GLASS_SOURCE_HITPOINT(21)
                GLASS_SOURCE_HITPOINT(22)
                GLASS_SOURCE_HITPOINT(23)

            };

            class HitPoints
            {
                #include "\Edaly_Structures_Assets_1\Police\hitpoints.hpp"
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
                DOOR_USERACTION(3,3)
                DOOR_USERACTION(4,4)
                DOOR_USERACTION(5,5)
                DOOR_USERACTION(6,6)
                DOOR_USERACTION(7,7)
                DOOR_USERACTION(8,8)
                DOOR_USERACTION(9,9)
                DOOR_USERACTION(10,10)
                DOOR_USERACTION(11,11)
                DOOR_USERACTION(12,12)
                DOOR_USERACTION(13,13)
                DOOR_USERACTION(14,14)
                DOOR_USERACTION(15,15)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
            actionBegin2 = OpenDoor_2;
            actionEnd2 = OpenDoor_2;
            actionBegin3 = OpenDoor_3;
            actionEnd3 = OpenDoor_3;
            actionBegin4 = OpenDoor_4;
            actionEnd4 = OpenDoor_4;
            actionBegin5 = OpenDoor_5;
            actionEnd5 = OpenDoor_5;
            actionBegin6 = OpenDoor_6;
            actionEnd6 = OpenDoor_6;
            actionBegin7 = OpenDoor_7;
            actionEnd7 = OpenDoor_7;
            actionBegin8 = OpenDoor_8;
            actionEnd8 = OpenDoor_8;
            actionBegin9 = OpenDoor_9;
            actionEnd9 = OpenDoor_9;
            actionBegin10 = OpenDoor_10;
            actionEnd10 = OpenDoor_10;
            actionBegin11 = OpenDoor_11;
            actionEnd11 = OpenDoor_11;
            actionBegin12 = OpenDoor_12;
            actionEnd12 = OpenDoor_12;
        };
        class Land_Shop_01_F : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = $STR_EDALY_STR_BLUE_SHOP_FIXED;
            model = "\Edaly_Structures_Assets_1\Shop\Shop_01_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Shop_01_F.jpg";

            class AnimationSources
            {
                // Animation sources for doors
                class door_1_source
                {
                    source = user; // "user" = custom source = not controlled by some engine value
                    initPhase = 0; // Initial value of animations based on this source
                    animPeriod = 1; // Coefficient for duration of change of this animation
                    sound = "GenericDoorsSound";
                };
                class door_2_source: door_1_source {};
                class door_3_source: door_1_source {};
                class door_4_source: door_1_source {};
                class door_5_source: door_1_source {};
                class door_6_source: door_1_source {};

                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)
                DOOR_SOURCE_LOCKED(3)
                DOOR_SOURCE_LOCKED(4)
                DOOR_SOURCE_LOCKED(5)

                GLASS_SOURCE_HITPOINT(1)
                GLASS_SOURCE_HITPOINT(2)
                GLASS_SOURCE_HITPOINT(3)
                GLASS_SOURCE_HITPOINT(4)
            };

            class HitPoints
            {
                #include "\Edaly_Structures_Assets_1\Shop\hitpoints.hpp"
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
                DOOR_USERACTION(3,3)
                DOOR_USERACTION(4,4)
                DOOR_USERACTION(5,5)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
            actionBegin2 = OpenDoor_2;
            actionEnd2 = OpenDoor_2;
            actionBegin3 = OpenDoor_3;
            actionEnd3 = OpenDoor_3;
            actionBegin4 = OpenDoor_4;
            actionEnd4 = OpenDoor_4;
            actionBegin5 = OpenDoor_5;
            actionEnd5 = OpenDoor_5;
        };
        class Land_Shop_02_F : Land_Shop_01_F
        {
            displayName = $STR_EDALY_STR_YELLOW_SHOP_FIXED;
            model = "\Edaly_Structures_Assets_1\Shop\Shop_02_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Shop_02_F.jpg";
        };
        class Land_Shop_03_F : Land_Shop_01_F
        {
            displayName = $STR_EDALY_STR_PINK_SHOP_FIXED;
            model = "\Edaly_Structures_Assets_1\Shop\Shop_03_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Shop_03_F.jpg";
        };
        class Land_Shop_04_F : Land_Shop_01_F
        {
            displayName = $STR_EDALY_STR_ORANGE_SHOP_FIXED;
            model = "\Edaly_Structures_Assets_1\Shop\Shop_04_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Shop_03_F.jpg";
        };
    /******* Config Edaly_Structures_Assets_1 *******/

    /******* Config Edaly_Structures_Assets_2 *******/
        class Edaly_Board_01_F : Static
        {
            scope = 2;
            displayName = $STR_EDALY_STR_BOARD;
            model = "Edaly_Structures_Assets_2\Civilian\Board_01_F\Board_FortPuntoFerte.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Board_01_F.jpg";
        };
        class Wall_02_F : Static
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_02;
            model = "Edaly_Structures_Assets_2\Civilian\Wall_02_F\Wall_02_Short_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_02_F.jpg";
        };
        class Wall_02_Long_F: Wall_02_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_L_02;
            model = "Edaly_Structures_Assets_2\Civilian\Wall_02_F\Wall_02_Long_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_02_Long_F.jpg";
        };
        class Wall_02_Corner_F: Wall_02_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_C_02;
            model = "Edaly_Structures_Assets_2\Civilian\Wall_02_F\Wall_02_Corner_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_02_Corner_F.jpg";
        };
        class Wall_02_B : Wall_02_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_02_B;
            model = "Edaly_Structures_Assets_2\Civilian\Wall_02_F\Wall_02_Short_02.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_02_B.jpg";
        };
        class Wall_02_Long_B: Wall_02_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_L_02_B;
            model = "Edaly_Structures_Assets_2\Civilian\Wall_02_F\Wall_02_Long_02.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_02_Long_B.jpg";
        };
        class Wall_02_Corner_B: Wall_02_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_C_02_B;
            model = "Edaly_Structures_Assets_2\Civilian\Wall_02_F\Wall_02_Corner_02.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_02_Corner_B.jpg";
        };
        class Wall_02_G : Wall_02_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_02_G;
            model = "Edaly_Structures_Assets_2\Civilian\Wall_02_F\Wall_02_Short_03.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_02_G.jpg";
        };
        class Wall_02_Long_G: Wall_02_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_L_02_G;
            model = "Edaly_Structures_Assets_2\Civilian\Wall_02_F\Wall_02_Long_03.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_02_Long_G.jpg";
        };
        class Wall_02_Corner_G: Wall_02_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_C_02_G;
            model = "Edaly_Structures_Assets_2\Civilian\Wall_02_F\Wall_02_Corner_03.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_02_Corner_G.jpg";
        };
        class Wall_02_P : Wall_02_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_02_P;
            model = "Edaly_Structures_Assets_2\Civilian\Wall_02_F\Wall_02_Short_04.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_02_P.jpg";
        };
        class Wall_02_Long_P: Wall_02_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_L_02_P;
            model = "Edaly_Structures_Assets_2\Civilian\Wall_02_F\Wall_02_Long_04.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_02_Long_P.jpg";
        };

        class Wall_02_Corner_P: Wall_02_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_C_02_P;
            model = "Edaly_Structures_Assets_2\Civilian\Wall_02_F\Wall_02_Corner_04.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_02_Corner_P.jpg";
        };
        class Wall_02_R : Wall_02_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_02_R;
            model = "Edaly_Structures_Assets_2\Civilian\Wall_02_F\Wall_02_Short_05.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_02_R.jpg";
        };
        class Wall_02_Long_R: Wall_02_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_L_02_R;
            model = "Edaly_Structures_Assets_2\Civilian\Wall_02_F\Wall_02_Long_05.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_02_Long_R.jpg";
        };
        class Wall_02_Corner_R: Wall_02_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_C_02_R;
            model = "Edaly_Structures_Assets_2\Civilian\Wall_02_F\Wall_02_Corner_05.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_02_Corner_R.jpg";
        };
        /*class Wall_02_End_P: Wall_02_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_E_03;
            model = "Edaly_Structures_Assets_2\Civilian\Wall_02_F\Wall_02_End_03";
        };*/
        class Wall_02_End_R: Wall_02_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_E_04;
            model = "Edaly_Structures_Assets_2\Civilian\Wall_02_F\Wall_02_End_04.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_02_End_R.jpg";
        };
        class Wall_02_End_W: Wall_02_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_E_05;
            model = "Edaly_Structures_Assets_2\Civilian\Wall_02_F\Wall_02_End_05.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_02_End_W.jpg";
        };
        class Wall_02_End_B: Wall_02_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_E_F;
            model = "Edaly_Structures_Assets_2\Civilian\Wall_02_F\Wall_02_End_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_02_End_B.jpg";
        };
        class Edaly_Str_Floor_M1_01_F: Static
        {
            scope = 2;
            displayName = $STR_EDALY_STR_PAVEMENT_M1_01;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Floor";
            model = "Edaly_Structures_Assets_2\Decals\Floor\Floor_M1_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Floor_M1_01_F.jpg";
            mapSize = 4;
            cost = 40000;
        };
        class Edaly_Str_Floor_M1_02_F: Edaly_Str_Floor_M1_01_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_PAVEMENT_M1_02;
            model = "Edaly_Structures_Assets_2\Decals\Floor\Floor_M1_02_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Floor_M1_02_F.jpg";
            mapSize = 8;
            cost = 40000;
        };
        class Edaly_Str_Floor_M1_03_F: Edaly_Str_Floor_M1_01_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_PAVEMENT_M1_03;
            model = "Edaly_Structures_Assets_2\Decals\Floor\Floor_M1_03_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Floor_M1_03_F.jpg";
            mapSize = 16;
            cost = 40000;
        };
        class Edaly_Str_Road_M1_01_F: Edaly_Str_Floor_M1_01_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_ROAD_M1_01;
            model = "Edaly_Structures_Assets_2\Decals\Floor\Road_M1_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Road_M1_01_F.jpg";
            mapSize = 16;
            cost = 40000;
        };
        class Edaly_Str_Road_M1_02_F: Edaly_Str_Floor_M1_01_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_ROAD_M1_02;
            model = "Edaly_Structures_Assets_2\Decals\Floor\Road_M1_02_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Road_M1_02_F.jpg";
            mapSize = 16;
            cost = 40000;
        };
        class Edaly_Str_Parking_1P_01_F: Static
        {
            scope = 2;
            displayName = $STR_EDALY_STR_PARKING_01;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Decals";
            model = "Edaly_Structures_Assets_2\Decals\Lines\Parking_1p.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Parking_1P_01_F.jpg";
            mapSize = 4;
            cost = 40000;
        };
        class Edaly_Str_Parking_2P_01_F: Edaly_Str_Parking_1P_01_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_PARKING_02;
            model = "Edaly_Structures_Assets_2\Decals\Lines\Parking_2p.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Parking_2P_01_F.jpg";
            mapSize = 4;
            cost = 40000;
        };
        class Edaly_Str_Parking_3P_01_F: Edaly_Str_Parking_1P_01_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_PARKING_03;
            model = "Edaly_Structures_Assets_2\Decals\Lines\Parking_3p.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Parking_3P_01_F.jpg";
            mapSize = 4;
            cost = 40000;
        };
        class Edaly_Str_Parking_4P_01_F: Edaly_Str_Parking_1P_01_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_PARKING_04;
            model = "Edaly_Structures_Assets_2\Decals\Lines\Parking_4p.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Parking_4P_01_F.jpg";
            mapSize = 4;
            cost = 40000;
        };
        class Edaly_Str_Parking_8P_01_F: Edaly_Str_Parking_1P_01_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_PARKING_08;
            model = "Edaly_Structures_Assets_2\Decals\Lines\Parking_8p.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Parking_8P_01_F.jpg";
            mapSize = 4;
            cost = 40000;
        };
        class Edaly_Str_Coal_Industry_01_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_CHARCOAL_SET;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            model = "Edaly_Structures_Assets_2\Industrial\Coal\Coal_Industry_01\Land_Edaly_Coal_Industry_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Coal_Industry_01_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_Cannon_01_F: Furniture_base_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_CANNON_01;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_2\Military\Cannon_01\Cannon_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Cannon_01_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_Military_Tower_01_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_MILITARY_TOWER_01;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            model = "Edaly_Structures_Assets_2\Military\Tower_01\Tower_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Military_Tower_01_F.jpg";
            ladders[] = {{"Ladder_1_start", "Ladder_1_end", 2.5, "ladder_1_action"}};
            mapSize = 7;
            cost = 40000;
        };
        class Land_Suburban_Bank_01_F : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = "$STR_EDALY_STR_SUBURBAN_BANK";
            model = "Edaly_Structures_Assets_2\Civilian\Suburban_Bank_F\Suburban_Bank_01_F";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Suburban_Bank_01_F.jpg";
            numberOfDoors = 12;

            class AnimationSources
            {
                // Animation sources for doors
                class door_1_source
                {
                    source = user; // "user" = custom source = not controlled by some engine value
                    initPhase = 0; // Initial value of animations based on this source
                    animPeriod = 1; // Coefficient for duration of change of this animation
                    sound = "GenericDoorsSound";
                };
                class door_2_source: door_1_source {};
                class door_3_source: door_1_source {};
                class door_4_source: door_1_source {};
                class door_5_source: door_1_source {};
                class door_6_source: door_1_source {};
                class door_7_source: door_1_source {};
                class door_8_source: door_1_source {};
                class door_9_source: door_1_source {};
                class door_10_source: door_1_source {};
                class door_11_source: door_1_source {};
                class door_12_source: door_1_source {};
                class door_13_source: door_1_source {
                    animPeriod = 20;
                    sound = "";
                };
                class lock_source: door_1_source {
                    animPeriod = 5;
                    sound = "";
                };


                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)
                DOOR_SOURCE_LOCKED(3)
                DOOR_SOURCE_LOCKED(4)
                DOOR_SOURCE_LOCKED(5)
                DOOR_SOURCE_LOCKED(6)
                DOOR_SOURCE_LOCKED(7)
                DOOR_SOURCE_LOCKED(8)
                DOOR_SOURCE_LOCKED(9)
                DOOR_SOURCE_LOCKED(10)
                DOOR_SOURCE_LOCKED(11)
                DOOR_SOURCE_LOCKED(12)

                GLASS_SOURCE_HITPOINT(1)
                GLASS_SOURCE_HITPOINT(2)
                GLASS_SOURCE_HITPOINT(3)
                GLASS_SOURCE_HITPOINT(4)
                GLASS_SOURCE_HITPOINT(5)
                GLASS_SOURCE_HITPOINT(6)
                GLASS_SOURCE_HITPOINT(7)
                GLASS_SOURCE_HITPOINT(8)
                GLASS_SOURCE_HITPOINT(9)
                GLASS_SOURCE_HITPOINT(10)
                GLASS_SOURCE_HITPOINT(11)
                GLASS_SOURCE_HITPOINT(12)
                GLASS_SOURCE_HITPOINT(13)
                GLASS_SOURCE_HITPOINT(14)
                GLASS_SOURCE_HITPOINT(15)
                GLASS_SOURCE_HITPOINT(16)
                GLASS_SOURCE_HITPOINT(17)
            };

            class HitPoints
            {
                #include "\Edaly_Structures_Assets_2\Civilian\Suburban_Bank_F\hitpoints.hpp"
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
                DOOR_USERACTION(3,3)
                DOOR_USERACTION(4,4)
                DOOR_USERACTION(5,5)
                DOOR_USERACTION(6,6)
                DOOR_USERACTION(7,7)
                DOOR_USERACTION(8,8)
                DOOR_USERACTION_SELECTION(9, 9, toggle_kiosk_1)
                DOOR_USERACTION_SELECTION(10, 10, toggle_kiosk_2)
                DOOR_USERACTION_SELECTION(11, 11, toggle_kiosk_3)
                DOOR_USERACTION_SELECTION(12, 12, toggle_kiosk_4)

                class OpenSafeDoor_13
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_EDALY_ALL_OPEN_SAFE_DOOR";
                    position = "safe_handle_trigger";
                    priority = 11;
                    actionNamedSel = "door_13";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'door_13_source') < 0.5) && (cameraOn isKindOf 'CAManBase') && ((this animationSourcePhase 'lock_source') > 0.5)";
                    statement = "([this, 'door', 13, 1] call EdalyBase_fnc_Door)";
                };
                class CloseSafeDoor_13: OpenSafeDoor_13
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_EDALY_ALL_CLOSE_SAFE_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'door_13_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_13', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'door', 13, 0] call EdalyBase_fnc_Door)";
                };

                class Lock_13
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_EDALY_ALL_LOCK_SAFE_DOOR";
                    position = "safe_handle_trigger";
                    priority = 11;
                    actionNamedSel = "safe_handle_1";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'door_13_source') == 0) && (cameraOn isKindOf 'CAManBase') && ((this animationSourcePhase 'lock_source') > 0.5)";
                    statement = "this animateSource ['lock_source', 0];this setVariable ['bis_disabled_Door_13', 1, true]";
                };
                class Unlock_13: Lock_13
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_EDALY_ALL_UNLOCK_SAFE_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'door_13_source') == 0) && (cameraOn isKindOf 'CAManBase') && ((this animationSourcePhase 'lock_source') < 0.5)";
                    statement = "this animateSource ['lock_source', 1];this setVariable ['bis_disabled_Door_13', 0, true]";
                };
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
            actionBegin2 = OpenDoor_2;
            actionEnd2 = OpenDoor_2;
            actionBegin3 = OpenDoor_3;
            actionEnd3 = OpenDoor_3;
            actionBegin4 = OpenDoor_4;
            actionEnd4 = OpenDoor_4;
            actionBegin5 = OpenDoor_5;
            actionEnd5 = OpenDoor_5;
            actionBegin6 = OpenDoor_6;
            actionEnd6 = OpenDoor_6;
            actionBegin7 = OpenDoor_7;
            actionEnd7 = OpenDoor_7;
            actionBegin8 = OpenDoor_8;
            actionEnd8 = OpenDoor_8;
        };

        class Land_Edaly_Bolards_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Bolards (chaine)";
            model = "\Edaly_Structures_Assets_2\Bolards\bolards_01.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Bolards_01_F.jpg";
        };
        class Land_Edaly_Bolards_02_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Bolard (seul)";
            model = "\Edaly_Structures_Assets_2\Bolards\bolards_02.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Bolards_02_F.jpg";
        };
        class Land_Sidewalk_01_Body : Static
        {
            scope = 2;
            displayName = "Trottoir 01 (Body)";
            model = "\Edaly_Structures_Assets_2\Sidewalks\Sidewalk_01.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Sidewalk_01_Body.jpg";
        };
        class Land_Sidewalk_02_Body : Static
        {
            scope = 2;
            displayName = "Trottoir 02 (Body)";
            model = "\Edaly_Structures_Assets_2\Sidewalks\Sidewalk_02.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Sidewalk_02_Body.jpg";
        };
        class Land_Sidewalk_03_Body : Static
        {
            scope = 2;
            displayName = "Trottoir 03 (Body)";
            model = "\Edaly_Structures_Assets_2\Sidewalks\Sidewalk_03.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Sidewalk_03_Body.jpg";
        };
        /* SIDEWALKS */
        /* PAVE */
        class Land_SW_2S_Hovel_Body : Static
        {
            scope = 2;
            displayName = "Trottoir SW_2S_Hovel_Body";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_2S_Hovel_Body.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_2S_Hovel_Body.jpg";
        };
        class Land_SW_2S_Hovel_End : Static
        {
            scope = 2;
            displayName = "Trottoir SW_2S_Hovel_End";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_2S_Hovel_End.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_2S_Hovel_End.jpg";
        };
        class Land_SW_2S_Hovel_HalfEnd : Static
        {
            scope = 2;
            displayName = "Trottoir SW_2S_Hovel_HalfEnd";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_2S_Hovel_HalfEnd.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_2S_Hovel_HalfEnd.jpg";
        };
        class Land_SW_4L_Hovel_Body : Static
        {
            scope = 2;
            displayName = "Trottoir SW_4L_Hovel_Body";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_4L_Hovel_Body.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_4L_Hovel_Body.jpg";
        };
        class Land_SW_4L_Hovel_End : Static
        {
            scope = 2;
            displayName = "Trottoir SW_4L_Hovel_End";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_4L_Hovel_End.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_4L_Hovel_End.jpg";
        };
        class Land_SW_4L_Hovel_HalfEnd : Static
        {
            scope = 2;
            displayName = "Trottoir SW_4L_Hovel_HalfEnd";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_4L_Hovel_HalfEnd.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_4L_Hovel_HalfEnd.jpg";
        };
        class Land_SW_4S_Hovel_Body : Static
        {
            scope = 2;
            displayName = "Trottoir SW_4S_Hovel_Body";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_4S_Hovel_Body.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_4S_Hovel_Body.jpg";
        };
        class Land_SW_4S_Hovel_SquareEnd : Static
        {
            scope = 2;
            displayName = "Trottoir SW_4S_Hovel_SquareEnd";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_4S_Hovel_SquareEnd.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_4S_Hovel_SquareEnd.jpg";
        };
        class Land_SW_4S_Hovel_SquareHalfEnd : Static
        {
            scope = 2;
            displayName = "Trottoir SW_4S_Hovel_SquareHalfEnd";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_4S_Hovel_SquareHalfEnd.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_4S_Hovel_SquareHalfEnd.jpg";
        };
        class Land_SW_4L_Hovel_SquareHalfEnd : Static
        {
            scope = 2;
            displayName = "Trottoir SW_4L_Hovel_SquareHalfEnd";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_4L_Hovel_SquareHalfEnd.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_4L_Hovel_SquareHalfEnd.jpg";
        };
        class Land_SW_4L_Hovel_SquareHalfEnd90 : Static
        {
            scope = 2;
            displayName = "Trottoir SW_4L_Hovel_SquareHalfEnd90";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_4L_Hovel_SquareHalfEnd90.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_4L_Hovel_SquareHalfEnd90.jpg";
        };
        class Land_SW_4L_Hovel_SquareEnd : Static
        {
            scope = 2;
            displayName = "Trottoir SW_4L_Hovel_SquareEnd";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_4L_Hovel_SquareEnd.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_4L_Hovel_SquareEnd.jpg";
        };
        class Land_SW_8L_Hovel_Body : Static
        {
            scope = 2;
            displayName = "Trottoir SW_8L_Hovel_Body";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_8L_Hovel_Body.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_8L_Hovel_Body.jpg";
        };
        class Land_SW_8S_Hovel_Body : Static
        {
            scope = 2;
            displayName = "Trottoir SW_8S_Hovel_Body";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_8S_Hovel_Body.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_8S_Hovel_Body.jpg";
        };
        /* HOVEL */
        class Land_SW_2S_Pave_Body : Static
        {
            scope = 2;
            displayName = "Trottoir SW_2S_Pave_Body";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_2S_Pave_Body.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_2S_Pave_Body.jpg";
        };
        class Land_SW_2S_Pave_End : Static
        {
            scope = 2;
            displayName = "Trottoir SW_2S_Pave_End";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_2S_Pave_End.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_2S_Pave_End.jpg";
        };
        class Land_SW_2S_Pave_HalfEnd : Static
        {
            scope = 2;
            displayName = "Trottoir SW_2S_Pave_HalfEnd";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_2S_Pave_HalfEnd.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_2S_Pave_HalfEnd.jpg";
        };
        class Land_SW_4L_Pave_Body : Static
        {
            scope = 2;
            displayName = "Trottoir SW_4L_Pave_Body";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_4L_Pave_Body.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_4L_Pave_Body.jpg";
        };
        class Land_SW_4L_Pave_End : Static
        {
            scope = 2;
            displayName = "Trottoir SW_4L_Pave_End";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_4L_Pave_End.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_4L_Pave_End.jpg";
        };
        class Land_SW_4L_Pave_HalfEnd : Static
        {
            scope = 2;
            displayName = "Trottoir SW_4L_Pave_HalfEnd";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_4L_Pave_HalfEnd.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_4L_Pave_HalfEnd.jpg";
        };
        class Land_SW_4S_Pave_Body : Static
        {
            scope = 2;
            displayName = "Trottoir SW_4S_Pave_Body";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_4S_Pave_Body.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_4S_Pave_Body.jpg";
        };
        class Land_SW_4S_Pave_SquareEnd : Static
        {
            scope = 2;
            displayName = "Trottoir SW_4S_Pave_SquareEnd";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_4S_Pave_SquareEnd.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_4S_Pave_SquareEnd.jpg";
        };
        class Land_SW_4S_Pave_SquareHalfEnd : Static
        {
            scope = 2;
            displayName = "Trottoir SW_4S_Pave_SquareHalfEnd";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_4S_Pave_SquareHalfEnd.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_4S_Pave_SquareHalfEnd.jpg";
        };
        class Land_SW_4L_Pave_SquareHalfEnd : Static
        {
            scope = 2;
            displayName = "Trottoir SW_4L_Pave_SquareHalfEnd";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_4L_Pave_SquareHalfEnd.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_4L_Pave_SquareHalfEnd.jpg";
        };
        class Land_SW_4L_Pave_SquareHalfEnd90 : Static
        {
            scope = 2;
            displayName = "Trottoir SW_4L_Pave_SquareHalfEnd";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_4L_Pave_SquareHalfEnd90.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_4L_Pave_SquareHalfEnd90.jpg";
        };
        class Land_SW_4L_Pave_SquareEnd : Static
        {
            scope = 2;
            displayName = "Trottoir SW_4L_Pave_SquareEnd";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_4L_Pave_SquareEnd.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_4L_Pave_SquareEnd.jpg";
        };
        class Land_SW_8L_Pave_Body : Static
        {
            scope = 2;
            displayName = "Trottoir SW_8L_Pave_Body";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_8L_Pave_Body.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_8L_Pave_Body.jpg";
        };
        class Land_SW_8S_Pave_Body : Static
        {
            scope = 2;
            displayName = "Trottoir SW_8S_Pave_Body";
            model = "\Edaly_Structures_Assets_2\Sidewalks\SW_8S_Pave_Body.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_SW_8S_Pave_Body.jpg";
        };
        class Land_Gate_01_F : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = $STR_EDALY_STR_GATE_01;
            model = "Edaly_Structures_Assets_2\Civilian\Gate_01_F\Gate_01_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Gate_01_F.jpg";

            class selections
            {
                door_1 = "door_1_source";
                door_2 = "door_2_source";
            };

            class AnimationSources
            {
                class door_1_source
                {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GateDoorsSound";
                };
                class door_2_source : door_1_source {};
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
            actionBegin2 = OpenDoor_2;
            actionEnd2 = OpenDoor_2;
        };

        class Land_Gate_02_F : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = $STR_EDALY_STR_GATE_02;
            model = "Edaly_Structures_Assets_2\Civilian\Gate_02_F\Gate_02_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Gate_02_F.jpg";

            class selections
            {
                door_1 = "door_1_source";
            };

            class AnimationSources
            {
                class door_1_source
                {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GateDoorsSound";
                };
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
        };
    /******* Config Edaly_Structures_Assets_2 *******/

    /******* Config Edaly_Structures_Assets_3 *******/
        class Capitol_Base_F: House_F
        {
            scope = 1;
            author = $STR_EDALY_AUTHOR;
            displayName = $STR_EDALY_STR_CAPITOL_B;
            model = "\Edaly_Structures_Assets_3\Capitol\Capitol_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Capitol_01_F.jpg";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
        };
        class Capitol_01_F: Capitol_Base_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_CAPITOL;
            model = "\Edaly_Structures_Assets_3\Capitol\Capitol_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Capitol_01_F.jpg";
        };
        class Land_Edaly_House_Trinidad_01_F : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = $STR_EDALY_STR_TRINIDAD_HOUSE_FIXED;
            model = "Edaly_Structures_Assets_3\House_Trinidad\Edaly_House_Trinidad_01_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_House_Trinidad_01_F.jpg";
            numberOfDoors= 6;

            class AnimationSources
            {
                // Animation sources for doors
                class door_1_source
                {
                    source = user; // "user" = custom source = not controlled by some engine value
                    initPhase = 0; // Initial value of animations based on this source
                    animPeriod = 1; // Coefficient for duration of change of this animation
                    sound = "GenericDoorsSound";
                };
                class door_2_source: door_1_source {};
                class door_3_source: door_1_source {};
                class door_4_source: door_1_source {};
                class door_5_source: door_1_source {};
                class door_6_source: door_1_source {};

                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)
                DOOR_SOURCE_LOCKED(3)
                DOOR_SOURCE_LOCKED(4)
                DOOR_SOURCE_LOCKED(5)
                DOOR_SOURCE_LOCKED(6)

            };


            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
                DOOR_USERACTION(3,3)
                DOOR_USERACTION(4,4)
                DOOR_USERACTION(5,5)
                DOOR_USERACTION(6,6)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
            actionBegin2 = OpenDoor_2;
            actionEnd2 = OpenDoor_2;
            actionBegin3 = OpenDoor_3;
            actionEnd3 = OpenDoor_3;
            actionBegin4 = OpenDoor_4;
            actionEnd4 = OpenDoor_4;
            actionBegin5 = OpenDoor_5;
            actionEnd5 = OpenDoor_5;
            actionBegin6 = OpenDoor_6;
            actionEnd6 = OpenDoor_6;
        };
        class Land_House_Trinidad_02_Blue_F : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = "Maison Trinidad 2 - Bleu";
            model = "Edaly_Structures_Assets_3\House_Trinidad_02\House_Trinidad_02_Blue_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_House_Trinidad_02_Blue_F.jpg";
            numberOfDoors = 4;
            spotableDarkNightLightsOff = 0.001;
            spotableNightLightsOff = 0.02;
            spotableNightLightsOn = 4;
            accuracyDarkNightLightsOff = 0.001;
            accuracyNightLightsOff = 0.006;
            accuracyNightLightsOn = 0.1;
            attenuationEffectType = "";
            vehicleClass = "Structures";

            class selections
            {
                door_1 = "door_1_source";
                door_2 = "door_2_source";
                window_1 = "window_1_source";
                window_2 = "window_2_source";
            };

            class AnimationSources
            {
                // Animation sources for doors
                class door_1_source
                {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericDoorsSound";
                    soundPosition = "Door_1_trigger";
                };
                class door_2_source: door_1_source {
                    soundPosition = "Door_2_trigger";
                };
                class door_1_locked_source {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                };
                class door_2_locked_source : door_1_locked_source {};

                class window_1_source: door_1_source {
                    source = "user";
                    initPhase = 0;
                    animPeriod = 1;
                    soundPosition = "window_1_trigger";
                };
                class window_2_source: door_1_source {
                    source = "user";
                    initPhase = 0;
                    animPeriod = 1;
                    soundPosition = "window_2_trigger";
                };
                class window_1_locked_source: door_1_locked_source {};
                class window_2_locked_source: door_1_locked_source {};

                class glass_1_source
                {
                    source = "Hit";
                    hitpoint = "glass_1_hitpoint";
                    raw = 1;
                };
            };

            class UserActions
            {
                class OpenDoor_1
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "Door_1_trigger";
                    priority = 11;
                    actionNamedSel = "door_1";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'door_1_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'door', 1, 1] call EdalyBase_fnc_Door)";
                };
                class CloseDoor_1: OpenDoor_1
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'door_1_source') >= 0.5) && ((this getVariable ['bis_disabled_door_1', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'door', 1, 0] call EdalyBase_fnc_Door)";
                };
                class OpenDoor_2
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "Door_2_trigger";
                    priority = 11;
                    actionNamedSel = "door_2";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'door_2_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'door', 2, 1] call EdalyBase_fnc_Door)";
                };
                class CloseDoor_2: OpenDoor_2
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'door_2_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_2', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'door', 2, 0] call EdalyBase_fnc_Door)";
                };
                class OpenWindow_1
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "window_1_trigger";
                    priority = 11;
                    actionNamedSel = "window_1";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'window_1_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 1, 1] call EdalyBase_fnc_Door)";
                };
                class CloseWindow_1: OpenWindow_1
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'window_1_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_3', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 1, 0] call EdalyBase_fnc_Door)";
                };
                class OpenWindow_2
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "window_2_trigger";
                    priority = 11;
                    actionNamedSel = "window_2";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'window_2_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 2, 1] call EdalyBase_fnc_Door)";
                };
                class CloseWindow_2: OpenWindow_2
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'window_2_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_4', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 2, 0] call EdalyBase_fnc_Door)";
                };
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;

            class HitPoints
            {
                GLASS_HITPOINT(1)
            };
        };
        class Land_House_Trinidad_02_Beige_F : Land_House_Trinidad_02_Blue_F
        {
            displayName = "Maison Trinidad 2 - Beige";
            model = "Edaly_Structures_Assets_3\House_Trinidad_02\House_Trinidad_02_Beige_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_House_Trinidad_02_Beige_F.jpg";
        };
        class Land_House_Trinidad_02_Yellow_F : Land_House_Trinidad_02_Blue_F
        {
            displayName = "Maison Trinidad 2 - Jaune";
            model = "Edaly_Structures_Assets_3\House_Trinidad_02\House_Trinidad_02_Yellow_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_House_Trinidad_02_Yellow_F.jpg";
        };
        class Land_House_Trinidad_03_B_F : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = "maison trinidad 3 (blue)";
            model = "Edaly_Structures_Assets_3\House_Trinidad_03\House_Trinidad_03_B_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_House_Trinidad_03_B_F.jpg";
            numberOfDoors = 5;
            vehicleClass = Structures;

            class selections
            {
                door_1 = "door_1_source";
                window_1 = "window_1_source";
                window_2 = "window_2_source";
                window_3 = "window_3_source";
                window_4 = "window_4_source";
            };

            class AnimationSources
            {
                class door_1_source
                {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericDoorsSound";
                    soundPosition = "Door_1_trigger";
                };
                class door_1_locked_source {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                };

                class window_1_source: door_1_source {
                    source = "user";
                    initPhase = 0;
                    animPeriod = 1;
                    soundPosition = "window_1_trigger";
                };
                class window_2_source: window_1_source {
                    soundPosition = "window_2_trigger";
                };
                class window_3_source: window_1_source {
                    soundPosition = "window_3_trigger";
                };
                class window_4_source: window_1_source {
                    soundPosition = "window_4_trigger";
                };
                class window_1_locked_source: door_1_locked_source {};
                class window_2_locked_source: door_1_locked_source {};
                class window_3_locked_source: door_1_locked_source {};
                class window_4_locked_source: door_1_locked_source {};
            };


            class UserActions
            {
                class OpenDoor_1
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "Door_1_trigger";
                    priority = 11;
                    actionNamedSel = "door_1";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'door_1_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'door', 1, 1] call EdalyBase_fnc_Door)";
                };
                class CloseDoor_1: OpenDoor_1
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'door_1_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_1', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'door', 1, 0] call EdalyBase_fnc_Door)";
                };
                class OpenWindow_1
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "window_1_trigger";
                    priority = 11;
                    actionNamedSel = "window_1";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'window_1_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 1, 1] call EdalyBase_fnc_Door)";
                };
                class CloseWindow_1: OpenWindow_1
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'window_1_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_2', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 1, 0] call EdalyBase_fnc_Door)";
                };
                class OpenWindow_2
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "window_2_trigger";
                    priority = 11;
                    actionNamedSel = "window_2";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'window_2_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 2, 1] call EdalyBase_fnc_Door)";
                };
                class CloseWindow_2: OpenWindow_2
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'window_2_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_3', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 2, 0] call EdalyBase_fnc_Door)";
                };
                class OpenWindow_3
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "window_3_trigger";
                    priority = 11;
                    actionNamedSel = "window_3";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'window_3_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 3, 1] call EdalyBase_fnc_Door)";
                };
                class CloseWindow_3: OpenWindow_3
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'window_3_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_4', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 3, 0] call EdalyBase_fnc_Door)";
                };
                class OpenWindow_4
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "window_4_trigger";
                    priority = 11;
                    actionNamedSel = "window_4";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'window_4_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 4, 1] call EdalyBase_fnc_Door)";
                };
                class CloseWindow_4: OpenWindow_4
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'window_4_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_5', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 4, 0] call EdalyBase_fnc_Door)";
                };
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
        };
        class Land_House_Trinidad_03_G_F : Land_House_Trinidad_03_B_F
        {
            displayName = "maison trinidad 3 (Green)";
            model = "Edaly_Structures_Assets_3\House_Trinidad_03\House_Trinidad_03_G_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_House_Trinidad_03_G_F.jpg";
        };
        class Land_House_Trinidad_03_O_F : Land_House_Trinidad_03_B_F
        {
            displayName = "maison trinidad 3 (Orange)";
            model = "Edaly_Structures_Assets_3\House_Trinidad_03\House_Trinidad_03_O_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_House_Trinidad_03_O_F.jpg";
        };
        class Land_House_Trinidad_04_A_F : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = "maison trinidad 4 (Yellow)";
            model = "Edaly_Structures_Assets_3\House_Trinidad_04\House_Trinidad_04_A_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_House_Trinidad_04_A_F.jpg";
            numberOfDoors = 5;

            class selections
            {
                door_1 = "door_1_source";

                window_1 = "window_1_source";
                window_2 = "window_2_source";
                window_3 = "window_3_source";
                window_4 = "window_4_source";
                window_5 = "window_5_source";
                window_6 = "window_6_source";
            };

            class AnimationSources
            {
                class door_1_source
                {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericDoorsSound";
                    soundPosition = "Door_1_trigger";
                };
                class door_1_locked_source {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                };

                class window_1_source: door_1_source {
                    source = "user";
                    initPhase = 0;
                    animPeriod = 1;
                    soundPosition = "window_1_trigger";
                };
                class window_2_source: window_1_source {
                    soundPosition = "window_2_trigger";
                };
                class window_3_source: window_1_source {
                    soundPosition = "window_3_trigger";
                };
                class window_4_source: window_1_source {
                    soundPosition = "window_4_trigger";
                };
                class window_5_source : door_1_source {
                    soundPosition = "window_5_trigger";
                };
                class window_6_source : door_1_source {
                    soundPosition = "window_6_trigger";
                };
                class window_1_locked_source: door_1_locked_source {};
                class window_2_locked_source: door_1_locked_source {};
                class window_3_locked_source: door_1_locked_source {};
                class window_4_locked_source: door_1_locked_source {};
                class window_5_locked_source: door_1_locked_source {};
                class window_6_locked_source: door_1_locked_source {};
            };


            class UserActions
            {
                class OpenDoor_1
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "Door_1_trigger";
                    priority = 11;
                    actionNamedSel = "door_1";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'door_1_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'door', 1, 1] call EdalyBase_fnc_Door)";
                };
                class CloseDoor_1: OpenDoor_1
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'door_1_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_1', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'door', 1, 0] call EdalyBase_fnc_Door)";
                };

                class OpenWindow_1
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "window_1_trigger";
                    priority = 11;
                    actionNamedSel = "window_1";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'window_1_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 1, 1] call EdalyBase_fnc_Door)";
                };
                class CloseWindow_1: OpenWindow_1
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'window_1_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_2', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 1, 0] call EdalyBase_fnc_Door)";
                };

                class OpenWindow_2
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "window_2_trigger";
                    priority = 11;
                    actionNamedSel = "window_2";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'window_2_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 2, 1] call EdalyBase_fnc_Door)";
                };
                class CloseWindow_2: OpenWindow_2
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'window_2_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_3', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 2, 0] call EdalyBase_fnc_Door)";
                };

                class OpenWindow_3
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "window_3_trigger";
                    priority = 11;
                    actionNamedSel = "window_3";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'window_3_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 3, 1] call EdalyBase_fnc_Door)";
                };
                class CloseWindow_3: OpenWindow_3
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'window_3_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_4', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 3, 0] call EdalyBase_fnc_Door)";
                };

                class OpenWindow_4
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "window_4_trigger";
                    priority = 11;
                    actionNamedSel = "window_4";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'window_4_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 4, 1] call EdalyBase_fnc_Door)";
                };

                class CloseWindow_4: OpenWindow_4
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'window_4_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_5', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 4, 0] call EdalyBase_fnc_Door)";
                };

                class OpenWindow_5
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "window_5_trigger";
                    priority = 11;
                    actionNamedSel = "window_5";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'window_5_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 5, 1] call EdalyBase_fnc_Door)";
                };

                class CloseWindow_5: OpenWindow_5
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'window_5_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_6', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 5, 0] call EdalyBase_fnc_Door)";
                };

                class OpenWindow_6
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "window_6_trigger";
                    priority = 11;
                    actionNamedSel = "window_6";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'window_6_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 6, 1] call EdalyBase_fnc_Door)";
                };

                class CloseWindow_6: OpenWindow_6
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'window_6_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_7', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 6, 0] call EdalyBase_fnc_Door)";
                };
            };
        };
        class Land_House_Trinidad_04_R_F : Land_House_Trinidad_04_A_F
        {
            displayName = "maison trinidad 4 (Red)";
            model = "Edaly_Structures_Assets_3\House_Trinidad_04\House_Trinidad_04_R_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_House_Trinidad_04_R_F.jpg";
        };
        class Land_House_Trinidad_04_S_F : Land_House_Trinidad_04_A_F
        {
            displayName = "maison trinidad 4 (Salmon)";
            model = "Edaly_Structures_Assets_3\House_Trinidad_04\House_Trinidad_04_S_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_House_Trinidad_04_S_F.jpg";
        };
        class Land_House_Trinidad_05_R_F : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = "maison trinidad 5 (Red)";
            model = "Edaly_Structures_Assets_3\House_Trinidad_05\House_Trinidad_05_R_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_House_Trinidad_05_R_F.jpg";

            class selections
            {
                door_1 = "door_1_source";
                door_2 = "door_2_source";
                door_3 = "door_3_source";
                door_4 = "door_4_source";
                window_1 = "window_1_source";
                window_2 = "window_2_source";
                window_3 = "window_3_source";
                window_4 = "window_4_source";
            };

            class AnimationSources
            {
                class door_1_source
                {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericDoorsSound";
                    soundPosition = "Door_1_trigger";
                };

                class door_2_source: door_1_source {
                    soundPosition = "Door_2_trigger";
                };
                class door_3_source: door_1_source {
                    soundPosition = "Door_3_trigger";
                };
                class door_4_source: door_1_source {
                    soundPosition = "Door_4_trigger";
                };

                class door_1_locked_source {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                };
                class door_2_locked_source : door_1_locked_source {};
                class door_3_locked_source : door_1_locked_source {};
                class door_4_locked_source : door_1_locked_source {};

                class window_1_source: door_1_source {
                    source = "user";
                    initPhase = 0;
                    animPeriod = 1;
                    soundPosition = "window_1_trigger";
                };
                class window_2_source: window_1_source {
                    soundPosition = "window_2_trigger";
                };
                class window_3_source: window_1_source {
                    soundPosition = "window_3_trigger";
                };
                class window_4_source: window_1_source {
                    soundPosition = "window_4_trigger";
                };
                class window_1_locked_source: door_1_locked_source {};
                class window_2_locked_source: door_1_locked_source {};
                class window_3_locked_source: door_1_locked_source {};
                class window_4_locked_source: door_1_locked_source {};
            };

            class UserActions
            {
                class OpenDoor_1
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "Door_1_trigger";
                    priority = 11;
                    actionNamedSel = "door_1";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'door_1_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'door', 1, 1] call EdalyBase_fnc_Door)";
                };
                class CloseDoor_1: OpenDoor_1
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'door_1_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_1', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'door', 1, 0] call EdalyBase_fnc_Door)";
                };
                class OpenDoor_2
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "Door_2_trigger";
                    priority = 11;
                    actionNamedSel = "door_2";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'door_2_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'door', 2, 1] call EdalyBase_fnc_Door)";
                };
                class CloseDoor_2: OpenDoor_2
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'door_2_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_2', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'door', 2, 0] call EdalyBase_fnc_Door)";
                };
                class OpenDoor_3
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "Door_3_trigger";
                    priority = 11;
                    actionNamedSel = "door_3";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'door_3_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'door', 3, 1] call EdalyBase_fnc_Door)";
                };
                class CloseDoor_3: OpenDoor_3
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'door_3_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_3', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'door', 3, 0] call EdalyBase_fnc_Door)";
                };
                class OpenDoor_4
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "Door_4_trigger";
                    priority = 11;
                    actionNamedSel = "door_4";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'door_4_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'door', 4, 1] call EdalyBase_fnc_Door)";
                };
                class CloseDoor_4: OpenDoor_4
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'door_4_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_4', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'door', 4, 0] call EdalyBase_fnc_Door)";
                };

                class OpenWindow_1
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "window_1_trigger";
                    priority = 11;
                    actionNamedSel = "window_1";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'window_1_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 1, 1] call EdalyBase_fnc_Door)";
                };
                class CloseWindow_1: OpenWindow_1
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'window_1_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_5', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 1, 0] call EdalyBase_fnc_Door)";
                };
                class OpenWindow_2
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "window_2_trigger";
                    priority = 11;
                    actionNamedSel = "window_2";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'window_2_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 2, 1] call EdalyBase_fnc_Door)";
                };
                class CloseWindow_2: OpenWindow_2
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'window_2_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_6', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 2, 0] call EdalyBase_fnc_Door)";
                };
                class OpenWindow_3
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "window_3_trigger";
                    priority = 11;
                    actionNamedSel = "window_3";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'window_3_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 3, 1] call EdalyBase_fnc_Door)";
                };
                class CloseWindow_3: OpenWindow_3
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'window_3_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_7', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 3, 0] call EdalyBase_fnc_Door)";
                };
                class OpenWindow_4
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "window_4_trigger";
                    priority = 11;
                    actionNamedSel = "window_4";
                    radius = 1.75;
                    aiMaxRange = 5.25;
                    onlyForPlayer = 0;
                    condition = "((this animationSourcePhase 'window_4_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 4, 1] call EdalyBase_fnc_Door)";
                };
                class CloseWindow_4: OpenWindow_4
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    priority = 11;
                    condition = "((this animationSourcePhase 'window_4_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_8', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                    statement = "([this, 'window', 4, 0] call EdalyBase_fnc_Door)";
                };
            };
        };
        class Land_House_Trinidad_05_B_F : Land_House_Trinidad_05_R_F
        {
            displayName="maison trinidad 5 (Bleu)";
            model="Edaly_Structures_Assets_3\House_Trinidad_05\House_Trinidad_05_B_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_House_Trinidad_05_B_F.jpg";
        };
        class Land_House_Trinidad_05_P_F : Land_House_Trinidad_05_R_F
        {
            displayName="maison trinidad 5 (Pink)";
            model="Edaly_Structures_Assets_3\House_Trinidad_05\House_Trinidad_05_P_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_House_Trinidad_05_P_F.jpg";
        };
        class Land_House_Trinidad_05_G_F : Land_House_Trinidad_05_R_F
        {
            displayName="maison trinidad 5 (Green)";
            model="Edaly_Structures_Assets_3\House_Trinidad_05\House_Trinidad_05_G_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_House_Trinidad_05_G_F.jpg";
        };
        class Land_TownSign_Losbanos : Static
        {
            scope = 2;
            displayName = "Panneau (Los Banos)";
            model = "Edaly_Structures_Assets_3\TownSign\TownSign_Losbanos.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_TownSign_Losbanos.jpg";
        };
        class Land_TownSign_Campeones : Static
        {
            scope = 2;
            displayName = "Panneau (Campeones)";
            model = "Edaly_Structures_Assets_3\TownSign\TownSign_Campeones.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_TownSign_Campeones.jpg";
        };
        class Land_TownSign_DeuxBranches : Static
        {
            scope = 2;
            displayName = "Panneau (Deux Branches)";
            model = "Edaly_Structures_Assets_3\TownSign\TownSign_DeuxBranches.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_TownSign_DeuxBranches.jpg";
        };
        class Land_TownSign_Maliou : Static
        {
            scope = 2;
            displayName = "Panneau (Maliou)";
            model = "Edaly_Structures_Assets_3\TownSign\TownSign_Maliou.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_TownSign_Maliou.jpg";
        };
        class Land_TownSign_SainteSarah : Static
        {
            scope = 2;
            displayName = "Panneau (Sainte Sarah)";
            model = "Edaly_Structures_Assets_3\TownSign\TownSign_SainteSarah.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_TownSign_SainteSarah.jpg";
        };
        class Land_TownSign_TeteLili : Static
        {
            scope = 2;
            displayName = "Panneau (Tete Lili)";
            model = "Edaly_Structures_Assets_3\TownSign\TownSign_TeteLili.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_TownSign_TeteLili.jpg";
        };
        class Land_TownSign_VouteEglise : Static
        {
            scope = 2;
            displayName = "Panneau (Voute Eglise)";
            model = "Edaly_Structures_Assets_3\TownSign\TownSign_VouteEglise.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_TownSign_VouteEglise.jpg";
        };
        // NEED UV & LODS
        class Land_Chimney_01_F : House_F {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = "Cheminee industrie";
            model = "Edaly_Structures_Assets_10\Chimney\Chimney_01_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Chimney_01_F.jpg";
        };
        // NEED UV & LODS
    /******* Config Edaly_Structures_Assets_3 *******/

    /******* Config Edaly_Structures_Assets_4 *******/
        class Edaly_Curbs_01_F : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = $STR_EDALY_STR_CURBS;
            model = "Edaly_Structures_Assets_4\Curbs\cement_curbs_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Curbs_01_F.jpg";
        };
        class Edaly_Roadway_01_F : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = "Trottoir";
            model = "Edaly_Structures_Assets_4\Roadway\Roadway_01_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Roadway_01_F.jpg";
        };
        class Edaly_RockyPath_01_F : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = "chemin rock";
            model = "Edaly_Structures_Assets_4\RockyPath\RockyPath_01_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_RockyPath_01_F.jpg";
        };
        class Edaly_RockyPath_02_F : Edaly_RockyPath_01_F
        {
            scope = 2;
            displayName = "chemin rock 2";
            model = "Edaly_Structures_Assets_4\RockyPath\RockyPath_02_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_RockyPath_02_F.jpg";
        };
        class Edaly_RockyPath_03_F : Edaly_RockyPath_01_F
        {
            scope = 2;
            displayName = "chemin rock 3";
            model = "Edaly_Structures_Assets_4\RockyPath\RockyPath_03_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_RockyPath_03_F.jpg";
        };
        class Edaly_RockyPath_04_F : Edaly_RockyPath_01_F
        {
            scope = 2;
            displayName = "chemin rock 4";
            model = "Edaly_Structures_Assets_4\RockyPath\RockyPath_04_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_RockyPath_04_F.jpg";
        };
        class Land_Lamp_01: Lamps_base_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_STREET_LAMP_01;
            author = $STR_EDALY_AUTHOR;
            class SimpleObject
            {
                eden = 0;
                animate[] = {};
                hide[] = {"light_1_hide"};
                verticalOffset = 4.232;
                verticalOffsetWorld = 0;
                init = "''";
            };
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_4\Streetlamp\Lamp_01.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Lamp_01.jpg";
            mapSize = 1;
            cost = 40000;
            class Reflectors
            {
                class Light_1
                {
                    color[] = {1200,600,300};
                    ambient[] = {245,221,158};
                    intensity = 3;
                    size = 1;
                    innerAngle = 120;
                    outerAngle = 170;
                    coneFadeCoef = 1;
                    position = "Light_1_pos";
                    direction = "Light_1_dir";
                    hitpoint = "Light_1_hitpoint";
                    selection = "Light_1_hide";
                    useFlare = 1;
                    flareSize = 1.1;
                    flareMaxDistance = 600;
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
        class Land_Lamp_02: Land_Lamp_01
        {
            scope = 2;
            displayName = $STR_EDALY_STR_STREET_LAMP_02;
            author = $STR_EDALY_AUTHOR;
            model = "Edaly_Structures_Assets_4\Streetlamp\Lamp_02.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Lamp_02.jpg";
            class Reflectors
            {
                class Light_1
                {
                    color[] = {1200,600,300};
                    ambient[] = {245,221,158};
                    intensity = 3;
                    size = 1;
                    innerAngle = 120;
                    outerAngle = 170;
                    coneFadeCoef = 1;
                    position = "Light_1_pos";
                    direction = "Light_1_dir";
                    hitpoint = "Light_1_hitpoint";
                    selection = "Light_1_hide";
                    useFlare = 1;
                    flareSize = 1.1;
                    flareMaxDistance = 600;
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
        class Land_Omni_Light: Land_Lamp_01
        {
            scope = 2;
            displayName = "Light Omni";
            author = $STR_EDALY_AUTHOR;
            model = "Edaly_Structures_Assets_4\Dummy_Lights\Omni_Light.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Omni_Light.jpg";
            class Reflectors
            {
                class Light_1
                {
                    color[] = {1200,600,300};
                    ambient[] = {12,6,3};
                    intensity = 12;
                    size = 25;
                    innerAngle = 100;
                    outerAngle = 180;
                    coneFadeCoef = 2;
                    position = "Light_1_pos";
                    direction = "Light_1_dir";
                    hitpoint = "Light_1_hitpoint";
                    selection = "Light_1_hide";
                    useFlare = 0;
                    flareSize = 2;
                    flareMaxDistance = 200;
                    class Attenuation
                    {
                        start = 0;
                        constant = 0;
                        linear = 0;
                        quadratic = 0.3;
                        hardLimitStart = 40;
                        hardLimitEnd = 60;
                    };
                };
            };
        };
        class Land_Concrete_Pot_01 : Static
        {
            scope = 2;
            displayName = "Pot de fleur en beton";
            model = "\Edaly_Structures_Assets_4\ConcretePot\ConcretePot_01.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Concrete_Pot_01.jpg";
        };
        class Land_Trashcan : Static
        {
            scope = 2;
            displayName = $STR_EDALY_I_TRASHBAG;
            model = "\Edaly_Structures_Assets_4\Trashcan\trashcan.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Trashcan.jpg";
        };
        class Land_Trashcan_animation : Static
        {
            scope = 2;
            displayName = $STR_EDALY_I_TRASHBAG;
            model = "\Edaly_Structures_Assets_4\Trashcan\trashcan_animation.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Trashcan.jpg";

            class AnimationSources
            {
                class garbage_level
                {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "";
                };
            };
        };
        class Land_Postal_box_01_F : Static
        {
            scope = 2;
            displayName = "Postal box";
            model = "\Edaly_Structures_Assets_4\Postal_box\Postal_box_01_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Postal_box_01_F.jpg";
        };
        class Land_Water_Tank_01_F : House_F {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = "Citerne en bois";
            model = "Edaly_Structures_Assets_10\Water_Tank\Water_Tank_01_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Water_Tank_01_F.jpg";
            ladders[] = {{"Ladder_1_start","Ladder_1_end",2.5,"Ladder_1_action"}};
        };
    /******* Config Edaly_Structures_Assets_4 *******/

    /******* Config Edaly_Structures_Assets_5 *******/
        class Land_Shop_rural_01_F : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = $STR_EDALY_STR_RURAL_SHOP_BLUE;
            model = "\Edaly_Structures_Assets_5\Shop_Rural\Shop_rural_01_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Shop_rural_01_F.jpg";
            numberOfDoors = 1;

            class AnimationSources
            {
                class door_1_source
                {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericDoorsSound";
                };
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
        };
        class Land_Shop_rural_02_F : Land_Shop_rural_01_F {
            scope = 2;
            displayName = $STR_EDALY_STR_RURAL_SHOP_PINK;
            model = "\Edaly_Structures_Assets_5\Shop_Rural\Shop_rural_02_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Shop_rural_02_F.jpg";
        };
        class Land_Shop_rural_03_F : Land_Shop_rural_01_F {
            scope = 2;
            displayName = $STR_EDALY_STR_RURAL_SHOP_VIOLET;
            model = "\Edaly_Structures_Assets_5\Shop_Rural\Shop_rural_03_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Shop_rural_03_F.jpg";
        };
        class Edaly_Str_Christian_cross_F: House_F
        {
            scope = 2;
            scopeCurator = 2;
            simulation = "house";
            animated = 1;
            mapSize = 8;
            cost = 5000;
            author = $STR_EDALY_AUTHOR;
            vehicleClass = "Christian_cross";
            displayName = $STR_EDALY_STR_CHRISTIAN_CROSS;
            model = "Edaly_Structures_Assets_5\Christian_cross\Christian_cross_F.p3d";
            placement = "vertical";
            numberOfDoors = 22;
            hiddenSelectionsTextures[] = {};
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Christian_cross_F.jpg";

            class AnimationSources { };
            class UserActions { };
        };
        class Edaly_Str_Fountain_Plaza_Vieja_F: House_F
        {
            scope = 2;
            scopeCurator = 2;
            simulation = "house";
            animated = 1;
            mapSize = 8;
            cost = 5000;
            author = $STR_EDALY_AUTHOR;
            vehicleClass = "Fountain_Plaza_Vieja";
            displayName = $STR_EDALY_STR_FOUNTAIN_PLAZA_VIEJA;
            model = "Edaly_Structures_Assets_5\Fountain_Plaza_Vieja\Fountain_Plaza_Vieja_F.p3d";
            placement = "vertical";
            numberOfDoors = 22;
            hiddenSelectionsTextures[] = {};
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";

            class AnimationSources {};
            class UserActions {};
        };
        class Edaly_Str_GuardTower_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_STONE_GUARD_TOWER;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            model = "Edaly_Structures_Assets_5\Guard_Tower\GuardTower_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_GuardTower_F.jpg";
            mapSize = 8;
            cost = 40000;
        };
        /*class Land_Edaly_Gas_Station_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Gas Station";
            model = "\Edaly_Structures_Assets_5\Gas_Station\Gas_station_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Gas_Station_01_F.jpg";
        };
        */
        class Land_Barrier_01_F: House_F {
            scope=2;
            author=$STR_EDALY_AUTHOR;
            displayName=$STR_EDALY_STR_BARRIER;
            model="\Edaly_Structures_Assets_5\Barrier_01\Barrier_01_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Barrier_01_F.jpg";

            class AnimationSources
            {
                class door_1_source
                {
                    source = "user";
                    initPhase = 0;
                    animPeriod = 3.5;
                };
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
        };
        class Land_Car_dealer_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = $STR_EDALY_STR_CAR_DEALER;
            model = "\Edaly_Structures_Assets_5\Car_dealer\Car_dealer_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Car_dealer_01_F.jpg";
            numberOfDoors = 4;

            class Reflectors
            {
                class Light_1
                {
                    color[] = {1200,600,300};
                    ambient[] = {12,6,3};
                    intensity = 5;
                    size = 10;
                    innerAngle = 90;
                    outerAngle = 130;
                    coneFadeCoef = 2;
                    position = "Light_1_pos";
                    direction = "Light_1_dir";
                    hitpoint = "Light_1_hitpoint";
                    selection = "Light_1_hide";
                    useFlare = 1;
                    flareSize = 2;
                    flareMaxDistance = 220;
                    class Attenuation
                    {
                        start = 0;
                        constant = 0;
                        linear = 0;
                        quadratic = 0.3;
                        hardLimitStart = 40;
                        hardLimitEnd = 60;
                    };
                };

                class Light_2 : Light_1 {
                    position = "Light_2_pos";
                    direction = "Light_2_dir";
                    hitpoint = "Light_2_hitpoint";
                    selection = "Light_2_hide";
                };
                class Light_3 : Light_1 {
                    position = "Light_3_pos";
                    direction = "Light_3_dir";
                    hitpoint = "Light_3_hitpoint";
                    selection = "Light_3_hide";
                };
                class Light_4 : Light_1 {
                    position = "Light_4_pos";
                    direction = "Light_4_dir";
                    hitpoint = "Light_4_hitpoint";
                    selection = "Light_4_hide";
                };
                class Light_5 : Light_1 {
                    position = "Light_5_pos";
                    direction = "Light_5_dir";
                    hitpoint = "Light_5_hitpoint";
                    selection = "Light_5_hide";
                };
                class Light_6 : Light_1 {
                    position = "Light_6_pos";
                    direction = "Light_6_dir";
                    hitpoint = "Light_6_hitpoint";
                    selection = "Light_6_hide";
                };
                class Light_7 : Light_1 {
                    position = "Light_7_pos";
                    direction = "Light_7_dir";
                    hitpoint = "Light_7_hitpoint";
                    selection = "Light_7_hide";
                };
                class Light_8 : Light_1 {
                    position = "Light_8_pos";
                    direction = "Light_8_dir";
                    hitpoint = "Light_8_hitpoint";
                    selection = "Light_8_hide";
                };
            };

            class AnimationSources
            {
                class door_1_source
                {
                    source = "user";
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericDoorsSound";
                };
                class door_2_source : door_1_source {};
                class door_3_source : door_1_source {};
                class door_4_source : door_1_source {
                    animPeriod = 5;
                    sound = "RollDoorsSound";
                };

                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)
                DOOR_SOURCE_LOCKED(3)

                GLASS_SOURCE_HITPOINT(1)
                GLASS_SOURCE_HITPOINT(2)
                GLASS_SOURCE_HITPOINT(3)
                GLASS_SOURCE_HITPOINT(4)
                GLASS_SOURCE_HITPOINT(5)
                GLASS_SOURCE_HITPOINT(6)
                GLASS_SOURCE_HITPOINT(7)
                GLASS_SOURCE_HITPOINT(8)
                GLASS_SOURCE_HITPOINT(9)
                GLASS_SOURCE_HITPOINT(10)
                GLASS_SOURCE_HITPOINT(11)
            };

            class HitPoints
            {
                #include "\Edaly_Structures_Assets_5\Car_dealer\hitpoints.hpp"
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
                DOOR_USERACTION(3,3)
                DOOR_USERACTION(4,4)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
            actionBegin2 = OpenDoor_2;
            actionEnd2 = OpenDoor_2;
            actionBegin3 = OpenDoor_3;
            actionEnd3 = OpenDoor_3;
            actionBegin4 = OpenDoor_4;
            actionEnd4 = OpenDoor_4;
        };
        class Land_Gas_station_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = $STR_EDALY_STR_GAS_STATION_GARAGE;
            model = "\Edaly_Structures_Assets_5\Gas_Station\Gas_station_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Gas_station_01_F.jpg";
            numberOfDoors = 7;

            class Reflectors
            {
                class Light_1
                {
                    color[] = {1200,600,300};
                    ambient[] = {12,6,3};
                    intensity = 5;
                    size = 10;
                    innerAngle = 90;
                    outerAngle = 130;
                    coneFadeCoef = 2;
                    position = "Light_1_pos";
                    direction = "Light_1_dir";
                    hitpoint = "Light_1_hitpoint";
                    selection = "Light_1_hide";
                    useFlare = 1;
                    flareSize = 2;
                    flareMaxDistance = 220;
                    class Attenuation
                    {
                        start = 0;
                        constant = 0;
                        linear = 0;
                        quadratic = 0.3;
                        hardLimitStart = 40;
                        hardLimitEnd = 60;
                    };
                };

                class Light_2 : Light_1 {
                    position = "Light_2_pos";
                    direction = "Light_2_dir";
                    hitpoint = "Light_2_hitpoint";
                    selection = "Light_2_hide";
                };
            };

            class AnimationSources
            {
                class door_1_source
                {
                    source = "user";
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericDoorsSound";
                };
                class door_2_source : door_1_source {};
                class door_3_source : door_1_source {};
                class door_4_source : door_1_source {};
                class door_5_source : door_1_source {};
                class door_6_source : door_1_source {
                    animPeriod = 3;
                    sound = "metal_electric_door";
                };
                class door_7_source : door_6_source {};

                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)
                DOOR_SOURCE_LOCKED(3)
                DOOR_SOURCE_LOCKED(4)
                DOOR_SOURCE_LOCKED(5)

                GLASS_SOURCE_HITPOINT(1)
                GLASS_SOURCE_HITPOINT(2)
                GLASS_SOURCE_HITPOINT(3)
                GLASS_SOURCE_HITPOINT(4)
                GLASS_SOURCE_HITPOINT(5)
                GLASS_SOURCE_HITPOINT(6)
                GLASS_SOURCE_HITPOINT(7)
                GLASS_SOURCE_HITPOINT(8)
                GLASS_SOURCE_HITPOINT(9)
                GLASS_SOURCE_HITPOINT(10)
                GLASS_SOURCE_HITPOINT(11)
                GLASS_SOURCE_HITPOINT(12)
                GLASS_SOURCE_HITPOINT(13)
            };

            class HitPoints
            {
                #include "\Edaly_Structures_Assets_5\Gas_Station\hitpoints.hpp"
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
                DOOR_USERACTION(3,3)
                DOOR_USERACTION(4,4)
                DOOR_USERACTION(5,5)
                DOOR_USERACTION(6,6)
                DOOR_USERACTION(7,7)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
            actionBegin2 = OpenDoor_2;
            actionEnd2 = OpenDoor_2;
            actionBegin3 = OpenDoor_3;
            actionEnd3 = OpenDoor_3;
            actionBegin4 = OpenDoor_4;
            actionEnd4 = OpenDoor_4;
            actionBegin5 = OpenDoor_5;
            actionEnd5 = OpenDoor_5;
            actionBegin6 = OpenDoor_6;
            actionEnd6 = OpenDoor_6;
            actionBegin7 = OpenDoor_7;
            actionEnd7 = OpenDoor_7;
        };
        class Land_Town_hall_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Mairie Bleue";
            model = "\Edaly_Structures_Assets_5\Town_Hall\Town_hall_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Town_hall_01_F.jpg";
            placement = "vertical";
            numberOfDoors = 51;
            camouflage = 2;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";

            class AnimationSources
            {
                class door_1_source
                {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericDoorsSound";
                };
                class door_2_source: door_1_source {};
                class door_3_source : door_1_source{};
                class door_4_source : door_1_source{};
                class door_5_source : door_1_source{};
                class door_6_source : door_1_source{};
                class door_7_source : door_1_source{};
                class door_8_source : door_1_source{};
                class door_9_source : door_1_source{};
                class door_10_source : door_1_source{};
                class door_11_source : door_1_source{};
                class door_12_source : door_1_source{};
                class door_13_source : door_1_source{};
                class door_14_source : door_1_source{};
                class door_15_source : door_1_source{};
                class door_16_source : door_1_source{};
                class door_17_source : door_1_source{};
                class door_18_source : door_1_source{};
                class door_19_source : door_1_source{};
                class door_20_source : door_1_source{};
                class door_32_source : door_1_source{};
                class door_21_source : door_1_source{};
                class door_22_source : door_1_source{};
                class door_23_source : door_1_source{};
                class door_24_source : door_1_source{};
                class door_25_source : door_1_source{};
                class door_26_source : door_1_source{};
                class door_27_source : door_1_source{};
                class door_28_source : door_1_source{};
                class door_29_source : door_1_source{};
                class door_30_source : door_1_source{};
                class door_31_source : door_1_source{};
                class door_53_source : door_1_source{};
                class door_35_source : door_1_source{};
                class door_34_source : door_1_source{};
                class door_37_source : door_1_source{};
                class door_36_source : door_1_source{};
                class door_39_source : door_1_source{};
                class door_38_source : door_1_source{};
                class door_41_source : door_1_source{};
                class door_40_source : door_1_source{};
                class door_43_source : door_1_source{};
                class door_42_source : door_1_source{};
                class door_45_source : door_1_source{};
                class door_44_source : door_1_source{};
                class door_47_source : door_1_source{};
                class door_46_source : door_1_source{};
                class door_49_source : door_1_source{};
                class door_48_source : door_1_source{};
                class door_50_source : door_1_source{};
                class door_51_source : door_1_source{};

                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)
                DOOR_SOURCE_LOCKED(3)
                DOOR_SOURCE_LOCKED(4)
                DOOR_SOURCE_LOCKED(5)
                DOOR_SOURCE_LOCKED(6)
                DOOR_SOURCE_LOCKED(7)
                DOOR_SOURCE_LOCKED(8)
                DOOR_SOURCE_LOCKED(9)
                DOOR_SOURCE_LOCKED(10)
                DOOR_SOURCE_LOCKED(11)
                DOOR_SOURCE_LOCKED(12)
                DOOR_SOURCE_LOCKED(13)
                DOOR_SOURCE_LOCKED(14)
                DOOR_SOURCE_LOCKED(15)
                DOOR_SOURCE_LOCKED(16)
                DOOR_SOURCE_LOCKED(17)
                DOOR_SOURCE_LOCKED(18)
                DOOR_SOURCE_LOCKED(19)
                DOOR_SOURCE_LOCKED(20)
                DOOR_SOURCE_LOCKED(32)
                DOOR_SOURCE_LOCKED(21)
                DOOR_SOURCE_LOCKED(22)
                DOOR_SOURCE_LOCKED(23)
                DOOR_SOURCE_LOCKED(24)
                DOOR_SOURCE_LOCKED(25)
                DOOR_SOURCE_LOCKED(26)
                DOOR_SOURCE_LOCKED(27)
                DOOR_SOURCE_LOCKED(28)
                DOOR_SOURCE_LOCKED(29)
                DOOR_SOURCE_LOCKED(30)
                DOOR_SOURCE_LOCKED(31)
                DOOR_SOURCE_LOCKED(53)
                DOOR_SOURCE_LOCKED(35)
                DOOR_SOURCE_LOCKED(34)
                DOOR_SOURCE_LOCKED(37)
                DOOR_SOURCE_LOCKED(36)
                DOOR_SOURCE_LOCKED(39)
                DOOR_SOURCE_LOCKED(38)
                DOOR_SOURCE_LOCKED(41)
                DOOR_SOURCE_LOCKED(40)
                DOOR_SOURCE_LOCKED(43)
                DOOR_SOURCE_LOCKED(42)
                DOOR_SOURCE_LOCKED(45)
                DOOR_SOURCE_LOCKED(44)
                DOOR_SOURCE_LOCKED(47)
                DOOR_SOURCE_LOCKED(46)
                DOOR_SOURCE_LOCKED(49)
                DOOR_SOURCE_LOCKED(48)
                DOOR_SOURCE_LOCKED(50)
                DOOR_SOURCE_LOCKED(51)

                GLASS_SOURCE_HITPOINT(1)
                GLASS_SOURCE_HITPOINT(2)
                GLASS_SOURCE_HITPOINT(3)
                GLASS_SOURCE_HITPOINT(4)
                GLASS_SOURCE_HITPOINT(5)
                GLASS_SOURCE_HITPOINT(6)
            };

            class HitPoints
            {
                #include "\Edaly_Structures_Assets_5\Town_Hall\hitpoints.hpp"
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
                DOOR_USERACTION(3,3)
                DOOR_USERACTION(4,4)
                DOOR_USERACTION(5,5)
                DOOR_USERACTION(6,6)
                DOOR_USERACTION(7,7)
                DOOR_USERACTION(8,8)
                DOOR_USERACTION(9,9)
                DOOR_USERACTION(10,10)
                DOOR_USERACTION(11,11)
                DOOR_USERACTION(12,12)
                DOOR_USERACTION(13,13)
                DOOR_USERACTION(14,14)
                DOOR_USERACTION(15,15)
                DOOR_USERACTION(16,16)
                DOOR_USERACTION(17,17)
                DOOR_USERACTION(18,18)
                DOOR_USERACTION(19,19)
                DOOR_USERACTION(20,20)
                DOOR_USERACTION(32,32)
                DOOR_USERACTION(21,21)
                DOOR_USERACTION(22,22)
                DOOR_USERACTION(23,23)
                DOOR_USERACTION(24,24)
                DOOR_USERACTION(25,25)
                DOOR_USERACTION(26,26)
                DOOR_USERACTION(27,27)
                DOOR_USERACTION(28,28)
                DOOR_USERACTION(29,29)
                DOOR_USERACTION(30,30)
                DOOR_USERACTION(31,31)
                DOOR_USERACTION(35,35)
                DOOR_USERACTION(34,34)
                DOOR_USERACTION(37,37)
                DOOR_USERACTION(36,36)
                DOOR_USERACTION(39,39)
                DOOR_USERACTION(38,38)
                DOOR_USERACTION(41,41)
                DOOR_USERACTION(40,40)
                DOOR_USERACTION(43,43)
                DOOR_USERACTION(42,42)
                DOOR_USERACTION(45,45)
                DOOR_USERACTION(44,44)
                DOOR_USERACTION(47,47)
                DOOR_USERACTION(46,46)
                DOOR_USERACTION(48,48)
                DOOR_USERACTION(49,49)
                DOOR_USERACTION(50,50)
                DOOR_USERACTION(51,51)
                DOOR_USERACTION(53,53)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
            actionBegin3 = OpenDoor_3;
            actionEnd3 = OpenDoor_3;
            actionBegin5 = OpenDoor_5;
            actionEnd5 = OpenDoor_5;
            actionBegin8 = OpenDoor_8;
            actionEnd8 = OpenDoor_8;
            actionBegin10 = OpenDoor_10;
            actionEnd10 = OpenDoor_10;
            actionBegin12 = OpenDoor_12;
            actionEnd12 = OpenDoor_12;
            actionBegin14 = OpenDoor_14;
            actionEnd14 = OpenDoor_14;
            actionBegin16 = OpenDoor_16;
            actionEnd16 = OpenDoor_16;
            actionBegin18 = OpenDoor_18;
            actionEnd18 = OpenDoor_18;
            actionBegin20 = OpenDoor_20;
            actionEnd20 = OpenDoor_20;
            actionBegin22 = OpenDoor_22;
            actionEnd22 = OpenDoor_22;
            actionBegin30 = OpenDoor_30;
            actionEnd30 = OpenDoor_30;
        };
        class Land_Town_hall_02_F: Land_Town_hall_01_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Mairie Rose";
            model = "\Edaly_Structures_Assets_5\Town_Hall\Town_hall_02_F.p3d";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Town_hall_02_F.jpg";
        };
        class Land_Post_office_01_F : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = $STR_EDALY_STR_POST_OFFICE_01;
            model = "Edaly_Structures_Assets_5\Post_Office\Post_office_01_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Post_office_01_F.jpg";
            numberOfDoors = 5;

            class AnimationSources
            {
                class door_1_source
                {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericDoorsSound";
                };
                class door_2_source : door_1_source {};
                class door_3_source : door_1_source {};
                class door_4_source : door_1_source {};
                class door_5_source : door_1_source {};
                class door_6_source : door_1_source {
                    animPeriod = 2;
                    sound = "metal_electric_door";
                };
                class window_1_source : door_1_source {};
                class window_2_source : door_1_source {};
                class window_3_source : door_1_source {};
                class window_4_source : door_1_source {};
                class window_5_source : door_1_source {};

                class Closed_1_source {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                };
                class Closed_2_source : Closed_1_source {};
                class Closed_3_source : Closed_1_source {};
                class Closed_4_source : Closed_1_source {};
                class Closed_5_source : Closed_1_source {};
                class Closed_6_source : Closed_1_source {};
                class Closed_7_source : Closed_1_source {};

                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)
                DOOR_SOURCE_LOCKED(3)
                DOOR_SOURCE_LOCKED(4)
                DOOR_SOURCE_LOCKED(5)

                GLASS_SOURCE_HITPOINT(1)
                GLASS_SOURCE_HITPOINT(2)
                GLASS_SOURCE_HITPOINT(3)
                GLASS_SOURCE_HITPOINT(4)
                GLASS_SOURCE_HITPOINT(5)
                GLASS_SOURCE_HITPOINT(6)
                GLASS_SOURCE_HITPOINT(7)
                GLASS_SOURCE_HITPOINT(8)
                GLASS_SOURCE_HITPOINT(9)
                GLASS_SOURCE_HITPOINT(10)
                GLASS_SOURCE_HITPOINT(11)
                GLASS_SOURCE_HITPOINT(12)
                GLASS_SOURCE_HITPOINT(13)
                GLASS_SOURCE_HITPOINT(14)
                GLASS_SOURCE_HITPOINT(15)
                GLASS_SOURCE_HITPOINT(16)
                GLASS_SOURCE_HITPOINT(17)
                GLASS_SOURCE_HITPOINT(18)
                GLASS_SOURCE_HITPOINT(19)
                GLASS_SOURCE_HITPOINT(20)
                GLASS_SOURCE_HITPOINT(21)
                GLASS_SOURCE_HITPOINT(22)
                GLASS_SOURCE_HITPOINT(23)
                GLASS_SOURCE_HITPOINT(24)
                GLASS_SOURCE_HITPOINT(25)
                GLASS_SOURCE_HITPOINT(26)
                GLASS_SOURCE_HITPOINT(27)
                GLASS_SOURCE_HITPOINT(28)
                GLASS_SOURCE_HITPOINT(29)
                GLASS_SOURCE_HITPOINT(30)
                GLASS_SOURCE_HITPOINT(31)
                GLASS_SOURCE_HITPOINT(32)
                GLASS_SOURCE_HITPOINT(33)
                GLASS_SOURCE_HITPOINT(34)
                GLASS_SOURCE_HITPOINT(35)
                GLASS_SOURCE_HITPOINT(36)
                GLASS_SOURCE_HITPOINT(37)
                GLASS_SOURCE_HITPOINT(38)
                GLASS_SOURCE_HITPOINT(39)
                GLASS_SOURCE_HITPOINT(40)
                GLASS_SOURCE_HITPOINT(41)
                GLASS_SOURCE_HITPOINT(42)
                GLASS_SOURCE_HITPOINT(43)
                GLASS_SOURCE_HITPOINT(44)
                GLASS_SOURCE_HITPOINT(45)
                GLASS_SOURCE_HITPOINT(46)
                GLASS_SOURCE_HITPOINT(47)
                GLASS_SOURCE_HITPOINT(48)
                GLASS_SOURCE_HITPOINT(49)
                GLASS_SOURCE_HITPOINT(50)
                GLASS_SOURCE_HITPOINT(51)
                GLASS_SOURCE_HITPOINT(52)
                GLASS_SOURCE_HITPOINT(53)
                GLASS_SOURCE_HITPOINT(54)
                GLASS_SOURCE_HITPOINT(55)
                GLASS_SOURCE_HITPOINT(56)
                GLASS_SOURCE_HITPOINT(57)
                GLASS_SOURCE_HITPOINT(58)
            };

            class HitPoints
            {
                #include "\Edaly_Structures_Assets_5\Post_Office\hitpoints.hpp"
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
                DOOR_USERACTION(3,3)
                DOOR_USERACTION(4,4)
                DOOR_USERACTION(5,5)
                DOOR_USERACTION(6,6)

                WINDOW_USERACTION(1,7)
                WINDOW_USERACTION(2,8)
                WINDOW_USERACTION(3,9)
                WINDOW_USERACTION(4,10)
                WINDOW_USERACTION(5,11)

                #include "\Edaly_Structures_Assets_5\Post_Office\userActions.hpp"
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
            actionBegin2 = OpenDoor_2;
            actionEnd2 = OpenDoor_2;
            actionBegin3 = OpenDoor_3;
            actionEnd3 = OpenDoor_3;
            actionBegin4 = OpenDoor_4;
            actionEnd4 = OpenDoor_4;
            actionBegin5 = OpenDoor_5;
            actionEnd5 = OpenDoor_5;
        };
        class Land_Post_office_02_F : Land_Post_office_01_F {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = $STR_EDALY_STR_POST_OFFICE_02;
            model = "Edaly_Structures_Assets_5\Post_Office\Post_office_02_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Post_office_02_F.jpg";
        };
        class Land_Parking_01_F : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = $STR_EDALY_STR_PARKING_01_BUILDING;
            model = "Edaly_Structures_Assets_5\Parking\Parking_01_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Parking_01_F.jpg";

            class AnimationSources
            {
                class door_1_source
                {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericDoorsSound";
                };
                class door_2_source: door_1_source {};
                class window_1_source: door_1_source {};
                class window_2_source: door_1_source {};

                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)

                GLASS_SOURCE_HITPOINT(1)
                GLASS_SOURCE_HITPOINT(2)
                GLASS_SOURCE_HITPOINT(3)
                GLASS_SOURCE_HITPOINT(4)
                GLASS_SOURCE_HITPOINT(5)
            };

            class HitPoints
            {
                #include "\Edaly_Structures_Assets_5\Parking\hitpoints.hpp"
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)

                WINDOW_USERACTION(1,3)
                WINDOW_USERACTION(2,4)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
            actionBegin2 = OpenDoor_2;
            actionEnd2 = OpenDoor_2;
        };
        class Land_Parking_02_F : Land_Parking_01_F {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = $STR_EDALY_STR_PARKING_02_BUILDING;
            model = "Edaly_Structures_Assets_5\Parking\Parking_02_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Parking_02_F.jpg";
        };
    /******* Config Edaly_Structures_Assets_5 *******/

    /******* Config Edaly_Structures_Assets_6 *******/
        class Edaly_Str_Bar_01_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_BAR_01;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_6\Civilian\Bar_01\Land_Bar_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Bar_01_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Holy_Chicken_Statue_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_HOLY_CHICKEN_STATUE;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_6\Civilian\Chicken_Statue\Chicken_Status_F.p3d";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Shelf_01_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_SHELF_01;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_6\Civilian\Bar_01\Land_Shelf_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Shelf_01_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_Marble_Plate_01_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_MARBLE_PLATE;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_6\Civilian\Marble_Plate_01\Marble_Plate_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Marble_Plate_01_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Military_Statue_EL: House_F
        {
            scope = 2;
            displayName = "Military_statue";
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_6\Civilian\Military_Statue\military_statue.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Marble_Plate_01_F.jpg";
            mapSize = 2;
            cost = 40000;
        };
        class Land_Edaly_Tenement_01_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_TENEMENT_01;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            model = "Edaly_Structures_Assets_6\Civilian\Tenement\Edaly_Tenement_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Tenement_01.jpg";
            mapSize = 8;
            cost = 40000;
            numberOfDoors = 9;

            class AnimationSources
            {
                class door_1_source
                {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericDoorsSound";
                };
                class door_2_source: door_1_source {};
                class door_3_source: door_1_source {};
                class door_4_source: door_1_source {};
                class door_5_source: door_1_source {};
                class door_6_source: door_1_source {};
                class door_7_source: door_1_source {};
                class door_8_source: door_1_source {};
                class door_9_source: door_1_source {};
                class window_1_source : door_1_source {};
                class window_2_source : door_1_source {};
                class window_3_source : door_1_source {};
                class window_4_source : door_1_source {};
                class window_5_source : door_1_source {};
                class window_6_source : door_1_source {};
                class window_7_source : door_1_source {};
                class window_8_source : door_1_source {};
                class window_9_source : door_1_source {};
                class window_10_source : door_1_source {};
                class window_11_source : door_1_source {};
                class window_12_source : door_1_source {};
                class window_13_source : door_1_source {};
                class window_14_source : door_1_source {};
                class window_15_source : door_1_source {};
                class window_16_source : door_1_source {};
                class window_17_source : door_1_source {};
                class window_18_source : door_1_source {};
                class window_19_source : door_1_source {};
                class window_20_source : door_1_source {};
                class window_21_source : door_1_source {};
                class window_22_source : door_1_source {};
                class window_23_source : door_1_source {};
                class window_24_source : door_1_source {};
                class window_25_source : door_1_source {};
                class window_26_source : door_1_source {};
                class window_27_source : door_1_source {};
                class window_28_source : door_1_source {};
                class window_29_source : door_1_source {};
                class window_30_source : door_1_source {};
                class window_31_source : door_1_source {};
                class window_32_source : door_1_source {};

                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)
                DOOR_SOURCE_LOCKED(3)
                DOOR_SOURCE_LOCKED(4)
                DOOR_SOURCE_LOCKED(5)
                DOOR_SOURCE_LOCKED(6)
                DOOR_SOURCE_LOCKED(7)
                DOOR_SOURCE_LOCKED(8)
                DOOR_SOURCE_LOCKED(9)

                GLASS_SOURCE_HITPOINT(1)
                GLASS_SOURCE_HITPOINT(2)
                GLASS_SOURCE_HITPOINT(3)
                GLASS_SOURCE_HITPOINT(4)
                GLASS_SOURCE_HITPOINT(5)
                GLASS_SOURCE_HITPOINT(6)
                GLASS_SOURCE_HITPOINT(7)
                GLASS_SOURCE_HITPOINT(8)
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
                DOOR_USERACTION(3,3)
                DOOR_USERACTION(4,4)
                DOOR_USERACTION(5,5)
                DOOR_USERACTION(6,6)
                DOOR_USERACTION(7,7)
                DOOR_USERACTION(8,8)
                DOOR_USERACTION(9,9)
                WINDOW_USERACTION(1,10)
                WINDOW_USERACTION(2,11)
                WINDOW_USERACTION(3,12)
                WINDOW_USERACTION(4,13)
                WINDOW_USERACTION(5,14)
                WINDOW_USERACTION(6,15)
                WINDOW_USERACTION(7,16)
                WINDOW_USERACTION(8,17)
                WINDOW_USERACTION(9,18)
                WINDOW_USERACTION(10,19)
                WINDOW_USERACTION(11,20)
                WINDOW_USERACTION(12,21)
                WINDOW_USERACTION(13,22)
                WINDOW_USERACTION(14,23)
                WINDOW_USERACTION(15,24)
                WINDOW_USERACTION(16,25)
                WINDOW_USERACTION(17,26)
                WINDOW_USERACTION(18,27)
                WINDOW_USERACTION(19,28)
                WINDOW_USERACTION(20,29)
                WINDOW_USERACTION(21,30)
                WINDOW_USERACTION(22,31)
                WINDOW_USERACTION(23,32)
                WINDOW_USERACTION(24,33)
                WINDOW_USERACTION(25,34)
                WINDOW_USERACTION(26,35)
                WINDOW_USERACTION(27,36)
                WINDOW_USERACTION(28,37)
                WINDOW_USERACTION(29,38)
                WINDOW_USERACTION(30,39)
                WINDOW_USERACTION(31,40)
                WINDOW_USERACTION(32,41)
            };

            class HitPoints
            {
                #include "\Edaly_Structures_Assets_6\Civilian\Tenement\hitPoints.hpp"
            };

            actionBegin8 = OpenDoor_8;
            actionEnd8 = OpenDoor_8;
            actionBegin9 = OpenDoor_9;
            actionEnd9 = OpenDoor_9;
        };
        class Land_Edaly_Tenement_02_F: Land_Edaly_Tenement_01_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_TENEMENT_02;
            model = "Edaly_Structures_Assets_6\Civilian\Tenement\Edaly_Tenement_02_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Tenement_02.jpg";
        };
        class Land_Edaly_Tenement_03_F: Land_Edaly_Tenement_01_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_TENEMENT_03;
            model = "Edaly_Structures_Assets_6\Civilian\Tenement\Edaly_Tenement_03_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Tenement_03.jpg";
        };
        class Land_Edaly_Tenement_S_01_F: Land_Edaly_Tenement_01_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_TENEMENT_04;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            model = "Edaly_Structures_Assets_6\Civilian\Tenement\Edaly_Tenement_S_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Tenement_S_01_F.jpg";
            mapSize = 8;
            cost = 40000;
        };
        class Edaly_Str_Bridge_Big_01_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_BRIDGE_B_01;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            model = "Edaly_Structures_Assets_6\Civilian\Wood_Bridge_Pack\Bridge_Big_01\Bridge_Big_01.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Bridge_Big_01_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_Bridge_Big_02_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_BRIDGE_B_02;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            model = "Edaly_Structures_Assets_6\Civilian\Wood_Bridge_Pack\Bridge_Big_02\Bridge_Big_02.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Bridge_Big_02_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_Bridge_Big_03_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_BRIDGE_B_03;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            model = "Edaly_Structures_Assets_6\Civilian\Wood_Bridge_Pack\Bridge_Big_03\Bridge_Big_03.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Bridge_Big_03_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_Bridge_Small_01_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_BRIDGE_S_01;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            model = "Edaly_Structures_Assets_6\Civilian\Wood_Bridge_Pack\Bridge_Small_01\Bridge_Small_01.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Bridge_Small_01_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_Bridge_Small_02_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_BRIDGE_S_02;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            model = "Edaly_Structures_Assets_6\Civilian\Wood_Bridge_Pack\Bridge_Small_02\Bridge_Small_02.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Bridge_Small_02_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_House_01_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_BRIDGE_HOUSE_01;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            model = "Edaly_Structures_Assets_6\Civilian\Wood_Bridge_Pack\House_01\Wooden_House_01.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_House_01_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_House_02_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_BRIDGE_HOUSE_02;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            model = "Edaly_Structures_Assets_6\Civilian\Wood_Bridge_Pack\House_02\Wooden_House_02.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_House_02_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_Ladder_Big_01_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_BRIDGE_LADDER_B_01;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_6\Civilian\Wood_Bridge_Pack\Ladder_Big_01\Ladder_Big_01.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Ladder_Big_01_F.jpg";
            ladders[] = {{"Ladder_1_start", "Ladder_1_end", 2.5, "ladder_1_action"}};
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_Ladder_Small_01_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_BRIDGE_LADDER_S_01;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_6\Civilian\Wood_Bridge_Pack\Ladder_Small_01\Ladder_Small_01.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Ladder_Small_01_F.jpg";
            ladders[] = {{"Ladder_1_start", "Ladder_1_end", 2.5, "ladder_1_action"}};
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_Ladder_Small_02_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_BRIDGE_LADDER_S_02;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_6\Civilian\Wood_Bridge_Pack\Ladder_Small_02\Ladder_Small_02.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Ladder_Small_02_F.jpg";
            ladders[] = {{"Ladder_1_start", "Ladder_1_end", 2.5, "ladder_1_action"}};
            mapSize = 7;
            cost = 40000;
        };
        class Medical_Tent_01_F: House_F
        {
            scope = 2;
            mapSize = 7;
            cost = 40000;
            author = "OFrP - Indochine";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Medical_Tent_01_F.jpg";
            destrType = "DestructNo";
            displayName = $STR_EDALY_STR_MEDICAL_TENT_01;
            model = "\Edaly_Structures_Assets_6\Military\Medical_tent\Medical_tent.p3d";
        };
        class Medical_Tent_02_F: Medical_Tent_01_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_MEDICAL_TENT_02;
            model = "\Edaly_Structures_Assets_6\Military\Medical_tent\Medical_tent_open.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Medical_Tent_02_F.jpg";
        };
    /******* Config Edaly_Structures_Assets_6 *******/

    /******* Config Edaly_Structures_Assets_7 *******/
        class Land_Car_Shelters_01_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_CAR_SHELTER_01;
            author = STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Car_Shelters_01_F.jpg";
            model = "Edaly_Structures_Assets_7\Civilian\Car_Shelters\Car_Shelters_01_F.p3d";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_Electric_Pylon01_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_ELECTRIC_PYLON_01;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Electric_Pylon01_F.jpg";
            model = "Edaly_Structures_Assets_7\Civilian\Electric_Pylon\Electric_Pylon01.p3d";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_Fence_01_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_01;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_01\fence_01.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Fence_01_F.jpg";
            mapSize = 7;
            cost = 40000;

            class AnimationSources
            {
                class door_open
                {
                    source = "user";
                    animPeriod = 0.7;
                    initPhase = 0;
                    sound = "GenericDoorsSound";
                };
            };

            class UserActions
            {
                class OpenDoor_1
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_O_DOOR";
                    position = "door_1_trigger";
                    radius = 3;
                    onlyForPlayer = 0;
                    condition = "this animationSourcePhase ""door_open"" == 1";
                    statement = "this animateSource [""door_open"",0];getPosASL this, 5]";
                };
                class CloseDoor_1: OpenDoor_1
                {
                    displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                    displayName = "$STR_DN_OUT_C_DOOR";
                    condition = "this animationSourcePhase ""door_open"" == 0";
                    statement = "this animateSource [""door_open"",1];getPosASL this, 5]";
                };
            };
        };
        class Edaly_Str_fence_02_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_02;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_02\fence_02.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_02_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_03_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_03;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_03\fence_03.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_03_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_04_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_04;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_04\fence_04.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_04_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_05_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_05;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_05\fence_05.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_05_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_06_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_06;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_06\fence_06.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_06_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_07_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_07;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_07\fence_07.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_07_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_08_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_08;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_08\fence_08.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_08_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_09_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_09;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_09\fence_09.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_09_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_10_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_10;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_10\fence_10.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_10_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_11_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_11;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_11\fence_11.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_11_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_12_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_12;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_12\fence_12.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_12_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_13_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_13;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_13\fence_13.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_13_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_14_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_14;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_14\fence_14.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_14_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_15_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_15;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_15\fence_15.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_15_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_16_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_16;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_16\fence_16.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_16_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_17_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_17;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_17\fence_17.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_17_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_18_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_18;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_18\fence_18.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_18_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_19_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_19;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_19\fence_19.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_19_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_20_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_20;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_20\fence_20.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_20_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_21_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_21;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_21\fence_21.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_21_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_22_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_22;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_22\fence_22.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_22_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_23_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_23;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_23\fence_23.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_23_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_fence_24_F: House_F
        {
            scope = 1;
            displayName = $STR_EDALY_STR_FENCE_24;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Fence\fence_24\fence_24.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_fence_24_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Edaly_Str_Flyers_01_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_FLYER_01;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            model = "Edaly_Structures_Assets_7\Civilian\Flyers\Flyers_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Edaly_Str_Flyers_01_F.jpg";
            mapSize = 7;
            cost = 40000;
        };
        class Land_Suburb_big_house_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = $STR_EDALY_STR_SUBURBAN_HOUSE_BEIGE;
            model = "\Edaly_Structures_Assets_7\Civilian\Suburb_house_big\Suburb_big_house_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Suburb_big_house_01_F.jpg";

            numberOfDoors = 6;

            class AnimationSources
            {
                class door_1_source
                {
                    source = "user";
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericDoorsSound";
                };
                class door_2_source : door_1_source {};
                class door_3_source : door_1_source {};
                class door_4_source : door_1_source {};
                class door_5_source : door_1_source {};
                class door_6_source : door_1_source {};

                class window_1_source : door_1_source {};
                class window_2_source : door_1_source {};
                class window_5_source : door_1_source {};
                class window_7_source : door_1_source {};
                class window_8_source : door_1_source {};
                class window_9_source : door_1_source {};
                class window_10_source : door_1_source {};
                class window_11_source : door_1_source {};
                class window_12_source : door_1_source {};
                class window_13_source : door_1_source {};
                class window_14_source : door_1_source {};
                class window_15_source : door_1_source {};
                class window_16_source : door_1_source {};
                class window_17_source : door_1_source {};
                class window_18_source : door_1_source {};
                class window_19_source : door_1_source {};
                class window_20_source : door_1_source {};
                class window_21_source : door_1_source {};
                class window_22_source : door_1_source {};
                class window_23_source : door_1_source {};
                class window_24_source : door_1_source {};
                class window_25_source : door_1_source {};

                GLASS_SOURCE_HITPOINT(1)
                GLASS_SOURCE_HITPOINT(2)

                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)
                DOOR_SOURCE_LOCKED(3)
                DOOR_SOURCE_LOCKED(4)
                DOOR_SOURCE_LOCKED(5)
                DOOR_SOURCE_LOCKED(6)
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
                DOOR_USERACTION(3,3)
                DOOR_USERACTION(4,4)
                DOOR_USERACTION(5,5)
                DOOR_USERACTION(6,6)

                WINDOW_USERACTION(1,7)
                WINDOW_USERACTION(2,8)
                WINDOW_USERACTION(5,9)
                WINDOW_USERACTION(7,10)
                WINDOW_USERACTION(8,11)
                WINDOW_USERACTION(9,12)
                WINDOW_USERACTION(10,13)
                WINDOW_USERACTION(11,14)
                WINDOW_USERACTION(12,15)
                WINDOW_USERACTION(13,16)
                WINDOW_USERACTION(14,17)
                WINDOW_USERACTION(15,18)
                WINDOW_USERACTION(16,19)
                WINDOW_USERACTION(17,20)
                WINDOW_USERACTION(18,21)
                WINDOW_USERACTION(19,22)
                WINDOW_USERACTION(20,23)
                WINDOW_USERACTION(21,24)
                WINDOW_USERACTION(22,25)
                WINDOW_USERACTION(23,26)
                WINDOW_USERACTION(24,27)
                WINDOW_USERACTION(25,28)

            };

            class HitPoints
            {
                #include "\Edaly_Structures_Assets_7\Civilian\Suburb_house_big\hitpoints.hpp"
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
            actionBegin2 = OpenDoor_2;
            actionEnd2 = OpenDoor_2;
            actionBegin3 = OpenDoor_3;
            actionEnd3 = OpenDoor_3;
            actionBegin4 = OpenDoor_4;
            actionEnd4 = OpenDoor_4;
            actionBegin5 = OpenDoor_5;
            actionEnd5 = OpenDoor_5;
            actionBegin6 = OpenDoor_6;
            actionEnd6 = OpenDoor_6;
        };
        class Land_Suburb_big_house_02_F: Land_Suburb_big_house_01_F
        {
            displayName = $STR_EDALY_STR_SUBURBAN_HOUSE_PINK;
            model = "\Edaly_Structures_Assets_7\Civilian\Suburb_house_big\Suburb_big_house_02_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Suburb_big_house_02_F.jpg";
        };
        class Land_Suburb_big_house_03_F: Land_Suburb_big_house_01_F
        {
            displayName = $STR_EDALY_STR_SUBURBAN_HOUSE_BLUE;
            model = "\Edaly_Structures_Assets_7\Civilian\Suburb_house_big\Suburb_big_house_03_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Suburb_big_house_03_F.jpg";
        };
        class Land_Suburb_house_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = $STR_EDALY_STR_SMALL_SUBURBAN_HOUSE;
            model = "\Edaly_Structures_Assets_7\Civilian\suburb_house\Suburb_house_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Suburb_house_01_F.jpg";
            numberOfDoors = 2;

            class AnimationSources
            {
                class door_1_source
                {
                    source = "user";
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericDoorsSound";
                };
                class door_2_source : door_1_source {};

                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
            actionBegin2 = OpenDoor_2;
            actionEnd2 = OpenDoor_2;
        };
        class Land_Suburb_house_02_F: Land_Suburb_house_01_F
        {
            displayName = $STR_EDALY_STR_SMALL_SUBURBAN_HOUSE;
            model = "\Edaly_Structures_Assets_7\Civilian\suburb_house\Suburb_house_02_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Suburb_house_02_F.jpg";
        };
        class Land_Suburb_house_03_F: Land_Suburb_house_01_F
        {
            displayName = $STR_EDALY_STR_SMALL_SUBURBAN_HOUSE;
            model = "\Edaly_Structures_Assets_7\Civilian\suburb_house\Suburb_house_03_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Suburb_house_03_F.jpg";
        };
    /******* Config Edaly_Structures_Assets_7 *******/

    /******* Config Edaly_Structures_Assets_8 *******/
        class Land_Edaly_Container_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = $STR_EDALY_STR_CONTAINER_01;
            model = "\Edaly_Structures_Assets_8\Container\Edaly_Container_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Container_01_F.jpg";
            camouflage = 2;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
        };
        class Land_Edaly_Container_02_F: Land_Edaly_Container_01_F
        {
            displayName = $STR_EDALY_STR_CONTAINER_02;
            model = "\Edaly_Structures_Assets_8\Container\Edaly_Container_02_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Container_02_F.jpg";
        };
        class Land_Edaly_Container_03_F: Land_Edaly_Container_01_F
        {
            displayName = $STR_EDALY_STR_CONTAINER_03;
            model = "\Edaly_Structures_Assets_8\Container\Edaly_Container_03_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Container_03_F.jpg";
        };
        class Land_Edaly_Container_04_F: Land_Edaly_Container_01_F
        {
            displayName = $STR_EDALY_STR_CONTAINER_04;
            model = "\Edaly_Structures_Assets_8\Container\Edaly_Container_04_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Container_04_F.jpg";
        };
        class Land_Edaly_campaign_house_1_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = $STR_EDALY_STR_VILLA_01;
            model = "\Edaly_Structures_Assets_8\edaly_house_campaign\Edaly_campaign_house_1_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_campaign_house_1_F.jpg";

            camouflage = 2;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            spotableDarkNightLightsOff = 0.001;
            spotableNightLightsOff = 0.02;
            spotableNightLightsOn = 4;
            accuracyDarkNightLightsOff = 0.001;
            accuracyNightLightsOff = 0.006;
            accuracyNightLightsOn = 0.1;
            attenuationEffectType = "";
            numberOfDoors = 2;

            class AnimationSources
            {
                class door_1_source
                {
                    source = "user";
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericDoorsSound";
                };
                class door_2_source : door_1_source {};
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
            actionBegin2 = OpenDoor_2;
            actionEnd2 = OpenDoor_2;
        };
        class Land_Edaly_campaign_house_2_F: Land_Edaly_campaign_house_1_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = $STR_EDALY_STR_VILLA_02;
            model = "\Edaly_Structures_Assets_8\edaly_house_campaign\Edaly_campaign_house_2_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_campaign_house_2_F.jpg";
        };
        class Land_Edaly_campaign_house_3_F: Land_Edaly_campaign_house_1_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = $STR_EDALY_STR_VILLA_03;
            model = "\Edaly_Structures_Assets_8\edaly_house_campaign\Edaly_campaign_house_3_F.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_campaign_house_3_F.jpg";
        };
        class Land_Edaly_havana_house_1_F: House_F
        {
            author =$STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Maison de ville 1";
            model = "\Edaly_Structures_Assets_8\Edaly_house_havana_1_F\edaly_havana_house_1_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_havana_house_1_F.jpg";

            camouflage = 2;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            //editorPreview = "\UI\unreallife_house_1.paa";
            spotableDarkNightLightsOff = 0.001;
            spotableNightLightsOff = 0.02;
            spotableNightLightsOn = 4;
            accuracyDarkNightLightsOff = 0.001;
            accuracyNightLightsOff = 0.006;
            accuracyNightLightsOn = 0.1;
            attenuationEffectType = "";
            numberOfdoors = 15;

            class AnimationSources
            {
                class door_1_source
                {
                    source = "user";
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericdoorsSound";
                };

                class door_2_source : door_1_source {};
                class door_3_source : door_1_source {};
                class door_4_source : door_1_source {};
                class door_5_source : door_1_source {};
                class door_6_source : door_1_source {};
                class door_7_source : door_1_source {};
                class door_8_source : door_1_source {};
                class door_9_source : door_1_source {};
                class door_10_source : door_1_source {};
                class door_11_source : door_1_source {};
                class door_12_source : door_1_source {};
                class door_13_source : door_1_source {};
                class door_14_source : door_1_source {};
                class door_15_source : door_1_source {};

                class window_1_source
                {
                    source = "user";
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericdoorsSound";
                };
                class window_2_source : window_1_source {};
                class window_3_source : window_1_source {};
                class window_4_source : window_1_source {};

                GLASS_SOURCE_HITPOINT(1)
                GLASS_SOURCE_HITPOINT(2)
                GLASS_SOURCE_HITPOINT(3)
                GLASS_SOURCE_HITPOINT(4)
                GLASS_SOURCE_HITPOINT(5)
                GLASS_SOURCE_HITPOINT(6)
                GLASS_SOURCE_HITPOINT(7)
                GLASS_SOURCE_HITPOINT(8)
                GLASS_SOURCE_HITPOINT(9)
                GLASS_SOURCE_HITPOINT(10)
                GLASS_SOURCE_HITPOINT(11)
                GLASS_SOURCE_HITPOINT(12)
                GLASS_SOURCE_HITPOINT(13)
                GLASS_SOURCE_HITPOINT(14)
                GLASS_SOURCE_HITPOINT(15)
                GLASS_SOURCE_HITPOINT(16)
                GLASS_SOURCE_HITPOINT(17)
                GLASS_SOURCE_HITPOINT(18)
                GLASS_SOURCE_HITPOINT(19)

                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)
                DOOR_SOURCE_LOCKED(3)
                DOOR_SOURCE_LOCKED(4)
                DOOR_SOURCE_LOCKED(5)
                DOOR_SOURCE_LOCKED(6)
                DOOR_SOURCE_LOCKED(7)
                DOOR_SOURCE_LOCKED(8)
                DOOR_SOURCE_LOCKED(9)
                DOOR_SOURCE_LOCKED(10)
                DOOR_SOURCE_LOCKED(11)
                DOOR_SOURCE_LOCKED(12)
                DOOR_SOURCE_LOCKED(13)
                DOOR_SOURCE_LOCKED(14)
                DOOR_SOURCE_LOCKED(15)
            };

            class HitPoints
            {
                #include "\Edaly_Structures_Assets_8\edaly_house_havana_1_F\hitpoints.hpp"
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
                DOOR_USERACTION(3,3)
                DOOR_USERACTION(4,4)
                DOOR_USERACTION(5,5)
                DOOR_USERACTION(6,6)
                DOOR_USERACTION(7,7)
                DOOR_USERACTION(8,8)
                DOOR_USERACTION(9,9)
                DOOR_USERACTION(10,10)
                DOOR_USERACTION(11,11)
                DOOR_USERACTION(12,12)
                DOOR_USERACTION(13,13)
                DOOR_USERACTION(14,14)
                DOOR_USERACTION(15,15)

                WINDOW_USERACTION(1,16)
                WINDOW_USERACTION(2,17)
                WINDOW_USERACTION(3,18)
                WINDOW_USERACTION(4,19)
            };

            actionBegin2 = OpenDoor_2;
            actionEnd2 = OpenDoor_2;
            actionBegin4 = OpenDoor_4;
            actionEnd4 = OpenDoor_4;
            actionBegin6 = OpenDoor_6;
            actionEnd6 = OpenDoor_6;
            actionBegin13 = OpenDoor_13;
            actionEnd113= OpenDoor_13;
        };
        class Land_Edaly_havana_house_2_F: Land_Edaly_havana_house_1_F
        {
            author =$STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Maison de ville 2";
            model = "\Edaly_Structures_Assets_8\Edaly_house_havana_1_F\edaly_havana_house_2_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_havana_house_2_F.jpg";
            camouflage = 2;
        };
        class Land_Edaly_havana_house_3_F: Land_Edaly_havana_house_2_F
        {
            author =$STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Maison de ville 3";
            model = "\Edaly_Structures_Assets_8\Edaly_house_havana_1_F\edaly_havana_house_3_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_havana_house_3_F.jpg";
        };
        class Land_Edaly_havana_house_4_F: Land_Edaly_havana_house_2_F
        {
            author =$STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Maison de ville 4";
            model = "\Edaly_Structures_Assets_8\Edaly_house_havana_1_F\edaly_havana_house_4_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_havana_house_4_F.jpg";
        };
        class Land_Edaly_havana_house_5_F: Land_Edaly_havana_house_2_F
        {
            author =$STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Maison de ville 5";
            model = "\Edaly_Structures_Assets_8\Edaly_house_havana_1_F\edaly_havana_house_5_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_havana_house_5_F.jpg";
        };
        class Land_Edaly_havana_house_6_F: Land_Edaly_havana_house_2_F
        {
            author =$STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Maison de ville 6";
            model = "\Edaly_Structures_Assets_8\Edaly_house_havana_1_F\edaly_havana_house_6_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_havana_house_6_F.jpg";
        };
        class Land_Field_dirt_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Terre de champs";
            model = "\Edaly_Structures_Assets_8\fields_dirt\Field_dirt_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Field_dirt_01_F.jpg";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
        };
        class Land_Edaly_Shelter_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "$STR_EDALY_STR_SHELTER_01";
            model = "\Edaly_Structures_Assets_8\shelter\Edaly_shelter_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Shelter_01_F.jpg";
        };
        class Land_Edaly_Shelter_02_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "$STR_EDALY_STR_SHELTER_02";
            model = "\Edaly_Structures_Assets_8\shelter\Edaly_shelter_02_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Shelter_02_F.jpg";
        };
    /******* Config Edaly_Structures_Assets_8 *******/

    /******* Config Edaly_Structures_Assets_9 *******/
        class Land_Edaly_Misc_Cable_EP1_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Cables electriques";
            model = "\Edaly_Structures_Assets_9\Cargo\Edaly_Misc_Cable_EP1_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Misc_Cable_EP1_F.jpg";
        };

        class Land_Edaly_Misc_Cable_Rugs1_EP1_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Cables electriques avec vetements";
            model = "\Edaly_Structures_Assets_9\Cargo\Edaly_Misc_Cable_Rugs1_EP1_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Misc_Cable_Rugs1_EP1_F.jpg";
        };
        class Land_Edaly_Misc_Cable_V_EP1_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Cables electriques (ligne double)";
            model = "\Edaly_Structures_Assets_9\Cargo\Edaly_Misc_Cable_V_EP1_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Misc_Cable_V_EP1_F.jpg";
        };
        class Land_Edaly_Misc_Cable_V_EP2_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Cables electriques (grands)";
            model = "\Edaly_Structures_Assets_9\Cargo\Edaly_Misc_Cable_V_EP2_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Misc_Cable_V_EP1_F.jpg";
        };
        class Land_Edaly_Medium_Fountain_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Fontaine taille moyenne";
            model = "\Edaly_Structures_Assets_9\Fountains\medium_01\Medium_Fountain_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Medium_Fountain_01_F.jpg";
        };
        class Land_Edaly_Small_Fountain_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Petite Fontaine 1";
            model = "\Edaly_Structures_Assets_9\Fountains\small_01\Small_Fountain_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Small_Fountain_01_F.jpg";
        };
        class Land_Edaly_Small_Fountain_02_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Petite Fontaine 2";
            model = "\Edaly_Structures_Assets_9\Fountains\small_02\Small_Fountain_02_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Small_Fountain_02_F.jpg";
        };

        class Land_Edaly_Harbor_concrete_structure_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Structure beton Port 1";
            model = "\Edaly_Structures_Assets_9\Harbor\Edaly_Harbor_concrete_structure_01_F";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Harbor_concrete_structure_01_F.jpg";
        };
        class Land_Edaly_Harbor_concrete_structure_02_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Structure beton Port 2";
            model = "\Edaly_Structures_Assets_9\Harbor\Edaly_Harbor_concrete_structure_02_F";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Harbor_concrete_structure_02_F.jpg";
        };
        class Land_Edaly_Harbor_concrete_structure_03_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Structure beton Port 3";
            model = "\Edaly_Structures_Assets_9\Harbor\Edaly_Harbor_concrete_structure_03_F";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Harbor_concrete_structure_03_F.jpg";
        };
        class Land_Edaly_Harbor_concrete_structure_04_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Structure beton Port 4";
            model = "\Edaly_Structures_Assets_9\Harbor\Edaly_Harbor_concrete_structure_04_F";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Harbor_concrete_structure_04_F.jpg";
        };
        class Land_Edaly_Harbor_concrete_structure_05_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Structure beton Port 5";
            model = "\Edaly_Structures_Assets_9\Harbor\Edaly_Harbor_concrete_structure_05_F";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Harbor_concrete_structure_05_F.jpg";
        };
        class Land_Edaly_Harbor_wood_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Bois (port)";
            model = "\Edaly_Structures_Assets_9\Harbor\Edaly_Harbor_wood_01_F";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Harbor_wood_01_F.jpg";
        };
        class Land_Edaly_Lighthouse_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Phare 1";
            model = "\Edaly_Structures_Assets_9\Harbor\Edaly_Lighthouse_01_F";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Lighthouse_01_F.jpg";
        };
        class Land_Edaly_Lighthouse_Base_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Base du Phare";
            model = "\Edaly_Structures_Assets_9\Harbor\Edaly_Lighthouse_Base_F";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Lighthouse_Base_F.jpg";
        };
        class Land_Edaly_Dorms_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Dortoirs";
            model = "\Edaly_Structures_Assets_9\Houses\Dorms\Edaly_Dorms_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Dorms_01_F.jpg";

            spotableDarkNightLightsOff = 0.001;
            spotableNightLightsOff = 0.02;
            spotableNightLightsOn = 4;
            accuracyDarkNightLightsOff = 0.001;
            accuracyNightLightsOff = 0.006;
            accuracyNightLightsOn = 0.1;
            attenuationEffectType = "";
            numberOfDoors = 5;

            class AnimationSources
            {
                class door_1_source
                {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericDoorsSound";
                };
                class door_2_source : door_1_source {};
                class door_3_source : door_1_source {};
                class door_4_source : door_1_source {};
                class door_5_source : door_1_source {};

                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)
                DOOR_SOURCE_LOCKED(3)
                DOOR_SOURCE_LOCKED(4)
                DOOR_SOURCE_LOCKED(5)

                GLASS_SOURCE_HITPOINT(1)
                GLASS_SOURCE_HITPOINT(2)
                GLASS_SOURCE_HITPOINT(3)
                GLASS_SOURCE_HITPOINT(4)
                GLASS_SOURCE_HITPOINT(5)
                GLASS_SOURCE_HITPOINT(6)
                GLASS_SOURCE_HITPOINT(7)
                GLASS_SOURCE_HITPOINT(8)
                GLASS_SOURCE_HITPOINT(9)
                GLASS_SOURCE_HITPOINT(10)
                GLASS_SOURCE_HITPOINT(11)
                GLASS_SOURCE_HITPOINT(12)
                GLASS_SOURCE_HITPOINT(13)
                GLASS_SOURCE_HITPOINT(14)
                GLASS_SOURCE_HITPOINT(15)
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
                DOOR_USERACTION(3,3)
                DOOR_USERACTION(4,4)
                DOOR_USERACTION(5,5)
            };

            class HitPoints
            {
                #include "\Edaly_Structures_Assets_9\Houses\Dorms\hitPoints.hpp"
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
            actionBegin2 = OpenDoor_2;
            actionEnd2 = OpenDoor_2;
            actionBegin3 = OpenDoor_3;
            actionEnd3 = OpenDoor_3;
            actionBegin4 = OpenDoor_4;
            actionEnd4 = OpenDoor_4;
            actionBegin5 = OpenDoor_5;
            actionEnd5 = OpenDoor_5;
        };
        class Land_Edaly_City_House_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Maison urbaine";
            model = "\Edaly_Structures_Assets_9\Houses\Edaly_City_House_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_City_House_01_F.jpg";
        };
        class Land_Edaly_Small_Wooden_Shelf_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Petit abri en bois";
            model = "\Edaly_Structures_Assets_9\Houses\Edaly_Small_Wooden_Shelf_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Small_Wooden_Shelf_F.jpg";
        };
        class Land_Edaly_hut_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Cabanon";
            model = "Edaly_Structures_Assets_9\Huts\hut_01\Edaly_hut_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_hut_01_F.jpg";
            spotableDarkNightLightsOff = 0.001;
            spotableNightLightsOff = 0.02;
            spotableNightLightsOn = 4;
            accuracyDarkNightLightsOff = 0.001;
            accuracyNightLightsOff = 0.006;
            accuracyNightLightsOn = 0.1;
            attenuationEffectType = "";
            numberOfDoors = 1;

            class AnimationSources
            {
                // Animation sources for doors
                class door_1_source
                {
                    source = user; // "user" = custom source = not controlled by some engine value
                    initPhase = 0; // Initial value of animations based on this source
                    animPeriod = 1; // Coefficient for duration of change of this animation
                    sound = "GenericDoorsSound";
                };

                DOOR_SOURCE_LOCKED(1)
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
        };
        class Land_Edaly_hut_01_Esc: Land_Edaly_hut_01_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Cabanon sans escalier";
            model = "Edaly_Structures_Assets_9\Huts\hut_01\Edaly_hut_01_esc.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_hut_01_F.jpg";
        };
        class Land_Edaly_hut_02_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Cabanon 2";
            model = "Edaly_Structures_Assets_9\Huts\hut_02\Edaly_hut_02_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_hut_02_F.jpg";
            spotableDarkNightLightsOff = 0.001;
            spotableNightLightsOff = 0.02;
            spotableNightLightsOn = 4;
            accuracyDarkNightLightsOff = 0.001;
            accuracyNightLightsOff = 0.006;
            accuracyNightLightsOn = 0.1;
            attenuationEffectType = "";
            numberOfDoors = 1;

            class AnimationSources
            {
                // Animation sources for doors
                class door_1_source
                {
                    source = user; // "user" = custom source = not controlled by some engine value
                    initPhase = 0; // Initial value of animations based on this source
                    animPeriod = 1; // Coefficient for duration of change of this animation
                    sound = "GenericDoorsSound";
                };

                DOOR_SOURCE_LOCKED(1)
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
        };
        class Land_Edaly_hut_02_Esc: Land_Edaly_hut_02_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Cabanon sans escalier";
            model = "Edaly_Structures_Assets_9\Huts\hut_02\Edaly_hut_02_esc.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_hut_02_Esc.jpg";
        };
        class Land_Edaly_Small_Warehouse_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Petit entrepot";
            model = "\Edaly_Structures_Assets_9\Huts\small_warehouse\Edaly_Small_Warehouse_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Small_Warehouse_01_F.jpg";
            spotableDarkNightLightsOff = 0.001;
            spotableNightLightsOff = 0.02;
            spotableNightLightsOn = 4;
            accuracyDarkNightLightsOff = 0.001;
            accuracyNightLightsOff = 0.006;
            accuracyNightLightsOn = 0.1;
            attenuationEffectType = "";
            numberOfDoors = 4;

            class AnimationSources
            {
                // Animation sources for doors
                class door_1_source
                {
                    source = user; // "user" = custom source = not controlled by some engine value
                    initPhase = 0; // Initial value of animations based on this source
                    animPeriod = 1; // Coefficient for duration of change of this animation
                    sound = "MetalDoorsSound";
                };
                class door_2_source: door_1_source {};
                class door_3_source: door_1_source {};
                class door_4_source: door_1_source {};

                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)
                DOOR_SOURCE_LOCKED(3)
                DOOR_SOURCE_LOCKED(4)

                GLASS_SOURCE_HITPOINT(1)
                GLASS_SOURCE_HITPOINT(2)
                GLASS_SOURCE_HITPOINT(3)
                GLASS_SOURCE_HITPOINT(4)
                GLASS_SOURCE_HITPOINT(5)
                GLASS_SOURCE_HITPOINT(6)
                GLASS_SOURCE_HITPOINT(7)
                GLASS_SOURCE_HITPOINT(8)
                GLASS_SOURCE_HITPOINT(9)
                GLASS_SOURCE_HITPOINT(10)
                GLASS_SOURCE_HITPOINT(11)
                GLASS_SOURCE_HITPOINT(12)
                GLASS_SOURCE_HITPOINT(13)
                GLASS_SOURCE_HITPOINT(14)
                GLASS_SOURCE_HITPOINT(15)
                GLASS_SOURCE_HITPOINT(16)
                GLASS_SOURCE_HITPOINT(17)
                GLASS_SOURCE_HITPOINT(18)
                GLASS_SOURCE_HITPOINT(19)
                GLASS_SOURCE_HITPOINT(20)
                GLASS_SOURCE_HITPOINT(21)
                GLASS_SOURCE_HITPOINT(22)
                GLASS_SOURCE_HITPOINT(23)
                GLASS_SOURCE_HITPOINT(24)
                GLASS_SOURCE_HITPOINT(25)
                GLASS_SOURCE_HITPOINT(26)
                GLASS_SOURCE_HITPOINT(27)
                GLASS_SOURCE_HITPOINT(28)
                GLASS_SOURCE_HITPOINT(29)
                GLASS_SOURCE_HITPOINT(30)
                GLASS_SOURCE_HITPOINT(31)
                GLASS_SOURCE_HITPOINT(32)
                GLASS_SOURCE_HITPOINT(33)
                GLASS_SOURCE_HITPOINT(34)
                GLASS_SOURCE_HITPOINT(35)
                GLASS_SOURCE_HITPOINT(36)
                GLASS_SOURCE_HITPOINT(37)
                GLASS_SOURCE_HITPOINT(38)
                GLASS_SOURCE_HITPOINT(39)
                GLASS_SOURCE_HITPOINT(40)
            };

            class HitPoints
            {
                #include "\Edaly_Structures_Assets_9\Huts\small_warehouse\hitPoints.hpp"
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
                DOOR_USERACTION(3,3)
                DOOR_USERACTION(4,4)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
            actionBegin2 = OpenDoor_2;
            actionEnd2 = OpenDoor_2;
            actionBegin3 = OpenDoor_3;
            actionEnd3 = OpenDoor_3;
            actionBegin4 = OpenDoor_4;
            actionEnd4 = OpenDoor_4;
        };
        class Land_Edaly_army_hut_02_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Abri militaire";
            model = "\Edaly_Structures_Assets_9\Huts\Edaly_army_hut_02_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_army_hut_02_F.jpg";
        };
        class Land_Edaly_hut_03_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Cabanon 3";
            model = "\Edaly_Structures_Assets_9\Huts\Edaly_hut_03_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_hut_03_F.jpg";
        };
        class Land_Edaly_Small_hut_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Petite cabane";
            model = "\Edaly_Structures_Assets_9\Huts\small_hut_01\Edaly_Small_hut_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Small_hut_01_F.jpg";

            class selections
            {
                door_1 = "door_1_source";
            };

            class AnimationSources
            {
                class door_1_source
                {
                    source = "user";
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericDoorsSound";
                };

                DOOR_SOURCE_LOCKED(1)
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;

        };
        class Land_Edaly_Metalcase_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Casier en metal";
            model = "\Edaly_Structures_Assets_9\Military\Metal_case\Edaly_Metalcase_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Metalcase_01_F.jpg";

            class AnimationSources
            {
                // Animation sources for doors
                class door_1_source
                {
                    source = "user"; // "user" = custom source = not controlled by some engine value
                    initPhase = 0; // Initial value of animations based on this source
                    animPeriod = 1; // Coefficient for duration of change of this animation
                    sound = "GenericDoorsSound";
                };

                DOOR_SOURCE_LOCKED(1)
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
        };
        class Land_Edaly_SentryBox_01_F: House_F
        {
            author = $STR_EDALY_AUTH OR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Guerite";
            model = "\Edaly_Structures_Assets_9\Military\Edaly_SentryBox_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_SentryBox_01_F.jpg";
            class AnimationSources
            {
                // Animation sources for doors
                class door_1_source
                {
                    source = "user"; // "user" = custom source = not controlled by some engine value
                    initPhase = 0; // Initial value of animations based on this source
                    animPeriod = 1; // Coefficient for duration of change of this animation
                    sound = "GenericDoorsSound";
                };

                DOOR_SOURCE_LOCKED(1)

                GLASS_SOURCE_HITPOINT(1)
                GLASS_SOURCE_HITPOINT(2)
                GLASS_SOURCE_HITPOINT(3)
                GLASS_SOURCE_HITPOINT(4)
                GLASS_SOURCE_HITPOINT(5)
                GLASS_SOURCE_HITPOINT(6)

            };

            class HitPoints
            {
                #include "\Edaly_Structures_Assets_9\Military\Edaly_SentryBox_01_F_hitpoints.hpp"
            };


            class UserActions
            {
                DOOR_USERACTION(1,1)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;

        };
        class Land_Edaly_Religious_Cross_P_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 2;
            displayName = "Croix religieuse";
            model = "\Edaly_Structures_Assets_9\Religious\Edaly_Religious_Cross_P_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Religious_Cross_P_F.jpg";
        };

        class Land_Edaly_Religious_Prop_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Prop religieux";
            model = "\Edaly_Structures_Assets_9\Religious\Edaly_Religious_Prop_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Religious_Prop_01_F.jpg";
        };
        class Land_Edaly_Religious_Tomb_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Tombe";
            model = "\Edaly_Structures_Assets_9\Religious\Edaly_Religious_Tomb_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Religious_Tomb_01_F.jpg";
        };
        class Land_Edaly_Religious_Tomb_02_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Tombe 2";
            model = "\Edaly_Structures_Assets_9\Religious\Edaly_Religious_Tomb_02_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Religious_Tomb_02_F.jpg";
        };

        class Land_Edaly_Religious_Tomb_03_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Tombe 3";
            model = "\Edaly_Structures_Assets_9\Religious\Edaly_Religious_Tomb_03_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Religious_Tomb_03_F.jpg";
        };

        class Land_Edaly_Religious_Tomb_04_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Tombe 4";
            model = "\Edaly_Structures_Assets_9\Religious\Edaly_Religious_Tomb_04_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Religious_Tomb_04_F.jpg";
        };
        class Land_Edaly_Religious_Tomb_05_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Tombe 5";
            model = "\Edaly_Structures_Assets_9\Religious\Edaly_Religious_Tomb_05_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Religious_Tomb_05_F.jpg";
        };
        class Land_Edaly_Religious_Structure_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Structure religieuse";
            model = "\Edaly_Structures_Assets_9\Religious\Edaly_Religious_Structure_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Religious_Structure_F.jpg";
        };
        class Land_Edaly_Fuel_Station_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Station essence campagne";
            model = "\Edaly_Structures_Assets_9\Various_Structures\fuelstation\Edaly_Fuel_Station_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Fuel_Station_F.jpg";
        };
        class Land_Edaly_Funnel_Hopper_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Funnel Hopper";
            model = "\Edaly_Structures_Assets_9\Various_Structures\funnel_hopper\Edaly_Funnel_Hopper_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Funnel_Hopper_01_F.jpg";
        };

        class Land_Edaly_Small_control_tower_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Ancienne tour de controle";
            model = "\Edaly_Structures_Assets_9\Various_Structures\small_controltower\Edaly_Small_control_tower_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Small_control_tower_01_F.jpg";
        };
        class Land_Edaly_Beach_umbrella_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Parasol de plage";
            model = "\Edaly_Structures_Assets_9\Various_Structures\Edaly_Beach_umbrella_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Beach_umbrella_01_F.jpg";
        };

        class Land_Edaly_Bus_stop_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Arrete de bus";
            model = "\Edaly_Structures_Assets_9\Various_Structures\Edaly_Bus_stop_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Bus_stop_01_F.jpg";
        };
        class Land_Edaly_Debris_Wood_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Pile de debris (poutres)";
            model = "\Edaly_Structures_Assets_9\Various_Structures\Edaly_Debris_Wood_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Debris_Wood_01_F.jpg";
        };
        class Land_Edaly_Debris_Wood_02_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Pile de debris (poutres) 2";
            model = "\Edaly_Structures_Assets_9\Various_Structures\Edaly_Debris_Wood_02_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Debris_Wood_02_F.jpg";
        };
        class Land_Edaly_Debris_Wood_03_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Pile de debris (poutres) 3";
            model = "\Edaly_Structures_Assets_9\Various_Structures\Edaly_Debris_Wood_03_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Debris_Wood_03_F.jpg";
        };
        class Land_Edaly_Dirt_pile_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Tas de terre";
            model = "\Edaly_Structures_Assets_9\Various_Structures\Edaly_Dirt_pile_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Dirt_pile_01_F.jpg";
        };

        class Land_Edaly_Generator_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Station Electrique 1";
            model = "\Edaly_Structures_Assets_9\Various_Structures\Edaly_Generator_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Generator_01_F.jpg";
        };
        class Land_Edaly_Generator_02_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Station Electrique 2";
            model = "\Edaly_Structures_Assets_9\Various_Structures\Edaly_Generator_02_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Generator_02_F.jpg";
        };
        class Land_Edaly_Stand_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Stand_01_F";
            model = "\Edaly_Structures_Assets_9\Various_Structures\Edaly_Stand_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Stand_01_F.jpg";
        };
        class Land_Edaly_Stand_02_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Stand_02_F";
            model = "\Edaly_Structures_Assets_9\Various_Structures\Edaly_Stand_02_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Stand_02_F.jpg";
        };
        class Land_Edaly_Stand_03_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Stand_03_F";
            model = "\Edaly_Structures_Assets_9\Various_Structures\Edaly_Stand_03_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Stand_03_F.jpg";
        };
        class Land_Edaly_Stand_meat_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Stand_meat_01_F";
            model = "\Edaly_Structures_Assets_9\Various_Structures\Edaly_Stand_meat_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Stand_meat_01_F.jpg";
        };
        class Land_Edaly_Stand_small_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Stand_small_01_F";
            model = "\Edaly_Structures_Assets_9\Various_Structures\Edaly_Stand_small_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Stand_small_01_F.jpg";
        };
        class Land_Edaly_Stand_water_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Stand_water_01_F";
            model = "\Edaly_Structures_Assets_9\Various_Structures\Edaly_Stand_water_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Stand_water_01_F.jpg";
        };
        class Land_Edaly_Telecom_tower_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Telecom_tower_01_F";
            model = "\Edaly_Structures_Assets_9\Various_Structures\Edaly_Telecom_tower_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Telecom_tower_01_F.jpg";
        };
        class Land_Edaly_Tire_pile_01_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 1;
            scopeCurator = 1;
            displayName = "Tire_pile_01_F";
            model = "\Edaly_Structures_Assets_9\Various_Structures\Edaly_Tire_pile_01_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly_Arma2";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Tire_pile_01_F.jpg";
        };
    /******* Config Edaly_Structures_Assets_9 *******/

    /******* Config Edaly_Structures_Assets_10 *******/
        class Wall_03_EL : Static
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_03;
            model = "Edaly_Structures_Assets_10\Factory_Walls\facto_walls_full.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_03_EL.jpg";
        };
        class Wall_03_SOLO_EL : Wall_03_EL
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_03_SOLO;
            model = "Edaly_Structures_Assets_10\Factory_Walls\facto_walls_solo.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_03_SOLO_EL.jpg";
        };
        class Wall_03_PIL_EL : Wall_03_EL
        {
            scope = 2;
            displayName = $STR_EDALY_STR_WALL_03_PIL;
            model = "Edaly_Structures_Assets_10\Factory_Walls\facto_walls_pil.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Wall_03_PIL_EL.jpg";
        };
        class Land_Edaly_hut_07_F: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Cabanon 7";
            model = "\Edaly_Structures_Assets_10\Hut_07\Edaly_Hut_07_F.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_hut_07_F.jpg";
        };
        class Land_Edaly_Tiger_Statue_EL: House_F
        {
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator = 2;
            displayName = "Statue de Tigre";
            model = "\Edaly_Structures_Assets_10\Tiger_Statue\Tiger_Statue_EL.p3d";

            camouflage = 2;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Edaly_Tiger_Statue_EL.jpg";
        };
        class Land_Factory_Gate_EL: House_F {
            scope=2;
            author=$STR_EDALY_AUTHOR;
            displayName=$STR_EDALY_STR_FACTORY_GATE;
            model="\Edaly_Structures_Assets_10\Factory_Gate\Front_Gate.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Props";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Factory_Gate_EL.jpg";
            numberOfDoors = 2;

            class AnimationSources
            {
                class door_1_source
                {
                    source = "user";
                    initPhase = 1;
                    animPeriod = 3.5;
                    sound = "MetalDoorsSound";
                };
                class door_2_source: door_1_source {};

                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
            actionBegin2 = OpenDoor_2;
            actionEnd2 = OpenDoor_2;
        };
        class Land_Stables01 : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = $STR_EDALY_STR_STABLE01;
            model = "Edaly_Structures_Assets_10\Stable\Stables01.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Stables01.jpg";
            numberOfDoors = 3;

            class AnimationSources
            {
                // Animation sources for doors
                class door_1_source
                {
                    source = user; // "user" = custom source = not controlled by some engine value
                    initPhase = 0; // Initial value of animations based on this source
                    animPeriod = 1; // Coefficient for duration of change of this animation
                    sound = "GenericDoorsSound";
                };
                class door_2_source: door_1_source {};
                class door_3_source: door_1_source {};

                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)
                DOOR_SOURCE_LOCKED(3)
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
                DOOR_USERACTION(3,3)
            };

            ActionBegin2 = OpenDoor_2;
            ActionEnd2 = OpenDoor_2;
            ActionBegin3 = OpenDoor_3;
            ActionEnd3 = OpenDoor_3;
        };
        class Land_Hospital_01_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_HOSPITAL;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            model = "Edaly_Structures_Assets_10\Hospital\Hospital_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Hospital_01_F.jpg";
            simulation = "house";
            numberOfDoors = 17;

            class AnimationSources
            {
                class door_1_source
                {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericDoorsSound";
                };
                class door_2_source : door_1_source {};
                class door_3_source : door_1_source {};
                class door_4_source : door_1_source {};
                class door_5_source : door_1_source {};
                class door_6_source : door_1_source {};
                class door_7_source : door_1_source {};
                class door_8_source : door_1_source {};
                class door_9_source : door_1_source {};
                class door_10_source : door_1_source {};
                class door_11_source : door_1_source {};
                class door_12_source : door_1_source {};
                class door_13_source : door_1_source {};
                class door_14_source : door_1_source {};
                class door_15_source : door_1_source {};
                class door_16_source : door_1_source {};
                class door_17_source : door_1_source {};
                class window_1_source : door_1_source {};
                class window_2_source : door_1_source {};
                class window_3_source : door_1_source {};
                class window_4_source : door_1_source {};
                class window_5_source : door_1_source {};
                class window_6_source : door_1_source {};
                class window_7_source : door_1_source {};
                class window_8_source : door_1_source {};
                class window_9_source : door_1_source {};

                DOOR_SOURCE_LOCKED(1)
                DOOR_SOURCE_LOCKED(2)
                DOOR_SOURCE_LOCKED(3)
                DOOR_SOURCE_LOCKED(4)
                DOOR_SOURCE_LOCKED(5)
                DOOR_SOURCE_LOCKED(6)
                DOOR_SOURCE_LOCKED(7)
                DOOR_SOURCE_LOCKED(8)
                DOOR_SOURCE_LOCKED(9)
                DOOR_SOURCE_LOCKED(10)
                DOOR_SOURCE_LOCKED(14)
                DOOR_SOURCE_LOCKED(15)
                DOOR_SOURCE_LOCKED(16)
                DOOR_SOURCE_LOCKED(17)

                GLASS_SOURCE_HITPOINT(1)
                GLASS_SOURCE_HITPOINT(2)
                GLASS_SOURCE_HITPOINT(3)
                GLASS_SOURCE_HITPOINT(4)
                GLASS_SOURCE_HITPOINT(5)
                GLASS_SOURCE_HITPOINT(6)
                GLASS_SOURCE_HITPOINT(7)
                GLASS_SOURCE_HITPOINT(8)
                GLASS_SOURCE_HITPOINT(9)
                GLASS_SOURCE_HITPOINT(10)
                GLASS_SOURCE_HITPOINT(11)
                GLASS_SOURCE_HITPOINT(12)
                GLASS_SOURCE_HITPOINT(13)
                GLASS_SOURCE_HITPOINT(14)
                GLASS_SOURCE_HITPOINT(15)
                GLASS_SOURCE_HITPOINT(16)
                GLASS_SOURCE_HITPOINT(17)
                GLASS_SOURCE_HITPOINT(18)
                GLASS_SOURCE_HITPOINT(19)
                GLASS_SOURCE_HITPOINT(20)
                GLASS_SOURCE_HITPOINT(21)
                GLASS_SOURCE_HITPOINT(22)
                GLASS_SOURCE_HITPOINT(23)
                GLASS_SOURCE_HITPOINT(24)
                GLASS_SOURCE_HITPOINT(25)
                GLASS_SOURCE_HITPOINT(26)
                GLASS_SOURCE_HITPOINT(27)
                GLASS_SOURCE_HITPOINT(28)
                GLASS_SOURCE_HITPOINT(29)
                GLASS_SOURCE_HITPOINT(30)
                GLASS_SOURCE_HITPOINT(31)
                GLASS_SOURCE_HITPOINT(32)
                GLASS_SOURCE_HITPOINT(33)
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                DOOR_USERACTION(2,2)
                DOOR_USERACTION(3,3)
                DOOR_USERACTION(4,4)
                DOOR_USERACTION(5,5)
                DOOR_USERACTION(6,6)
                DOOR_USERACTION(7,7)
                DOOR_USERACTION(8,8)
                DOOR_USERACTION(9,9)
                DOOR_USERACTION(10,10)
                DOOR_USERACTION(11,11)
                DOOR_USERACTION(12,12)
                DOOR_USERACTION(13,13)
                DOOR_USERACTION(14,14)
                DOOR_USERACTION(15,15)
                DOOR_USERACTION(16,16)
                DOOR_USERACTION(17,17)

                WINDOW_USERACTION(1,18)
                WINDOW_USERACTION(2,19)
                WINDOW_USERACTION(3,20)
                WINDOW_USERACTION(4,21)
                WINDOW_USERACTION(5,22)
                WINDOW_USERACTION(6,23)
                WINDOW_USERACTION(7,24)
                WINDOW_USERACTION(8,25)
                WINDOW_USERACTION(9,26)
            };

            class HitPoints
            {
                #include "\Edaly_Structures_Assets_10\Hospital\hitPoints.hpp"
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
            actionBegin2 = OpenDoor_2;
            actionEnd2 = OpenDoor_2;
            actionBegin3 = OpenDoor_3;
            actionEnd3 = OpenDoor_3;
            actionBegin4 = OpenDoor_4;
            actionEnd4 = OpenDoor_4;
            actionBegin5 = OpenDoor_5;
            actionEnd5 = OpenDoor_5;
            actionBegin6 = OpenDoor_6;
            actionEnd6 = OpenDoor_6;
            actionBegin11 = OpenDoor_11;
            actionEnd11 = OpenDoor_11;
            actionBegin12 = OpenDoor_12;
            actionEnd12 = OpenDoor_12;
            actionBegin13 = OpenDoor_13;
            actionEnd13 = OpenDoor_13;
        };
        class Land_dump_01_F: House_F
        {
            scope = 2;
            displayName = "Decheterie";
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            model = "Edaly_Structures_Assets_10\Dump\dump_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_dump_01_F.jpg";
            simulation = "house";

            /*
                class selections
                {
                    door_1 = "door_1_source";
                    window_1 = "window_1_source";
                };

                class AnimationSources
                {
                    class door_1_source
                    {
                        source = user;
                        initPhase = 0;
                        animPeriod = 1;
                        sound = "GenericDoorsSound";
                    };
                    class window_1_source : door_1_source {};
                };
            */
        };
        class Land_Barracks_01_EL : House_F
        {
            scope = 2;
            author = $STR_EDALY_AUTHOR;
            displayName = $STR_EDALY_STR_MBARRACKS;
            model = "Edaly_Structures_Assets_10\barracks\Barracks_01_EL.p3d";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Barracks_01_EL.jpg";
            numberOfDoors = 1;

            class selections
            {
                door_1 = "door_1_source";
            };

            class AnimationSources
            {
                // Animation sources for doors
                class door_1_source
                {
                    source = user; // "user" = custom source = not controlled by some engine value
                    initPhase = 0; // Initial value of animations based on this source
                    animPeriod = 1; // Coefficient for duration of change of this animation
                    sound = "GenericDoorsSound"; // sound when open/close
                };
            };
        };
        class Land_Mill_01_F: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_BARRIER_COLLECTIVE_AGRICULTURAL;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            model = "Edaly_Structures_Assets_10\Mill\Mill_01_F.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Mill_01_F.jpg";
            simulation = "house";
            numberOfDoors = 1;

            class AnimationSources
            {
                class door_1_source
                {
                    source = user;
                    initPhase = 0;
                    animPeriod = 1;
                    sound = "GenericDoorsSound";
                };
                class window_1_source : door_1_source {};

                DOOR_SOURCE_LOCKED(1)

                GLASS_SOURCE_HITPOINT(1)
                GLASS_SOURCE_HITPOINT(2)
            };

            class UserActions
            {
                DOOR_USERACTION(1,1)
                WINDOW_USERACTION(1,2)
            };

            class HitPoints
            {
                #include "\Edaly_Structures_Assets_10\Mill\hitPoints.hpp"
            };

            actionBegin1 = OpenDoor_1;
            actionEnd1 = OpenDoor_1;
        };
        /* // WIP, dunno if someone will finish it (Kira tired)
        class Land_Port_01_EL: House_F
        {
            scope = 2;
            displayName = $STR_EDALY_STR_PORT;
            author = $STR_EDALY_AUTHOR;
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Structures";
            model = "Edaly_Structures_Assets_10\Port\Port_01_EL.p3d";
            editorPreview = "\Edaly_Map_Categories\EditorPreview\Land_Mill_01_F.jpg"; //TODO
            simulation = "house";
            numberOfDoors = 1;
        };
        */
    /******* Config Edaly_Structures_Assets_10 *******/
};
