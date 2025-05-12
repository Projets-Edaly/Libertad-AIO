#include "\Edaly_Client\version.hpp"

class CfgPatches
{
	class A3_Items_Config
	{
		author="Bohemia Interactive - Projets Edaly";
		url=$STR_EDALY_WEBSITE;
		requiredAddons[]={"Edaly_Client", "A3_Weapons_F"};
		requiredVersion=ARMA3_VERSION;
		units[]={};
		weapons[]={
            "Item_Pile",
            "Item_AmmoBox",
            "Item_NotePad",
            "Item_File_01",
            "Item_File_02",
            "Item_FilePicture",
            "Item_BakedBeans",
            "Item_Gourde_Full",
            "Item_Gourde_Empty",
            "Item_Orange",
            "Item_Ricebox",
            "Item_CanisterFuel",
            "Item_CanOpener",
            "Item_DuctTape",
            "Item_ScrewDriver",
            "Item_PainKillers",
            "Item_Antibiotic",
            "Item_Bandage",
            "Item_Heatpack",
            "Item_Pansements",
            "Item_FirstAidKit_01",
            "Item_FirstAidKit_02",
            "Item_Injector",
            "Item_Defibrillator",
            "Item_VitaminBottle",
            "Item_BloodBag",
            "Item_IntravenBag_full",
            "Item_IntravenBag_empty",
            "Item_BodyBag",
            "Item_Stethoscope",
            "Item_waterpurificationtablets",
            "Item_CarBattery",
            "Item_TruckBattery",
            "Item_ToolBox",
            "Item_Track",
            "Item_Siphon",
            "Item_Jerrycan_Empty",
            "Item_Jerrycan_SP98",
            "Item_Jerrycan_SP95",
            "Item_Jerrycan_Diesel",
            "Item_Jerrycan_GPL",
            "Item_Jerrycan_Kerosene",
            "Item_Jerrycan_Bio"
        };
	};
};

class CfgWeapons
{
    class Edaly_Item_Base;
    class InventoryItem_Base_F;

    class Item_Pile: Edaly_Item_Base
    {
        scope=2;
        displayName="Pile";
        model="A3\structures_f_epa\items\electronics\battery_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Pile_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_AmmoBox: Edaly_Item_Base
    {
        scope=2;
        displayName="Caisse de munitions";
        model="A3\structures_f_epb\items\military\ammobox_rounds_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_AmmoBox_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_NotePad: Edaly_Item_Base
    {
        scope=2;
        displayName="Bloc-notes";
        model="A3\structures_f\items\documents\notepad_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_NotePad_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_File_01: Edaly_Item_Base
    {
        scope=2;
        displayName="Documents";
        model="A3\structures_f\items\documents\file1_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_File_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_File_02: Edaly_Item_Base
    {
        scope=2;
        displayName="Fichier recherche";
        model="A3\structures_f\items\documents\file2_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_File_02_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_FilePicture: Edaly_Item_Base
    {
        scope=2;
        displayName="Fichier photos";
        model="A3\structures_f\items\documents\filephotos_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_FilePicture_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_BakedBeans: Edaly_Item_Base
    {
        scope=2;
        displayName="Fayots (conserve)";
        model="A3\structures_f_epa\items\food\bakedbeans_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_BakedBeans_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Gourde_Full: Edaly_Item_Base
    {
        scope=2;
        displayName="Gourde (pleine)";
        model="A3\structures_f_epa\items\food\canteen_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Gourde_Full_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Gourde_Empty: Edaly_Item_Base
    {
        scope=2;
        displayName="Gourde (vide)";
        model="A3\structures_f_epa\items\food\canteen_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Gourde_Empty_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Orange: Edaly_Item_Base
    {
        scope=2;
        displayName="Orange";
        model="A3\props_f_orange\humanitarian\supplies\orange_01_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Orange_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Ricebox: Edaly_Item_Base
    {
        scope=2;
        displayName="Boîte de riz";
        model="A3\structures_f_epa\items\food\ricebox_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Ricebox_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_CanisterFuel: Edaly_Item_Base
    {
        scope=2;
        displayName="Jerrican";
        model="A3\structures_f\items\vessels\canisterfuel_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CanisterFuel_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_CanOpener: Edaly_Item_Base
    {
        scope=2;
        displayName="Ouvre-boîte";
        model="A3\structures_f_epa\items\tools\canopener_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CanOpener_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_DuctTape: Edaly_Item_Base
    {
        scope=2;
        displayName="Ruban adhésif";
        model="A3\structures_f_epa\items\tools\ducttape_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CerealsBox_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_ScrewDriver: Edaly_Item_Base
    {
        scope=2;
        displayName="Tournevis";
        model="A3\structures_f\items\tools\screwdriver_v2_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CerealsBox_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_PainKillers: Edaly_Item_Base
    {
        scope=2;
        displayName="Analgésique";
        model="A3\structures_f_epa\items\medical\painkillers_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CerealsBox_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Antibiotic: Edaly_Item_Base
    {
        scope=2;
        displayName="Antibiotiques";
        model="A3\structures_f_epa\items\medical\antibiotic_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CerealsBox_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Bandage: Edaly_Item_Base
    {
        scope=2;
        displayName="Bandages";
        model="A3\structures_f_epa\items\medical\bandage_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Bandage_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Heatpack: Edaly_Item_Base
    {
        scope=2;
        displayName="Couverture de survie";
        model="A3\structures_f_epa\items\medical\heatpack_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CerealsBox_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Pansements: Edaly_Item_Base
    {
        scope=2;
        displayName="Pansements";
        model="A3\Props_F_Orange\Humanitarian\Garbage\MedicalGarbage_01_Bandage_F";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CerealsBox_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_FirstAidKit_01: Edaly_Item_Base
    {
        scope=2;
        displayName="Kit de premiers secours";
        model="A3\Props_F_Orange\Humanitarian\Garbage\MedicalGarbage_01_FirstAidKit_F";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CerealsBox_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_FirstAidKit_02: Edaly_Item_Base
    {
        scope=2;
        displayName="Trousse de secours";
        model="A3\props_f_orange\humanitarian\camps\firstaidkit_01_closed_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CerealsBox_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Injector: Edaly_Item_Base
    {
        scope=2;
        displayName="Seringues";
        model="A3\Props_F_Orange\Humanitarian\Garbage\MedicalGarbage_01_Injector_F";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CerealsBox_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Defibrillator: Edaly_Item_Base
    {
        scope=2;
        displayName="Défibrilateur";
        model="A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CerealsBox_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_VitaminBottle: Edaly_Item_Base
    {
        scope=2;
        displayName="Flacon de vitamines";
        model="A3\structures_f_epa\items\medical\vitaminbottle_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CerealsBox_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_BloodBag: Edaly_Item_Base
    {
        scope=2;
        displayName="Poche de sang";
        model="A3\structures_f_epa\items\medical\bloodbag_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CerealsBox_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_IntravenBag_full: Edaly_Item_Base
    {
        scope=2;
        displayName="Poche de transfusion (pleine)";
        model="A3\props_f_orange\humanitarian\camps\intravenbag_01_full_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CerealsBox_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_IntravenBag_empty: Edaly_Item_Base
    {
        scope=2;
        displayName="Poche de transfusion (vide)";
        model="A3\props_f_orange\humanitarian\camps\intravenbag_01_empty_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CerealsBox_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_BodyBag: Edaly_Item_Base
    {
        scope=2;
        displayName="Sac mortuaire";
        model="A3\props_f_orange\humanitarian\camps\bodybag_01_folded_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CerealsBox_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Stethoscope: Edaly_Item_Base
    {
        scope=2;
        displayName="Stéthoscope";
        model="A3\props_f_orange\humanitarian\camps\stethoscope_01_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CerealsBox_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_waterpurificationtablets: Edaly_Item_Base
    {
        scope=2;
        displayName="Tablettes de potabilisation";
        model="A3\structures_f_epa\items\medical\waterpurificationtablets_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CerealsBox_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };

    // Repair tools/items
    class Item_CarBattery: Edaly_Item_Base
    {
        scope=2;
        displayName=$STR_EDALY_I_CARBATTERY;
        model="A3\structures_f_bootcamp\items\electronics\carbattery_02_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_CarBattery_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_TruckBattery: Edaly_Item_Base
    {
        scope=2;
        displayName="Batterie de camion";
        model="A3\structures_f_bootcamp\items\electronics\carbattery_01_f.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_TruckBattery_01_F.paa";
        descriptionShort="";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_ToolBox: Edaly_Item_Base
    {
        scope=2;
        displayName=$STR_EDALY_I_REPAIR_TOOLBOX;
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_ToolBox_01_F.paa";
        descriptionShort="Indispensable pour effectuer des réparations sur votre véhicule";
        model="A3\weapons_F\items\Toolkit.p3d";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Track: Edaly_Item_Base
    {
        scope=2;
        displayName=$STR_EDALY_I_REPAIR_TRACK;
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Track_01_F.paa";
        model="a3\props_f_tank\military\tankacc\tanktracks_01_long_f.p3d";
        descriptionShort="Chenille de tank";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Siphon: Edaly_Item_Base
    {
        scope=2;
        displayName=$STR_EDALY_I_REPAIR_SIPHON;
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Siphon_01_F.paa";
        descriptionShort="Pour vider votre réservoir.";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };

    // Jerrycans
    class Item_Jerrycan_Empty: Edaly_Item_Base
    {
        scope=2;
        displayName="Jerrycan vide";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Jerrycan_Empty_01_F.paa";
        descriptionShort="Un jerrycan vide, remplissez le à une station service.";
        model="A3\structures_f\items\vessels\canisterfuel_f";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Jerrycan_SP98: Item_Jerrycan_Empty
    {
        scope=2;
        displayName="Jerrycan de Sans Plomb 98";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Jerrycan_SP98_01_F.paa";
        descriptionShort="Un jerrycan de Sans plomb 98 (20L)";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Jerrycan_SP95: Item_Jerrycan_Empty
    {
        scope=2;
        displayName="Jerrycan de Sans Plomb 95";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Jerrycan_SP95_01_F.paa";
        descriptionShort="Un jerrycan de Sans plomb 95 (20L)";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Jerrycan_Diesel: Item_Jerrycan_Empty
    {
        scope=2;
        displayName="Jerrycan de Diesel";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Jerrycan_Diesel_01_F.paa";
        descriptionShort="Un jerrycan de Diesel (20L)";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Jerrycan_GPL: Item_Jerrycan_Empty
    {
        scope=2;
        displayName="Jerrycan de Gaz de Pétrole Liquéfié";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Jerrycan_GPL_01_F.paa";
        descriptionShort="Un jerrycan de Gaz de Pétrole Liquéfié (20L)";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Jerrycan_Kerosene: Item_Jerrycan_Empty
    {
        scope=2;
        displayName="Jerrycan de Kérosène";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Jerrycan_Kerosene_01_F.paa";
        descriptionShort="Un jerrycan de kérosène (20L)";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Jerrycan_Bio: Item_Jerrycan_Empty
    {
        scope=2;
        displayName="Jerrycan de biocarburant";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Jerrycan_Bio_01_F.paa";
        descriptionShort="Un jerrycan de biocarburant (20L)";
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Salema_Porgy: Edaly_Item_Base
    {
        scope=2;
        displayName=$STR_EDALY_I_SALEMA_PORGY;
        model="\A3\animals_f\Fishes\Salema_porgy_F.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Salema_Porgy.paa";
        class melt {
            temperature=70;
            time=3;
            items[]={
                {"Item_Fish_Meat_Salema_Porgy",1}
            };
        };
        class ItemInfo: InventoryItem_Base_F {
            mass=10;
        };
    };
    class Item_Ornate: Edaly_Item_Base
    {
        scope=2;
        displayName="Ornate";
        model="\A3\animals_f\Fishes\ornate_F.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Ornate.paa";
        class melt {
            temperature=70;
            time=3;
            items[]={
                {"Item_Fish_Meat_Ornate",1}
            };
        };
        class ItemInfo: InventoryItem_Base_F {
            mass=10;
        };
    };
    class Item_Mackerel: Edaly_Item_Base
    {
        scope=2;
        displayName=$STR_EDALY_I_MACKEREL;
        model="\A3\animals_f\Fishes\mackerel_F.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Mackerel.paa";
        class melt {
            temperature=70;
            time=3;
            items[]={
                {"Item_Fish_Meat_Mackerel",2}
            };
        };
        class ItemInfo: InventoryItem_Base_F {
            mass=7;
        };
    };
    class Item_Tuna: Edaly_Item_Base
    {
        scope=2;
        displayName=$STR_EDALY_I_TUNA;
        model="\A3\animals_f\Fishes\tuna_F.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Tuna.paa";
        class melt {
            temperature=70;
            time=3;
            items[]={
                {"Item_Fish_Meat_Tuna",10}
            };
        };
        class ItemInfo: InventoryItem_Base_F {
            mass=210;
        };
    };
    class Item_Mullet: Edaly_Item_Base
    {
        scope=2;
        displayName=$STR_EDALY_I_MULLET;
        model="\A3\animals_f\Fishes\Mullet_F.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Mullet.paa";
        class melt {
            temperature=70;
            time=3;
            items[]={
                {"Item_Fish_Meat_Mullet",1}
            };
        };
        class ItemInfo: InventoryItem_Base_F {
            mass=14;
        };
    };
    class Item_Catshark: Edaly_Item_Base
    {
        scope=2;
        displayName=$STR_EDALY_I_CATSHARK;
        model="\A3\animals_f\Fishes\CatShark_F.p3d";
        picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE PAA
        class melt {
            temperature=70;
            time=3;
            items[]={
                {"Item_Fish_Meat_Catshark",1}
            };
        };
        class ItemInfo: InventoryItem_Base_F {
            mass=14;
        };
    };
};
