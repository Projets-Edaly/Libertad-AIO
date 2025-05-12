    class Swamps_SoundShader
    {
        samples[] = {{"Edaly_Sounds_Assets_2\data\map\env_swamps_amb_1.ogg",1},{"Edaly_Sounds_Assets_2\data\map\env_swamps_amb_1.ogg",1}};
        volume = "(shooting factor [0.7,0.72]) *  ((rain factor [0.6,0.4]) * (daytime factor [0.25, 0.33])*(daytime factor [0.88, 0.79]) + forest/3)";
        range = 500;
    };
    class Jungle_SoundShader
    {
        samples[] = {{"Edaly_Sounds_Assets_2\data\map\env_forrest_amb_1.ogg",1},{"Edaly_Sounds_Assets_2\data\map\env_forrest_amb_1.ogg",1}};
        volume = "(shooting factor [0.7,0.72]) *  ((rain factor [0.6,0.4]) * (daytime factor [0.25, 0.33])*(daytime factor [0.88, 0.79]) + forest/3)";
        range = 50;
    };

    class Rain_PlantA_Light_SoundShader
    {
        samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_light_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_light_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_light_003",1}};
        volume = "raindrops * raindrops * (rain factor[0,0.1]) * 1.5";
        range = 12;
    };

    class ForestMorning2_SoundShader
    {
        samples[] = {{"Edaly_Sounds_Assets_2\data\map\env_forrest_amb_1.ogg",1}};
        volume = "(altitudeGround factor [0,5]) * (altitudeGround factor [100,30]) * (daytime factor [0.25, 0.33]) * (daytime factor [0.54, 0.46])";
        range = 60;
    };
    class ForestAfternoon_SoundShader
    {
        samples[] = {{"Edaly_Sounds_Assets_2\data\map\env_forrest_amb_1.ogg",1}};
        volume = "(altitudeGround factor [0,5]) * (altitudeGround factor [100,30]) * (daytime factor [0.46, 0.54]) * (daytime factor [0.83, 0.75])";
        range = 60;
    };
    class ForestNight_SoundShader
    {
        samples[] = {{"Edaly_Sounds_Assets_2\data\map\env_swamps_amb_1.ogg",1}};
        volume = "(altitudeGround factor [0,5]) * (altitudeGround factor [100,30]) * ((daytime factor [0.75, 0.83]) + (daytime factor [0.33, 0.25]))";
    };

// HORSE

class footsteps_default_walk_SoundShader
{
    samples[] = {{"\A3\sounds_f\characters\footsteps\concrete\concrete_run_LPF_1",1}};
    volume = 0.25118864;
    range = 35;
    frequency = 1;
};
class footsteps_default_run_SoundShader
{
    samples[] = {{"\A3\sounds_f\characters\footsteps\concrete\concrete_run_LPF_1",1}};
    volume = 0.39810717;
    range = 45;
    frequency = 1;
};

//////// WALK ////////
class footsteps_default_walk_horse_SoundShader: footsteps_default_walk_SoundShader
{
    samples[] = {{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_footsteps_1.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_footsteps_2.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_footsteps_3.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_footsteps_4.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_footsteps_5.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_footsteps_6.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_footsteps_7.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_footsteps_8.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_footsteps_9.OGG",1}};
    volume = 0.25118864;
    range = 35;
    frequency = 1;
};
class footsteps_sand_walk_horse_SoundShader: footsteps_default_walk_SoundShader
{
    samples[] = {{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_Sand_1.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_Sand_2.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_Sand_3.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_Sand_4.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_Sand_5.OGG",1}};
    frequency = 1;
};
class footsteps_dirt_walk_horse_SoundShader: footsteps_default_walk_SoundShader
{
    samples[] = {{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_Dirt_1.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_Dirt_2.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_Dirt_3.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_Dirt_4.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_Dirt_5.OGG",1}};
    frequency = 1;
};
class footsteps_cobblestone_walk_horse_SoundShader: footsteps_default_walk_SoundShader
{
    samples[] = {{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_asphalt_1.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_asphalt_2.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_asphalt_3.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_asphalt_4.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_asphalt_5.OGG",1}};
    frequency = 1;
};
class footsteps_forest_walk_horse_SoundShader: footsteps_default_walk_SoundShader
{
    samples[] = {{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_leaves_1.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_leaves_2.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_leaves_3.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_leaves_4.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_leaves_5.OGG",1}};
    frequency = 1;
};
class footsteps_water_walk_horse_SoundShader: footsteps_default_walk_SoundShader
{
    samples[] = {{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_water_1.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_water_2.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_water_3.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_water_4.OGG",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Footsteps_water_5.OGG",1}};
    frequency = 1;
};

class equipment_walk_horse_SoundShader: footsteps_default_walk_SoundShader
{
    samples[] = {{"\Edaly_Sounds_Assets_1\data\animals\horse\horse_breathing_02.ogg",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\horse_breathing_03.ogg",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\horse_breathing_04.ogg",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\horse_breathing_05.ogg",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\horse_breathing_06.ogg",1}};
    frequency = 1;
};

class footsteps_default_run_horse_SoundShader: footsteps_default_run_SoundShader
{
    samples[] = {{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Galloping_1.ogg",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Galloping_2.ogg",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Galloping_3.ogg",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Galloping_4.ogg",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Galloping_5.ogg",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Galloping_6.ogg",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Galloping_7.ogg",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Galloping_8.ogg",1},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Galloping_1.ogg",9},{"\Edaly_Sounds_Assets_1\data\animals\horse\Horse_Galloping_10.ogg",1}};
    volume = 0.5011872;
    frequency = 1;
};
