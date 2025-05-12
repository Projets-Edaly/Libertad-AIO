/* Copyright 2018 - Association Projets Edaly. All rights reserved */

#include "\Edaly_Client\defines\base.hpp"

if !canSuspend exitWith {
	LOG_MSG("Functions must be handled by the Scheduler")
};

if !(params [
	["_veh", objNull, [objNull]],
	["_index", -1, [0]]
]) exitWith {};

if (isNull(_veh) || {_index isEqualTo -1}) exitWith {};

true call EdalyBase_fnc_blockUserInput;

private _maxTime = time + 2;
[player, player getVariable ["handItem", ""]] call EdalyInv_fnc_handCarryItem;
player action ["getInCargo", _veh, _index];

waitUntil {((vehicle player) isEqualTo _veh) || {time > _maxTime}};

false call EdalyBase_fnc_blockUserInput;
