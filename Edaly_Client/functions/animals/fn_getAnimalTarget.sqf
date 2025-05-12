/* Copyright 2018 - Association Projets Edaly. All rights reserved */

#include "\Edaly_Client\defines\base.hpp"

if !(params [
    ["_animal", objNull, [objNull]],
    ["_distance", 10, [0]]
]) exitWith {
    LOG_MSG("Missing parameter(s)")
    objNull;
};

if (isNull(_animal) || {!(alive _animal)}) exitWith {
    LOG_MSG("Arguments invalid value")
    objNull;
};

private _cfg = configFile >> "CfgAnimals" >> typeOf(_animal);
if !isClass(_cfg) exitWith {objNull};

private _maxDistanceFromHome = getNumber(_cfg >> "maxDistanceFromHome");
private _smellDistance = getNumber(_cfg >> "smellDistance");
private _distanceBeforeQuitTrack = getNumber(_cfg >> "attack">> "distanceBeforeQuitTrack");
private _home = _animal getVariable ["home", getPosATL _animal];
private _visibility = getNumber(_cfg >> "eyeSightMalus");
private _follow = getText(_cfg >> "surface");
private _angleView = getNumber(_cfg >> "viewAngle");
private _target = objNull;

{
    if (isNull(_target)
        || {(_target getVariable ["fainted", false]) && {!(_x getVariable ["fainted", false])}}
        || {((_x distance _animal) < (_target distance _animal)) && {!(_x getVariable ["fainted", false]) || {_target getVariable ["fainted", false]}}}
    ) then {
        _target = _x;
    };
} forEach ((_animal nearEntities _distance) select {
    alive(_x)
    && {_x isNotEqualTo _animal}
    && {typeOf(_x) != typeOf(_animal)}
    && {isNull(attachedTo _x)}
    && {(_x isKindOf "Car") || {(_x isKindOf "Man")}}
    && {(_animal distance _x) <= _distanceBeforeQuitTrack}
    && {(_animal distance2D _home) < _maxDistanceFromHome}
    && {
        (_follow isEqualTo "EVERYWHERE")
        || {(_follow isEqualTo "ONLY_IN_WATER") && {surfaceIsWater (getPos _x)}}
        || {(_follow isEqualTo "ONLY_ON_LAND") && {!(surfaceIsWater (getPos _x))}}
    } && {
        !(_x isKindOf "Car")
        || {isEngineOn _x}
        || {(fullCrew _x) isNotEqualTo []}
    } && {
        !(_x isKindOf "Man")
        || {(vehicle _x) isKindOf "Man"}
    } && {
        (
            (([_animal, "FIRE", _x] checkVisibility [eyePos _animal, eyePos _x]) > _visibility)
            && {[_animal, _x, _angleView] call EdalyBase_fnc_hasDirTo}
        ) || {(_animal distance _x) <= _smellDistance}
    }
});

_target;
