/* Copyright 2018 - Association Projets Edaly. All rights reserved */

private _isSound = {
    isClass(configFile >> "CfgSounds" >> _this);
};

private _itemExists = {
    isClass(configFile >> "CfgGlasses" >> _this)
    || isClass(configFile >> "CfgVehicles" >> _this)
    || isClass(configFile >> "CfgWeapons" >> _this)
    || isClass(configFile >> "CfgMagazines" >> _this);
};

private _vehicleExists = {
    isClass(configFile >> "CfgVehicles" >> _this);
};

diag_log "========================================";
diag_log "===============DEBUG====================";
diag_log "========================================";

diag_log "=====[CfgWeapons]=====";
diag_log "Checking...";

private _avoid = [
    "gatling_20mm",
    "missiles_Jian",
    "HMG_127_LSV_01",
    "MMG_02_vehicle",
    "gatling_20mm_VTOL_01",
    "autocannon_40mm_VTOL_01",
    "cannon_105mm_VTOL_01",
    "gatling_30mm_VTOL_02",
    "weapon_Cannon_Phalanx",
    "weapon_rim116Launcher",
    "weapon_Fighter_Gun20mm_AA",
    "weapon_AMRAAMLauncher",
    "weapon_BIM9xLauncher",
    "weapon_AGM_65Launcher",
    "weapon_GBU12Launcher",
    "weapon_Fighter_Gun_30mm",
    "weapon_R73Launcher",
    "weapon_AGM_KH25Launcher",
    "weapon_KAB250Launcher",
    "BombCluster_01_F",
    "BombDemine_01_F",
    "Bomb_Leaflets",
    "AmbulanceHorn",
    "PoliceHorn",
    "launcher_SPG9",
    "cannon_20mm",
    "cannon_125mm_advanced",
    "missiles_SAAMI",
    "missiles_Firefist",
    "missiles_Vorona",
    "MMG_01_vehicle",
    "MMG_02_coax",
    "autocannon_30mm_RCWS",
    "HMG_127_AFV",
    "weapon_VLS_01",
    "weapon_ShipCannon_120mm",
    "weapon_mim145Launcher",
    "weapon_s750Launcher",
    "weapon_HARMLauncher",
    "weapon_SDBLauncher",
    "weapon_KH58Launcher",
    "DeminingDisruptor_01_base_f",
    "ProbingWeapon_01_F",
    "Item_AntidoteKit_01_F",
    "Item_DeconKit_01_F",
    "DeminingDisruptor_01_F",
    "ProbingLaser_01_F",
    "ChemicalDetector_01_base_F",
    "weapon_rim162Launcher",
    "weapon_R77Launcher",
    "BombCluster_02_F",
    "BombCluster_03_F",
    "ProbingWeapon_02_F",
    "Zasleh2",
    "Missile_AGM_01_Plane_CAS_02_F",
    "Rocket_03_HE_Plane_CAS_02_F",
    "Rocket_03_AP_Plane_CAS_02_F",
    "HMG_127_MBT",
    "HandGunBase",
    "Throw",
    "Put",
    "CarHorn",
    "BikeHorn",
    "TruckHorn",
    "TruckHorn2",
    "TruckHorn3",
    "SportCarHorn",
    "MiniCarHorn",
    "FakeHorn",
    "cannon_120mm",
    "cannon_125mm",
    "cannon_105mm",
    "gatling_25mm",
    "autocannon_35mm",
    "mortar_155mm_AMOS",
    "missiles_Zephyr",
    "weapon_LGBLauncherBase",
    "GBU12BombLauncher",
    "GBU12BombLauncher_Plane_Fighter_03_F",
    "Bomb_04_Plane_CAS_01_F",
    "Bomb_03_Plane_CAS_02_F",
    "Mk82BombLauncher",
    "rockets_230mm_GAT",
    "LMG_coax",
    "LMG_coax_ext",
    "autocannon_30mm",
    "cannon_120mm_long",
    "Twin_Cannon_20mm",
    "Gatling_30mm_Plane_CAS_01_F",
    "Missile_AA_04_Plane_CAS_01_F",
    "Missile_AGM_02_Plane_CAS_01_F",
    "Rocket_04_HE_Plane_CAS_01_F",
    "Rocket_04_AP_Plane_CAS_01_F",
    "Cannon_30mm_Plane_CAS_02_F",
    "Missile_AA_03_Plane_CAS_02_F",
    "Laserdesignator_mounted",
    "Laserdesignator_vehicle",
    "Laserdesignator_pilotCamera",
    "autocannon_Base_F",
    "autocannon_40mm_CTWS",
    "autocannon_30mm_CTWS",
    "gatling_30mm",
    "missiles_ASRAAM",
    "missiles_SCALPEL",
    "missiles_titan",
    "missiles_titan_AA",
    "missiles_titan_static",
    "rockets_Skyfire",
    "LMG_Minigun2",
    "LMG_Minigun_Transport",
    "LMG_Minigun_Transport2",
    "SEARCHLIGHT",
    "SmokeLauncher",
    "FlareLauncher",
    "CMFlareLauncher",
    "CMFlareLauncher_Singles",
    "CMFlareLauncher_Triples",
    "M134_minigun",
    "mortar_82mm",
    "MissileLauncher",
    "weapon_VLSBase",
    "missiles_DAGR",
    "missiles_DAR",
    "GMG_20mm",
    "GMG_40mm",
    "M2",
    "LMG_RCWS",
    "LMG_65mm_body",
    "LMG_M200",
    "LMG_M200_body",
    "LMG_Minigun",
    "LMG_Minigun_heli",
    "HMG_127",
    "HMG_127_APC",
    "HMG_127_UGV",
    "HMG_01",
    "HMG_static",
    "HMG_M2",
    "HMG_M2_Mounted",
    "HMG_NSVT",
    "FakeWeapon",
    "Rifle",
    "MeleeWeapon",
    "RocketPods"
];

{
    /*
    if !isClass(configFile >> "CfgVehicles" >> format ["Land_Edaly_%1", configName _x]) then {
        diag_log format ["[ERROR] %1 has no match in CfgVehicles. Land_Edaly_%1 should exist", configName _x];
    };
    */
    if (((configName _x) call EdalyInv_fnc_getItemMass) < 1) then {
        diag_log format ["[WARN] %1 has a mass inferior to 1 (%2)", configName _x, getNumber(_x >> "ItemInfo" >> "mass")];
    };
    if (getText(_x >> "picture") isEqualTo "") then {
        diag_log format ["[WARN] %1 has no picture", configName _x];
    };
    if (getText(_x >> "author") isNotEqualTo (localize "STR_EDALY_AUTHOR")) then {
        diag_log format ["[WARN] %1 author is not set to %2 (STR_EDALY_AUTHOR)", configName _x, localize "STR_EDALY_AUTHOR"];
    };
    if (["Edaly_Item_PH_01_F.paa", getText(_x >> "picture")] call BIS_fnc_inString) then {
        diag_log format ["[WARN] %1 has a placeholder as picture", configName _x];
    };
    if ((["WaterBottle_01_empty_F.p3d", getText(_x >> "model")] call BIS_fnc_inString)
        && {(configName _x) isNotEqualTo "Item_Water_Bottle_Empty"}) then {
        diag_log format ["[WARN] %1 has a placeholder as model", configName _x];
    };
} forEach ("
    !((configName _x) in _avoid)
    && getNumber(_x >> 'scope') > 0
    && !(getText(_x >> 'author') isEqualTo 'Bohemia Interactive')
    && !(getText(_x >> 'author') isEqualTo 'Raspu')
    && !(getText(_x >> 'author') isEqualTo 'Raspu, Nkey')
    && !isText(_x >> 'complexItemParent')
    && {getText(_x >> 'DLC') isEqualTo ''}
" configClasses (configFile >> "CfgWeapons"));

diag_log "Done!";

diag_log "=====[CfgCrafts]=====";
diag_log "Checking...";

{
    _cfg = _x;

    if (isText(_cfg >> "weapons") && !(getText(_cfg >> "weapons") call _itemExists)) then {
        diag_log format ["[ERROR] mandatory tool %1 in craft %2 does not exist in the game", getText(_cfg >> "weapons"), configName _cfg];
    };
    if (isText(_cfg >> "created") && !(getText(_cfg >> "created") call _vehicleExists)) then {
        diag_log format ["[ERROR] created object %1 in craft %2 does not exist in the game", getText(_cfg >> "created"), configName _cfg];
    };
    if !((getNumber(_cfg >> "time") % 2) isEqualTo 0) then {
        diag_log format ["[ERROR] craft %1 time should pair, actually is %2", configName _cfg, getNumber(_cfg >> "time")];
    };
    if (getText(_cfg >> "sound") isEqualTo "") then {
        diag_log format ["[WARN] craft %1 has no sound", configName _cfg];
    } else {
        if !(getText(_cfg >> "sound") call _isSound) then {
            diag_log format ["[ERROR] craft %1 sound %2 does not exist in the game", configName _cfg, getText(_cfg >> "sound")];
        };
    };
    if (getText(_cfg >> "animation") isEqualTo "") then {
        diag_log format ["[WARN] craft %1 has no animation", configName _cfg];
    };

    {
        if !((_x#0) call _itemExists) then {
            diag_log format ["[ERROR] required item %1 in craft %2 does not exist in the game", _x#0, configName _cfg];
        };
    } forEach getArray(_cfg >> "required");

    {
        if !((_x#0) call _itemExists) then {
            diag_log format ["[ERROR] received item %1 in craft %2 does not exist in the game", _x#0, configName _cfg];
        };
    } forEach getArray(_cfg >> "received");
} forEach ("true" configClasses (missionConfigFile >> "CfgCrafts"));

diag_log "Done!";

diag_log "=====[CfgOres]=====";
diag_log "Checking...";

// check if marker exist

{
    _cfg = _x;

    if (getText(_cfg >> "broken") isNotEqualTo "" && !(getText(_cfg >> "broken") call _vehicleExists)) then {
        diag_log format ["[ERROR] broken to object %1 in ore %2 does not exist in the game", getText(_cfg >> "broken"), configName _cfg];
    };
    if (getText(_cfg >> "broken") isNotEqualTo "" && !isClass(missionConfigFile >> "CfgOres" >> getText(_cfg >> "broken"))) then {
        diag_log format ["[ERROR] broken to object %1 in ore %2 is not defined in CfgOres", getText(_cfg >> "broken"), configName _cfg];
    };

    if (isText(_cfg >> "create") && !(getText(_cfg >> "create") call _vehicleExists)) then {
        diag_log format ["[ERROR] created object %1 in ore %2 does not exist in the game", getText(_cfg >> "create"), configName _cfg];
    };
    if (isText(_cfg >> "create") && !isClass(missionConfigFile >> "CfgOres" >> getText(_cfg >> "create"))) then {
        diag_log format ["[ERROR] created object %1 in ore %2 is not defined in CfgOres", getText(_cfg >> "create"), configName _cfg];
    };

    {
        if !((_x#0) call _itemExists) then {
            diag_log format ["[ERROR] dropped item %1 in ore %2 does not exist in the game", _x#0, configName _cfg];
        };
    } forEach getArray(_cfg >> "drop");
} forEach ("true" configClasses (missionConfigFile >> "CfgOres"));

diag_log "Done!";

diag_log "=====[CfgTrees]=====";
diag_log "Checking...";

{
    _cfg = _x;

    {
        if !((_x#0) call _itemExists) then {
            diag_log format ["[ERROR] dropped item %1 in tree %2 does not exist in the game", _x#0, configName _cfg];
        };
    } forEach getArray(_cfg >> "drop");
} forEach ("true" configClasses (missionConfigFile >> "CfgTrees"));

diag_log "Done!";

diag_log "=====[CfgConsumables]=====";
diag_log "Checking...";

{
    if !((configName _x) call _itemExists) then {
        diag_log format ["[ERROR] consumable %1 does not exist in the game", configName _x];
    };
    if !(getText(_x >> "item") call _vehicleExists) then {
        diag_log format ["[ERROR] object %2 in consumable %1 does not exist in the game", configName _x, getText(_x >> "item")];
    };
    if (getText(_x >> "sound") isEqualTo "") then {
        diag_log format ["[WARN] consumable %1 has no sound", configName _x];
    } else {
        if !(getText(_x >> "sound") call _isSound) then {
            diag_log format ["[ERROR] consumable %1 sound %2 does not exist in the game", configName _x, getText(_x >> "sound")];
        };
    };
    if !(getText(_x >> "action") in ["eat", "drink"]) then {
        diag_log format ["[ERROR] consumable %1 action should be 'eat' or 'drink'", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgConsumables"));

diag_log "Done!";

diag_log "=====[CfgAxes]=====";
diag_log "Checking...";

{
    if !((configName _x) call _itemExists) then {
        diag_log format ["[ERROR] Axe %1 does not exist in the game", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgAxes"));

diag_log "Done!";

diag_log "=====[CfgPickaxes]=====";
diag_log "Checking...";

{
    if !((configName _x) call _itemExists) then {
        diag_log format ["[ERROR] Pickaxe %1 does not exist in the game", configName _x];
    };
    if isNumber(_x >> "chance") then {
        if (getNumber(_x >> "chance") isEqualTo 0) then {
            diag_log format ["[ERROR] Pickaxe %1 chance attribute should be superior to 0", configName _x];
        };
    } else {
        diag_log format ["[ERROR] Pickaxe %1 has no attribute chance", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgPickaxes"));

diag_log "Done!";

diag_log "=====[CfgTrashcans]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Trashcan %1 does not exist in the game", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgTrashcans"));

diag_log "Done!";

diag_log "=====[CfgTrade]=====";
diag_log "Checking...";

_cfg = missionConfigFile >> "CfgTrade";

if !(getText(_cfg >> "crateClass") call _vehicleExists) then {
    diag_log format ["[ERROR] Crate %1 does not exist in the game", getText(_cfg >> "crateClass")];
};
if !(getText(_cfg >> "boatClass") call _vehicleExists) then {
    diag_log format ["[ERROR] Boat %1 does not exist in the game", getText(_cfg >> "boatClass")];
};

diag_log "Done!";

diag_log "=====[CfgRepair]=====";
diag_log "Checking...";

{
    if (!isText(_x >> "name") || {getText(_x >> "name") isEqualTo ""}) then {
        diag_log format ["[ERROR] Hitpoint %1 has no name", configName _x];
    };
    if ((getText(_x >> "tool") isNotEqualTo "") && !(getText(_x >> "tool") call _itemExists)) then {
        diag_log format ["[ERROR] Tool %2 in Hitpoint %1 does not exist in the game", configName _x, getText(_x >> "tool")];
    };
    if ((getText(_x >> "item") isNotEqualTo "") && !(getText(_x >> "item") call _itemExists)) then {
        diag_log format ["[ERROR] Required item %2 in Hitpoint %1 does not exist in the game", configName _x, getText(_x >> "item")];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgRepair"));

diag_log "Done!";

diag_log "=====[CfgPlants]=====";
diag_log "Checking...";

{
    _cfg = _x;

    if !((configName _cfg) call _vehicleExists) then {
        diag_log format ["[ERROR] Plant %1 does not exist in the game", configName _cfg];
    };

    {
        if !((_x#0) call _itemExists) then {
            diag_log format ["[ERROR] Received item %1 in plant %2 does not exist in the game", _x#0, configName _cfg];
        };
    } forEach getArray(_cfg >> "receive");
} forEach ("true" configClasses (missionConfigFile >> "CfgPlants"));

diag_log "Done!";

diag_log "=====[CfgMoney]=====";
diag_log "Checking...";

{
    if !((configName _x) call _itemExists) then {
        diag_log format ["[ERROR] Item %1 does not exist in the game", configName _x];
    };
    if (!isNumber(_x >> "value") || (getNumber(_x >> "value") isEqualTo 0)) then {
        diag_log format ["[ERROR] Item %1 has no value defined", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgMoney"));

diag_log "Done!";

diag_log "=====[CfgBuildings]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Building %1 does not exist in the game", configName _x];
    };
    if (!isNumber(_x >> "price") || (getNumber(_x >> "price") isEqualTo 0)) then {
        diag_log format ["[ERROR] Building %1 has no price", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgBuildings"));

diag_log "Done!";

diag_log "=====[CfgApartments]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Building %1 does not exist in the game", configName _x];
    };
    if !isClass(missionConfigFile >> "CfgBuildings" >> (configName _x)) then {
        diag_log format ["[ERROR] Apartment %1 should also be defined in CfgBuildings", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgApartments"));

diag_log "Done!";

diag_log "=====[CfgParkings]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Building %1 does not exist in the game", configName _x];
    };
    if !isClass(missionConfigFile >> "CfgBuildings" >> (configName _x)) then {
        diag_log format ["[ERROR] Parking %1 should also be defined in CfgBuildings", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgParkings"));

diag_log "Done!";

diag_log "=====[CfgHouses]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Building %1 does not exist in the game", configName _x];
    };
    if !isClass(missionConfigFile >> "CfgBuildings" >> (configName _x)) then {
        diag_log format ["[ERROR] House %1 should also be defined in CfgBuildings", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgHouses"));

diag_log "Done!";

diag_log "=====[CfgFaces]=====";
diag_log "Checking...";

{
    if !isClass(configFile >> "CfgFaces" >> "Man_A3" >> (configName _x)) then {
        diag_log format ["[ERROR] Face %1 does not exist in the game", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgFaces"));

diag_log "Done!";

diag_log "=====[CfgFurnitures]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Object %1 does not exist in the game", configName _x];
    };

    _cfg = _x;
    {
        if !(_x call _vehicleExists) then {
            diag_log format ["[ERROR] Whitelisted building %1 in furniture %2 does not exist in the game", _x, configName _cfg];
        };
    } forEach getArray(_x >> "whiteList");
} forEach ("true" configClasses (missionConfigFile >> "CfgFurnitures"));

diag_log "Done!";

diag_log "=====[CfgFurnaces]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Object %1 does not exist in the game", configName _x];
    };
    if !isClass(missionConfigFile >> "CfgFurnitures" >> (configName _x)) then {
        diag_log format ["[ERROR] Furnace %1 should also be defined in CfgFurnitures", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgFurnaces"));

diag_log "Done!";

diag_log "=====[CfgCraftingTables]=====";
diag_log "Checking...";

{
    _cfg = _x;

    if !((configName _cfg) call _vehicleExists) then {
        diag_log format ["[ERROR] Object %1 does not exist in the game", configName _cfg];
    };
    if !isClass(missionConfigFile >> "CfgFurnitures" >> (configName _cfg)) then {
        diag_log format ["[ERROR] Crafting table %1 should also be defined in CfgFurnitures", configName _cfg];
    };

    {
        if !isClass(missionConfigFile >> "CfgCrafts" >> _x) then {
            diag_log format ["[ERROR] Craft %1 in crafting table %2 does not exist in CfgCrafts", _x, configName _cfg];
        };
    } forEach getArray(_cfg >> "crafts");
} forEach ("true" configClasses (missionConfigFile >> "CfgCraftingTables"));

diag_log "Done!";

diag_log "=====[CfgPhonographs]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Object %1 does not exist in the game", configName _x];
    };
    if !isClass(missionConfigFile >> "CfgFurnitures" >> (configName _x)) then {
        diag_log format ["[ERROR] Phonograph %1 should also be defined in CfgFurnitures", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgPhonographs"));

diag_log "Done!";

diag_log "=====[CfgRadios]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Object %1 does not exist in the game", configName _x];
    };
    if !isClass(missionConfigFile >> "CfgFurnitures" >> (configName _x)) then {
        diag_log format ["[ERROR] Radio %1 should also be defined in CfgFurnitures", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgRadios"));

diag_log "Done!";

diag_log "=====[CfgDesks]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Object %1 does not exist in the game", configName _x];
    };
    if !isClass(missionConfigFile >> "CfgFurnitures" >> (configName _x)) then {
        diag_log format ["[ERROR] Desk %1 should also be defined in CfgFurnitures", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgDesks"));

diag_log "Done!";

diag_log "=====[CfgChairs]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Object %1 does not exist in the game", configName _x];
    };
    if !isClass(missionConfigFile >> "CfgFurnitures" >> (configName _x)) then {
        diag_log format ["[ERROR] Chair %1 should also be defined in CfgFurnitures", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgChairs"));

diag_log "Done!";

diag_log "=====[CfgBeds]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Object %1 does not exist in the game", configName _x];
    };
    if !isClass(missionConfigFile >> "CfgFurnitures" >> (configName _x)) then {
        diag_log format ["[ERROR] Bed %1 should also be defined in CfgFurnitures", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgBeds"));

diag_log "Done!";

diag_log "=====[CfgContainers]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Object %1 does not exist in the game", configName _x];
    };
    if !isClass(missionConfigFile >> "CfgFurnitures" >> (configName _x)) then {
        diag_log format ["[ERROR] Container %1 should also be defined in CfgFurnitures", configName _x];
    };
    if (!isNumber(_x >> "maximumLoad") || (getNumber(_x >> "maximumLoad") isEqualTo 0)) then {
        diag_log format ["[ERROR] Container %1 has no maximum load (maximumLoad)", configName _x];
    };
    if !isClass(_x >> "rows") then {
        diag_log format ["[WARN] Container %1 has no rows definition. No items will be displayed when container is fulfilled", configName _x];
    };

    _cfg = _x;

    {
        if !(_x call _itemExists) then {
            diag_log format ["[ERROR] Allowed item %1 in container %2 does not exist in the game", _x, configName _cfg];
        };
    } forEach getArray(_x >> "allowed");
} forEach ("true" configClasses (missionConfigFile >> "CfgContainers"));

diag_log "Done!";

diag_log "=====[CfgArchives]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Object %1 does not exist in the game", configName _x];
    };
    if !isClass(missionConfigFile >> "CfgFurnitures" >> (configName _x)) then {
        diag_log format ["[ERROR] Archive %1 should also be defined in CfgFurnitures", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgArchives"));

diag_log "Done!";

diag_log "=====[CfgCashRegisters]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Object %1 does not exist in the game", configName _x];
    };
    if !isClass(missionConfigFile >> "CfgFurnitures" >> (configName _x)) then {
        diag_log format ["[ERROR] Cash register %1 should also be defined in CfgFurnitures", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgCashRegisters"));

diag_log "Done!";

diag_log "=====[CfgAnimals]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Animal %1 does not exist in the game", configName _x];
    };

    _animal = _x;

    if (getArray(_x >> "skinItems") isEqualTo []) then {
        diag_log format ["[WARN] Animal %1 does not have skin items. Nothing will be collected from it.", configName _x];
    } else {
        {
            if !((_x#0) call _itemExists) then {
                diag_log format ["[ERROR] Animal %1 skin item %2 does not exist in the game", configName _animal, _x#0];
            };
            if ((_x#1) <= 0) then {
                diag_log format ["[ERROR] Animal %1 skin item %2 has an invalid quantity", configName _animal, _x#0];
            };
        } forEach getArray(_x >> "skinItems");
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgAnimals"));

diag_log "Done!";

diag_log "=====[CfgManuscritFonts]=====";
diag_log "Checking...";

{
    if !isClass(configFile >> "CfgFontFamilies" >> (configName _x)) then {
        diag_log format ["[ERROR] Font %1 does not exist in the game", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgManuscritFonts"));

diag_log "Done!";

diag_log "=====[CfgPhones]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Object %1 does not exist in the game", configName _x];
    };
    if !isClass(missionConfigFile >> "CfgFurnitures" >> (configName _x)) then {
        diag_log format ["[ERROR] Phone %1 should also be defined in CfgFurnitures", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgPhones"));

diag_log "Done!";

diag_log "=====[CfgTVs]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Object %1 does not exist in the game", configName _x];
    };
    if !isClass(missionConfigFile >> "CfgFurnitures" >> (configName _x)) then {
        diag_log format ["[ERROR] TV %1 should also be defined in CfgFurnitures", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgTVs"));

diag_log "Done!";

diag_log "=====[CfgDisplays]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Object %1 does not exist in the game", configName _x];
    };
    if !isClass(missionConfigFile >> "CfgFurnitures" >> (configName _x)) then {
        diag_log format ["[ERROR] Display %1 should also be defined in CfgFurnitures", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgDisplays"));

diag_log "Done!";

diag_log "=====[CfgGasPumps]=====";
diag_log "Checking...";

{
    if !((configName _x) call _vehicleExists) then {
        diag_log format ["[ERROR] Object %1 does not exist in the game", configName _x];
    };
    if !isClass(missionConfigFile >> "CfgFurnitures" >> (configName _x)) then {
        diag_log format ["[ERROR] Gas pump %1 should also be defined in CfgFurnitures", configName _x];
    };
} forEach ("true" configClasses (missionConfigFile >> "CfgGasPumps"));

diag_log "Done!";

if isClass(configFile >> "CfgTradePartners") then {
    diag_log "=====[CfgTradePartners]=====";

    diag_log "Checking...";

    {
        if !(isText(_x >> "name")) then {
            diag_log format ["[ERROR] CfgTradePartners >> '%1' does not have a name", configName _x];
        };
        if !(isText(_x >> "address")) then {
            diag_log format ["[ERROR] CfgTradePartners >> '%1' does not have an address", configName _x];
        };
        if !(isNumber(_x >> "factor")) then {
            diag_log format ["[WARN] CfgTradePartners >> '%1' does not have a price factor", configName _x];
        };
        if !(isText(_x >> "country")) then {
            diag_log format ["[ERROR] CfgTradePartners >> '%1' does not have a country", configName _x];
        } else {
            if !isClass(missionConfigFile >> "CfgCountries" >> getText(_x >> "country")) then {
                diag_log format ["[ERROR] CfgTradePartners >> '%1' country %2 is not defined in CfgCountries", configName _x, getText(_x >> "country")];
            };
        };
        if (!isClass(_x >> "sell") && {!isClass(_x >> "purchase")}) then {
            diag_log format ["[WARN] CfgTradePartners >> '%1' does not sell or buy anything", configName _x];
        };

        _partner = _x;

        {
            if !(getText(_x >> "type") in ["vehicle", "object", "item"]) then {
                diag_log format ["[ERROR] CfgTradePartners >> '%1' >> 'sell' >> '%2' has an invalid type", configName _partner, configName _x, getText(_x >> "type")];
            };
            if (getNumber(_x >> "price") <= 0) then {
                diag_log format ["[ERROR] CfgTradePartners >> '%1' >> 'sell' >> '%2' has an invalid price (%3)", configName _partner, configName _x, getNumber(_x >> "price")];
            };
            if ((getText(_x >> "type") isEqualTo "item") && {!((configName _x) call _itemExists)}) then {
                diag_log format ["[ERROR] CfgTradePartners >> '%1' >> 'sell' >> '%2' is defined as an item but it does not exist in the game", configName _partner, configName _x];
            };
            if ((getText(_x >> "type") isEqualTo "vehicle") && {!((configName _x) call _vehicleExists)}) then {
                diag_log format ["[ERROR] CfgTradePartners >> '%1' >> 'sell' >> '%2' is defined as a vehicle but it does not exist in the game", configName _partner, configName _x];
            };
            if ((getText(_x >> "type") isEqualTo "object") && {!((configName _x) call _vehicleExists)}) then {
                diag_log format ["[ERROR] CfgTradePartners >> '%1' >> 'sell' >> '%2' is defined as an object but it does not exist in the game", configName _partner, configName _x];
            };
            if ((getText(_x >> "type") isEqualTo "item") && {getNumber(_x >> "min") <= 0}) then {
                diag_log format ["[ERROR] CfgTradePartners >> '%1' >> 'sell' >> '%2' must have a minimum quantity (min=X;)", configName _partner, configName _x];
            };
            if ((getText(_x >> "type") isEqualTo "item") && {getNumber(_x >> "max") <= 0}) then {
                diag_log format ["[ERROR] CfgTradePartners >> '%1' >> 'sell' >> '%2' must have a maximum quantity (max=X;)", configName _partner, configName _x];
            };
            if ((getText(_x >> "type") isEqualTo "item") && {getNumber(_x >> "max") <= getNumber(_x >> "min")}) then {
                diag_log format ["[ERROR] CfgTradePartners >> '%1' >> 'sell' >> '%2' must have a maximum quantity superior to its minimum quantity", configName _partner, configName _x];
            };

            _sell = _x;

            {
                if !((configName _x) call _itemExists) then {
                    diag_log format ["[ERROR] CfgTradePartners >> '%1' >> 'sell' >> '%2' >> perItem >> '%3' does not exist in the game", configName _partner, configName _sell, configName _x];
                };
                if (getNumber(_x >> "min") < 0) then {
                    diag_log format ["[ERROR] CfgTradePartners >> '%1' >> 'sell' >> '%2' >> perItem >> '%3' must have a minimum quantity (min=X;)", configName _partner, configName _sell, configName _x];
                };
                if (getNumber(_x >> "max") <= 0) then {
                    diag_log format ["[ERROR] CfgTradePartners >> '%1' >> 'sell' >> '%2' >> perItem >> '%3' must have a maximum quantity (max=X;)", configName _partner, configName _sell, configName _x];
                };
                if (getNumber(_x >> "max") <= getNumber(_x >> "min")) then {
                    diag_log format ["[ERROR] CfgTradePartners >> '%1' >> 'sell' >> '%2' >> perItem >> '%3' must have a maximum quantity superior to its minimum count", configName _partner, configName _sell, configName _x];
                };
            } forEach ("true" configClasses (_x >> "perItem"));
        } forEach ("true" configClasses (_x >> "sell"));

        {
            if !(getText(_x >> "type") in ["vehicle", "object", "item"]) then {
                diag_log format ["[ERROR] CfgTradePartners >> '%1' >> 'purchase' >> '%2' has an invalid type", configName _partner, configName _x, getText(_x >> "type")];
            };
            if (getNumber(_x >> "price") <= 0) then {
                diag_log format ["[ERROR] CfgTradePartners >> '%1' >> 'purchase' >> '%2' has an invalid price (%3)", configName _partner, configName _x, getNumber(_x >> "price")];
            };
            if ((getText(_x >> "type") isEqualTo "item") && {!((configName _x) call _itemExists)}) then {
                diag_log format ["[ERROR] CfgTradePartners >> '%1' >> 'purchase' >> '%2' is defined as an item but it does not exist in the game", configName _partner, configName _x];
            };
            if ((getText(_x >> "type") isEqualTo "vehicle") && {!((configName _x) call _vehicleExists)}) then {
                diag_log format ["[ERROR] CfgTradePartners >> '%1' >> 'purchase' >> '%2' is defined as a vehicle but it does not exist in the game", configName _partner, configName _x];
            };
            if ((getText(_x >> "type") isEqualTo "object") && {!((configName _x) call _vehicleExists)}) then {
                diag_log format ["[ERROR] CfgTradePartners >> '%1' >> 'purchase' >> '%2' is defined as an object but it does not exist in the game", configName _partner, configName _x];
            };
        } forEach ("true" configClasses (_x >> "purchase"));
    } forEach ("true" configClasses (configFile >> "CfgTradePartners"));

    diag_log "Done!";
};
