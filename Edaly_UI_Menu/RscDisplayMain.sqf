#include "\A3\ui_f\hpp\defineCommonGrids.inc"

_mode = _this select 0;
_params = _this select 1;
_class = _this select 2;

switch _mode do {

	case "onLoad": {
		private ["_display","_ehCode","_ehMoving","_ehHolding"];

		_display = _params select 0;
		_ehKeyDown = _display displayaddeventhandler ["keydown","with uinamespace do {['keyDown',_this,''] call RscDisplayMain_script;};"];
		
		[_display, 109] call (uinamespace getvariable 'BIS_fnc_setIDCStreamFriendly');

		with uinamespace do {

			true call bis_fnc_displayColorGet;
			false call bis_fnc_guiGridToProfile;

			[configfile >> _class,_display] call bis_fnc_displayColorSet;
		};
	};
	case "onUnload": {

	};
	case "keyDown":
	{
		_display = _params select 0;
		_key = _params select 1;
		_shift = _params select 2;
		_ctrlKey = _params select 3;
		_alt = _params select 4;
	};
	default {};
};