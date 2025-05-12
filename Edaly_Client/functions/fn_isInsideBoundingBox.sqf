/* Copyright 2018 - Association Projets Edaly. All rights reserved */

params [
    ["_target", objNull, [objNull]],
    ["_source", objNull, [objNull]],
    ["_factor", 1, [0]]
];

if (isNull(_target) || {isNull(_source)}) exitWith {false};

private _pos = _source worldToModelVisual ASLToAGL (getPosASLVisual _target);
private _bound = boundingBoxReal _source;
private _1 = (_bound#0) vectorMultiply _factor;
private _2 = (_bound#1) vectorMultiply _factor;

(boundingBoxReal _target) findIf {
    if ((typeName _x) isNotEqualTo "ARRAY") exitWith {-1};
    _boundingPos = _pos vectorAdd _x;

    ((_boundingPos#0) >= (_1#0))
    && {(_boundingPos#1) >= (_1#1)}
    && {(_boundingPos#2) >= (_1#2)}
    && {(_boundingPos#0) <= (_2#0)}
    && {(_boundingPos#1) <= (_2#1)}
    && {(_boundingPos#2) <= (_2#2)};
} isNotEqualTo -1;
