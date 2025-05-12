/* Copyright 2018 - Association Projets Edaly. All rights reserved */

private _animal = param [0, objNull, [objNull]];

if !(isNil {_animal getVariable "tracking"}) exitWith {};

private _habitat = _animal getVariable ["habitat", objNull];
private _animalCfg = configFile >> "CfgAnimals" >> typeOf(_animal);
private _visibility = getNumber(_animalCfg >> "eyeSightMalus");
private _maxDistanceFromHome = getNumber(_animalCfg >> "maxDistanceFromHome");
private _home = _animal getVariable ["home", getPosATL _animal];
private _surface = getText(_animalCfg >> "surface");
private _handled = false;

if isClass(_animalCfg >> "attack") then {
    _target = [_animal, 50] call EdalyBase_fnc_getAnimalTarget;
    if !(isNull _target) then {
        [_animal, _target, _surface] spawn EdalyBase_fnc_animalAttack;
        _handled = true;
    };
};

if !_handled then {
    if (time > (_animal getVariable ["SoundRoamLock", 0]) && {random(100) <= 30}) then {
        [_animal, getArray(_animalCfg >> "roamSounds") call BIS_fnc_selectRandom, 100] spawn EdalyBase_fnc_say3d;
        _animal setVariable ["SoundRoamLock", time + 20];
    };

    if (!isNull(_habitat) && {(_animal distance2D _habitat) > (_maxDistanceFromHome * 1.2)}) then {
        if (((((expectedDestination _animal)#0) distance2D _home) > 2) || {((expectedDestination _animal)#1) isEqualTo "DoNotPlan"}) then {
            _animal setDestination [_home, "LEADER PLANNED", true];
            _animal forceSpeed (_animal getSpeed "FAST");
        };
    } else {
        if ((((_animal distance ((expectedDestination _animal)#0)) < 4) || {((expectedDestination _animal)#1) isEqualTo "DoNotPlan"}) && {random(100) <= 15}) then {
            _animal forceSpeed (_animal getSpeed "SLOW");
            _pos = [
                [[getPos _animal, 20]],
                [],
                {
                    _isWater = surfaceIsWater _this;
                    (!_isWater && {_surface isEqualTo "ONLY_ON_LAND"})
                    || {_isWater && {_surface isEqualTo "ONLY_IN_WATER"}}
                    || {_surface isEqualTo "EVERYWHERE"};
                }
            ] call BIS_fnc_randomPos;
            _animal setDestination [_pos, "LEADER PLANNED", true];
        };
    };
};
