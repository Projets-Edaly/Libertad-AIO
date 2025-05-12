/* Copyright 2018 - Association Projets Edaly. All rights reserved */

_logic = param [0, objNull, [objNull]];
_units = param [1, [], [[]]];
_activated = param [2, true, [true]];

{
    waituntil {triggerActivated _x};
    for "_i" from 1 to (_x getVariable ["animals_count", 5]) do {
        [_x] call EdalyBase_fnc_createHabitatAnimal;
    };
} forEach (synchronizedObjects _logic);

while {true} do {
    {
        _agent = agent _x;
        if ((alive _agent) && {!(isPlayer _agent)} && {isClass(configFile >> "CfgAnimals" >> typeOf(_agent))}) then {
            [_agent] call EdalyBase_fnc_animalBehave;
        };
    } forEach agents;

    uiSleep 1;
};
