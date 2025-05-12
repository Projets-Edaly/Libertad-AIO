#include "\Edaly_Client\version.hpp"

class CfgPatches
{
	class Edaly_Character_Heads_1
	{
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredVersion=ARMA3_VERSION;
		requiredAddons[] = {"A3_Characters_F"};
		units[]	= {};
	};
};

class CfgFaces
{
	class Default
	{
		class Custom;
	};
	class Man_A3: Default
	{
		class MaleHead_01: Default
		{
			author=$STR_EDALY_AUTHOR;
			displayname = "Jorge";
			texture = "Edaly_Heads_1\data\malehead_01_co.paa";
			textureHL = "Edaly_Heads_1\data\hl_malehead_01_co.paa";
			head = "H_MaleHead_01";
			identityTypes[] = {"Head_TK"};
			material = "Edaly_Heads_1\data\malehead_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat";
		};
		class MaleHead_02: Default
		{
			author=$STR_EDALY_AUTHOR;
			displayname = "Carlos";
			texture = "Edaly_Heads_1\data\malehead_02_co.paa";
			textureHL = "Edaly_Heads_1\data\hl_malehead_02_co.paa";
			head = "H_MaleHead_02";
			identityTypes[] = {"Head_TK"};
			material = "Edaly_Heads_1\data\malehead_02.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat";
		};
		class MaleHead_03: Default
		{
			author=$STR_EDALY_AUTHOR;
			displayname = "Ramon";
			texture = "Edaly_Heads_1\data\malehead_03_co.paa";
			textureHL = "Edaly_Heads_1\data\hl_malehead_03_co.paa";
			head = "H_MaleHead_03";
			identityTypes[] = {"Head_TK"};
			material = "Edaly_Heads_1\data\malehead_03.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat";
		};
		class MaleHead_04: Default
		{
			author=$STR_EDALY_AUTHOR;
			displayname = "Juan";
			texture = "Edaly_Heads_1\data\malehead_04_co.paa";
			textureHL = "Edaly_Heads_1\data\hl_malehead_03_co.paa";
			head = "H_MaleHead_04";
			identityTypes[] = {"Head_TK"};
			material = "Edaly_Heads_1\data\malehead_04.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat";
		};
		class MaleHead_05: Default
		{
			author=$STR_EDALY_AUTHOR;
			displayname = "Jose";
			texture = "Edaly_Heads_1\data\malehead_04_co.paa";
			textureHL = "Edaly_Heads_1\data\hl_malehead_03_co.paa";
			head = "H_MaleHead_05";
			identityTypes[] = {"Head_TK"};
			material = "Edaly_Heads_1\data\malehead_04.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat";
		};
	};
};

class CfgHeads
{
	class DefaultHead_A3; 

	class H_MaleHead_01: DefaultHead_A3
	{
		model = "\Edaly_Heads_1\Male_head_01_F.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_jay.rvmat","A3\Characters_F\Heads\Data\m_jay_injury.rvmat","A3\Characters_F\Heads\Data\m_jay_injury.rvmat"};
		};
	};
	class H_MaleHead_02: DefaultHead_A3
	{
		model = "\Edaly_Heads_1\Male_head_02_F.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_jay.rvmat","A3\Characters_F\Heads\Data\m_jay_injury.rvmat","A3\Characters_F\Heads\Data\m_jay_injury.rvmat"};
		};
	};
	class H_MaleHead_03: DefaultHead_A3
	{
		model = "\Edaly_Heads_1\Male_head_03_F.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_jay.rvmat","A3\Characters_F\Heads\Data\m_jay_injury.rvmat","A3\Characters_F\Heads\Data\m_jay_injury.rvmat"};
		};
	};
	class H_MaleHead_04: DefaultHead_A3
	{
		model = "\Edaly_Heads_1\Male_head_04_F.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_jay.rvmat","A3\Characters_F\Heads\Data\m_jay_injury.rvmat","A3\Characters_F\Heads\Data\m_jay_injury.rvmat"};
		};
	};
	class H_MaleHead_05: DefaultHead_A3
	{
		model = "\Edaly_Heads_1\Male_head_05_F.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\m_jay.rvmat","A3\Characters_F\Heads\Data\m_jay_injury.rvmat","A3\Characters_F\Heads\Data\m_jay_injury.rvmat"};
		};
	};
};
