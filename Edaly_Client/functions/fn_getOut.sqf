/* Copyright 2018 - Association Projets Edaly. All rights reserved */

#include "\Edaly_Client\defines\base.hpp"

if !canSuspend exitWith {
	LOG_MSG("Functions must be handled by the Scheduler")
};

private _veh = param [0, objNull, [objNull]];

if (isNull(_veh) || {(vehicle player) isNotEqualTo _veh}) exitWith {};

true call EdalyBase_fnc_blockUserInput;

private _maxTime = time + 2;

player action ["Eject", _veh];

waitUntil {((vehicle player) isKindOf "Man") || {time > _maxTime}};

if (profileNamespace getVariable ["Edaly_3rdPersonGetOut", true]) then {
	player switchCamera "EXTERNAL";
};
if ((player getVariable ["holster", ""]) isNotEqualTo "") then {
	player action ["SwitchWeapon", player, player, 100];
};

false call EdalyBase_fnc_blockUserInput;
