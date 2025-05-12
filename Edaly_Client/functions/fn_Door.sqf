/* Copyright 2018 - Association Projets Edaly. All rights reserved */

params [
    ["_structure", objNull, [objNull]],
    ["_type", "", [""]],
    ["_door", 0, [0]],
    ["_state", 0, [0]]
];

if (!(isNull (_structure))) then {
    if ((_structure getVariable [format ["bis_disabled_Door_%1", _door], 0]) != 1) then {
        _structure animateSource [format ["%1_%2_source", _type, _door], _state];
    } else {
        _structure animateSource [
            format ["%1_%2_locked_source", _type, _door],
            (1 - (_structure animationSourcePhase (format ["%1_%2_locked_source", _type, _door])))
        ];
    };
};
