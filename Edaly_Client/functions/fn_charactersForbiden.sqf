/* Copyright 2018 - Association Projets Edaly. All rights reserved */

private _data = param [0, "", [""]];
private _allowed = toArray(param [1, "", [""]]);
private _bad = "";

{
	if !(_x in _allowed) exitWith {_bad = _x};
} foreach toArray(_data);

toString([_bad]);
