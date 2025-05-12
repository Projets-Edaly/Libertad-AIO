/* Copyright 2018 - Association Projets Edaly. All rights reserved */

if !(params [
    ["_vehicle", objNull, [objNull]],
    ["_selection", "", [""]]
]) exitWith {false};

if (_selection isEqualTo "") exitWith {false};

private _cfgSeat = configFile >> "CfgVehicles" >> typeOf(_vehicle) >> "seats" >> _selection;
if !isClass(_cfgSeat) exitWith {false};

private _door = getText(_cfgSeat >> "door");
if ((_door isNotEqualTo "") && {([_vehicle, _door] call EdalyBase_fnc_animationPhase) < 0.5}) exitWith {false};

private _isDriver = getNumber(_cfgSeat >> "isDriver");
if (_isDriver isEqualTo 1) exitWith {isNull(driver _vehicle)};

private _index = getNumber(_cfgSeat >> "cargoIndex");
private _unit = ((fullCrew [_vehicle, "cargo", true])#_index)#0;

isNull(_unit);
