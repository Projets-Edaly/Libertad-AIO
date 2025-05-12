/* Copyright 2018 - Association Projets Edaly. All rights reserved */

if !(params [
    ["_target", objNull, [objNull]],
    ["_selection", "", [""]],
    ["_phase", 0, [0]]
]) exitWith {false};

if (isNull(_target) || {_selection isEqualTo ""}) exitWith {false};

private _cfg = configFile >> "CfgVehicles" >> typeOf(_target);
private _source = getText(_cfg >> "selections" >> _selection);
if (_source isEqualTo "") exitWith {
    diag_log format ["Error: Selection %1 in %2 has no source set in selections class", _selection, typeOf(_target)];
    false;
};

private _speed = _this#3;
if (isNil "_speed") then {
    _target animateSource [getText(_cfg >> "selections" >> _selection), _phase];
} else {
    _target animateSource [getText(_cfg >> "selections" >> _selection), _phase, _speed];
};

true;
