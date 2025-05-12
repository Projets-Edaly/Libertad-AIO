/* Copyright 2018 - Association Projets Edaly. All rights reserved */

params ["_unit", "_source", "_damage", "_instigator"];

if !alive(_unit) exitWith {};

private _cfg = configFile >> "CfgAnimals" >> typeOf(_unit);
if !isClass(_cfg) exitWith {};

private _sounds = getArray(_cfg >> "sufferSounds");

if (_sounds isNotEqualTo []) then {
    if (time > (_unit getVariable ["SoundDammagedLock", 0])) then {
        [_unit, _sounds call BIS_fnc_selectRandom, 100] spawn EdalyBase_fnc_say3d;
        _unit setVariable ["SoundDammagedLock", time + 5];
    };
};

if (!isNull(_source) && {_source isNotEqualTo _unit} && {getNumber(_cfg >> "helpEndangeredMates") > 0}) then {
    private _surface = getText(_cfg >> "surface");
    private _baseType = typeOf(_unit);

    {
        if ((typeOf(_x) isEqualTo _baseType) && {isNull(_x getVariable ["tracking", objNull])} && {_x isNotEqualTo _unit}) then {
            _x setDestination [getPosATL _unit, "LEADER DIRECT", true];
            _x forceSpeed (_x getSpeed "FAST");
        };
    } forEach (_instigator nearEntities 70);
};
