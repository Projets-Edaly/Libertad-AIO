class RscDisplayCombo: RscDisplayDefault {
	idd=COMBO_DISPLAY_IDD;
	name=COMBO_DISPLAY_NAME;
	controlsBackground[]={
		BACKGROUND
	};
	controls[]={
		TITLE,
		BTN_VALIDATE,
		BTN_QUIT,
		LIST
	};

	class BACKGROUND: EdalyIGUIBack
	{
		x=0.407151 * safezoneW + safezoneX;
		y=0.412 * safezoneH + safezoneY;
		w=0.185661 * safezoneW;
		h=0.120994 * safezoneH;
	};
	class TITLE: EdalyRscHeader
	{
		idc=COMBO_TITLE_IDC;

		x=0.40717 * safezoneW + safezoneX;
		y=0.412004 * safezoneH + safezoneY;
		w=0.185661 * safezoneW;
		h=0.0219989 * safezoneH;
	};
	class BTN_VALIDATE: EdalyRscButtonGreen
	{
		idc=COMBO_BTN_VALIDATE_IDC;
		text=$STR_EDALY_ALL_VALIDATE;

		x=0.510315 * safezoneW + safezoneX;
		y=0.5 * safezoneH + safezoneY;
		w=0.0773437 * safezoneW;
		h=0.022 * safezoneH;
	};
	class BTN_QUIT: EdalyRscButtonRed
	{
		action="closeDialog 0;";
		text=$STR_EDALY_ALL_LEAVE;

		x=0.412327 * safezoneW + safezoneX;
		y=0.5 * safezoneH + safezoneY;
		w=0.0773437 * safezoneW;
		h=0.022 * safezoneH;
	};
	class LIST: EdalyRscCombo
	{
		idc=COMBO_COMBO_IDC;

		x=0.412327 * safezoneW + safezoneX;
		y=0.456002 * safezoneH + safezoneY;
		w=0.175346 * safezoneW;
		h=0.0219989 * safezoneH;
	};
};
