/* Copyright 2018 - Association Projets Edaly. All rights reserved */

if ((isNil {uiNamespace getVariable "blackAndWhite_effect_1_ID"}) && _this) then {
	private _id_1 = ppEffectCreate ["colorCorrections", 150];
	_id_1 ppEffectAdjust [1, 1, 0, [1, 1, 1, 0], [1, 1, 1, 0], [0.75, 0.25, 0, 1.0]];
	_id_1 ppEffectCommit 1;
	_id_1 ppEffectEnable true;
	uiNamespace setVariable ["blackAndWhite_effect_1_ID", _id_1];
} else {
	(uiNamespace getVariable "blackAndWhite_effect_1_ID") ppEffectEnable _this;
};

if ((isNil {uiNamespace getVariable "blackAndWhite_effect_2_ID"}) && _this) then {
	private _id_2 = ppEffectCreate ["filmGrain", 151];
	_id_2 ppEffectAdjust [0.04, 1, 1, 0, 1];
	_id_2 ppEffectCommit 1;
	_id_2 ppEffectEnable true;
	uiNamespace setVariable ["blackAndWhite_effect_2_ID", _id_1];
} else {
	(uiNamespace getVariable "blackAndWhite_effect_2_ID") ppEffectEnable _this;
};
