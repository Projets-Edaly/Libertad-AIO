/* Copyright 2018 - Association Projets Edaly. All rights reserved */

#include "\Edaly_UI_Config\displayCtrlIds.hpp"
#include "\Edaly_Client\defines\base.hpp"

if !canSuspend exitWith {
	LOG_MSG("Functions must be handled by the Scheduler")
};

/*

Return the selected data of the list or Nil if Exit button is pressed

===== Example =====
	[
		"Very interesting title",
		_structuredText
	] spawn EdalyUI_fnc_text_open;

*/

params [
	["_title", localize "STR_EDALY_ALL_MISSING", [""]],
	["_structuredText", "", [""]]
];

private _display = TEXT_DISPLAY_NAME call EdalyUI_fnc_createDialog;
if isNull(_display) exitWith {};

(_display displayCtrl TEXT_TITLE_IDC) ctrlSetText _title;
(_display displayCtrl TEXT_BODY_IDC) ctrlSetStructuredText parseText _structuredText;
