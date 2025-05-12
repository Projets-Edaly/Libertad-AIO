/* Copyright 2018 - Association Projets Edaly. All rights reserved */

params [
    ["_source", objNull, [objNull]],
    ["_target", objNull, [objNull, 0]],
    ["_viewAngle", 120, [0]]
];

private _angle = _viewAngle / 2;
private _dir = if ((typeName _target) isEqualTo "SCALAR") then {_target} else {[_source, _target] call BIS_fnc_dirTo};
private _min = ([_dir - _angle] call CBA_fnc_simplifyAngle) min ([_dir + _angle] call CBA_fnc_simplifyAngle);
private _max = ([_dir - _angle] call CBA_fnc_simplifyAngle) max ([_dir + _angle] call CBA_fnc_simplifyAngle);

if (((_dir - 30) < 0) || {(_dir + 30) >= 360}) exitWith {(getDir _source) <= _min || {(getDir _source) >= _max}};
((getDir _source) >= _min && {(getDir _source) <= _max});
