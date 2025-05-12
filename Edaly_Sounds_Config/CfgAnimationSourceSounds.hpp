class rusty_door
{
    class DoorMovement
    {
        loop = 0;
        terminate = 0;
        trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
        sound0[] = {"\Edaly_Sounds_Assets_2\data\doors\rusty_door.ogg",1,1,20};
        sound1[] = {"\Edaly_Sounds_Assets_2\data\doors\rusty_door.ogg",1,1,20};
        sound[] = {"sound0",0.5,"sound1",0.5};
    };
};
class metal_electric_door
{
    class DoorMovement
    {
        loop = 0;
        terminate = 0;
        trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
        sound0[] = {"\Edaly_Sounds_Assets_2\data\doors\metaldoor_elec.ogg",1,1,20};
        sound1[] = {"\Edaly_Sounds_Assets_2\data\doors\metaldoor_elec.ogg",1,1,20};
        sound[] = {"sound0",0.5,"sound1",0.5};
    };
};
