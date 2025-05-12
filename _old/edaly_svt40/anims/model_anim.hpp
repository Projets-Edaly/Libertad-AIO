	class Default
	{
		sectionsInherit="";
		sections[] = {};
		skeletonName = "";
	};

	class ArmaMan : Default
	{
		htMin = 60;          // Minimum half-cooling time (in seconds)
		htMax = 1800;        // Maximum half-cooling time (in seconds)
		afMax = 30;          // Maximum temperature in case the model is alive (in celsius)
		mfMax = 0;           // Maximum temperature when the model is moving (in celsius)
		mFact = 1;           // Metabolism factor - number from interval <0, 1> (0 - metabolism has no influence, 1 - metabolism has full influence (no other temperature source will be considered)).
		tBody = 37;  // Metabolism temperature of the model (in celsius)

		sections[] =
		{
			"osobnost","Head_Injury","Body_Injury","l_leg_injury","l_arm_injury","r_arm_injury","r_leg_injury","injury_body", "injury_legs", "injury_hands",
			"clan","clan_sign","Camo","CamoB","Camo1","Camo2","personality","hl", "injury_head"
		};
		skeletonName = "OFP2_ManSkeleton";
	};