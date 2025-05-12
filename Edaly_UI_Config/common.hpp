///////////////////////////////////////////////////////////////////////////
/// Base Classes
///////////////////////////////////////////////////////////////////////////

#ifndef COMMON
class Attributes;
class RscListBox;
class RscListNBox;
class RscPicture;
class RscPictureKeepAspect;
class RscText;
class RscStructuredText;
class RscButton;
class RscButtonMenu;
class RscEdit;
class RscFrame;
class IGUIBack;
class RscObject;
class RscProgress;
class RscCombo;
class RscControlsGroup;
#endif

///////////////////////////////////////////////////////////////////////////
/// Edaly Classes
///////////////////////////////////////////////////////////////////////////

#define EDALY_FONT "BerlinSansFB"

class EdalyRscFrame: RscFrame {
	colorText[]={0,0,0,0.6};
};
class EdalyRscText: RscText {
	style="0x02";
	colorBackground[]={0,0,0,0};
	shadow=0;
	font=EDALY_FONT;
};
class EdalyRscTextLeft: EdalyRscText {
	style="0x00";
};
class EdalyRscStructuredText: RscStructuredText {
	style="0x02";
	colorBackground[]={0,0,0,0};
	shadow=0;
	font=EDALY_FONT;
};
class EdalyRscButtonSilent: RscButton {
	colorText[]={0,0,0,0};
	colorDisabled[]={0,0,0,0};
	colorBackground[]={0,0,0,0};
	colorBackgroundDisabled[]={0,0,0,0};
	colorBackgroundActive[]={0,0,0,0};
	colorFocused[]={0,0,0,0};
	shadow=0;
	borderSize=0;
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,0};
	tooltipColorShade[]={0,0,0,0.8};
};
class EdalyRscButton: RscButton {
	shadow=0;
	borderSize=0;
	colorBackground[]={0,0,0,1};
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,0};
	tooltipColorShade[]={0,0,0,0.8};
};
class EdalyRscActiveText: RscText {
	color[]={1,1,1,1};
	colorBackgroundSelected[]={1,1,1,1};
	colorFocused[]={0,0,0,0};
	colorActive[]={1,1,1,1};
	colorDisabled[]={1,1,1,1};
	colorText[]={1,1,1,1};
	colorBackground[]={1,1,1,0};
	soundEnter[]={"",0.1,1};
	soundPush[]={"",0.1,1};
	soundClick[]={"",0.1,1};
	soundEscape[]={"",0.1,1};
	soundDoubleClick[]={"",0.1,1};
};
class EdalyRscProgressBar: RscProgress {
	idc=-1;
	texture="#(argb,8,8,3)color(1,1,1,1)";
	colorBar[]={1,1,1,1};
	colorExtBar[]={0,0,0,0};
	colorFrame[]={0,0,0,0};
	textureExt="";
	colorBackground[]={0,0,0,0.6};
	colorText[]={0,0,0,1};
};
class EdalyRscEdit: RscEdit {
	// style="0x00";
	shadow=0;
	font=EDALY_FONT;
	colorBackground[]={0,0,0,0.3};
	colorText[]={1,1,1,1};
    colorBorder[]={0,0,0,0.7};
	// colorDisabled[]={0,0,0,1};
	// colorSelection[]={1,1,1,1};
	// tooltipColorText[]={1,1,1,1};
	// tooltipColorBox[]={1,1,1,0};
	// tooltipColorShade[]={0,0,0,0.8};
};
class EdalyRscListBox: RscListbox {
	font=EDALY_FONT;
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,0};
	tooltipColorShade[]={0,0,0,0.8};
};

class EdalyRscStructuredTextletter : EdalyRscStructuredText {
	style=ST_LEFT;
	size="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorText[]={0,0,0,1};
	shadow=0;
	colorBackground[]={0,0,0,0};
	font = "SegoeScript";
	sizeEx = 0.08;
};

class EdalyRscEditletter : EdalyRscEdit {
	type = 2;
	style = "16";
	access = 2;
	lineSpacing = 1;
	shadow=0;
	colorText[]={0,0,0,1};
	autocomplete = "";
	canModify = true;
	maxChars = 255;
	font = "SegoeScript";
	sizeEx = 0.08;
	class Attributes
	{
		color="#000000";
		align="left";
		shadow=0;
	};
};

class EdalyRscListNBox: RscListNBox {
	font=EDALY_FONT;
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,0};
	tooltipColorShade[]={0,0,0,0.8};
};

class EdalyRscPicture : RscPicture {};
class EdalyRscCombo : RscCombo {};
class EdalyRscControlsGroup : RscControlsGroup{};
class EdalyRscButtonMenu : RscButtonMenu {};

class EdalyRscScrollbar
{
	color[] = {1,1,1,0.6};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.3};
	thumb = "\Edaly_UI_Menu\lobby\scollbar\thumb_ca.paa";
	arrowEmpty = "\Edaly_UI_Menu\lobby\scollbar\arrowEmpty_ca.paa";
	arrowFull = "\Edaly_UI_Menu\lobby\scollbar\arrowFull_ca.paa";
	border = "\Edaly_UI_Menu\lobby\scollbar\border_ca.paa";
	shadow = 0;
	scrollSpeed = 0.06;
	width = 0;
	height = 0;
	autoScrollEnabled = 0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
};
