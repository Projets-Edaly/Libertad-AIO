// HORSE

    class ForestMorning_SoundSet
    {
        soundShaders[] = {"ForestMorning2_SoundShader"};
        volumeFactor = 0.5;
        spatial = 0;
        loop = 1;
        sound3DProcessingType = "ForestDay_3DProcessingType";
    };
    class ForestAfternoon_SoundSet
    {
        soundShaders[] = {"ForestMorning2_SoundShader"};
        volumeFactor = 0.6;
        spatial = 0;
        loop = 1;
        sound3DProcessingType = "ForestDay_3DProcessingType";
    };
    class ForestNight_SoundSet
    {
        soundShaders[] = {"ForestMorning2_SoundShader"};
        volumeFactor = 0.2;
        spatial = 0;
        loop = 1;
        sound3DProcessingType = "ForestNight_3DProcessingType";
    };
    class Sea_SoundSet
    {
        soundShaders[] = {"Sea_SoundShader"};
        volumeFactor = 0.18;
        spatial = 0;
        loop = 1;
    };
//////// DEFAULT ////////
     class Swamps_SoundSet
    {
        soundShaders[] = {"Swamps_SoundShader"};
        volumeFactor = 3;
        spatial = 1;
        doppler = 0;
        loop = 1;
        volumeCurve = "InverseSquare1Curve";
        sound3DProcessingType = "TreeWide3DProcessingType";
    };
     class Jungle_SoundSet
    {
        soundShaders[] = {"Jungle_SoundShader"};
        volumeFactor = 3;
        spatial = 1;
        doppler = 0;
        loop = 1;
        volumeCurve = "InverseSquare1Curve";
        sound3DProcessingType = "TreeWide3DProcessingType";
    };
    class Rain_PlantA_Light_SoundSet
    {
        soundShaders[] = {"Rain_PlantA_Light_SoundShader"};
        volumeFactor = 1;
        frequencyFactor = 0.8;
        spatial = 1;
        doppler = 0;
        loop = 1;
        volumeCurve = "InverseSquare1Curve";
        sound3DProcessingType = "PLant3DProcessingType";
    };
class footsteps_default_SoundSet
{
    occlusionObstruction = 1;
    occlusionFactor = 0.7;
    obstructionFactor = 0;
    distanceFilter = "footstepsDistanceFreqAttenuationFilter";
    volumeCurve = "InverseSquare1CurveFootsteps";
};
class footsteps_default_walk_SoundSet: footsteps_default_SoundSet
{
    soundShaders[] = {"footsteps_grassTall_run_A_SoundShader"};
    volumeFactor = 0.15;
    frequencyRandomizer = 2.2;
    frequencyRandomizerMin = 1;
    sound3DProcessingType = "Footsteps3DProcessingType";
    volumeRandomizer = 0.7;
    volumeRandomizerMin = 0.3;
};
class footsteps_default_run_SoundSet: footsteps_default_SoundSet
{
    soundShaders[] = {"footsteps_grassTall_run_A_SoundShader"};
    volumeFactor = 0.25;
    frequencyRandomizer = 2.2;
    frequencyRandomizerMin = 1;
    sound3DProcessingType = "Footsteps3DProcessingType";
    volumeRandomizer = 0.7;
    volumeRandomizerMin = 0.4;
};

//////// WALK ////////

class footsteps_default_walk_horse_SoundSet: footsteps_default_walk_SoundSet
{
    soundShaders[] = {"footsteps_default_walk_horse_SoundShader","footsteps_stones_small_debris_SoundShader","footsteps_wet_walk_SoundShader"};
    volumeFactor = 1;
    frequencyRandomizer = 3;
    frequencyRandomizerMin = 1;
};
class footsteps_sand_walk_horse_SoundSet: footsteps_default_walk_SoundSet
{
    soundShaders[] = {"footsteps_sand_walk_horse_SoundShader","footsteps_stones_small_debris_SoundShader","footsteps_wet_walk_SoundShader"};
    volumeFactor = 0.3;
    frequencyRandomizer = 3;
    frequencyRandomizerMin = 1;
};
class footsteps_dirt_walk_horse_SoundSet: footsteps_default_walk_SoundSet
{
    soundShaders[] = {"footsteps_dirt_walk_horse_SoundShader","footsteps_stones_small_debris_SoundShader","footsteps_wet_walk_SoundShader"};
    volumeFactor = 1;
    frequencyRandomizer = 3;
    frequencyRandomizerMin = 1;
};
class footsteps_cobblestone_walk_horse_SoundSet: footsteps_default_walk_SoundSet
{
    soundShaders[] = {"footsteps_cobblestone_walk_horse_SoundShader","footsteps_stones_small_debris_SoundShader","footsteps_wet_walk_SoundShader"};
    volumeFactor = 1;
    frequencyRandomizer = 3;
    frequencyRandomizerMin = 1;
};
class footsteps_forest_walk_horse_SoundSet: footsteps_default_walk_SoundSet
{
    soundShaders[] = {"footsteps_forest_walk_horse_SoundShader","footsteps_stones_small_debris_SoundShader","footsteps_wet_walk_SoundShader"};
    volumeFactor = 0.35;
    frequencyRandomizer = 3;
    frequencyRandomizerMin = 1;
};
class footsteps_water_walk_horse_SoundSet: footsteps_default_walk_SoundSet
{
    soundShaders[] = {"footsteps_water_walk_horse_SoundShader","footsteps_stones_small_debris_SoundShader","footsteps_wet_walk_SoundShader"};
    volumeFactor = 1;
    frequencyRandomizer = 3;
    frequencyRandomizerMin = 1;
};

class equipment_walk_horse_SoundSet: footsteps_default_walk_SoundSet
{
    soundShaders[] = {"equipment_walk_horse_SoundShader"};
    volumeFactor = 1;
    frequencyRandomizer = 2;
    frequencyRandomizerMin = 2;
};
class footsteps_default_horse_run_SoundSet: footsteps_default_run_SoundSet
{
    soundShaders[] = {"footsteps_default_run_horse_SoundShader","footsteps_stones_small_debris_SoundShader","footsteps_wet_walk_SoundShader"};
    volumeFactor = 1;
    frequencyRandomizer = 3;
    frequencyRandomizerMin = 1;
};
