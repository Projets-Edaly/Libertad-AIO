/* Copyright 2018 - Association Projets Edaly. All rights reserved */

params [
    ["_target", objNull, [objNull, []]],
    ["_sound", "", [""]],
    ["_distance", 0, [0]]
];

if (_sound isEqualTo "") exitWith {false};

private _cfg = configFile >> "CfgSounds" >> _sound;
if !isClass(_cfg) exitWith {false};

if ((typeName _target) isEqualTo "ARRAY") then {
    private _file = getArray(_cfg >> "sound")#0;

    if !([".ogg", _file] call BIS_fnc_inString) then {
        _file = _file + ".wss";
    };
    playSound3D [_file, objNull, false, _target, 5, 1, _distance, 0];
} else {
    if (_distance > 0) then {
        {
            if ((_target distance _x) <= _distance) then {
                [_target, _sound] remoteExecCall ["say3D", _x];
            };
        } forEach allPlayers;
    } else {
        [_target, _sound] remoteExecCall ["say3D", 0];
    };
};

true;
