
		class CutSceneAnimationBaseSit;
		class HubStanding_idle3;
		class Edaly_AnimationBase_CutScene: CutSceneAnimationBaseSit
		{
			affectedByFatigue = 0;
			showWeaponAim = 0;
			canPullTrigger = 0;
			disableWeapons = 1;
			enableOptics = 0;
			weaponLowered = 1;
			connectFrom[] = {};
			connectTo[] = {};
			connectAs = "";
			interpolateWith[] = {};
			interpolateFrom[] = {};
			disableWeaponsLong = 1;
			limitGunMovement = 0.3;
			head = "headDefault";
			static = 1;
			enableBinocular = 0;
			headBobMode = 1;
			canBlendStep = 1;
			headBobStrength = -1;
			forceAim = 1;
			file = "Edaly_Anims\Edaly_Fixe\rtm\anim_pose_01.rtm";
			soundEdge[] = {0.01};
			InterpolateTo[] = {};
			preload = 0;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
			hasCollShapeSafe = 0;
		};

		class Edaly_Move_Pose_01: Edaly_AnimationBase_CutScene
		{
			looped = 0;
			file = "Edaly_Anims\Edaly_Fixe\rtm\anim_pose_01.rtm";
			speed = -2;
			mask = "BodyFullReal";
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 2};
			canBlendStep = 0;
			minPlayTime= 0.95;
		};
		class Edaly_Move_Pose_02: Edaly_AnimationBase_CutScene
		{
			looped = 0;
			file = "Edaly_Anims\Edaly_Fixe\rtm\anim_pose_02.rtm";
			speed = -2;
			mask = "BodyFullReal";
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 1};
			canBlendStep = 0;
			minPlayTime= 0.95;
		};
		class Edaly_Move_Pose_03: Edaly_AnimationBase_CutScene
		{
			looped = 0;
			file = "Edaly_Anims\Edaly_Fixe\rtm\anim_pose_03.rtm";
			speed = -2;
			mask = "BodyFullReal";
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 1};
			canBlendStep = 0;
			minPlayTime= 0.95;
		};
		class Edaly_Jump_Full: Edaly_AnimationBase_CutScene
		{
			looped = 0;
			file = "\Edaly_Anims\Edaly_Others\anim_jump_full.rtm";
			speed = 1;
			mask = "BodyFullReal";
			InterpolateTo[] = {"Edaly_Jump_End",0.5,"AmovPercMstpSrasWrflDnon", 1};
			canBlendStep = 1;
			minPlayTime= 0.99;
		};
		class Edaly_Jump_End: Edaly_AnimationBase_CutScene
		{
			looped = 0;
			file = "\Edaly_Anims\Edaly_Others\anim_jump_end.rtm";
			speed = 1;
			mask = "BodyFullReal";
			interpolateFrom[] = {"Edaly_Jump_Full",0.5};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 1};
			canBlendStep = 1;
			minPlayTime= 0.95;
		};

		class Edaly_Move_Sit_01: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_sitting_01.rtm";
			speed = -15;
			mask = "BodyFullReal";
			canBlendStep = 0;
		};
		class Edaly_Move_Idle_01: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_idle_01.rtm";
			speed = -13;
			mask = "BodyFullReal";
			canBlendStep = 0;
		};
		class Edaly_Move_Idle_02: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_idle_02.rtm";
			speed = -15;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 0.95;
		};
		class Edaly_Move_Idle_03: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_idle_03.rtm";
			speed = -15;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 0.95;
		};
		class Edaly_Move_Idle_04: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_idle_04.rtm";
			speed = -13;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 0.95;
		};
		class Edaly_Move_Hurt_01: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_hurt_01.rtm";
			speed = -9;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 0.95;
		};
		class Edaly_Move_Hurt_02: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_hurt_02.rtm";
			speed = -15;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 0.95;
		};
		class Edaly_Move_Give_01: Edaly_AnimationBase_CutScene
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_give_01.rtm";
			speed = -2;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 0.95;
			looped = 0;
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 2};
		};
		class Edaly_Move_Map_01: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_map_cycle_01.rtm";
			speed = -8;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 0.95;
		};
		class Edaly_Move_Map_02: Edaly_AnimationBase_CutScene
		{
			looped = 0;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_map_start_01.rtm";
			speed = -1;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 0.95;
		};
		class Edaly_Move_Map_03: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_map_hold_02.rtm";
			speed = -3;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 0.95;
		};
		class Edaly_Move_Map_04: Edaly_AnimationBase_CutScene
		{
			looped = 0;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_map_end_01.rtm";
			speed = -1;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 0.95;
		};

		class Edaly_Move_Sleep_01: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_sleep_idle_01.rtm";
			speed = -2.9;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 0.97;
		};

		class Edaly_Move_Heal_01: Edaly_AnimationBase_CutScene
		{
			looped = 0;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_bandage_01.rtm";
			speed = -5;
			mask = "RightAndLeftArm";
			canBlendStep = 0;
			minPlayTime= 0.97;
		};

		class Edaly_Move_Skin_01: Edaly_AnimationBase_CutScene
		{
			looped = 0;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_Skin_01.rtm";
			speed = -5;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 0.95;
		};
		class Edaly_Move_Compass_02: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_compass_cycle_01.rtm";
			speed = -5;
			mask = "LeftArm";
			canBlendStep = 0;
			minPlayTime= 0.95;
		};
		class Edaly_Move_Handcuffed_Low_Idle_02: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_handcuffed_low_idle_02.rtm";
			speed = -8;
			mask = "BodyFullReal";
			enableDirectControl = 0;
			canBlendStep = 0;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class Edaly_Handcuffed_Low_Start_02: Edaly_AnimationBase_CutScene
		{
			file = "\Edaly_Anims\Edaly_Anime\rtm\anim_handcuffed_low_start_02.rtm";
			speed = -5;
			looped = 0;
			mask = "BodyFullReal";
			enableDirectControl = 0;
			canBlendStep = 0;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};

		// HORSE RIDER //
		class Edaly_Horse_Rider_Idle01: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Animals\Horse\anim_horse_rider_01.rtm";
			speed = -5;
			mask = "BodyFullReal";
			canBlendStep = 0;
			interpolateTo[] = {"Edaly_Horse_Rider_Walk",0.02,"Edaly_Horse_Rider_Trot",0.02,"Edaly_Horse_Rider_Sprint",0.02,"Edaly_Horse_Rider_Mount_Left",0.02,"Edaly_Horse_Rider_Mount_Right",0.02};
		};
		class Edaly_Horse_Rider_Idle02: Edaly_Horse_Rider_Idle01
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Animals\Horse\anim_horse_rider_02.rtm";
			speed = -5;
			mask = "BodyFullReal";
			canBlendStep = 0;
		};
		class Edaly_Horse_Rider_Cargo_01: Edaly_Horse_Rider_Idle01
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Animals\Horse\anim_horse_rider_cargo_01.rtm";
			speed = -5;
			mask = "BodyFullReal";
			canBlendStep = 0;
		};
		class Edaly_Horse_Rider_Dismount_Left: Edaly_AnimationBase_CutScene
		{
			looped = 0;
			file = "\Edaly_Anims\Edaly_Animals\Horse\edaly_horse_dismount_left.rtm";
			speed = -1;
			mask = "BodyFullReal";
			canBlendStep = 0;
			ConnectTo[] = {};
			preload = 0;
		};
		class Edaly_Horse_Rider_Dismount_Right: Edaly_AnimationBase_CutScene
		{
			looped = 0;
			file = "\Edaly_Anims\Edaly_Animals\Horse\edaly_horse_dismount_right.rtm";
			speed = -1;
			mask = "BodyFullReal";
			canBlendStep = 0;
			ConnectTo[] = {};
			preload = 0;
		};
		class Edaly_Horse_Rider_Mount_Left: Edaly_AnimationBase_CutScene
		{
			looped = 0;
			file = "\Edaly_Anims\Edaly_Animals\Horse\anim_horse_rider_mount_left.rtm";
			speed = -1;
			mask = "BodyFullReal";
			canBlendStep = 0;
			ConnectTo[] = {};
			preload = 0;
			interpolateTo[] = {"Edaly_Horse_Rider_Trot",0.02,"Edaly_Horse_Rider_Sprint",0.02,"Edaly_Horse_Rider_Idle01",0.02,"Edaly_Horse_Rider_WalkBack",0.02,"Edaly_Horse_Rider_Mount_Left",0.02,"Edaly_Horse_Rider_Walk",0.02};
		};
		class Edaly_Horse_Rider_Mount_Right: Edaly_AnimationBase_CutScene
		{
			looped = 0;
			file = "\Edaly_Anims\Edaly_Animals\Horse\anim_horse_rider_mount_right.rtm";
			speed = -1;
			mask = "BodyFullReal";
			canBlendStep = 0;
			ConnectTo[] = {};
			preload = 0;
			interpolateTo[] = {"Edaly_Horse_Rider_Trot",0.02,"Edaly_Horse_Rider_Sprint",0.02,"Edaly_Horse_Rider_Idle01",0.02,"Edaly_Horse_Rider_WalkBack",0.02,"Edaly_Horse_Rider_Mount_Left",0.02,"Edaly_Horse_Rider_Walk",0.02};
		};

		class Edaly_Horse_Rider_Walk: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Animals\Horse\anim_horse_rider_walk.rtm";
			speed = 1;
			mask = "BodyFullReal";
			canBlendStep = 0;
			variantsAI[] = {"Edaly_Horse_Rider_Walk",0.1};
			interpolateFrom[] = {"Edaly_Horse_Rider_Idle01",0.02};
			interpolateTo[] = {"Edaly_Horse_Rider_Idle01",0.02,"Edaly_Horse_Rider_Trot",0.02,"Edaly_Horse_Rider_Sprint",0.02,"Edaly_Horse_Rider_Walk_02",0.02,"Edaly_Horse_Rider_WalkBack",0.02,"Edaly_Horse_Rider_Mount_Left",0.02,"Edaly_Horse_Rider_Mount_Right",0.02};
		};
		class Edaly_Horse_Rider_Walk_02: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Animals\Horse\anim_horse_rider_walk_02.rtm";
			speed = 1;
			mask = "BodyFullReal";
			canBlendStep = 0;
			variantsAI[] = {"Edaly_Horse_Rider_Walk",0.1};
			interpolateFrom[] = {"Edaly_Horse_Rider_Walk",0.02};
			interpolateTo[] = {"Edaly_Horse_Rider_Walk",0.02,"Edaly_Horse_Rider_Trot",0.02,"Edaly_Horse_Rider_Sprint",0.02,"Edaly_Horse_Rider_Idle01",0.02,"Edaly_Horse_Rider_WalkBack",0.02,"Edaly_Horse_Rider_Walk",0.02,"Edaly_Horse_Rider_Mount_Left",0.02,"Edaly_Horse_Rider_Mount_Right",0.02};
		};
		class Edaly_Horse_Rider_WalkBack: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Animals\Horse\anim_horse_rider_walkback.rtm";
			speed = 1;
			mask = "BodyFullReal";
			canBlendStep = 0;
			interpolateTo[] = {"Edaly_Horse_Rider_Trot",0.02,"Edaly_Horse_Rider_Sprint",0.02,"Edaly_Horse_Rider_Idle01",0.02,"Edaly_Horse_Rider_Walk",0.02,"Edaly_Horse_Rider_Mount_Left",0.02,"Edaly_Horse_Rider_Mount_Right",0.02};
		};
		class Edaly_Horse_Rider_Trot: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Animals\Horse\anim_horse_rider_canter.rtm";
			speed = 2;
			mask = "BodyFullReal";
			canBlendStep = 0;
			interpolateTo[] = {"Edaly_Horse_Rider_Walk",0.02,"Edaly_Horse_Rider_Sprint",0.02,"Edaly_Horse_Rider_Idle01",0.02,"Edaly_Horse_Rider_Mount_Left",0.02,"Edaly_Horse_Rider_Mount_Right",0.02};
		};
		class Edaly_Horse_Rider_Idle: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Animals\Horse\anim_horse_02.rtm";
			speed = -3;
			mask = "BodyFullReal";
			canBlendStep = 0;
			ConnectFrom[] = {"Edaly_Horse_Rider_Walk",0.9};
			ConnectTo[] = {"Edaly_Horse_Rider_Walk",0.05};
			interpolateTo[] = {"Edaly_Horse_Rider_Walk",0.02,"Edaly_Horse_Rider_Sprint",0.02,"Edaly_Horse_Rider_Trot",0.02};
		};
		class Edaly_Horse_Rider_Sprint: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Animals\Horse\anim_horse_rider_sprint.rtm";
			speed = 1;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 0.95;
			interpolateTo[] = {"Edaly_Horse_Rider_Walk",0.02,"Edaly_Horse_Rider_Idle01",0.02,"Edaly_Horse_Rider_Trot",0.02,"Edaly_Horse_Rider_Mount_Left",0.02,"Edaly_Horse_Rider_Mount_Right",0.02};
		};
		class Edaly_Horse_Rider_Canter: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims\Edaly_Animals\Horse\anim_horse_rider_canter.rtm";
			speed = 1;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 0.95;
			interpolateTo[] = {"Edaly_Horse_Rider_Walk",0.02,"Edaly_Horse_Rider_Idle01",0.02,"Edaly_Horse_Rider_Trot",0.02,"Edaly_Horse_Rider_Mount_Left",0.02,"Edaly_Horse_Rider_Mount_Right",0.02};
		};
		class Edaly_Horse_Rider_Die: Edaly_AnimationBase_CutScene
		{
			looped = 0;
			file = "\Edaly_Anims\Edaly_Animals\Horse\anim_horse_rider_driver_death.rtm";
			speed = -2;
			head = "headNo";
			terminal = 1;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 1;
		};

		/// KEYART ////

		class Edaly_Keyart_01: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims_2\data\keyart_01.rtm";
			speed = 1;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 0.95;
		};
		class Edaly_Keyart_02: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims_2\data\keyart_02.rtm";
			speed = 1;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 0.95;
		};
		class Edaly_Keyart_03: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims_2\data\keyart_03.rtm";
			speed = 1;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 0.95;
		};
		class Edaly_Keyart_04: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims_2\data\keyart_04.rtm";
			speed = 1;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 0.95;
		};
		class Edaly_Keyart_05: Edaly_AnimationBase_CutScene
		{
			looped = 1;
			file = "\Edaly_Anims_2\data\keyart_05.rtm";
			speed = 1;
			mask = "BodyFullReal";
			canBlendStep = 0;
			minPlayTime= 0.95;
		};
