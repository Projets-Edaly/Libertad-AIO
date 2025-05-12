/* Copyright 2018 - Association Projets Edaly. All rights reserved */

params ["_unit", "_firer", "_distance", "_weapon", "_muzzle", "_mode", "_ammo", "_gunner"];

if !alive(_unit) exitWith {};

private _cfg = configFile >> "CfgAnimals" >> typeOf(_unit);
if !isClass(_cfg) exitWith {};

if isNull(_unit getVariable ["tracking", objNull]) then {
    private _maxDistanceFromHome = getNumber(_cfg >> "maxDistanceFromHome");
    private _home = _unit getVariable ["home", getPosATL _unit];
    private _pos = [
        [[getPos _unit, (_distance max 50) min 80]],
        [],
        {
            ((_this distance _home) < _maxDistanceFromHome)
            && {(_unit distance _this) > _distance}
            && {([_unit, "FIRE", _firer] checkVisibility [eyePos _firer, _this]) < 0.1}
        }
    ] call BIS_fnc_randomPos;

    if ((_pos isNotEqualTo [0, 0]) && {_pos isNotEqualTo []}) then {
        _unit setDestination [_pos, "LEADER PLANNED", true];
        _unit forceSpeed (_unit getSpeed "FAST");
    };
};
