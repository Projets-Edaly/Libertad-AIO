/* Copyright 2018 - Association Projets Edaly. All rights reserved */

params [
    ["_animal", objNull, [objNull]],
    ["_seat", "driver", [""]]
];

if (isNull(_animal) || {!isNull(_animal getVariable [_seat, objNull])}) exitWith {false};

private _text = localize "STR_EDALY_ALL_MOUNT";
if (_seat isNotEqualTo "driver") then {
    _text = localize "STR_EDALY_ALL_MOUNT_PASSENGER";
};

if !([
    _text,
    "\Edaly_UI_Assets\Data\horse-saddle.paa",
    {!isNull(_this#0) && {(player distance (_this#0)) < (_this#1)} && {alive (_this#0)} && {((_this#0) getVariable [_this#2, objNull]) isEqualTo player}},
    {
        private _left = [-0.597168, 0.587646, 0];
        private _right = [0.597168, 0.587646, 0];
        if ((_this#2) isNotEqualTo "driver") then {
            _left = _left vectorAdd [0, -0.47, 0];
            _right = _right vectorAdd [0, -0.47, 0];
        };
        private _leftPos = (_this#0) modelToWorld _left;
        private _rightPos = (_this#0) modelToWorld _right;
        private _leftDist = player distance2D _leftPos;
        private _rightDist = player distance2D _rightPos;

        (_this#0) setVariable [_this#2, player, true];
        if ((_this#2) isEqualTo "driver") then {
            player attachto [_this#0, [-0.05, -0.12, -0.86], "attachme", true];
        } else {
            player attachto [_this#0, [-0.05, -0.5, -0.7], "attachme", true];
        };
        if (_leftDist < _rightDist) then {
            [player, "Edaly_Horse_Rider_Mount_Left"] remoteExecCall ["switchMove", 0];
            (_this#0) setVariable ["ejectVector", _left];
            (_this#0) setVariable ["ejectDirFactor", -30];
        } else {
            [player, "Edaly_Horse_Rider_Mount_Right"] remoteExecCall ["switchMove", 0];
            (_this#0) setVariable ["ejectVector", _right];
            (_this#0) setVariable ["ejectDirFactor", 30];
        };

        !isNull(_this#0) && {(player distance (_this#0)) < (_this#1)} && {alive (_this#0)} && {((_this#0) getVariable [_this#2, objNull]) isEqualTo player};
    },
    {},
    {},
    {
        detach player;
        [player, ""] remoteExecCall ["switchMove", 0];
        player setPosATL ((_this#0) modelToWorld ((_this#0) getVariable ["ejectVector", [0, 0, 0]]));
        player setDir ([([player, _this#0] call BIS_fnc_dirTo) + ((_this#0) getVariable ["ejectDirFactor", 0])] call CBA_fnc_simplifyAngle);
        (_this#0) setVariable [_this#2, nil, true];
    },
    [_animal, (player distance _animal) + 0.5, _seat],
    1
] call EdalyUI_fnc_progress_open) exitWith {false};

[player, "Edaly_Horse_Rider_Cargo_01"] remoteExecCall ["switchMove", 0];

if (_seat isEqualTo "driver") then {
    player remoteControl (driver _animal);
    _animal switchCamera cameraView;
    [_animal, "animals_horse_BlowLips", 10] spawn EdalyBase_fnc_say3d;
    if (((expectedDestination _animal) isNotEqualTo []) && {((expectedDestination _animal)#1) isEqualTo "LEADER PLANNED"}) then {
        _animal setDestination [getPosATL _animal, "DoNotPlan", true];
    };

    while {((attachedTo player) isEqualTo _animal) && {(alive _animal)}} do {
        _move = switch true do {
            case ((speed _animal) < 0): {"Edaly_Horse_Rider_walkback"};
            case ((speed _animal) >= (_animal getSpeed "FAST")): {"Edaly_Horse_Rider_Trot"};
            case ((speed _animal) >= (_animal getSpeed "NORMAL")): {"Edaly_Horse_Rider_Walk"};
            case ((speed _animal) >= (_animal getSpeed "SLOW")): {"Edaly_Horse_Rider_Walk"};
            default {"Edaly_Horse_Rider_Idle01"};
        };

        if ((animationState player) != _move) then {
            player playMoveNow _move;
        };

        uiSleep 0.1;
    };
} else {
    private _camera = "camera" camCreate (getpos _animal);

    titleText ["Use 'dismount' shortcut to exit mount (V by default)", "PLAIN"];
    _camera cameraEffect ["Internal", "BACK"];
    _camera attachTo [_animal, [0, -2.5, 2.5]];
    showCinemaBorder false;

    waitUntil {
        uiSleep 0.1;
        ((attachedTo player) isNotEqualTo _animal) || {!(alive _animal)} || {!(alive player)};
    };

    _camera cameraEffect ["Terminate", "BACK"];
    camDestroy _camera;
};

if !(alive _animal) then {
    [false] call EdalyHorse_fnc_dismount;
};

_animal setVariable [_seat, nil, true];
true;
