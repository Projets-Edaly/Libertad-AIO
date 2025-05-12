class cfgSoundSets
{
	class FNFAL_Shot_SoundSet
	{
		soundShaders[] = {"FNFAL_Closure_SoundShader","FNFAL_closeShot_SoundShader","FNFAL_midShot_SoundShader","FNFAL_distShot_SoundShader","FNFAL_tailInterior_SoundShader"};
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class FNFAL_Tail_SoundSet
	{
		soundShaders[] = {"FNFAL_tailTrees_SoundShader","FNFAL_tailForest_SoundShader","FNFAL_tailMeadows_SoundShader","FNFAL_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 1;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
};