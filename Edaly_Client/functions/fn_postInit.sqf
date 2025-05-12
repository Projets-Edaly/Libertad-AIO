/* Copyright 2018 - Association Projets Edaly. All rights reserved */

if isDedicated exitWith {};

{
    if (((typeName (profileNamespace getVariable _x)) in ["CODE", "SCRIPT"])
        && !([_x, "bis"] call BIS_fnc_inString)
        && !([_x, "cba"] call BIS_fnc_inString)) then {
        profileNamespace setVariable [_x, nil];
        diag_log format ["Variable %1 in profileNamespace contains Code/Script. Removing variable", _x];
    };
} forEach (allVariables profileNamespace);

diag_log format ["Session started. isMultiplayer: %1", isMultiplayer];

uiNamespace setVariable ["actionTime", 0];

[] spawn {
    diag_log "Waiting for display 46";
    waituntil {
        sleep 0.2;
        !isNull(finddisplay 46)
    };
    diag_log "Display 46 found. Adding KeyDown eventHandler";
    if (((findDisplay 46) displayAddEventHandler ["KeyDown", "call EdalyBase_fnc_onKeyDown"]) isEqualTo -1) then {
        diag_log format ["%1 - Cannot add event-handler onKeyDown.", __FILE__];
    };
};
