/* Copyright 2018 - Association Projets Edaly. All rights reserved */

private _model = param [0, "", [""]];
private _name = param [1, "", [""]];

if ((_model isEqualTo "") || {_name isEqualTo ""} || {currentNamespace getVariable ["previewActive", false]}) exitWith {};

currentNamespace setVariable ["previewActive", true];

0 fadeSound 0;

cutText [format [
    "<t align='center' size='3' color='#FF8000'>%1</t><br /><t size='2'>%2</t>",
    _name,
    localize "STR_EDALY_FNC_PREVIEW"
], "PLAIN DOWN", -1, false, true];

private _logic = "Logic" createVehicleLocal [0, 0, 0];
_logic setPosATL [0, 0, 10000];

private _floor = "UserTexture10m_F" createVehicleLocal (_logic modelToWorld [0,0,10]);
_floor attachTo [_logic, [0, 0, -1.5]];

detach _floor;

_floor setVectorDirAndUp [[0, 0, -.33], [0, .33, 0]];

private _object = createSimpleObject [_model, [0, 0, 0], true];

_object attachTo [_logic, [0,0,0]];

private _light = "#lightpoint" createVehicleLocal [0,0,0];
_light setlightbrightness 0.5;
_light setlightcolor [1,1,1];
_light setlightambient [1,1,1];
_light lightAttachObject [_object, [0,0,0]];

private _cam = "camera" camCreate (getPosATL _logic);
_cam cameraEffect ["Internal", "BACK"];
_cam camSetFocus [-1, -1];
_cam camCommit 0;

showCinemaBorder false;

private _distanceCam = 2.5 * ([((boundingBoxReal _object)#0)#0, ((boundingBoxReal _object)#0)#2] distance [((boundingBoxReal _object)#1)#0, ((boundingBoxReal _object)#1)#2]);
private _azimuthCam = 0;

_cam camSetTarget _object;
_cam camSetPos (_object modelToWorld [_distanceCam * sin _azimuthCam, _distanceCam * cos _azimuthCam, _distanceCam * 0.33]);
_cam camCommit 0;

while {currentNamespace getVariable ["previewActive", false]} do {
    if (inputAction "TurnRight" > 0) then {
        _azimuthCam = _azimuthCam + 1.00;
    } else {
        if (inputAction "TurnLeft" > 0) then {
            _azimuthCam = _azimuthCam - 1.00;
        } else {
            if (inputAction "showMap" > 0) then {
                previewActive = false;
            };
        };
    };
    _cam camSetPos (_object modelToWorld [_distanceCam * sin _azimuthCam, _distanceCam * cos _azimuthCam, _distanceCam * 0.33]);
    _cam camCommit 0.1;
    waitUntil {camCommitted _cam};
};

cutText ["", "PLAIN DOWN"];

deleteVehicle _object;
deleteVehicle _light;
deleteVehicle _logic;
deleteVehicle _floor;

_cam cameraEffect ["TERMINATE", "BACK"];
camDestroy _cam;
0 fadeSound 1;
