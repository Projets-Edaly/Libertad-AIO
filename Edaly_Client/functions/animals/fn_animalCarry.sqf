/* Copyright 2018 - Association Projets Edaly. All rights reserved */

#include "\Edaly_Client\defines\base.hpp"

if !canSuspend exitWith {
    LOG_MSG("Functions must be handled by the Scheduler")
};

if !(params [
    ["_animal", objNull, [objNull]],
    ["_unit", objNull, [objNull]]
]) exitWith {
    LOG_MSG("Missing parameter(s)")
    false;
};

if (isNull(_animal) || {isNull(_unit)} || {!(alive _animal)} || {!(alive _unit)}) exitWith {
    LOG_MSG("Invalid parameter(s)")
    false;
};

if ((attachedObjects _animal) isNotEqualTo []) exitWith {false};

private _cfg = configFile >> "CfgAnimals" >> typeOf(_animal);
if !isClass(_cfg) exitWith {false};

private _mouthMemory = getText(_cfg >> "mouth" >> "memory");
private _mouthModelPos = getArray(_cfg >> "mouth" >> "humanPos");

if ((_unit isKindOf "Man") && {!isClass(missionConfigFile >> "CfgAnimals" >> typeOf(_unit))}) then {
    [_unit, "ainjpfalmstpsnonwnondf_carried_dead"] remoteExecCall ["switchMove", 0];
};

_unit attachTo [_animal, _mouthModelPos, _mouthMemory, true];
true;
