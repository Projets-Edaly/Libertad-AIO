class RscTitleMessage: RscTitleDefault
{
    duration=8;
    fadeout=2;
    name=MSG_TITLE_NAME;
    onLoad="uiNamespace setVariable ['RscTitleMessage', _this#0];";
    class controlsBackground
    {
        class MSG_MIDDLE_TEXT: EdalyRscStructuredText
        {
            idc=MSG_MIDDLE_TEXT_IDC;
            colorBackground[]={0,0,0,0.6};

            x = 0.350497 * safezoneW + safezoneX;
            y = 0.653959 * safezoneH + safezoneY;
            w = 0.206211 * safezoneW;
            h = 0.0769796 * safezoneH;
        };
        class MSG_MIDDLE_LEFTBAR: RscText
        {
            idc=MSG_MIDDLE_LEFTBAR_IDC;
            colorBackground[]={0,0,0,1};

            x = 0.340187 * safezoneW + safezoneX;
            y = 0.653959 * safezoneH + safezoneY;
            w = 0.0103125 * safezoneW;
            h = 0.077 * safezoneH;
        };
        class MSG_MIDDLE_WARNINGBAR: RscText
        {
            idc=MSG_MIDDLE_WARNINGBAR_IDC;
            colorBackground[]={0.706,0.016,0.016,1};

            x = 0.340187 * safezoneW + safezoneX;
            y = 0.653959 * safezoneH + safezoneY;
            w = 0.003 * safezoneW;
            h = 0.077 * safezoneH;
        };

        class MSG_LEFT_TEXT: EdalyRscStructuredText
        {
            idc=MSG_LEFT_TEXT_IDC;
            colorBackground[]={0,0,0,0.6};

            x = 0.0154053 * safezoneW + safezoneX;
            y = 0.456012 * safezoneH + safezoneY;
            w = 0.201055 * safezoneW;
            h = 0.0769796 * safezoneH;
        };
        class MSG_LEFT_LEFTBAR: RscText
        {
            idc=MSG_LEFT_LEFTBAR_IDC;
            colorBackground[]={0,0,0,1};

            x = 0.00499164 * safezoneW + safezoneX;
            y = 0.456012 * safezoneH + safezoneY;
            w = 0.0103125 * safezoneW;
            h = 0.077 * safezoneH;
        };
        class MSG_LEFT_WARNINGBAR: RscText
        {
            idc=MSG_LEFT_WARNINGBAR_IDC;
            colorBackground[]={0.706,0.016,0.016,1};

            x = 0.00509476 * safezoneW + safezoneX;
            y = 0.456012 * safezoneH + safezoneY;
            w = 0.003 * safezoneW;
            h = 0.077 * safezoneH;
        };
    };
};
