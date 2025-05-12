/* Copyright 2018 - Association Projets Edaly. All rights reserved */
_size = param[0,3,[0]];
_structured = param[1,false,[false]];
_ret = switch (_size) do {
	case 1 : {  0.5 };
	case 2 : {   1 };
	case 3 : { 1.5 };
	case 4 : {  2 };
	case 5 : {  2.5 };
	case 6 : {  3 };
	default {  1 };
};

if !_structured then {
	(0.04 * _ret);
} else {
	_ret;
};
