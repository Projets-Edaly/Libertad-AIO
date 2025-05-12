/* Copyright 2018 - Association Projets Edaly. All rights reserved */

#include "\Edaly_Client\defines\base.hpp"

private _idd = getNumber(configFile >> _this >> "idd");
if (_idd isEqualTo 0) then {
    _idd = getNumber(missionConfigFile >> _this >> "idd");
};
if (_idd isEqualTo 0) exitWith {
    LOG_MSG("Cannot find idd for display %1")
    displayNull;
};

private _hasDialog = dialog;

if !(createDialog _this) exitWith {
    LOG_MSG("Cannot create dialog")
    displayNull;
};

if !_hasDialog then {
    [] spawn {
        private "_handle";
        private _priority = 10;

        while {
            _handle = ppEffectCreate ["DynamicBlur", _priority];
            _handle < 0
        } do {
            _priority = _priority + 1;
        };

        _handle ppEffectEnable true;
        _handle ppEffectAdjust [3];
        _handle ppEffectCommit 5;

        waitUntil {!dialog};

        ppEffectDestroy _handle;
    };
};

disableSerialization;
findDisplay _idd;
