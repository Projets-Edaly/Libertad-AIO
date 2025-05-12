class RscTitleProgress: RscTitleDefault
{
	name=PROGRESS_TITLE_NAME;
	onLoad="uiNamespace setVariable ['RscTitleProgress', _this select 0];";
	class controlsBackground
	{
		class PROGRESS: EdalyRscPicture
		{
			idc=PROGRESS_STATUS_PROGRESS_IDC;

            x=0.474224 * safezoneW + safezoneX;
            y=0.57701 * safezoneH + safezoneY;
            w=0.0464063 * safezoneW;
            h=0.077 * safezoneH;
		};
		class PICTURE: EdalyRscPicture
		{
			idc=PROGRESS_PICTURE_IDC;

            x=0.487222 * safezoneW + safezoneX;
            y=0.599013 * safezoneH + safezoneY;
            w=0.0206211 * safezoneW;
            h=0.0330044 * safezoneH;
		};
		class TITLE: EdalyRscText
		{
			idc=PROGRESS_TITLE_ST_IDC;

            x=0.381479 * safezoneW + safezoneX;
            y=0.664962 * safezoneH + safezoneY;
            w=0.231967 * safezoneW;
            h=0.0219942 * safezoneH;
		};
	};
};
