#include "defines.hpp"

class RscFrame;
class EdalyRscFrame: RscFrame {
    colorText[]={0,0,0,0.6};
    shadow=0;
};

class RscText;
class EdalyRscText: RscText {
    style=ST_CENTER;
    colorBackground[]={0,0,0,0};
    shadow=0;
    font=EDALY_FONT;
};
class EdalyRscTextRight: EdalyRscText {
    style=ST_RIGHT;
};
class EdalyRscTextLeft: EdalyRscText {
    style=ST_LEFT;
};
class EdalyRscTextMulti: EdalyRscText {
    style=ST_MULTI + ST_NO_RECT;
    lineSpacing=1;
};

class EdalyRscHeader: EdalyRscText {
    sizeEx=SIZE_RELATIVE(1.3);
    colorBackground[]={
        "(profilenamespace getvariable ['GUI_BCG_RGB_R',0])",
        "(profilenamespace getvariable ['GUI_BCG_RGB_G',0])",
        "(profilenamespace getvariable ['GUI_BCG_RGB_B',0])",
        "1"
    };
};

class RscButton;
class EdalyRscButton: RscButton {
    shadow=0;
    colorBackground[]={0,0,0,0.8};
    colorBackgroundActive[]={0,0,0,1};
    colorBackgroundDisabled[]={1,1,1,0.2};
    colorText[]={1,1,1,1};
    colorActive[]={0,0,0,1};
    colorDisabled[]={1,1,1,0.4};
    colorFocused[]={0,0,0,1};
    font=EDALY_FONT;
    sizeEx=SIZE_RELATIVE(1);
    tooltipColorText[]=TOOLTIP_TEXT_COLOR;
    tooltipColorShade[]=TOOLTIP_SHADE_COLOR;
    tooltipColorBox[]=TOOLTIP_BOX_COLOR;
};
class EdalyRscButtonGreen: EdalyRscButton {
    colorBackground[]={0.196,0.616,0.11,0.8};
    colorBackgroundActive[]={0.196,0.616,0.11,1};
};
class EdalyRscButtonRed: EdalyRscButton {
    colorBackground[]={0.616,0.11,0.11,0.8};
    colorBackgroundActive[]={0.616,0.11,0.11,1};
};

class EdalyRscButtonSilent: RscButton {
    shadow=0;
    colorBackground[]={0,0,0,0};
    colorBackgroundActive[]={0,0,0,0};
    colorBackgroundDisabled[]={0,0,0,0};
    colorDisabled[]={0,0,0,0};
    colorFocused[]={0,0,0,0};
    colorText[]={0,0,0,0};
    tooltipColorText[]=TOOLTIP_TEXT_COLOR;
    tooltipColorShade[]=TOOLTIP_SHADE_COLOR;
    tooltipColorBox[]=TOOLTIP_BOX_COLOR;
};

class RscProgress;
class EdalyRscProgressBar: RscProgress {
    idc=-1;
    texture="\A3\ui_f\data\GUI\RscCommon\RscProgress\progressbar_ca.paa";
    colorExtBar[]={0,0,0,0};
    colorFrame[]={0,0,0,0};
    shadow=0;
};

class RscEdit;
class EdalyRscEdit: RscEdit {
    shadow=0;
    font=EDALY_FONT;
    style=ST_LEFT + ST_NO_RECT;
    colorBackground[]={0,0,0,0.8};
    colorText[]={1,1,1,1};
    tooltipColorText[]=TOOLTIP_TEXT_COLOR;
    tooltipColorShade[]=TOOLTIP_SHADE_COLOR;
    tooltipColorBox[]=TOOLTIP_BOX_COLOR;
};
class EdalyRscEditMulti: EdalyRscEdit {
    style=ST_MULTI + ST_NO_RECT;
    lineSpacing=1;
};

class RscListBox;
class EdalyRscListBox: RscListbox {
    font=EDALY_FONT;
    colorBackground[]={0,0,0,0.6};
    tooltipColorText[]=TOOLTIP_TEXT_COLOR;
    tooltipColorShade[]=TOOLTIP_SHADE_COLOR;
    tooltipColorBox[]=TOOLTIP_BOX_COLOR;
};

class RscListBoxMulti;
class EdalyRscListBoxMulti: RscListBoxMulti {
    font=EDALY_FONT;
    colorBackground[]={0,0,0,0.6};
    tooltipColorText[]=TOOLTIP_TEXT_COLOR;
    tooltipColorShade[]=TOOLTIP_SHADE_COLOR;
    tooltipColorBox[]=TOOLTIP_BOX_COLOR;
};

class RscStructuredText;
class EdalyRscStructuredText: RscStructuredText {
    colorBackground[]={0,0,0,0};
    shadow=0;
    class attributes {
        align="left";
        color="#ffffff";
        colorLink="#D09B43";
        font=EDALY_FONT;
        shadow=0;
    };
};

class RscListNBox;
class EdalyRscListNBox: RscListNBox {
    font=EDALY_FONT;
    colorBackground[]={0,0,0,0.6};
    tooltipColorText[]=TOOLTIP_TEXT_COLOR;
    tooltipColorShade[]=TOOLTIP_SHADE_COLOR;
    tooltipColorBox[]=TOOLTIP_BOX_COLOR;
    disableOverflow=1;
};

class RscPicture;
class EdalyRscPicture: RscPicture {};

class RscPictureKeepAspect;
class EdalyRscPictureKeepAspect: RscPictureKeepAspect {};

class RscCombo;
class EdalyRscCombo: RscCombo {};

class RscControlsGroup;
class EdalyRscControlsGroup: RscControlsGroup {};

class RscControlsGroupNoScrollbars;
class EdalyRscControlsGroupNoScrollbars: RscControlsGroupNoScrollbars {};

class RscControlsGroupNoHScrollbars;
class EdalyRscControlsGroupNoHScrollbars: RscControlsGroupNoHScrollbars {};

class RscControlsGroupNoVScrollbars;
class EdalyRscControlsGroupNoVScrollbars: RscControlsGroupNoVScrollbars {};

class RscButtonMenu;
class EdalyRscButtonMenu: RscButtonMenu {
    period=0;
    periodFocus=0;
    periodOver=0;
    shadow=0;
    font=EDALY_FONT;
    tooltipColorText[]=TOOLTIP_TEXT_COLOR;
    tooltipColorShade[]=TOOLTIP_SHADE_COLOR;
    tooltipColorBox[]=TOOLTIP_BOX_COLOR;
    animTextureDefault="#(rgb,1,1,1)color(1,1,1,0.8)";
    animTextureDisabled="#(rgb,1,1,1)color(1,1,1,0.2)";
    animTextureFocused="#(rgb,1,1,1)color(1,1,1,1)";
    animTextureNormal="#(rgb,1,1,1)color(1,1,1,0.8)";
    animTextureOver="#(rgb,1,1,1)color(1,1,1,1)";
    animTexturePressed="#(rgb,1,1,1)color(1,1,1,1)";
};

class RscCheckBox;
class EdalyRscCheckBox: RscCheckBox {};

class EdalyRscMap: RscMapControl {};

class EdalyRscScrollbar {
    color[]={1,1,1,0.6};
    colorActive[]={1,1,1,1};
    colorDisabled[]={1,1,1,0.3};
    thumb="\Edaly_UI_Menu\lobby\scollbar\thumb_ca.paa";
    arrowEmpty="\Edaly_UI_Menu\lobby\scollbar\arrowEmpty_ca.paa";
    arrowFull="\Edaly_UI_Menu\lobby\scollbar\arrowFull_ca.paa";
    border="\Edaly_UI_Menu\lobby\scollbar\border_ca.paa";
    shadow=0;
    scrollSpeed=0.06;
    width=0;
    height=0;
    autoScrollEnabled=0;
    autoScrollSpeed=-1;
    autoScrollDelay=5;
    autoScrollRewind=0;
};

class IGUIBack;
class EdalyIGUIBack: IGUIBack {
    colorBackground[]={0,0,0,0.3};
};

class EdalyRscProgressBarGroup: EdalyRscControlsGroupNoScrollbars {
    class BaseProgressControls {
        class ProgressBarHidden: EdalyRscProgressBar {
            colorBar[]={
                "(profilenamespace getvariable ['GUI_BCG_RGB_R',0])",
                "(profilenamespace getvariable ['GUI_BCG_RGB_G',0])",
                "(profilenamespace getvariable ['GUI_BCG_RGB_B',0])",
                "0.4"
            };
            onLoad="(_this#0) progressSetPosition 1;";

            x=0;
            y=0;
        };
        class ProgressBarMain: EdalyRscProgressBar {
            colorBar[]={
                "(profilenamespace getvariable ['GUI_BCG_RGB_R',0])",
                "(profilenamespace getvariable ['GUI_BCG_RGB_G',0])",
                "(profilenamespace getvariable ['GUI_BCG_RGB_B',0])",
                "1"
            };

            x=0;
            y=0;
        };
        class Text: EdalyRscText {
            sizeEx=SIZE_RELATIVE(0.9);

            x=0;
            y=0;
        };
    };
};

class RscTree;
class EdalyRscTree: RscTree {
    font=EDALY_FONT;
    colorBackground[]={0,0,0,0.6};
    colorLines[]={1,1,1,1};
};

class RscControlsTable;
class EdalyRscControlsTable: RscControlsTable {};
