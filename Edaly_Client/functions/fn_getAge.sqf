/* Copyright 2018 - Association Projets Edaly. All rights reserved */

params [
	["_day", 1, [0]],
	["_month", 1, [0]],
	["_year", ((date#0) - 18), [0]]
];

private _ret = (date#0) - _year;
if (((date#1) < _month) || {((date#1) isEqualTo _month) && {(date#2) < _day}})  then {
	_ret = _ret - 1;
};

_ret;
