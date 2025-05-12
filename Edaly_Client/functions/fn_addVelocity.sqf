/* Copyright 2018 - Association Projets Edaly. All rights reserved */

params [
	["_target", objNull, [objNull]],
	["_type", false, [false]],
	["_speed", 10, [0]],
	["_height", 0, [0]]
];

private _vel = velocity _target;
private _dir = direction _target;

if _type then {
	[_target, [(_vel#0) + (sin _dir * _speed), (_vel#1) + (cos _dir * _speed), (_vel#2) + _height]] remoteExecCall ["setVelocity", _target];
} else {
	[_target, [(_vel#0) - (sin _dir * _speed), (_vel#1) - (cos _dir * _speed), (_vel#2) + _height]] remoteExecCall ["setVelocity", _target];
};

true;
