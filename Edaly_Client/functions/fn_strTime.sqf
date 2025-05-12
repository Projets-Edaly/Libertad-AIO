/* Copyright 2018 - Association Projets Edaly. All rights reserved */

private _hours = date#3;
if (_hours < 10) then {
	_hours = format ["0%1", _hours];
};

private _minuts = date#4;
if (_minuts < 10) then {
	_minuts = format ["0%1", _minuts];
};

format ["%1:%2", _hours, _minuts];
