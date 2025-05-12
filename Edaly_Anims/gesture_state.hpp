		class Edaly_Base_Anim: Default
		{
			actions = "NoActions";
			enableDirectControl=0;
			canPullTrigger = 0;
			connectAs = "";
			connectFrom[] = {};
			connectTo[] = {};
			disableWeapons = 1;
			hideweapons = 0;
            disableWeaponsLong= 1;
			enableBinocular = 0;
			enableMissile = 0;
			enableOptics = 0;
			equivalentTo = "";
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureHi.rtm";
			forceAim = 1;
			headBobMode = 5;
			head="headNo";
			headBobStrength = 1;
			interpolateFrom[] = {};
			interpolateTo[] = {};
			interpolateWith[] = {};
			interpolationRestart = 0;
			interpolationSpeed = 6;
			looped = 0;
			mask = "BodyFullReal";
			minPlayTime = 0.5;
			preload = 0;
			ragdoll = 0;
			relSpeedMax = 1;
			relSpeedMin = 1;
			showHandGun = 0;
			showItemInHand = 0;
			showItemInRightHand = 0;
			showWeaponAim = 0;
			soundEdge[] = {0.5,1};
			soundEnabled = 1;
			soundOverride = "";
			speed = -2;
			static = 0;
			terminal = 0;
			Walkcycles = 1;
			weaponIK = 0;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0,1,0.1,0,0.8,0,1,1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {0,1,0.1,0,0.8,0,1,1};
			rightHandIKEnd = 1;
		};
		class Edaly_Reload_Fal: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Weapons\rtm\anim_reloead_fal.rtm";
			actions = "NoActions";
			speed = -4;
			looped = 0;
			preload = 0;
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = { 0, 1, 0.050000, 0, 0.950000, 0, 1, 1 };
			mask = "handsWeapon";
		};
        /*
		class Edaly_HoldLantern: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Weapons\rtm\anim_holdlantern.rtm";
			actions = "NoActions";
			speed = -2;
			looped = 1;
			preload = 0;
			mask = "LeftArm";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
        */
		class Edaly_Give_01: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_give_01.rtm";
			actions = "NoActions";
			speed = -2;
			looped = 0;
			preload = 0;
			mask = "UpperBody";
		};
		class Edaly_Restrain_01: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_handcuffed_fix_01";
			actions = "NoActions";
			speed = -2;
			looped = 1;
			preload = 1;
			mask = "UpperBody";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Restrain_End: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_handcuffed_end";
			actions = "NoActions";
			speed = 1;
			looped = 0;
			preload = 1;
			mask = "UpperBody";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Surrender: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_surrender_01.rtm";
			speed = -4.5;
			actions = "NoActions";
			looped = 1;
			preload = 1;
			mask = "UpperBody";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Surrender_End: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_surrender_end.rtm";
			speed = 1.5;
			actions = "NoActions";
			looped = 0;
			preload = 1;
			mask = "UpperBody";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Surrender_Start_01: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_surrender_start_01.rtm";
			speed = 1.5;
			actions = "NoActions";
			looped = 0;
			preload = 1;
			mask = "UpperBody";
		};

		class Edaly_Surrender_End_01: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_surrender_end_01.rtm";
			speed = 1.5;
			actions = "NoActions";
			looped = 0;
			preload = 1;
			mask = "UpperBody";
		};
		class Edaly_Surrender_Idle_01: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_surrender_idle_01.rtm";
			speed = -2.5;
			actions = "NoActions";
			looped = 1;
			preload = 1;
			mask = "UpperBody";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Surrender_03: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_surrender_03.rtm";
			speed = -2.5;
			actions = "NoActions";
			looped = 1;
			preload = 1;
			mask = "UpperBody";
		};

		class Edaly_Watch_01: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_watch_01.rtm";
			actions = "NoActions";
			speed = -2.5;
			looped = 0;
			mask = "LeftArm";
		};
		class Edaly_Eat_01: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_eat_01.rtm";
			head="headNo";
			actions = "NoActions";
			speed = -4.5;
			looped = 0;
			mask = "UpperBody";
			headBobMode = 4;
			disableWeaponsLong = 1;
			disableWeapons = 1;
		};
		class Edaly_Eat_02: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_eat_02.rtm";
			actions = "NoActions";
			speed = -5.3;
			looped = 0;
			mask = "RightAndLeftArm";
			headBobMode = 4;
		};
		class Edaly_Eat_03: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_eat_03.rtm";
			head="headNo";
			actions = "NoActions";

			speed = -4.5;
			looped = 0;
			mask = "UpperBody";
			headBobMode = 4;
			disableWeaponsLong = 1;
			disableWeapons = 1;
		};
		class Edaly_Drink_01: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_drink_01.rtm";
			actions = "NoActions";
			speed = -3;
			looped = 0;
			mask = "RightArm";
		};
		class Edaly_Drink_02: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_drink_02.rtm";
			actions = "NoActions";
			speed = -1;
			looped = 1;
			mask = "RightArm";
		};
		class Edaly_Carry_02: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_carry_02.rtm";
			actions = "NoActions";
			speed = -10000000000;
			looped = 1;
			mask = "RightAndLeftArm";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Search_01: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_search_01.rtm";
			actions = "NoActions";
			speed = 0;
			looped = 1;
			mask = "RightAndLeftArm";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Idle_01: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_idle_01.rtm";
			actions = "NoActions";
			speed = -4.5;
			looped = 1;
			mask = "RightAndLeftArm";
		};
		class Edaly_Idle_02: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_idle_02.rtm";
			actions = "NoActions";
			speed = -5;
			looped = 1;
			mask = "RightAndLeftArm";
		};

		class Edaly_Hurt_01: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_hurt_01.rtm";
			actions = "NoActions";
			speed = -10;
			looped = 1;
			mask = "LeftArm";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Hurt_02: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_hurt_02.rtm";
			actions = "NoActions";
			speed = -15;
			looped = 1;
			mask = "LeftArm";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_BrokenArm: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_brokenarm_idle.rtm";
			actions = "NoActions";
			speed = -4;
			looped = 1;
			mask = "UpperBody";
			InterpolateTo[] = {"Edaly_BrokenArm_End", 2};
			ConnectTo[] = {"Edaly_BrokenArm", 0.01};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};

		class Edaly_BrokenArm_Start: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_brokenarm_01.rtm";
			actions = "NoActions";
			speed = -1;
			looped = 0;
			mask = "UpperBody";
			InterpolateTo[] = {"Edaly_BrokenArm", 2};
			ConnectTo[] = {"Edaly_BrokenArm", 0.01};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};

		class Edaly_Heal_01: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_bandage_01.rtm";
			actions = "NoActions";
			speed = -2;
			looped = 0;
			mask = "RightAndLeftArm";
		};
		class Edaly_Map_01: Edaly_Base_Anim
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_map_cycle_01.rtm";
			speed = -8;
			mask = "UpperBody";
			canBlendStep = 0;
			minPlayTime= 0.95;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Map_02: Edaly_Base_Anim
		{
			looped = 0;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_map_start_01.rtm";
			speed = -1;
			mask = "UpperBody";
			canBlendStep = 0;
			minPlayTime= 0.95;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Map_03: Edaly_Base_Anim
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_map_hold_02.rtm";
			speed = -3;
			mask = "UpperBody";
			canBlendStep = 0;
			minPlayTime= 0.95;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Map_04: Edaly_Base_Anim
		{
			looped = 0;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_map_end_01.rtm";
			speed = -1;
			mask = "UpperBody";
			canBlendStep = 0;
			minPlayTime= 0.95;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Weapon_Holding_01: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_weapon_holding_01.rtm";
			head="headNo";
			actions = "NoActions";
			speed = -4.5;
			looped = 1;
			mask = "RightArmWeapon";
			showItemInHand = 1;
			showItemInRightHand = 1;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Handcuffed_Fix_01: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_handcuffed_fix_01.rtm";
			head="headNo";
			actions = "NoActions";
			speed = -4.5;
			looped = 1;
			mask = "UpperBody";
		};
		class Edaly_Handcuffed_Fix_02: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_handcuffed_fix_02.rtm";
			head="headNo";
			actions = "NoActions";
			speed = -4.5;
			looped = 1;
			mask = "UpperBody";
		};
		class Edaly_Hello_01: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_hello_01.rtm";
			head="headNo";
			actions = "NoActions";
			speed = -2;
			looped = 0;
			mask = "LeftArm";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Fingerpoint_01: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_fingerpoint_01.rtm";
			head="headNo";
			actions = "NoActions";
			speed = -2;
			looped = 0;
			mask = "LeftArm";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {0,1,0.1,0,0.8,0,1,1};
		};
		class Edaly_Tool_Hold_02: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Weapons\rtm\anim_tool_hold_02.rtm";
			head="headNo";
			actions = "NoActions";
			speed = -2;
			looped = 1;
			mask = "UpperBody";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Tool_Hold_03: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Weapons\rtm\anim_tool_hold_03.rtm";
			head="headNo";
			actions = "NoActions";
			speed = -2;
			looped = 1;
			mask = "UpperBody";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Tool_Swing_01: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Weapons\rtm\anim_tool_swing_01.rtm";
			head="headNo";
			actions = "NoActions";
			speed = -1;
			looped = 0;
			mask = "BodyFight";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Hammer_Action_01: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Weapons\rtm\anim_hammer_action_01.rtm";
			head="headNo";
			actions = "NoActions";
			speed = -3;
			looped = 0;
			mask = "UpperBody";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Fight_Idle: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_fight_idle.rtm";
			head="headNo";
			actions = "NoActions";
			speed = -2;
			looped = 1;
			mask = "handsWeapon";
		};
		class Edaly_Fight_Punch: Edaly_Base_Anim
		{
			file = "\Edaly_Anims_2\data\MOCAP_Gesture_CivPace_Non_Punch_Hand_Right_Direct.rtm";
			Walkcycles = 0;
			actions = "NoActions";
			speed = -1;
			looped = 0;
			mask = "handsWeapon";
		};
		class Edaly_Fishing_Idle: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_fishingrod_idle_02.rtm";
			Walkcycles = 0;
			actions = "NoActions";
			speed = -6;
			looped = 1;
			mask = "handsNoWeapon";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Fishing_Launch: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_fishingrod_launch.rtm";
			Walkcycles = 0;
			actions = "NoActions";
			speed = -1;
			looped = 0;
			mask = "handsNoWeapon";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Fishing_Recover: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_fishingrod_recover.rtm";
			Walkcycles = 0;
			actions = "NoActions";
			speed = -1;
			looped = 0;
			mask = "handsNoWeapon";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Fishing_Catch_Win: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_fishingrod_catch_win.rtm";
			Walkcycles = 0;
			actions = "NoActions";
			speed = -2.5;
			looped = 0;
			mask = "handsNoWeapon";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Fishing_Catch_Fail: Edaly_Base_Anim
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_fishingrod_catch_fail.rtm";
			Walkcycles = 0;
			actions = "NoActions";
			speed = -4;
			looped = 0;
			mask = "handsNoWeapon";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
