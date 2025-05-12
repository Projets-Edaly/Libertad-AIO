/* Copyright 2018 - Association Projets Edaly. All rights reserved */

params ["_unit", "_killer", "_instigator", "_useEffects"];

private _habitat = _unit getVariable ["habitat", ""];

if (_habitat isNotEqualTo "") then {
    [_habitat] call EdalyBase_fnc_createHabitatAnimal;
    missionNamespace setVariable [format ["habitat_%1_animals", _habitat], (missionNamespace getVariable [format ["habitat_%1_animals", _habitat], []]) - [_unit]];
};
