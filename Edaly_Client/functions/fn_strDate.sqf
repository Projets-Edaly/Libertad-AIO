/* Copyright 2018 - Association Projets Edaly. All rights reserved */

params [
	["_time", false, [true]],
	["_date", date, [[]]]
];

if (_date isEqualTo []) then {
	_date = date;
};

private _format = format [
	"%1 %2 %3",
	_date#2,
	switch (_date#1) do
	{
		case 1: {localize "STR_EDALY_MONTH_JANUARY"};
		case 2: {localize "STR_EDALY_MONTH_FEBRUARY"};
		case 3: {localize "STR_EDALY_MONTH_MARCH"};
		case 4: {localize "STR_EDALY_MONTH_APRIL"};
		case 5: {localize "STR_EDALY_MONTH_MAY"};
		case 6: {localize "STR_EDALY_MONTH_JUNE"};
		case 7: {localize "STR_EDALY_MONTH_JULY"};
		case 8: {localize "STR_EDALY_MONTH_AUGUST"};
		case 9: {localize "STR_EDALY_MONTH_SEPTEMBER"};
		case 10: {localize "STR_EDALY_MONTH_OCTOBER"};
		case 11: {localize "STR_EDALY_MONTH_NOVEMBER"};
		case 12: {localize "STR_EDALY_MONTH_DECEMBER"};
	},
	_date#0
];

if _time then {
	_format = _format + " " + format [
        localize "STR_EDALY_ALL_AT_TIME",
        _date#3,
        if (_date#4 < 10) then {format ["0%1", _date#4]} else {_date#4}
    ];
};

_format;
