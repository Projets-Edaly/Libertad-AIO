/* Copyright 2018 - Association Projets Edaly. All rights reserved */

if dialog exitWith {};

if (soundVolume isEqualTo 1) then {
	1 fadeSound 0.2;
} else {
	1 fadeSound 1;
};
