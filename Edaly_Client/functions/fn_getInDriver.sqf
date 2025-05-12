/* Copyright 2018 - Association Projets Edaly. All rights reserved */

#include "\Edaly_Client\defines\base.hpp"

if !canSuspend exitWith {
	LOG_MSG("Functions must be handled by the Scheduler")
};

private _veh = param [0, objNull, [objNull]];

if (isNull _veh) exitWith {};

true call EdalyBase_fnc_blockUserInput;

private _maxTime = time + 2;
[player, player getVariable ["handItem", ""]] call EdalyInv_fnc_handCarryItem;
player action ["getInDriver", _veh];

waitUntil {((vehicle player) isEqualTo _veh) || {time > _maxTime}};

false call EdalyBase_fnc_blockUserInput;
