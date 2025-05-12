/* Copyright 2018 - Association Projets Edaly. All rights reserved */

#include "\Edaly_Client\defines\base.hpp"

private _habitat = param [0, objNull, [objNull]];

if isNull(_habitat) exitWith {
    LOG_MSG("Trigger is null")
    objNull;
};

private _className = _habitat getVariable "animal_class";

if (isNil "_className") exitWith {
    LOG_MSG(format ["Missing animal_class on trigger %1", _habitat])
    objNull;
};

private _pos = [[[getPos _habitat, (triggerArea _habitat)#0]], []] call BIS_fnc_randomPos;
private _animal = [_className, _pos] call EdalyBase_fnc_createAnimal;

_animal setVariable ["home", getPosATL _animal];
_animal setVariable ["habitat", _habitat];

private _animalCfg = configFile >> "CfgAnimals" >> _className;
if (getNumber(_animalCfg >> "fish") > 0) then {
    _animal setPosASL [(getpos _animal)#0, (getpos _animal)#1, -1];
};

missionNamespace setVariable [format ["habitat_%1_animals", _habitat], (missionNamespace getVariable [format ["habitat_%1_animals", _habitat], []]) + [_animal]];
diag_log format ["Creating animal %1 for trigger %2 at %3", _className, _habitat, _pos];

_animal;
