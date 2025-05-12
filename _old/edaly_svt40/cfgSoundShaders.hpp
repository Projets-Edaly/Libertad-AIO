class cfgSoundShaders
{
	//###################################### SHOTS ######################################
	class edaly_FNFAL_Closure_SoundShader
	{
		samples[] = {{"A3\sounds_f\weapons\closure\closure_rifle_2",1}};
		volume = db+1;
		range = 5;
	};
	class edaly_FNFAL_closeShot_SoundShader
	{
		samples[] = {{"\edaly_weapons_1\edaly_FN_FAL\sounds\sound_edaly_FNFAL_closeShot_01.wav",1}, {"\edaly_weapons_1\edaly_FN_FAL\sounds\sound_edaly_FNFAL_closeShot_02.wav", 1}, {"\edaly_weapons_1\edaly_FN_FAL\sounds\sound_edaly_FNFAL_closeShot_03.wav", 1}};
		volume = db+1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class edaly_FNFAL_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_midShot_01", 1}, {"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_midShot_02", 1}, {"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_midShot_03", 1}};
		volume = db-2;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class edaly_FNFAL_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_distShot_01", 1}, {"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_distShot_02", 1}, {"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_distShot_03", 1}};
		volume = db-2;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	//###################################### TAILS ######################################
	class edaly_FNFAL_tailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class edaly_FNFAL_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class edaly_FNFAL_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class edaly_FNFAL_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class edaly_FNFAL_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
};