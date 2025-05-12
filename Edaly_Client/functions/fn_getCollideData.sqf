/* Copyright 2018 - Association Projets Edaly. All rights reserved */

private _target = param [0, objNull, [objNull]];

if (isNull _target) exitWith {[]};

private _bound = boundingBoxReal _target;
private _ret = [];

{_ret pushBack (lineIntersectsWith [_target modelToWorldWorld (_x#0), _target modelToWorldWorld (_x#1), player, _target, true, 1])} forEach [
	[_bound#0, [(_bound#1)#0, (_bound#0)#1, (_bound#1)#2]],
	[_bound#0, [(_bound#0)#0, (_bound#1)#1, (_bound#1)#2]],
	[[(_bound#0)#0, (_bound#1)#1, (_bound#0)#2], _bound#1],
	[[(_bound#1)#0, (_bound#0)#1, (_bound#0)#2], _bound#1],
	[_bound#0, [(_bound#1)#0, (_bound#1)#1, (_bound#0)#2]],
	[[(_bound#0)#0, (_bound#0)#1, (_bound#1)#2], _bound#1]
];

_ret;
