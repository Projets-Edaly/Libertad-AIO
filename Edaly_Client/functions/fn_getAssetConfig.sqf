/* Copyright 2018 - Association Projets Edaly. All rights reserved */

private _ret = _this call CBA_fnc_getItemConfig;
if isNull(_ret) then {
    _ret = _this call CBA_fnc_getObjectConfig;
};

_ret;
