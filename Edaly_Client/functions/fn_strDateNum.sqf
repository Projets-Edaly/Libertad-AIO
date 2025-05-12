/* Copyright 2018 - Association Projets Edaly. All rights reserved */

params [
	["_time", false, [true]],
	["_date", date, [[]]]
];

if (_date isEqualTo []) then {
	_date = date;
};

private "_format";
private _year = _date#0;
private _month = _date#1;
private _day = _date#2;
private _hour = _date#3;
private _minutes = _date#4;

if (_month < 10) then {
	_month = format ["0%1", _month];
};
if (_day < 10) then {
	_day = format ["0%1", _day];
};

if _time then {
	_format = format ["%1/%2/%3 %4:%5", _year, _month, _day, _hour, _minutes];
} else {
	_format = format ["%1/%2/%3", _year, _month, _day];
};

_format;
