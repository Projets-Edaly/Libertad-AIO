
	class ManActions
	{
		Edaly_HoldLantern = "Edaly_HoldLantern";

		Edaly_Restrain_01 = "Edaly_Restrain_01";
		Edaly_Restrain_End = "Edaly_Restrain_End";
		Edaly_Surrender = "Edaly_Surrender";
		Edaly_Surrender_End = "Edaly_Surrender_End";
		Edaly_Surrender_Start_01 = "Edaly_Surrender_Start_01";
		Edaly_Surrender_End_01 = "Edaly_Surrender_End_01";
		Edaly_Surrender_Idle_01 = "Edaly_Surrender_Idle_01";
		Edaly_Surrender_03 = "Edaly_Surrender_03";

		Edaly_Scisors = "Edaly_Scisors";
		Edaly_Paper = "Edaly_Paper";
		Edaly_Rock = "Edaly_Rock";

		Edaly_Reload_Fal = "Edaly_Reload_Fal";

		Edaly_Jump_Full = "Edaly_Jump_Full";
		Edaly_Jump_End = "Edaly_Jump_End";

		Edaly_Horse_Rider_Sprint_Start = "Edaly_Horse_Rider_Sprint_Start";
		Edaly_Horse_Rider_Sprint_End = "Edaly_Horse_Rider_Sprint_End";
		Edaly_Horse_Rider_Sprint = "Edaly_Horse_Rider_Sprint";
		Edaly_Horse_Rider_Canter = "Edaly_Horse_Rider_Canter";

		Edaly_Fishing_Idle = "Edaly_Fishing_Idle";
		Edaly_Fishing_Launch = "Edaly_Fishing_Launch";
		Edaly_Fishing_Recover = "Edaly_Fishing_Recover";
		Edaly_Fishing_Catch_Win = "Edaly_Fishing_Catch_Win";
		Edaly_Fishing_Catch_Fail = "Edaly_Fishing_Catch_Fail";

		Edaly_Keyart_01 = "Edaly_Keyart_01";
		Edaly_Keyart_02 = "Edaly_Keyart_02";
		Edaly_Keyart_03 = "Edaly_Keyart_03";
		Edaly_Keyart_04 = "Edaly_Keyart_03";

		Edaly_Sit_01 = "Edaly_Sit_01";

		Edaly_Watch_01 = "Edaly_Watch_01";
		Edaly_Compass_01 = "Edaly_Compass_01";
		Edaly_Compass_02 = "Edaly_Compass_02";

		Edaly_Eat_01 = "Edaly_Eat_01";
		Edaly_Eat_02 = "Edaly_Eat_02";
		Edaly_Eat_03 = "Edaly_Eat_03";
		Edaly_Drink_01 = "Edaly_Drink_01";
		Edaly_Drink_02 = "Edaly_Drink_02";

		Edaly_Give_01 = "Edaly_Give_01";
		Edaly_Search_01 = "Edaly_Search_01";

		Edaly_Idle_01 = "Edaly_Idle_01";
		Edaly_Idle_02 = "Edaly_Idle_02";
		Edaly_Idle_03 = "Edaly_Idle_03";
		Edaly_Idle_04 = "Edaly_Idle_04";
		Edaly_Idle_05 = "Edaly_Idle_05";

		Edaly_Handcuffed_Fix_01 = "Edaly_Handcuffed_Fix_01";
		Edaly_Handcuffed_Fix_02 = "Edaly_Handcuffed_Fix_02";

		Edaly_Sleep_Idle_01 = "Edaly_Sleep_Idle_01";

		Edaly_Hurt_01 = "Edaly_Hurt_01";
		Edaly_Hurt_02 = "Edaly_Hurt_02";
		Edaly_Heal_01 = "Edaly_Heal_01";

		Edaly_BrokenArm = "Edaly_BrokenArm";
		Edaly_BrokenArm_Start = "Edaly_BrokenArm_Start";
		Edaly_BrokenArm_End = "Edaly_BrokenArm_End";

		Edaly_Map_01 = "Edaly_Map_01";
		Edaly_Map_02 = "Edaly_Map_02";
		Edaly_Map_03 = "Edaly_Map_03";
		Edaly_Map_04 = "Edaly_Map_04";

		Edaly_Weapon_Holding_01 = "Edaly_Weapon_Holding_01";
		Edaly_Tool_Hold_02 = "Edaly_Tool_Hold_02";
		Edaly_Tool_Hold_03 = "Edaly_Tool_Hold_03";
		Edaly_Tool_Swing_01 = "Edaly_Tool_Swing_01";
		Edaly_Hammer_Action_01 = "Edaly_Hammer_Action_01";

		Edaly_Hello_01 = "Edaly_Hello_01";
		Edaly_Fingerpoint_01 = "Edaly_Fingerpoint_01";

		Edaly_Fight_Idle = "Edaly_Fight_Idle";
		Edaly_Fight_Punch = "Edaly_Fight_Punch";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			ladderOnDown = "LadderCivilOn_Top";
			ladderOnUp = "LadderCivilOn_Top";
			turnSpeed = 1;
			upDegree = -1;
			stance = "ManStanceUndefined";
			limitFast = 5;
			leanRRot = 0;
			leanRShift = 0;
			leanLRot = 0;
			leanLShift = 0;
			useFastMove = 0;

			Edaly_HoldLantern[] = {"Edaly_HoldLantern","Gesture"};

			Edaly_Restrain_01[] = {"Edaly_Restrain_01","Gesture"};
			Edaly_Restrain_End[] = {"Edaly_Restrain_End","Gesture"};
			Edaly_Surrender[] = {"Edaly_Surrender","Gesture"};
			Edaly_Surrender_End[] = {"Edaly_Surrender_End","Gesture"};

			Edaly_Jump_Full[] = {"Edaly_Jump_Full","Gesture"};
			Edaly_Jump_End[] = {"Edaly_Jump_End","Gesture"};

			Edaly_Reload_Fal[] = {"Edaly_Reload_Fal","Gesture"};

			Edaly_Surrender_03[] = {"Edaly_Surrender_03","Gesture"};
			Edaly_Surrender_Start_01[] = {"Edaly_Surrender_Start_01","Gesture"};
			Edaly_Surrender_End_01[] = {"Edaly_Surrender_End_01","Gesture"};
			Edaly_Surrender_Idle_01[] = {"Edaly_Surrender_Idle_01","Gesture"};

			Edaly_Scisors[] = {"Edaly_Scisors","Gesture"};
			Edaly_Paper[] = {"Edaly_Paper","Gesture"};
			Edaly_Rock[] = {"Edaly_Rock","Gesture"};

			Edaly_Watch_01[] = {"Edaly_Watch_01","Gesture"};
			Edaly_Compass_01[] = {"Edaly_Compass_01","Gesture"};

			Edaly_Eat_01[] = {"Edaly_Eat_01","Gesture"};
			Edaly_Eat_02[] = {"Edaly_Eat_02","Gesture"};
			Edaly_Eat_03[] = {"Edaly_Eat_03","Gesture"};
			Edaly_Drink_01[] = {"Edaly_Drink_01","Gesture"};
			Edaly_Drink_02[] = {"Edaly_Drink_02","Gesture"};

			Edaly_Fishing_Idle[] = {"Edaly_Fishing_Idle","Gesture"};
			Edaly_Fishing_Launch[] = {"Edaly_Fishing_Launch","Gesture"};
			Edaly_Fishing_Recover[] = {"Edaly_Fishing_Recover","Gesture"};
			Edaly_Fishing_Catch_Win[] = {"Edaly_Fishing_Catch_Win","Gesture"};
			Edaly_Fishing_Catch_Fail[] = {"Edaly_Fishing_Catch_Fail","Gesture"};

			Edaly_Give_01[] = {"Edaly_Give_01","Gesture"};
			Edaly_Search_01[] = {"Edaly_Search_01","Gesture"};

			Edaly_Idle_01[] = {"Edaly_Idle_01","Gesture"};
			Edaly_Idle_02[] = {"Edaly_Idle_02","Gesture"};
			Edaly_Idle_03[] = {"Edaly_Idle_03","Gesture"};
			Edaly_Idle_04[] = {"Edaly_Idle_04","Gesture"};
			Edaly_Idle_05[] = {"Edaly_Idle_05","Gesture"};

			Edaly_Handcuffed_Fix_01[] = {"Edaly_Handcuffed_Fix_01","Gesture"};
			Edaly_Handcuffed_Fix_02[] = {"Edaly_Handcuffed_Fix_02","Gesture"};

			Edaly_Hurt_01[] = {"Edaly_Hurt_01","Gesture"};
			Edaly_Hurt_02[] = {"Edaly_Hurt_02","Gesture"};
			Edaly_Heal_01[] = {"Edaly_Heal_01","Gesture"};

			Edaly_BrokenArm[] = {"Edaly_BrokenArm","Gesture"};
			Edaly_BrokenArm_Start[] = {"Edaly_BrokenArm_Start","Gesture"};
			Edaly_BrokenArm_End[] = {"Edaly_BrokenArm_End","Gesture"};

			Edaly_Map_01[] = {"Edaly_Map_01","Gesture"};
			Edaly_Map_02[] = {"Edaly_Map_02","Gesture"};
			Edaly_Map_03[] = {"Edaly_Map_03","Gesture"};
			Edaly_Map_04[] = {"Edaly_Map_04","Gesture"};

			Edaly_Tool_Hold_02[] = {"Edaly_Tool_Hold_02","Gesture"};
			Edaly_Tool_Hold_03[] = {"Edaly_Tool_Hold_03","Gesture"};
			Edaly_Tool_Swing_01[] = {"Edaly_Tool_Swing_01","Gesture"};
			Edaly_Hammer_Action_01[] = {"Edaly_Hammer_Action_01","Gesture"};

			Edaly_Hello_01[] = {"Edaly_Hello_01","Gesture"};
			Edaly_Fingerpoint_01[] = {"Edaly_Fingerpoint_01","Gesture"};

			Edaly_Fight_Idle[] = {"Edaly_Fight_Idle","Gesture"};
			Edaly_Fight_Punch[] = {"Edaly_Fight_Punch","Gesture"};
		};
	};
