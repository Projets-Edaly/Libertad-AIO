/* Copyright 2018 - Association Projets Edaly. All rights reserved */

params [
	["_name", "", [""]],
	["_pos", [], []],
	["_msg", "", [""]],
	["_seconds", 300, [300]]
];

if ((_name isEqualTo "") || {_pos isEqualTo []}) exitWith {};

deleteMarkerLocal _name;

private _marker = createMarkerLocal [_name, _pos];
_marker setMarkerShapeLocal "ICON";
_marker setMarkerTypeLocal "mil_dot";
_marker setMarkerColorLocal "ColorRed";
_marker setMarkerTextLocal (format ["%2 %1", _name, _msg]);

uiSleep _seconds;

deleteMarkerLocal _name;
