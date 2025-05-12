/* Copyright 2018 - Association Projets Edaly. All rights reserved */

private _playAnim = param [0, true, [true]];
private _mount = attachedTo player;

private _anim = "";
private _pos = [];
private _dir = -1;

private _rightIntersect = lineIntersectsSurfaces [AGLToASL (_mount modelToWorld [0, 0, 1]), AGLToASL (_mount modelToWorld [1, 0, 0]), player, _mount, true, 1, "GEOM", "NONE"];
if (_rightIntersect isEqualTo []) then {
    _anim = "Edaly_Horse_Rider_Dismount_Right";
} else {
    private _leftIntersect = lineIntersectsSurfaces [AGLToASL (_mount modelToWorld [0, 0, 1]), AGLToASL (_mount modelToWorld [-1, 0, 0]), player, _mount, true, 1, "GEOM", "NONE"];

    if (_leftIntersect isEqualTo []) then {
        _anim = "Edaly_Horse_Rider_Dismount_Left";
    };
};

if (_playAnim && {_anim isEqualTo ""}) exitWith {false};

private _view = cameraView;
private _isDriver = (_mount getVariable ["driver", objNull]) isEqualTo player;

if _isDriver then {
    objNull remoteControl _mount;
};

if _playAnim then {
    if (cameraView isEqualTo "INTERNAL") then {
        _mount switchCamera "EXTERNAL";
    };
    [player, _anim] remoteExecCall ["switchMove", 0];
    uiSleep 1.2;
    _pos = _mount modelToWorld (_mount getVariable ["ejectVector", []]);
    if (_anim isEqualTo "Edaly_Horse_Rider_Dismount_Right") then {
        _dir = [(getdir _mount) + 90] call CBA_fnc_simplifyAngle;
    } else {
        _dir = [(getdir _mount) - 90] call CBA_fnc_simplifyAngle;
    };
};

if (_pos isEqualTo []) then {
    _pos = getPosATL _mount;
    _dir = getDir _mount;
};

detach player;
player setPosATL _pos;
if (_dir isNotEqualTo -1) then {
    player setDir _dir;
};
player switchCamera _view;
[player, ""] remoteExecCall ["switchMove", 0];
true;
