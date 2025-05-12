/* Copyright 2018 - Association Projets Edaly. All rights reserved */

private _selections = [];
private _endPos = positionCameraToWorld [0, 0, 1.2];
private _eyepos = eyePos player;
private _ins = lineIntersectsSurfaces [_eyepos, AGLToASL _endPos, player, objNull, true, 1, "GEOM", "FIRE"];

{
	_selections pushBackUnique (_x#0);
} forEach ([(_ins#0)#3, "GEOM"] intersect [ASLToAGL _eyepos, _endPos]);
{
	_selections pushBackUnique (_x#0);
} forEach ([(_ins#0)#3, "FIRE"] intersect [ASLToAGL _eyepos, _endPos]);

_selections;
