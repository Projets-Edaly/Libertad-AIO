class ItemCore;
class InventoryItem_Base_F;
class Binocular;

class Edaly_Item_Base: ItemCore {
    scope=0;
    editorCategory="EdCat_Edaly";
    editorSubcategory="EdSubcat_Edaly_Props";
    author=$STR_EDALY_AUTHOR;
    simulation="ItemMineDetector";
    type=WeaponNoSlot;
};

class Item_Vehicle_Bill_Empty: Edaly_Item_Base {
    displayName=$STR_EDALY_I_VEHICLE_BILL_EMPTY;
    model="\Edaly_Items_Assets_2\Paper\paper.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Paper_Empty.paa";
    class melt {
        temperature=248;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.2;
    };
};

class Item_Vehicle_Title_Empty: Edaly_Item_Base {
    displayName=$STR_EDALY_I_VEHICLE_TITLE_EMPTY;
    model="\Edaly_Items_Assets_1\Food\waterbottle\WaterBottle_01_empty_F.p3d";// NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Paper_Empty.paa";// NEED TO CHANGE
    class melt {
        temperature=248;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.2;
    };
};

class Item_Visa_Empty: Edaly_Item_Base {
    displayName=$STR_EDALY_I_VISA_EMPTY;
    model="\Edaly_Items_Assets_2\Passport\Passport_closed.p3d";// NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Passport_closed.paa";// NEED TO CHANGE
    class melt {
        temperature=248;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.4;
    };
};

class Item_Passport_Empty: Edaly_Item_Base {
    scope=2;
    displayName=$STR_EDALY_I_PASSPORT_EMPTY;
    model="\Edaly_Items_Assets_2\Passport\Passport_closed.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Passport_closed.paa";
    class melt {
        temperature=248;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.7;
    };
};

class Item_Envelope_Empty: Edaly_Item_Base {
    scope=2;
    displayName=$STR_EDALY_I_ENVELOPE_EMPTY;
    model="\Edaly_Items_Assets_1\post\envelope\envelope_01.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Envelope_01_F.paa";
    descriptionShort=$STR_EDALY_DESC_ENVELOPE;
    class melt {
        temperature=248;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.7;
    };
};

class Item_Package_Empty: Edaly_Item_Base {
    scope=2;
    displayName=$STR_EDALY_I_PACKAGE_EMPTY;
    model="\Edaly_Items_Assets_1\Post\package\package_open_01.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Pack_Opened_01_F.paa";
    descriptionShort=$STR_EDALY_DESC_PACKAGE_EMPTY;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=2;
    };
};

class Item_Siphon: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_SIPHON;
    model="\Edaly_Items_Assets_1\Food\waterbottle\WaterBottle_01_empty_F.p3d";// NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Water_Bottle_Empty_01_F.paa";// NEED TO CHANGE
    descriptionShort="";// NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=1;
    };
};

class Item_Lockpick: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_LOCKPICK;
    model="\Edaly_Items_Assets_3\lockpick\Lockpick_EL.p3d";// NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    descriptionShort=$STR_EDALY_DESC_LOCKPICK;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=1;
    };
};

class Item_Water_Bottle_Empty: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_WATER_BOTTLE_EMPTY;
    model="\Edaly_Items_Assets_1\Food\Bottle\Bottle_F.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Water_Bottle_Empty_01_F.paa";
    descriptionShort=$STR_EDALY_DESC_WATER_BOTTLE_EMPTY;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.8;
    };
};
class Item_Water_Bottle_Full: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_WATER_BOTTLE_FULL;
    model="\Edaly_Items_Assets_1\Food\waterbottle\WaterBottle_01_full_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Water_Bottle_Full_01_F.paa";
    descriptionShort=$STR_EDALY_DESC_WATER_BOTTLE_FULL;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=22;
    };
};
class Item_Crab: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CRAB;
    model="\Edaly_Crab\crab_dummy.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_crab.paa";
    descriptionShort=$STR_EDALY_DESC_CEREAL_BOX;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=20;
    };
};
class Item_Bill_1: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BILL_1;
    model="\Edaly_Items_Assets_1\Various\bills\Bill_Desos1_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Bill_1_01_F.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.01;
    };
};
class Item_Bill_5: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BILL_5;
    model="\Edaly_Items_Assets_1\Various\bills\Bill_Desos5_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Bill_5_01_F.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.01;
    };
};
class Item_Bill_10: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BILL_10;
    model="\Edaly_Items_Assets_1\Various\bills\Bill_Desos10_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Bill_10_01_F.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.01;
    };
};
class Item_Bill_20: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BILL_20;
    model="\Edaly_Items_Assets_1\Various\bills\Bill_Desos20_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Bill_20_01_F.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.01;
    };
};
class Item_Bill_50: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BILL_50;
    model="\Edaly_Items_Assets_1\Various\bills\Bill_Desos50_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Bill_50_01_F.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.01;
    };
};
class Item_Bill_100: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BILL_100;
    model="\Edaly_Items_Assets_1\Various\bills\Bill_Desos100_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Bill_100_01_F.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.01;
    };
};
class Item_Bill_1000: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BILL_1000;
    model="\Edaly_Items_Assets_1\Various\bills\Bill_Desos1000_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Bill_100_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.01;
    };
};
class Item_Bill_10000: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BILL_10000;
    model="\Edaly_Items_Assets_1\Various\bills\Bill_Desos10000_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Bill_100_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.01;
    };
};
class Item_Apricot: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_APRICOT;
    model="\Edaly_Items_Assets_1\Food\apricot\Apricot_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Abricot_01_F.paa";
    descriptionShort=$STR_EDALY_DESC_APRICOT;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=1;
    };
};
class Item_Yellow_lemon: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_YELLOW_LEMON;
    model="\Edaly_Items_Assets_1\Food\lemon\lemon_Y_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Lemon_01_F.paa";
    descriptionShort=$STR_EDALY_DESC_YELLOW_LEMON;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=1;
    };
};
class Item_Lime: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_LIME;
    model="\Edaly_Items_Assets_1\Food\lemon\lemon_G_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Lemon_02_F.paa";
    descriptionShort=$STR_EDALY_DESC_LIME;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=2.6;
    };
};
class Item_Cherry: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CHERRY;
    model="\Edaly_Items_Assets_1\Food\cherry\Cherry_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Cherry_01_F.paa";
    descriptionShort=$STR_EDALY_DESC_CHERRY;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=2.2;
    };
};
class Item_Mango: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_MANGO;
    model="\Edaly_Items_Assets_1\Food\mango\Mango_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Mango_01_F.paa";
    descriptionShort=$STR_EDALY_DESC_MANGO;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=8.8;
    };
};
class Item_Coconut: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_COCONUT;
    model="\Edaly_Items_Assets_1\Food\coco\coco_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Coco_01_F.paa";
    descriptionShort=$STR_EDALY_DESC_COCONUT;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=33;
    };
};

class Item_TrashBag: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_TRASHBAG;
    model="\Edaly_Items_Assets_1\Various\trash\Trash_Bag_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_trashbag.paa";
    descriptionShort=$STR_EDALY_DESC_RADIO;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=1.5;
    };
};

// Health System
class Item_Morphine: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_MORPHINE;
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Adrenaline_01_F";
    model="\Edaly_Items_Assets_1\Medical\syringue\Syringue_F.p3d";
    descriptionShort=$STR_EDALY_DESC_MORPHINE;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Syringe_Morphine: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_SYRINGE_MORPHINE;
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Adrenaline_01_F";
    model="\Edaly_Items_Assets_1\Medical\syringue\Syringue_F.p3d";
    descriptionShort=$STR_EDALY_DESC_MORPHINE;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.5;
    };
};
class Item_Adrenaline: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_ADRENALINE;
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Morphine_01_F";
    model="\Edaly_Items_Assets_1\Medical\syringue\Syringue_F.p3d";
    descriptionShort=$STR_EDALY_DESC_ADRENALINE;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.5;
    };
};
class Item_Syringe_Adrenaline: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_SYRINGE_ADRENALINE;
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Morphine_01_F";
    model="\Edaly_Items_Assets_1\Medical\syringue\Syringue_F.p3d";
    descriptionShort=$STR_EDALY_DESC_ADRENALINE;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.5;
    };
};
class Item_Splint_Leg: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_SPLINT_LEG;
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Splint_Leg.paa";
    model="\Edaly_Items_Assets_3\Splint\splint_leg.p3d";
    descriptionShort=$STR_EDALY_DESC_SPLINT;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=17;
    };
};
class Item_Splint_Arm: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_SPLINT_ARM;
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Splint_Arm.paa";
    model="\Edaly_Items_Assets_3\Splint\splint_arm.p3d";
    descriptionShort=$STR_EDALY_DESC_SPLINT;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=17;
    };
};
class Item_Cast: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CAST;
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
    descriptionShort=$STR_EDALY_DESC_CAST;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=1.5;
    };
};
class Item_Crutches: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CRUTCHES;
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
    descriptionShort=$STR_EDALY_DESC_CRUTCHES;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=1.5;
    };
};
class Item_Disinfectant: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_DISINFECTANT;
    model="\Edaly_Items_Assets_3\Disinfectant\disinfectant_01.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
    descriptionShort=$STR_EDALY_DESC_DISINFECTANT;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.03;
    };
};

// Books
class Item_Book_Projets_Edaly: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BOOK_PROJETS_EDALY;
    model="\Edaly_Items_Assets_1\Various\book\Land_Book_01a_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Book_8.paa";
    descriptionShort=STR_EDALY_DESC_BOOK_PROJETS_EDALY;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=8.8;
    };
};
class Item_Book_GeK_adventure: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BOOK_GEK_ADVENTURE;
    model="\Edaly_Items_Assets_1\Various\book\Land_Book_01b_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Book_1.paa";
    descriptionShort=$STR_EDALY_DESC_BOOK_GEK_ADVENTURE;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=8.8;
    };
};
class Item_Book_Communist: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BOOK_COMMUNIST;
    model="\Edaly_Items_Assets_1\Various\book\Land_Book_01c_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Book_3.paa";
    descriptionShort=$STR_EDALY_DESC_BOOK_COMMUNIST;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=8.8;
    };
};
class Item_Book_EITS: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BOOK_EITS;
    model="\Edaly_Items_Assets_1\Various\book\Land_Book_01d_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Book_5.paa";
    descriptionShort=$STR_EDALY_DESC_BOOK_EITS;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=8.8;
    };
};
class Item_Book_Cuba_revolution: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BOOK_CUBA_REVOLUTION;
    model="\Edaly_Items_Assets_1\Various\book\Land_Book_01e_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Book_6.paa";
    descriptionShort=$STR_EDALY_DESC_BOOK_CUBA_REVOLUTION;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=8.8;
    };
};
class Item_Book_Mystical: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BOOK_MYSTICAL;
    model="\Edaly_Items_Assets_1\Various\book\Land_Book_01f_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Book_4.paa";
    descriptionShort=$STR_EDALY_DESC_BOOK_MYSTICAL;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=8.8;
    };
};
class Item_Book_Old_1: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BOOK_OLD;
    model="\Edaly_Items_Assets_1\Various\book\Land_Book_05a_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Book_7.paa";
    descriptionShort=$STR_EDALY_DESC_BOOK_OLD;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=8.8;
    };
};
class Item_OpenBook_1: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BOOK_OPEN;
    model="\Edaly_Items_Assets_1\Various\book\Land_Book_03a_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Book_2.paa";
    descriptionShort=$STR_EDALY_DESC_BOOK_OPEN;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=8.8;
    };
};

class Item_Medbox_1: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_MEDBOX;
    model="\Edaly_Items_Assets_1\Medical\medbox\Medbox_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
    descriptionShort=$STR_EDALY_DESC_MEDBOX;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=13.2;
    };
};

class Item_Map_1: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_MAP;
    model="\Edaly_Items_Assets_2\Map\Map_Unfolded_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
    descriptionShort=""; //$STR_EDALY_DESC_MAP;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.2;
    };
};
class Item_Map_2: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_MAP;
    model="\Edaly_Items_Assets_2\Map\Map_Folded_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
    descriptionShort=""; //$STR_EDALY_DESC_MAP;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.2;
    };
};

class Item_Map_3: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_MAP;
    model="\Edaly_Items_Assets_2\Map\Map_Unfolded_Hold_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
    descriptionShort=""; //$STR_EDALY_DESC_MAP;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.2;
    };
};

class Item_flask_01: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CERAMICFLASK;
    model="\Edaly_Items_Assets_3\Ceramic_Flask\flask_01.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_flask_01.paa";
    descriptionShort="";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=12;
    };
};

class Item_clay_pot_01: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CLAYPOT;
    model="\Edaly_Items_Assets_3\Clay_Pot\clay_pot_01.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_clay_pot_01.paa";
    descriptionShort="";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=12;
    };
};
class Item_Vase_02_F: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_F_VASE_02;
    model="\Edaly_Items_Assets_3\Clay_Pot\clay_pot_01.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_vase02.paa";
    descriptionShort="";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=12;
    };
};
class Item_Vase_03_F: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_F_VASE_03;
    model="\Edaly_Items_Assets_3\Clay_Pot\clay_pot_01.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_vase03.paa";
    descriptionShort="";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=12;
    };
};
class Item_Rake_1: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_RAKE;
    model="\Edaly_Items_Assets_2\Rake\Rake_01_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
    descriptionShort=""; //$STR_EDALY_DESC_RAKE;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=21;
    };
};

class Item_Scythe_1: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_SCYTHE;
    model="\Edaly_Items_Assets_2\Scythe\Scythe_01_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
    descriptionShort=""; //$STR_EDALY_DESC_SCYTHE;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=21;
    };
};

class Item_Watch_1: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_WATCH;
    model="\Edaly_Items_Assets_2\Watch\Watch_01_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Watch_1.paa";
    descriptionShort=""; //$STR_EDALY_DESC_WATCH;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=1.1;
    };
};

class Item_Compass_1: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_COMPASS;
    model="\Edaly_Items_Assets_2\Compass\Compass_01_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Compass.paa";
    descriptionShort=""; //$STR_EDALY_DESC_WATCH;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=1.6;
    };
};

class Item_Hatchet_1: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_HATCHET;
    model="\Edaly_Items_Assets_2\Hatchet\Hatchet_01_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
    descriptionShort=""; //$STR_EDALY_DESC_HATCHET;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=4;
    };
};

class Item_NoteBook_1: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_NOTEBOOK;
    model="\Edaly_Items_Assets_2\Hatchet\Hatchet_01_F.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
    descriptionShort=""; // NEED TO CHANGE $STR_EDALY_DESC_NOTEBOOK;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=4;
    };
};

class Item_CigarBox_1: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CIGAR_BOX;
    model="\Edaly_Items_Assets_2\Cigars_box\Box_Cigars_01_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Cigar_box.paa";
    descriptionShort=$STR_EDALY_DESC_CIGAR_BOX; // NEED TO CHANGE $STR_EDALY_DESC_NOTEBOOK;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=39.82;
    };
};

class Item_Shovel_1: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_SHOVEL;
    model="\Edaly_Items_Assets_2\Shovel\Shovel_01_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
    descriptionShort=$STR_EDALY_DESC_SHOVEL; // NEED TO CHANGE $STR_EDALY_DESC_NOTEBOOK;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=500;
    };
};
class Item_minirock_1: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_MINI_ROCK;
    model="\Edaly_Items_Assets_2\Rocks\minirock_01_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_minirock_1.paa";
    descriptionShort="";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_minirock_2: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_MINI_ROCK;
    model="\Edaly_Items_Assets_2\Rocks\minirock_02_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_minirock_2.paa";
    descriptionShort="";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
/*
class Item_bigrock_1: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BIG_ROCK;
    model="\Edaly_Items_Assets_2\Rocks\bigrock_01_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
    descriptionShort="";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=50;
    };
};
class Item_bigrock_2: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BIG_ROCK;
    model="\Edaly_Items_Assets_2\Rocks\bigrock_02_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
    descriptionShort="";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=50;
    };
};
class Item_bigrock_3: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BIG_ROCK;
    model="\Edaly_Items_Assets_2\Rocks\bigrock_03_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
    descriptionShort="";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=50;
    };
};
class Item_bigrock_4: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BIG_ROCK;
    model="\Edaly_Items_Assets_2\Rocks\bigrock_04_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
    descriptionShort="";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=50;
    };
};
class Item_bigrock_5: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BIG_ROCK;
    model="\Edaly_Items_Assets_2\Rocks\bigrock_05_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
    descriptionShort="";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=50;
    };
};
*/
class Item_glass_bottle: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_GLASS_BOTTLE;
    model="\Edaly_Items_Assets_1\Food\glassbottle\Glass_Bottle_01_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
    descriptionShort=$STR_EDALY_DESC_GLASS_BOTTLE;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=11;
    };
};
class Item_plate: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_PLATE;
    model="\Edaly_Items_Assets_2\Plate\Plate_01_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Plate.paa";
    descriptionShort=$STR_EDALY_DESC_GLASS_BOTTLE;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=15;
    };
};

class Item_Seed_Tobaco: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_TOBACO_SEED;
    model="Edaly_Items_Assets_2\Seeds\tobacco_pile.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Seed_Tobaco.paa";
    descriptionShort=$STR_EDALY_DESC_CHERRY;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.1;
    };
};

class Item_Tobaco_Leaf: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_TOBACO_LEAF;
    model="\Edaly_Items_Assets_2\Leaf\Leaf_01_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Tobaco_Leaf.paa";
    descriptionShort="";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.1;
    };
};

class Item_Pouch_F: Edaly_Item_Base
{
    scope=2;
    displayName="Pouch";
    model="\Edaly_Items_Assets_2\Pouch\pouch.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Pouch_F.paa";
    descriptionShort="";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.1;
    };
};

// TREE
class Item_Wooden_Log: Edaly_Item_Base
{
    editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_WoodenLog_F.jpg";
    scope=2;
    displayName=$STR_EDALY_I_WOODEN_LOG;
    model="\A3\Structures_F_EPA\Civ\Camping\WoodenLog_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Wooden_Log.paa";
    vehicleClass="Tents";
    class melt {
        temperature=300;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=44;
    };
};
class Item_Wooden_Plank: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_WOODEN_PLANK;
    model="\Edaly_Items_Assets_2\Planks\Single_Plank.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Wooden_Plank.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=22;
    };
};
class Item_Wooden_Box: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_WOODEN_BOX;
    model="\A3\Structures_F_EPA\Civ\Camping\WoodenLog_F.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Coal: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_COAL;
    model="\Edaly_Items_Assets_1\Various\coal\Coal_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Coal_01_F.paa";
    descriptionShort=$STR_EDALY_DESC_COAL;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Coal_Bag: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_COAL_BAG;
    model="\Edaly_Items_Assets_1\Various\coal\Coal_Bag_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Coal_Bag_01_F.paa";
    descriptionShort=$STR_EDALY_DESC_COAL_BAG;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=66;
    };
};
class Item_Fertilizer: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_FERTILIZER;
    model="\Edaly_Items_Assets_2\Powder_Pile\PowderPile_02_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Fertilizer.paa";
    descriptionShort=$STR_EDALY_DESC_COAL_BAG;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.1;
    };
};
class Item_Paper_Empty: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_PAPER_BLANK;
    model="\Edaly_Items_Assets_2\Paper\paper.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Paper_Empty.paa";
    descriptionShort=$STR_EDALY_DESC_PAPER_BANK;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.2;
    };
};
// TREE

// BANANA
class Item_Seed_Banana: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BANANA_SEED;
    model="Edaly_Items_Assets_2\Seeds\tobacco_pile.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Seed_Tobaco.paa";
    descriptionShort=$STR_EDALY_DESC_CHERRY;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.1;
    };
};
class Item_Banana: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BANANA;
    model="\Edaly_Items_Assets_1\Food\Banana\Banana.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Banana.paa";
    descriptionShort=$STR_EDALY_DESC_BANANA;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=2.3;
    };
};
class Item_Egg: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_EGG;
    model="\Edaly_Items_Assets_1\Food\Egg\Egg.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Egg.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=1.3;
    };
};
class Item_Eggs_Basket: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_EGGS_BASKET;
    model="\Edaly_Items_Assets_2\Eggs_Basket\Eggs_Basket.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Eggs_Basket.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=15;
    };
};
class Item_Rhum_Bottle_Empty: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_RHUM_BOTTLE_EMPTY;
    model="\Edaly_Items_Assets_1\Food\rumbottle\rumbottle_empty.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_rhum_bottle_empty.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Rhum_Bottle: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_RHUM_BOTTLE;
    model="\Edaly_Items_Assets_1\Food\rumbottle\rumbottle_full.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_rhum_bottle.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=34;
    };
};
class Item_Cataplasm: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CATAPLASM;
    model="\Edaly_Items_Assets_1\Food\waterbottle\WaterBottle_01_empty_F.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=1;
    };
};
// BANANA
// COFFEE
class Item_Seed_Coffee: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_COFFEE_SEED;
    model="Edaly_Items_Assets_2\Seeds\coffee_pile.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Seed_Coffee.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.1;
    };
};
class Item_Coffee: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_COFFEE;
    model="\Edaly_Items_Assets_2\Powder\Powder.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Coffee_Bag: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_COFFEE_BAG;
    model="\Edaly_Items_Assets_1\Various\coal\Coal_Bag_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Coal_Bag_01_F.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=14;
    };
};
class Item_Coffee_Cup: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_COFFEE_CUP;
    model="\Edaly_Items_Assets_1\Food\waterbottle\WaterBottle_01_empty_F.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=5.5;
    };
};

// COFFEE
// CEREAL
class Item_Seed_Corn: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CORN_SEED;
    model="Edaly_Items_Assets_2\Seeds\wheat_pile.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Seed_Corn.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.1;
    };
};
class Item_Wheat_Straw: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_WHEAT_STRAW;
    model="\Edaly_Items_Assets_1\Food\waterbottle\WaterBottle_01_empty_F.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Grain_Bag: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_GRAIN_BAG;
    model="\Edaly_Items_Assets_1\Food\waterbottle\WaterBottle_01_empty_F.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=14;
    };
};
class Item_Flour: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_FLOUR;
    model="\Edaly_Items_Assets_2\Powder\Powder.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Flour.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Flour_Bag: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_FLOUR_BAG;
    model="\Edaly_Items_Assets_1\Various\coal\Coal_Bag_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Coal_Bag_01_F.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=14;
    };
};
class Item_Hay: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_HAY;
    model="\Edaly_Items_Assets_1\Food\waterbottle\WaterBottle_01_empty_F.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=4;
    };
};
// CEREAL
// SUGAR CANE
class Item_Seed_Sugar_Cane: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_SUGAR_CANE_SEED;
    model="Edaly_Items_Assets_2\Seeds\wheat_pile.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Seed_Corn.paa";
    descriptionShort=$STR_EDALY_DESC_CHERRY;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.1;
    };
};
class Item_Sugar: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_SUGAR;
    model="\Edaly_Items_Assets_2\Powder\Powder.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Flour.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=4;
    };
};
class Item_Sugar_Cane: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_SUGAR_CANE;
    model="\a3\vegetation_f_exp\Crop\b_Sugarcane_sapling_single_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Sugar_Cane.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=4;
    };
};
class Item_Bagasse: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BAGASSE;
    model="\Edaly_Items_Assets_1\Food\waterbottle\WaterBottle_01_empty_F.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=12;
    };
};
class Item_Matches: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_MATCHES;
    model="\Edaly_Items_Assets_1\Food\waterbottle\WaterBottle_01_empty_F.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.8;
    };
};
class Item_Black_Powder: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BLACK_POWDER;
    model="\Edaly_Items_Assets_2\Powder\Powder.p3d"; // NEED TO CHANGE / TEXTURE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Powder: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_POWDER;
    model="\Edaly_Items_Assets_2\Powder\Powder.p3d"; // NEED TO CHANGE / TEXTURE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Sulfur: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_SULFUR;
    model="\Edaly_Items_Assets_2\Powder\Powder.p3d"; // NEED TO CHANGE / TEXTURE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
// SUGAR CANE
// VEGETABLE
class Item_Raw_Vegetable: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_RAW_VEGETABLE;
    model="\Edaly_Items_Assets_1\Food\waterbottle\WaterBottle_01_empty_F.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=5;
    };
};
class Item_Cooked_Vegetable: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_COOKED_VEGETABLE;
    model="\Edaly_Items_Assets_1\Food\waterbottle\WaterBottle_01_empty_F.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=5;
    };
};
class Item_Canned_Vegetable: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CANNED_VEGETABLE;
    model="\Edaly_Items_Assets_2\Tin_Can\Tin_Can.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=8;
    };
};
class Item_Canned_Meat: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CANNED_MEAT;
    model="\Edaly_Items_Assets_2\Tin_Can\Tin_Can_Meat.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=9;
    };
};
// VEGETABLE
// ORE
class Item_Iron_Ore: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_IRON;
    model="\Edaly_Items_Assets_2\Ore\Ore_Iron_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Iron_Ore.paa";
    class melt {
        temperature=1538;
        time=5;
        items[]={
            {"Item_Iron_Ingot", 1}
        };
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Gold_Ore: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_GOLD;
    model="\Edaly_Items_Assets_2\Ore\Ore_Gold_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Gold_Ore.paa";
    class melt {
        temperature=1000;
        time=15;
        items[]={
            {"Item_Gold_Ingot", 1}
        };
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Nickel_Ore: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_NICKEL;
    model="\Edaly_Items_Assets_2\Ore\Ore_Nickel_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Nickel_Ore.paa";
    class melt {
        temperature=1000;
        time=11;
        items[]={
            {"Item_Nickel_Ingot", 1}
        };
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Copper_Ore: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_COPPER;
    model="\Edaly_Items_Assets_2\Ore\Ore_Copper_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Copper_Ore.paa";
    class melt {
        temperature=1000;
        time=11;
        items[]={
            {"Item_Copper_Ingot", 1}
        };
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Silver_Ore: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_SILVER;
    model="\Edaly_Items_Assets_2\Ore\Ore_Silver_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Silver_Ore.paa";
    class melt {
        temperature=1000;
        time=16;
        items[]={
            {"Item_Silver_Ingot", 1}
        };
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Iron_Ingot: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_IRON_INGOT;
    model="\Edaly_Items_Assets_2\Ingot\Ingot_iron.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Iron_Ingot.paa";
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Gold_Ingot: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_GOLD_INGOT;
    model="\Edaly_Items_Assets_2\Ingot\Ingot_gold.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Gold_Ingot.paa";
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Nickel_Ingot: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_NICKEL_INGOT;
    model="\Edaly_Items_Assets_2\Ingot\Ingot_nickel.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Nickel_Ingot.paa";
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Copper_Ingot: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_COPPER_INGOT;
    model="\Edaly_Items_Assets_2\Ingot\Ingot_copper.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Copper_Ingot.paa";
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Silver_Ingot: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_SILVER_INGOT;
    model="\Edaly_Items_Assets_2\Ingot\Ingot_silver.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Silver_Ingot.paa";
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Stone_Ore: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_STONE;
    model="\Edaly_Items_Assets_2\Ingot\Ingot.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Can_Empty: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CAN_EMPTY;
    model="\Edaly_Items_Assets_2\Tin_Can\Tin_Can.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Screw_Nails: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_SCREW;
    model="\Edaly_Items_Assets_2\Screws_Nails\ScrewNails.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Screw_Nails.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.1;
    };
};
class Item_Metal_Tool: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_METAL_TOOL;
    model="\Edaly_Items_Assets_1\UI\Edaly_Item_Water_Bottle_Empty_01_F.paa"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=21;
    };
};
// POST ALPHA
/*class Item_Jewel_1: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_JEWEL_1;
    model="\Edaly_Items_Assets_1\UI\Edaly_Item_Water_Bottle_Empty_01_F.paa"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Jewel_2: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_JEWEL_2;
    model="\Edaly_Items_Assets_1\UI\Edaly_Item_Water_Bottle_Empty_01_F.paa"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Jewel_3: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_JEWEL_3;
    model="\Edaly_Items_Assets_1\UI\Edaly_Item_Water_Bottle_Empty_01_F.paa"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
*/
// ORE
// APPLE
class Item_Apple: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_APPLE;
    model="\Edaly_Items_Assets_1\Food\Apple\Apple.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Apple.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=6;
    };
};
class Item_Bread_01: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BREAD_01;
    model="\Edaly_Items_Assets_1\Food\bread\Bread_01.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Bread_01.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=6;
    };
};
class Item_Bread_02: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_BREAD_02;
    model="\Edaly_Items_Assets_1\Food\bread\Bread_02.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Bread_02.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=3;
    };
};
class Item_Ham: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_HAM;
    model="\Edaly_Items_Assets_1\Food\Ham\Ham.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Ham.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=9;
    };
};
class Item_Cider_Bottle_Empty: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CIDER_BOTTLE_EMPTY;
    model="\Edaly_Items_Assets_1\Food\waterbottle\WaterBottle_01_empty_F.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Cider_Bottle: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CIDER_BOTTLE;
    model="\Edaly_Items_Assets_1\Food\waterbottle\WaterBottle_01_empty_F.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=34;
    };
};
// APPLE
// SAND
class Item_Sand_Bag: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_SAND_BAG;
    model="\Edaly_Items_Assets_1\Various\coal\Coal_Bag_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Coal_Bag_01_F.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=35;
    };
};
class Item_Sand: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_SAND;
    model="\Edaly_Items_Assets_2\Powder\Powder.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Flour.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Glass_Panel: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_GLASS_PANEL;
    model="\Edaly_Items_Assets_2\Glass_Panel\Glass_Panel_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Glass_Panel.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=2;
    };
};
class Item_Cement_Bag: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CEMENT_BAG;
    model="\Edaly_Items_Assets_1\Various\coal\Coal_Bag_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Coal_Bag_01_F.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=1100;
    };
};
class Item_Syringe: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_SYRINGE;
    model="\Edaly_Items_Assets_1\Medical\syringue\Syringue_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_syringe.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=2;
    };
};
class Item_Cup: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CUP;
    model="\Edaly_Items_Assets_1\Food\waterbottle\WaterBottle_01_empty_F.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
// SAND
// IMPORT
class Item_Cigarette: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CIGARETTE;
    model="\Edaly_Items_Assets_1\Various\Cigarette\Cigarette_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Cigarette.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Cigar_01_F: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CUBAN_CIGAR;
    model="\Edaly_Items_Assets_1\Various\cigar\Cigar_01_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Cigar_01_F.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Seed_Cannabis: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CANNABIS_SEED;
    model="Edaly_Items_Assets_2\Seeds\cannabis_pile.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Seed_Cannabis.paa";
    descriptionShort=$STR_EDALY_DESC_CHERRY;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.1;
    };
};
class Item_Cannabis_Joint: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CANNABIS_JOINT;
    model="\Edaly_Items_Assets_1\Various\Cigarette\Cigarette_F.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Cannabis_Bag: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CANNABIS_Bag;
    model="\Edaly_Items_Assets_1\Food\waterbottle\WaterBottle_01_empty_F.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Fabric_Roll: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_FABRIC_ROLL;
    model="\Edaly_Items_Assets_2\Fabric_Roll\FabricRoll_01_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Fabric_Roll.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=14;
    };
};
class Item_Handcuff_Keys: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_HANDCUFF_KEYS;
    model="\Edaly_Items_Assets_3\Handcuff\handcuff_key.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.1;
    };
};
class Item_Handcuffs: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_HANDCUFFS;
    model="\Edaly_Items_Assets_3\Handcuff\handcuff.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=14;
    };
};
class Item_Carrot: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CARROT;
    model="\Edaly_Vegetation\Carrot\carrot_plant_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Carrot.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Seed_Carrot: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_CARROT_SEED;
    model="Edaly_Items_Assets_2\Seeds\tobacco_pile.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Seed_Tobaco.paa";
    descriptionShort=$STR_EDALY_DESC_CHERRY;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.1;
    };
};
class Item_Seed_Potato: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_POTATO_SEED;
    model="Edaly_Items_Assets_2\Seeds\tobacco_pile.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Seed_Tobaco.paa";
    descriptionShort=$STR_EDALY_DESC_CHERRY;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.1;
    };
};
class Item_Potato: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_POTATO;
    model="\Edaly_Vegetation\Potato_Plant\Potato_Plant_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Potato.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};

class Item_Seed_Cocoa: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_COCOA_SEED;
    model="Edaly_Items_Assets_2\Seeds\tobacco_pile.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Seed_Tobaco.paa";
    descriptionShort=$STR_EDALY_DESC_CHERRY;
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.1;
    };
};
class Item_Cocoa: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_COCOA;
    model="\Edaly_Vegetation\Potato_Plant\Potato_Plant_F.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Whistle: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_WHISTLE;
    model="\Edaly_Items_Assets_1\Food\waterbottle\WaterBottle_01_empty_F.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=0.1;
    };
};
class Item_Fish_Meat_Salema_Porgy: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_FISH_MEAT_SALEMA_PORGY;
    model="\Edaly_Items_Assets_3\FishMeat\FishMeat.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Steak_Raw.paa"; // NEED TO CHANGE
    class melt {
        temperature=250;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=5.5;
    };
};
class Item_Fish_Meat_Ornate: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_FISH_MEAT_ORNATE;
    model="\Edaly_Items_Assets_3\FishMeat\FishMeat.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Steak_Raw.paa"; // NEED TO CHANGE
    class melt {
        temperature=250;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=5.5;
    };
};
class Item_Fish_Meat_Mackerel: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_FISH_MEAT_MACKEREL;
    model="\Edaly_Items_Assets_3\FishMeat\FishMeat.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Steak_Raw.paa"; // NEED TO CHANGE
    class melt {
        temperature=250;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=5.5;
    };
};
class Item_Fish_Meat_Tuna: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_FISH_MEAT_TUNA;
    model="\Edaly_Items_Assets_3\FishMeat\FishMeat.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Steak_Raw.paa"; // NEED TO CHANGE
    class melt {
        temperature=250;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=5.5;
    };
};
class Item_Fish_Meat_Mullet: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_FISH_MEAT_MULLET;
    model="\Edaly_Items_Assets_3\FishMeat\FishMeat.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Steak_Raw.paa"; // NEED TO CHANGE
    class melt {
        temperature=250;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=5.5;
    };
};
class Item_Fish_Meat_Catshark: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_FISH_MEAT_CATSHARK;
    model="\Edaly_Items_Assets_3\FishMeat\FishMeat.p3d"; // NEED TO CHANGE
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Steak_Raw.paa"; // NEED TO CHANGE
    class melt {
        temperature=250;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=5.5;
    };
};
class Item_Steak_Raw: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_STEAK_RAW;
    model="\Edaly_Items_Assets_1\Food\Meat\steak.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Steak_Raw.paa";
    class melt {
        temperature=250;
        time=120;
        items[]={
            {"Item_Steak_Cooked",1}
        };
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=5.5;
    };
};
class Item_Steak_Raw_Horse: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_STEAK_RAW_HORSE;
    model="\Edaly_Items_Assets_1\Food\Meat\steak.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Steak_Raw.paa";
    class melt {
        temperature=250;
        time=120;
        items[]={
            {"Item_Steak_Cooked_Horse",1}
        };
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=7;
    };
};
class Item_Steak_Raw_Cattle: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_STEAK_RAW_CATTLE;
    model="\Edaly_Items_Assets_1\Food\Meat\steak.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Steak_Raw.paa";
    class melt {
        temperature=250;
        time=120;
        items[]={
            {"Item_Steak_Cooked_Cattle",1}
        };
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=5.5;
    };
};
class Item_Steak_Raw_Croco: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_STEAK_RAW_CROCO;
    model="\Edaly_Items_Assets_1\Food\Meat\steak.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Steak_Raw.paa";
    class melt {
        temperature=250;
        time=120;
        items[]={
            {"Item_Steak_Cooked_Croco",1}
        };
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=9;
    };
};
class Item_Steak_Raw_Boar: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_STEAK_RAW_BOAR;
    model="\Edaly_Items_Assets_1\Food\Meat\steak.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Steak_Raw.paa";
    class melt {
        temperature=250;
        time=120;
        items[]={
            {"Item_Steak_Cooked_Boar",1}
        };
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=10;
    };
};
class Item_Steak_Cooked: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_STEAK_COOKED;
    model="\Edaly_Items_Assets_1\Food\Meat\cooked_steak.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Steak_Cooked.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=5;
    };
};
class Item_Steak_Cooked_Horse: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_STEAK_COOKED_HORSE;
    model="\Edaly_Items_Assets_1\Food\Meat\cooked_steak.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Steak_Cooked.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=6;
    };
};
class Item_Steak_Cooked_Cattle: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_STEAK_COOKED_CATTLE;
    model="\Edaly_Items_Assets_1\Food\Meat\cooked_steak.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Steak_Cooked.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=5;
    };
};
class Item_Steak_Cooked_Croco: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_STEAK_COOKED_CROCO;
    model="\Edaly_Items_Assets_1\Food\Meat\cooked_steak.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Steak_Cooked.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=8;
    };
};
class Item_Steak_Cooked_Boar: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_STEAK_COOKED_BOAR;
    model="\Edaly_Items_Assets_1\Food\Meat\cooked_steak.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Steak_Cooked.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=9;
    };
};
class Item_Salt: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_SALT;
    model="\Edaly_Items_Assets_2\Powder\Powder.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Flour.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=9;
    };
};
class Item_Camera_Rapid: Binocular
{
    opticsDisablePeripherialVision = 1;
    weaponPoolAvailable = 1;
    scope = 2;
    simulation = "Binocular";
    model = "\Edaly_Items_Assets_3\Camera\camera.p3d";
    modelOptics = "\A3\weapons_f\reticle\optics_binoculars";
    opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
    visionMode[] = {"Normal"};
    picture = "\Edaly_Items_Assets_1\UI\Edaly_Item_camera.paa";
    value = 5;
    type = 4096;
    displayName =$STR_EDALY_I_CAMERA;
    nameSound = "binoculars";
    reloadTime = 0;
    sound[] = {"",0,1};
    canLock = 0;
    optics = 1;
    forceOptics = 0;
    useAsBinocular = 1;
    primary = 0;
    inertia = 0.1;
    swayCoef = 0.34;
    opticsZoomMin = 0.02;
    opticsZoomMax = 0.0625;
    opticsZoomInit = 0.0625;
    minRange = 150;
    midRange = 500;
    maxRange = 2500;
    magazines[] = {};
    class WeaponSlotsInfo
    {
        mass = 8;
    };
};
class Item_Lantern_01: Edaly_Item_Base
{
    scope=2;
    displayName=$STR_EDALY_I_LANTERN;
    model="\Edaly_Items_Assets_3\Lantern\Lantern_01.p3d";
    picture="\Edaly_Items_Assets_1\UI\Edaly_Item_Lantern.paa";
    class melt {
        temperature=1000;
        time=1;
    };
    class ItemInfo: InventoryItem_Base_F {
        mass=10;
    };
};
// IMPORT
// picture="\Edaly_Items_Assets_1\UI\Edaly_Item_PH_01_F.paa"; // NEED TO CHANGE
// model="\Edaly_Items_Assets_1\Food\waterbottle\WaterBottle_01_empty_F.p3d"; // NEED TO CHANGE
// MASS 7 = 1KG
