class RscDisplayText: RscDisplayDefault {
	idd=TEXT_DISPLAY_IDD;
	name=TEXT_DISPLAY_NAME;
	controlsBackground[]={
		BACKGROUND
	};
	controls[]={
		TITLE,
		BODY,
		BTN_VALIDATE
	};

	class BACKGROUND: EdalyIGUIBack
	{
		x=0.4 * safezoneW + safezoneX;
		y=0.35 * safezoneH + safezoneY;
		w=0.2 * safezoneW;
		h=0.3 * safezoneH;
	};

	class TITLE: EdalyRscHeader
	{
		idc=TEXT_TITLE_IDC;

		x=0.4 * safezoneW + safezoneX;
		y=0.35 * safezoneH + safezoneY;
		w=0.2 * safezoneW;
		h=0.03 * safezoneH;
	};

	class BODY: EdalyRscStructuredText
	{
		idc=TEXT_BODY_IDC;

		x=0.41 * safezoneW + safezoneX;
		y=0.4 * safezoneH + safezoneY;
		w=0.18 * safezoneW;
		h=0.25 * safezoneH;
		class BODY_SCROLLBAR: EdalyRscScrollbar {};
	};

	class BTN_VALIDATE: EdalyRscButtonGreen
	{
		idc=TEXT_BTN_VALIDATE_IDC;
		text=$STR_EDALY_ALL_VALIDATE;

		x=0.45 * safezoneW + safezoneX;
		y=0.61 * safezoneH + safezoneY;
		w=0.1 * safezoneW;
		h=0.03 * safezoneH;
		action="closeDialog 0;";
	};
};
