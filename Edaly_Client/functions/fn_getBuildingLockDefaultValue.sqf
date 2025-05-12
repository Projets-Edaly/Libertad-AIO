/* Copyright 2018 - Association Projets Edaly. All rights reserved */

params [
    ["_target", objNull, [objNull]],
    ["_selection", "", [""]]
];

if !isClass(missionConfigFile >> "CfgBuildings" >> typeOf(_target)) exitWith {0};

private _apartCfg = missionConfigFile >> "CfgApartments" >> typeOf(_target);

if (isClass(_apartCfg) && {(format ["'%1' in getArray(_x >> 'doors')", _selection] configClasses _apartCfg) isEqualTo []}) exitWith {0};
1;
