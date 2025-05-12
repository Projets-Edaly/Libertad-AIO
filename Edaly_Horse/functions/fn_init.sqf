/* Copyright 2018 - Association Projets Edaly. All rights reserved */

#include "\a3\editor_f\Data\Scripts\dikCodes.h"

["Projets Edaly", "dismount", "Dismount", {
    if isClass(configFile >> "CfgAnimals" >> typeOf(attachedTo player)) then {
        [] spawn EdalyHorse_fnc_dismount;
    };
}, {}, [DIK_V, [false, false, false]], false, 0, false] call CBA_fnc_addKeybind;
