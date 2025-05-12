/* Copyright 2018 - Association Projets Edaly. All rights reserved */

params [
    ["_target", objNull, [objNull]],
    ["_selection", "", [""]]
];

if (isNull(_target) || {_selection isEqualTo ""}) exitWith {0};

private _cfg = configFile >> "CfgVehicles" >> typeOf(_target);
private _source = getText(_cfg >> "selections" >> _selection);
if (_source isEqualTo "") exitWith {
    diag_log format ["Error: Selection %1 in %2 has no source set in selections class", _selection, typeOf(_target)];
    0;
};

_target animationSourcePhase _source;
