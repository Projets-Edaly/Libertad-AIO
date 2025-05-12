/* Copyright 2018 - Association Projets Edaly. All rights reserved */

#include "\Edaly_Client\defines\base.hpp"

if !(params [
    ["_className", "", [""]],
    ["_position", [0, 0, 0], [[]], 3]
]) exitWith {
    LOG_MSG("Missing arguments")
    objNull;
};

private _animal = createAgent [_className, _position, [], 0, "CAN_COLLIDE"];

_animal setVariable ["BIS_fnc_animalBehaviour_disable", true];
_animal setBehaviour "CARELESS";
_animal addEventHandler ["Killed", "_this call EdalyBase_fnc_onAnimalKilled;"];
_animal addEventHandler ["Hit", "_this call EdalyBase_fnc_onAnimalHit;"];
_animal addEventHandler ["FiredNear", "_this call EdalyBase_fnc_onAnimalFiredNear;"];
_animal setDir round(random(360));
_animal forceSpeed (_animal getSpeed "SLOW");

_animal;
