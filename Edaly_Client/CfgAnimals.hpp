class CfgAnimals {
    class Edaly_Crocodile {
        maxDistanceFromHome=300;
        eyeSightMalus=0;
        surface="EVERYWHERE";
        smellDistance=4;
        viewAngle=270;
        roamSounds[]={"animals_alligator_growl"};
        helpEndangeredMates=1;
        combatSounds[]={
            "animals_alligator_hiss_001",
            "animals_alligator_hiss_002",
            "animals_alligator_hiss_003",
            "animals_alligator_hiss_004",
            "animals_alligator_hiss_005"
        };
        class attack {
            distance=1.6;
            cooldown=2;
            timeBeforeStrike=0.30;
            damage=0.5;
            extraRandomDamage=0.4;
            move="Crocodile_Bite";
            sound="animals_predator_bite";
            distanceBeforeQuitTrack=20;
        };
        class mouth {
            memory="head";
            humanPos[]={-0.2,0.1,-1.5};
        };
    };
    class Edaly_Crocodile_Albino: Edaly_Crocodile {};
    class Edaly_Crocodile_Mossy: Edaly_Crocodile {};

    class Edaly_Crocodile_Small {
        maxDistanceFromHome=300;
        eyeSightMalus=0;
        surface="EVERYWHERE";
        smellDistance=4;
        viewAngle=270;
        roamSounds[]={"animals_alligator_growl"};
        helpEndangeredMates=1;
        combatSounds[]={
            "animals_alligator_hiss_001",
            "animals_alligator_hiss_002",
            "animals_alligator_hiss_003",
            "animals_alligator_hiss_004",
            "animals_alligator_hiss_005"
        };
        class attack {
            distance=1.6;
            cooldown=2;
            timeBeforeStrike=0.30;
            damage=0.1;
            extraRandomDamage=0.2;
            move="Crocodile_BiteSmall";
            sound="animals_predator_bite";
            distanceBeforeQuitTrack=20;
        };
        class mouth {
            memory="head";
            humanPos[]={-0.2,0.1,-1.5};
        };
    };
    class Edaly_Crocodile_Small_Albino: Edaly_Crocodile_Small {};
    class Edaly_Crocodile_Small_Mossy: Edaly_Crocodile_Small {};

    class edaly_horse_01 {
        viewAngle=350;
        sufferSounds[]={
            "animals_horse_whinny_1",
            "animals_horse_whinny_2",
            "animals_horse_whinny_3"
        };
    };
    class edaly_horse_02: edaly_horse_01 {};
    class edaly_horse_03: edaly_horse_01 {};
    class edaly_horse_04: edaly_horse_01 {};
    class edaly_horse_05: edaly_horse_01 {};
    class edaly_horse_06: edaly_horse_01 {};
    class edaly_horse_07: edaly_horse_01 {};
    class edaly_horse_08: edaly_horse_01 {};
    class edaly_horse_nosaddle_01: edaly_horse_01 {};

    class Edaly_Boar {
        maxDistanceFromHome=300;
        eyeSightMalus=0;
        surface="ONLY_ON_LAND";
        smellDistance=10;
        viewAngle=310;
        roamSounds[]={
            "animals_pig_roam_1",
            "animals_pig_roam_2",
            "animals_pig_roam_3"
        };
        combatSounds[]={
            "animals_pig_aggro_1",
            "animals_pig_aggro_2"
        };
        sufferSounds[]={
            "animals_pig_hurt_1",
            "animals_pig_hurt_2",
            "animals_pig_hurt_3"
        };
        class attack {
            distance=1.75;
            cooldown=2;
            timeBeforeStrike=0.5;
            damage=0.1;
            extraRandomDamage=0.2;
            move="Boar_attack";
            sound="animals_pig_aggro_1";
            distanceBeforeQuitTrack=20;
        };
    };
    class Edaly_Crab {
        maxDistanceFromHome=20;
        viewAngle=360;
        surface="EVERYWHERE";
    };
    class Edaly_Tiger {
        maxDistanceFromHome=100;
        eyeSightMalus=0;
        surface="ONLY_ON_LAND";
        smellDistance=16;
        viewAngle=180;
        roamSounds[]={"animals_tiger_roam_1"};
        combatSounds[]={
            "animals_tiger_roar_1",
            "animals_tiger_roar_2",
            "animals_tiger_roar_3",
            "animals_tiger_roar_4"
        };
        class attack {
            distance=2.5;
            cooldown=2;
            timeBeforeStrike=0.5;
            damage=0.6;
            extraRandomDamage=0.2;
            move="TigerAttack";
            sound="animals_tiger_bite";
            distanceBeforeQuitTrack=60;
        };
        class mouth {
            memory="RigJaw1";// head
            humanPos[]={-0.2,0.4,-2.5};
        };
    };
    class Edaly_Cattle {
        maxDistanceFromHome=100;
        viewAngle=320;
        surface="ONLY_ON_LAND";
    };
};
