/* Copyright 2018 - Association Projets Edaly. All rights reserved */

private ["_fire","_pos","_logicCenter","_logicGroup","_smoke","_size","_particlesize","_densite"];

params [["_pos", [0,0,0],[[]]]];

if (count(_pos) isEqualTo 0) exitWith {[objNull, objNull]};

_logicCenter = createCenter sideLogic;
_logicGroup = createGroup _logicCenter;

_size = [5,6,7] call BIS_fnc_selectRandom;
_particlesize = [3,4,5] call BIS_fnc_selectRandom;
_densite = [50,60,70] call BIS_fnc_selectRandom;

_fire = _logicGroup createUnit ["ModuleEffectsFire_F", _pos, [], 0, "NONE"];
_smoke = _logicGroup createUnit ["ModuleEffectsSmoke_F", _pos, [], 0, "NONE"];

[_fire, _smoke, _size, _particlesize, _densite] remoteExecCall ["EdalyBase_fnc_fireEffectLocal", 0, _fire];

[_fire, _smoke];
