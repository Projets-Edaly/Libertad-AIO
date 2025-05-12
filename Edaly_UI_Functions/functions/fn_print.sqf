/* Copyright 2018 - Association Projets Edaly. All rights reserved */

#include "\Edaly_UI_Config\displayCtrlIds.hpp"

if !hasInterface exitWith {};
if !(alive player) exitWith {};

if (player getVariable ["is_coma", false]) exitWith {};// mission :/

params [
	["_msg", "", [""]],
	["_sound", "", [""]],
	["_err", false, [false]]
];

if (_msg isEqualTo "") exitWith {};

15 cutRsc [MSG_TITLE_NAME, "PLAIN"];

disableSerialization;
_hud = uiNamespace getVariable MSG_TITLE_NAME;

if (dialog || {cameraView isEqualTo "INTERNAL"}) then {
	(_hud displayCtrl MSG_LEFT_TEXT_IDC) ctrlSetStructuredText parseText format ["<t font='EtelkaMonospacePro' size='0.8'>%1</t>", _msg];
    private _height = [_hud displayCtrl MSG_LEFT_TEXT_IDC] call BIS_fnc_ctrlFitToTextHeight;

	if _err then {
        _bar = _hud displayCtrl MSG_LEFT_WARNINGBAR_IDC;
        _pos = ctrlPosition _bar;
        _bar ctrlSetPosition [_pos#0, _pos#1, _pos#2, _height];
        _bar ctrlCommit 0;
	} else {
		(_hud displayCtrl MSG_LEFT_WARNINGBAR_IDC) ctrlShow false;
    };

    _bar = _hud displayCtrl MSG_LEFT_LEFTBAR_IDC;
    _pos = ctrlPosition _bar;
    _bar ctrlSetPosition [_pos#0, _pos#1, _pos#2, _height];
    _bar ctrlCommit 0;

	(_hud displayCtrl MSG_MIDDLE_TEXT_IDC) ctrlShow false;
	(_hud displayCtrl MSG_MIDDLE_LEFTBAR_IDC) ctrlShow false;
	(_hud displayCtrl MSG_MIDDLE_WARNINGBAR_IDC) ctrlShow false;
} else {
	(_hud displayCtrl MSG_MIDDLE_TEXT_IDC) ctrlSetStructuredText parseText format ["<t font='EtelkaMonospacePro' size='0.8'>%1</t>", _msg];
    private _height = [_hud displayCtrl MSG_MIDDLE_TEXT_IDC] call BIS_fnc_ctrlFitToTextHeight;

    private _bar = controlNull;
    if _err then {
        _bar = _hud displayCtrl MSG_MIDDLE_WARNINGBAR_IDC;
        _pos = ctrlPosition _bar;
        _bar ctrlSetPosition [_pos#0, _pos#1, _pos#2, _height];
        _bar ctrlCommit 0;
    } else {
        (_hud displayCtrl MSG_MIDDLE_WARNINGBAR_IDC) ctrlShow false;
    };

    _bar = _hud displayCtrl MSG_MIDDLE_LEFTBAR_IDC;
    _pos = ctrlPosition _bar;
    _bar ctrlSetPosition [_pos#0, _pos#1, _pos#2, _height];
    _bar ctrlCommit 0;

	(_hud displayCtrl MSG_LEFT_TEXT_IDC) ctrlShow false;
	(_hud displayCtrl MSG_LEFT_LEFTBAR_IDC) ctrlShow false;
	(_hud displayCtrl MSG_LEFT_WARNINGBAR_IDC) ctrlShow false;
};

if (_sound isEqualTo "") then {
	playSound "TacticalPing2";
} else {
	playSound _sound;
};
