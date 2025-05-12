/* Copyright 2018 - Association Projets Edaly. All rights reserved */

#include "\Edaly_UI_Config\displayCtrlIds.hpp"
#include "\Edaly_Client\defines\base.hpp"

if !canSuspend exitWith {
	LOG_MSG("Functions must be handled by the Scheduler")
	false;
};

/*
===== Example =====
[] spawn
{
	private _ret = [
		"Soin",
		"a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_revive_ca.paa",
		{((player distance (_this select 0)) < 2)},
		{if (isNull(_this select 0)) exitWith {false}; player playAction 'medicStart'; true},
		{},
		{player playAction 'medicStop'},
		{player playAction 'medicStop'},
		[cursorObject],
		10
	] call EdalyUI_fnc_progress_open;
	systemChat format ["Progress result : %1", _ret];
};

===== Available icons =====
"\A3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa"
"\A3\ui_f\data\IGUI\Cfg\holdactions\holdAction_forceRespawn_ca.paa"
"\A3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa"
"\A3\ui_f\data\IGUI\Cfg\holdactions\holdAction_revive_ca.paa"
"\A3\ui_f\data\IGUI\Cfg\holdactions\holdAction_reviveMedic_ca.paa"
"\A3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa"
"\A3\ui_f\data\IGUI\Cfg\holdactions\holdAction_takeOff1_ca.paa"
"\A3\ui_f\data\IGUI\Cfg\holdactions\holdAction_takeOff2_ca.paa"
"\A3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa"
*/

params [
	["_title", localize "STR_EDALY_ALL_MISSING", [""]],
	["_icon", "\A3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa", [""]],
	["_conditionProgress", {true}, [{}, ""]],
	["_codeStart", {true}, [{}, ""]],
	["_codeProgress", {}, [{}, ""]],
	["_codeCompleted", {}, [{}, ""]],
	["_codeInterrupted", {}, [{}, ""]],
	["_arguments", [], [[]]],
	["_duration", 10, [0]]
];

if ((typeName _conditionProgress) isEqualTo "STRING") then {_conditionProgress = compile _conditionProgress};
if ((typeName _codeStart) isEqualTo "STRING") then {_codeStart = compile _codeStart};
if ((typeName _codeProgress) isEqualTo "STRING") then {_codeProgress = compile _codeProgress};
if ((typeName _codeCompleted) isEqualTo "STRING") then {_codeCompleted = compile _codeCompleted};
if ((typeName _codeInterrupted) isEqualTo "STRING") then {_codeInterrupted = compile _codeInterrupted};

if !(_arguments call _codeStart) exitWith {
	_arguments call _codeInterrupted;
	false;
};

private _exit = false;
private _timeNextStep = time;
private _maxFrames = 24;
private _stepDuration = _duration / _maxFrames;
private _frame = 0;

("ProgressLayer" call BIS_fnc_rscLayer) cutRsc [PROGRESS_TITLE_NAME, "PLAIN"];

private _event = (findDisplay 46) displayAddEventHandler [
    "KeyDown", {
        _key = _this#1;
        diag_log format ["key press %1", _key];

        if (_key in ((actionKeys "MoveForward") + (actionKeys "MoveBack") + (actionKeys "TurnLeft") + (actionKeys "TurnRight"))) then {
            (uiNamespace getVariable "RscTitleProgress") setVariable ["canceled", true];
        };

        true;
    }
];

((uiNamespace getVariable "RscTitleProgress") displayCtrl PROGRESS_PICTURE_IDC) ctrlSetText _icon;
((uiNamespace getVariable "RscTitleProgress") displayCtrl PROGRESS_TITLE_ST_IDC) ctrlSetText _title;
(uiNamespace getVariable "RscTitleProgress") setVariable ["canceled", false];

private _condition = {
    (_arguments call _conditionProgress)
    && {_frame <= _maxFrames}
    && {!((uiNamespace getVariable "RscTitleProgress") getVariable ["canceled", false])}
};

while {[] call _condition} do {
	((uiNamespace getVariable "RscTitleProgress") displayCtrl PROGRESS_STATUS_PROGRESS_IDC) ctrlSetText format [
		"A3\Ui_f\data\IGUI\Cfg\HoldActions\progress\progress_%1_ca.paa",
		_frame
	];

	_timeNextStep = time + _stepDuration;
	waitUntil {time >= _timeNextStep || {!([] call _condition)}};
	if (time < _timeNextStep) exitWith {};

	_frame = _frame + 1;
	_arguments call _codeProgress;
};

if (_frame < _maxFrames) then {
    ((uiNamespace getVariable "RscTitleProgress") displayCtrl PROGRESS_PICTURE_IDC) ctrlSetText "\Edaly_UI_Assets\Data\exit.paa";
    ((uiNamespace getVariable "RscTitleProgress") displayCtrl PROGRESS_TITLE_ST_IDC) ctrlSetText (localize "STR_EDALY_ALL_CANCELED");
	_arguments call _codeInterrupted;
} else {
    ((uiNamespace getVariable "RscTitleProgress") displayCtrl PROGRESS_PICTURE_IDC) ctrlSetText "\Edaly_UI_Assets\Data\validate.paa";
    ((uiNamespace getVariable "RscTitleProgress") displayCtrl PROGRESS_TITLE_ST_IDC) ctrlSetText (localize "STR_EDALY_ALL_DONE");
	_arguments call _codeCompleted;
	_exit = true;
};

("ProgressLayer" call BIS_fnc_rscLayer) cutFadeOut 2;
(findDisplay 46) displayRemoveEventHandler ["KeyDown", _event];
_exit;
