/* Copyright 2018 - Association Projets Edaly. All rights reserved */

params [
	["_ref", "Unknown reference", [""]],
	["_msg", "Empty message", [""]],
    ["_params", [], []]/* all types accepted */
];

diag_log format ["%2 (logged from %1)(params %3)", _ref, _msg, _params];
