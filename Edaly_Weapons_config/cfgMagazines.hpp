class CfgMagazines
{
	class Default;
	class CA_Magazine: Default{};
	class 15Rnd_762x54_M1: CA_Magazine
	{
		author =$STR_EDALY_AUTHOR;
		scope = 2;
		displayName = "15 Cartouches 7.62x39 M1 Carabine";
		picture = "\Edaly_Weapons_1\M1_Carabine\data\UI\Carabine_M1_mag.paa";
		ammo = "B_762x51_Ball";
		mass = 18;
		count = 15;
		initSpeed = 850;
		tracersEvery = 0;
		descriptionShort = "15 Cartouches de calibre 7.62x39 utilise pour la Carabine M1";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Weapons";
	};
	class 5Rnd_R35_Model8: CA_Magazine
	{
		author =$STR_EDALY_AUTHOR;
		scope = 2;
		displayName = "5 balles Remington .35 pour Model 8";
		picture = "\Edaly_Weapons_1\M1_Carabine\data\UI\Carabine_M1_mag.paa";
		ammo = "B_45ACP_Ball";
		mass = 18;
		count = 5;
		initSpeed = 600;
		tracersEvery = 0;
		descriptionShort = "5 balles Remington .35 pour Model 8";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Weapons";
	};

	class 10Rnd_762x54_SVT40: CA_Magazine
	{
		author =$STR_EDALY_AUTHOR;
		scope=2;
		displayName="Chargeur 10 balles SVT40";
		picture="\Edaly_Weapons_1\M1_Carabine\data\UI\Carabine_M1_mag.paa";
		ammo="B_762x51_Ball";
		count=10;
		initSpeed=280;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="Chargeur 10 balles SVT40";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Weapons";
	};
	class 15Rnd_762x51_FNFAL: CA_Magazine
	{
		author =$STR_EDALY_AUTHOR;
		scope=2;
		displayName="Chargeur 15 balles FNFAL";
		picture="\Edaly_Weapons_1\FNFAL\data\UI\UI_15rnd_762X51_ca.paa";
		ammo="B_762x51_Ball";
		count=15;
		initSpeed=280;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="Chargeur 15 balles FNFAL";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Weapons";
	};
	class 15Rnd_556x45: CA_Magazine
	{
		author =$STR_EDALY_AUTHOR;
		scope=2;
		displayName="Chargeur 15 balles 5.56";
		picture="\Edaly_Weapons_1\FNFAL\data\UI\UI_15rnd_762X51_ca.paa";
		ammo="B_762x51_Ball";
		count=15;
		initSpeed=280;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="Chargeur 15 balles 556";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Weapons";
	};
	class Tools_Magazine_Swing: CA_Magazine
	{
		author =$STR_EDALY_AUTHOR;
		scope=2;
		displayName="Chargeur Pioche";
		picture="\Edaly_Weapons_1\FNFAL\data\UI\UI_15rnd_762X51_ca.paa";
		ammo="B_762x51_Ball";
		count=15;
		initSpeed=280;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="Chargeur Pioche";
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Weapons";
	};
};
