/* Copyright 2018 - Association Projets Edaly. All rights reserved */

params [
	["_percentage", 0, [0]],
	["_revert", false, [false]]
];

if _revert then {
    _percentage = 100 - _percentage;
};

switch true do {
	case (_percentage >= 0 && {_percentage < 25}): {[[1, 0.3411764705882353, 0.1333333333333333, 1], "#FF5722"]};
	case (_percentage >= 25 && {_percentage < 50}): {[[1, 0.7568627450980392, 0.0274509803921569, 1], "#FFC107"]};
	case (_percentage >= 50 && {_percentage < 75}): {[[1, 0.9215686274509804, 0.2313725490196078, 1], "#FFEB3B"]};
	case (_percentage >= 75 && {_percentage < 100}): {[[0.803921568627451, 0.8627450980392157, 0.2235294117647059, 1], "#CDDC39"]};
	case (_percentage isEqualTo 100): {[[0.5450980392156863, 0.7647058823529412, 0.2901960784313725, 1], "#8BC34A"]};
};
