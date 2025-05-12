/* Copyright 2018 - Association Projets Edaly. All rights reserved */

private _markers = [];

{
	if ((markerAlpha _x) isEqualTo 1) then {
		_markers pushBack _x;
		_x setMarkerAlphaLocal 0;
	};
} forEach allMapMarkers;

currentNamespace setVariable ["deleted_markers", _markers];
