/* Copyright 2018 - Association Projets Edaly. All rights reserved */

if (time < (uiNamespace getVariable ["actionTime", 0])) exitWith {false};

uiNamespace setVariable ["actionTime", time + 1];
true;
