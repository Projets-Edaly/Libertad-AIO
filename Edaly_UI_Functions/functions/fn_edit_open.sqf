/* Copyright 2018 - Association Projets Edaly. All rights reserved */

#include "\Edaly_UI_Config\displayCtrlIds.hpp"
#include "\Edaly_Client\defines\base.hpp"

if !canSuspend exitWith {
	LOG_MSG("Functions must be handled by the Scheduler")
};

/*

Return the edit content or Nil if Exit button is pressed

===== Example =====
[] spawn
{
	private _ret = [
		"Insultez-moi",
		"Mange mon pied !"
	] call EdalyUI_fnc_edit_open;
	systemChat format ["Edit result : %1", if (isNil "_ret") then {"Exit pressed"} else {_ret}];
};

*/

params [
	["_text", localize "STR_EDALY_ALL_MISSING", [""]],
	["_value", "", [""]],
	["_codeValidate", {true}, [{}]]
];

private _display = EDIT_DISPLAY_NAME call EdalyUI_fnc_createDialog;
if isNull(_display) exitWith {""};

(_display displayCtrl EDIT_ST_IDC) ctrlSetStructuredText parseText _text;
(_display displayCtrl EDIT_EDIT_IDC) ctrlSetText _value;

(_display displayCtrl EDIT_BTN_VALIDATE_IDC) buttonSetAction format [" \
	private _value = ctrlText ((findDisplay %1) displayCtrl %2); \
	if (call %3) then { \
		uiNamespace setVariable ['Edit_Return', _value]; \
		closeDialog 0; \
	}; \
", EDIT_DISPLAY_IDD, EDIT_EDIT_IDC, _codeValidate];

uiNamespace setVariable ["Edit_Return", nil];

waitUntil {isNull _display};

uiNamespace getVariable "Edit_Return";
