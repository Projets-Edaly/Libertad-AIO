/* Copyright 2018 - Association Projets Edaly. All rights reserved */

#include "\Edaly_Client\defines\base.hpp"

if !canSuspend exitWith {
    LOG_MSG("Functions must be handled by the Scheduler")
};

if !(params [
    ["_animal", objNull, [objNull]],
    ["_unit", objNull, [objNull]],
    ["_follow", "EVERYWHERE", [""]]
]) exitWith {
    LOG_MSG("Arguments invalid value")
};

if (isNull(_animal) || {isNull(_unit)} || {!(_follow in ["EVERYWHERE", "ONLY_ON_LAND", "ONLY_IN_WATER"])}) exitWith {
    LOG_MSG("Arguments invalid value")
};

private _cfg = configFile >> "CfgAnimals" >> typeOf(_animal);
if !isClass(_cfg) exitWith {};

if !isNull(_animal getVariable ["tracking", objNull]) exitWith {
    LOG_MSG("Animal is already tracking")
};

_animal setVariable ["tracking", _unit];

private _attackDistance = getNumber(_cfg >> "attack" >> "distance");
private _attackCooldown = getNumber(_cfg >> "attack" >> "cooldown");
private _attackTimeBeforeStrike = getNumber(_cfg >> "attack" >> "timeBeforeStrike");
private _attackDamage = getNumber(_cfg >> "attack" >> "damage");
private _attackExtraRandomDamage = getNumber(_cfg >> "attack" >> "extraRandomDamage");
private _attackSound = getText(_cfg >> "attack" >> "sound");
private _attackMove = getText(_cfg >> "attack" >> "move");
private _visibility = getNumber(_cfg >> "eyeSightMalus");
private _playCombatSound = {
    [_animal, getArray(_cfg >> "combatSounds") call BIS_fnc_selectRandom, 80] spawn EdalyBase_fnc_say3d;
    _animal setVariable ["SoundAttackLock", time + 5];
};

[_animal, ""] remoteExecCall ["switchMove", 0];

{
    if (!isPlayer(_x) && {!isNull(_x)}) then {
        [_x, ""] remoteExecCall ["switchMove", 0];
    };
    detach _x;
} forEach (attachedObjects _animal);

_animal doWatch _unit;

[] call _playCombatSound;

_animal forceSpeed (_animal getSpeed "FAST");

while {
    _fav = [_animal, 50] call EdalyBase_fnc_getAnimalTarget;
    if (!isNull(_fav) && {_fav isNotEqualTo _unit}) then {
        _animal doWatch _fav;
        _animal setVariable ["tracking", _fav];
    };
    _unit = _fav;
    (!isNull(_unit) && {alive _animal});
} do {
    if ((time >= (_animal getVariable ["SoundAttackLock", 0])) && {random(100) <= 10}) then {
        [] call _playCombatSound;
    };

    if ([_unit, _animal, 1.3] call EdalyBase_fnc_isInsideBoundingBox) then {
        if (((expectedDestination _animal)#1) isNotEqualTo "DoNotPlan") then {
            _animal setDestination [getPosATL _animal, "DoNotPlan", true];
        };

        if ((_animal getVariable ["lastAttack", 0]) < time) then {
            [_animal, _attackSound, 80] call EdalyBase_fnc_say3d;
            if (_attackMove isNotEqualTo "") then {
                [_animal, _attackMove] remoteExecCall ["switchMove", 0];
                _animal playMoveNow _attackMove;
            };
            uiSleep _attackTimeBeforeStrike;

            _damage = _attackDamage + random(_attackExtraRandomDamage);
            switch true do {
                case ((_unit isKindOf "Man") && {!isClass(missionConfigFile >> "CfgAnimals" >> typeOf(_unit))}): {
                    for "_i" from 0 to 2 do {
                        private _hitPointsDamage = getAllHitPointsDamage _unit;
                        private _hitIndex = -1;
                        private _hit = "hitbody";

                        if (_hitPointsDamage isNotEqualTo []) then {
                            private _dist = -1;
                            private _meet = _animal modelToWorld (_animal selectionPosition "head");

                            {
                                private "_curPos";

                                if (_x isEqualTo "face_hub") then {
                                    _curPos = _unit modelToWorld (_unit selectionPosition "head");
                                } else {
                                    _curPos = _unit modelToWorld (_unit selectionPosition _x);
                                };
                                _curDist = _meet distance _curPos;
                                if (((_dist isEqualTo -1) || {_curDist < _dist}) && {((_hitPointsDamage#2)#_forEachIndex) < 0.99}) then {
                                    _hitIndex = _forEachIndex;
                                    _dist = _curDist;
                                };
                            } forEach (_hitPointsDamage#1);
                        };

                        if (_hitIndex isNotEqualTo -1) then {
                            _hit = (_hitPointsDamage#0)#_hitIndex;
                        };

                        [
                            _unit, [
                                _hit,
                                ((_unit getHitPointDamage _hit) + _damage) min 1
                            ]
                        ] remoteExecCall ["setHitPointDamage", _unit];
                    };
                };
                case (_unit isKindOf "Car"): {
                    _hitPointsDmg = getAllHitPointsDamage _unit;
                    _hit = (_hitPointsDmg#0) call BIS_fnc_selectRandom;

                    [
                        _unit, [
                            _hit,
                            ((_unit getHitPointDamage _hit) + _damage) min 1
                        ]
                    ] remoteExecCall ["setHitPointDamage", _unit];
                    [_unit, "clang_metal", 20] call EdalyBase_fnc_say3d;
                };
                default {
                    _unit setDamage (((damage _unit) + _damage) min 1);
                };
            };

            _animal setVariable ["lastAttack", time + _attackCooldown];
        };
    } else {
        private _pos = getPosASL _unit;
        if !(surfaceIsWater _pos) then {
            _pos = ASLToATL _pos;
        };

        if (((expectedDestination _animal)#0) isNotEqualTo _pos) then {
            _animal setDestination [_pos, "LEADER DIRECT", true];
        };
    };

    uiSleep 0.3;
};

if !isNull(_animal) then {
    _animal doWatch objNull;
    _animal setVariable ["tracking", nil];
};
