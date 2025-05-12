class RscDisplayEdit: RscDisplayDefault
{
	idd=EDIT_DISPLAY_IDD;
	name=EDIT_DISPLAY_NAME;
	class controlsBackground
	{
		class BACKGROUND: EdalyIGUIBack
		{
			x=0.407187 * safezoneW + safezoneX;
			y=0.412 * safezoneH + safezoneY;
			w=0.185625 * safezoneW;
			h=0.187 * safezoneH;
		};
	};
	class controls
	{
		class ST: EdalyRscStructuredText
		{
			idc=EDIT_ST_IDC;

			x=0.412344 * safezoneW + safezoneX;
			y=0.423 * safezoneH + safezoneY;
			w=0.175313 * safezoneW;
			h=0.066 * safezoneH;
		};
		class EDIT: EdalyRscEditMulti
		{
			idc=EDIT_EDIT_IDC;

			x=0.412344 * safezoneW + safezoneX;
			y=0.5 * safezoneH + safezoneY;
			w=0.175313 * safezoneW;
			h=0.055 * safezoneH;
		};
		class BTN_VALIDATE: EdalyRscButtonGreen
		{
			idc=EDIT_BTN_VALIDATE_IDC;
			text=$STR_EDALY_ALL_VALIDATE;

			x=0.510312 * safezoneW + safezoneX;
			y=0.566 * safezoneH + safezoneY;
			w=0.0773437 * safezoneW;
			h=0.022 * safezoneH;
		};
		class BTN_QUIT: EdalyRscButtonRed
		{
			text=$STR_EDALY_ALL_LEAVE;
			action="closeDialog 0;";

			x=0.412344 * safezoneW + safezoneX;
			y=0.566 * safezoneH + safezoneY;
			w=0.0773437 * safezoneW;
			h=0.022 * safezoneH;
		};
	};
};
