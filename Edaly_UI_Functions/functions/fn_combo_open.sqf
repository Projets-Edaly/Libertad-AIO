/* Copyright 2018 - Association Projets Edaly. All rights reserved */

#include "\Edaly_UI_Config\displayCtrlIds.hpp"
#include "\Edaly_Client\defines\base.hpp"

if !canSuspend exitWith {
	LOG_MSG("Functions must be handled by the Scheduler")
};

/*

Return the selected data of the list or Nil if Exit button is pressed

===== Example =====
[] spawn
{
	private _ret = [
		"Choissisez le rôle.",
		[
			["role_1_Affiché","role_1_data","role_1_image.paa"],
			["role_2_Affiché","role_2_data","role_1_image.paa"],
			["role_3_Affiché","role_3_data","role_1_image.paa"]
		]
	] call EdalyUI_fnc_combo_open;
	systemChat format ["Combo result : %1", if (isNil "_ret") then {"Exit pressed"} else {_ret}];
};

*/

params [
	["_title", localize "STR_EDALY_ALL_MISSING", [""]],
	["_values", [], [[]]]
];

createDialog COMBO_DISPLAY_NAME;

private _display = findDisplay COMBO_DISPLAY_IDD;

(_display displayCtrl COMBO_TITLE_IDC) ctrlSetText _title;
private _list = _display displayCtrl COMBO_COMBO_IDC;
lbClear _list;

{
	_index = _list lbAdd _x#0;
	_list lbSetData [_index, _x#1];
    if (!(isNil {_x#2}) && {_x#2 isNotEqualTo ""}) then {
        _list lbSetPicture [_index, _x#2];
    };
} foreach _values;
_list lbSetCurSel 0;

(_display displayCtrl COMBO_BTN_VALIDATE_IDC) buttonSetAction format [" \
	_list = (findDisplay %1) displayCtrl %2;
	uiNamespace setVariable ['Combo_Return', _list lbData (lbCurSel _list)]; \
	closeDialog 0; \
", COMBO_DISPLAY_IDD, COMBO_COMBO_IDC];

uiNamespace setVariable ["Combo_Return", nil];

waitUntil {isNull(findDisplay COMBO_DISPLAY_IDD)};

uiNamespace getVariable "Combo_Return";
