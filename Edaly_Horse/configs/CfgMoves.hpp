class CfgMovesBasic{
	class Default;
	class States;
	class Actions{
		class NoActions;
	};
	class BlendAnims;
};
class CfgMoves_Horse_Edaly: CfgMovesBasic
{
	enableDirectControl = 0;
	skeletonName = "Edaly_Horse_Skeleton";
	gestures = "CfgGestures_Horse_Edaly";
	collisionVertexPattern[] = {"1a","2a","3a","4a","5a","6a","7a","8a","9a","10a","11a","12a","13a","14a","15a","16a","17a","18a","19a","20a","21a","22a","23a","24a","25a","26a","27a","28a","29a","30a","31a","32a","33a","34a"};
	collisionGeomCompPattern[] = {1};
	class Default: Default
	{
		actions = "NoActions";
		adjstance = "m";
		aiming = "aimingDefault";
		aimingBody = "aimingUpDefault";
		aimPrecision = 1;
		boundingSphere = 2;
		camShakeFire = 1;
		canBlendStep = 0;
		canPullTrigger = 1;
		canReload = 0;
		collisionShapeSafe = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		disableWeapons = 1;
		disableWeaponsLong = 1;
		duty = -0.5;
		enableAutoActions = 0;
		enableBinocular = 0;
		enableDirectControl = 1;
		enableMissile = 0;
		enableOptics = 0;
		equivalentTo = "";
		file = "";
		forceAim = 0;
		GetOutPara = "";
		hasCollShapeSafe = 0;
		head = "headDefault";
		headBobMode = 0;
		headBobStrength = 0;
		idle = "HorseStandIdle";
		ignoreMinPlayTime[] = {"HorseDie"};
		interpolateFrom[] = {};
		interpolateTo[] = {};
		interpolateWith[] = {};
		interpolationRestart = 0;
		interpolationSpeed = 6;
		leaning = "leaningDefault";
		leaningFactorBeg = 0;
		leaningFactorEnd = 0;
		leaningFactorZeroPoint = -1;
		leftHandIKBeg = 0;
		leftHandIKCurve[] = {};
		leftHandIKEnd = 0;
		legs = "legsDefault";
		limitGunMovement = 1;
		looped = 1;
		minPlayTime = 0;
		onLadder = 0;
		onLandBeg = 0;
		onLandEnd = 0;
		preload = 0;
		ragdoll = 0;
		relSpeedMax = 1;
		relSpeedMin = 1;
		rightHandIKBeg = 0;
		rightHandIKCurve[] = {};
		rightHandIKEnd = 0;
		showHandGun = 0;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showWeaponAim = 1;
		soundEdge[] = {0.5,1};
		soundEnabled = 1;
		soundOverride = "";
		speed = 0.5;
		stamina = 1;
		static = 0;
		terminal = 0;
		useIdles = 1;
		variantsAI[] = {""};
		variantsPlayer[] = {};
		visibleSize = 0.6;
		Walkcycles = 1;
		weaponIK = 0;
		weaponLowered = 0;
		weaponObstructed = 0;
		collisionShape = "Edaly_Horse\CollShape.p3d";
	};
	class StandBase: Default
	{
		aiming = "aimingDefault";
		disableWeapons = 1;
		leaningFactorBeg = 1;
		leaningFactorEnd = 1;
	};

    class DefaultDie: Default
    {
        aiming = "aimingNo";
        aimingBody = "aimingNo";
        legs = "legsNo";
        head = "headNo";
        disableWeapons = 1;
        interpolationRestart = 1;
        soundEdge[] = {0.45};
        boundingSphere = 2;
        enableDirectControl = 0;
        showWeaponAim = 0;
        canPullTrigger = 0;
        headBobMode = 1;
        headBobStrength = -1;
    };

	class States
	{
		class HorseStandIdle: StandBase
		{
			enableDirectControl = 1;
			actions = "Edaly_Horse_Actions";
			duty = 0.1;
			file = "Edaly_Horse\anims\Horse_Idle01.rtm";
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			variantsAI[] = {"HorseStandIdle",0.5,"HorseStandIdle3",0.1,"HorseStandIdle2",0.03,"HorseStandIdle4",0.2};
			variantsPlayer[] = {"HorseStandIdle",0.5,"HorseStandIdle3",0.1,"HorseStandIdle2",0.03,"HorseStandIdle4",0.2};
			speed = -7;
			relSpeedMin = 0.6;
			relSpeedMax = 1.1;
			looped = 1;
			soundEnabled = 0;
			connectTo[] = {"HorseWalkFront",0.02,"HorseTrotFront",0.02,"HorseCanterFront",0.02};
			interpolateTo[] = {"HorseWalkFront",0.02,"HorseTrotFront",0.02,"HorseCanterFront",0.02,"HorseWalkBack",0.02,"HorseDie",0.02};
			interpolateFrom[] = {"HorseWalkFront",0.02,"HorseTrotFront",0.02,"HorseCanterFront",0.02,"HorseWalkBack",0.02,"HorseDie",0.02};
			enableBinocular = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			interpolationSpeed = 1;
			soundEdge[] = {0.2};
			soundOverride = "breath";
			preload = 0;
		};
		class HorseStandIdle2: HorseStandIdle
		{
			actions = "Edaly_Horse_Actions";
			duty = -1;
			file = "Edaly_Horse\anims\Horse_Idle05.rtm";
			connectTo[] = {"HorseStandIdle",0.02};
			interpolateTo[] = {"HorseStandIdle3",0.02,"HorseStandIdle4",0.02};
			interpolateFrom[] = {"HorseStandIdle",0.02,"HorseStandIdle3",0.02,"HorseStandIdle4",0.02};
			soundEdge[] = {0.2};
			soundOverride = "breath";
			soundEnabled = 1;
			speed = -3;
		};
		class HorseStandIdle3: HorseStandIdle
		{
			actions = "Edaly_Horse_Actions";
			duty = -1;
			file = "Edaly_Horse\anims\Horse_Eat.rtm";
			connectTo[] = {"HorseWalkFront",0.02,"HorseTrotFront",0.02,"HorseCanterFront",0.02};
			interpolateTo[] = {"HorseStandIdle",0.02,"HorseStandIdle4",0.02};
			interpolateFrom[] = {"HorseStandIdle",0.02,"HorseStandIdle2",0.02,"HorseStandIdle4",0.02};
			soundEdge[] = {0.2};
			soundOverride = "breath";
			soundEnabled = 1;
			speed = -5;
		};
		class HorseStandIdle4: HorseStandIdle
		{
			actions = "Edaly_Horse_Actions";
			duty = -1;
			file = "Edaly_Horse\anims\Horse_Idle04.rtm";
			connectTo[] = {"HorseWalkFront",0.02,"HorseTrotFront",0.02,"HorseCanterFront",0.02};
			interpolateTo[] = {"HorseStandIdle",0.02,"HorseStandIdle3",0.02};
			interpolateFrom[] = {"HorseStandIdle",0.02,"HorseStandIdle2",0.02,"HorseStandIdle3",0.02};
			speed = -6;
			soundEdge[] = {0.2};
			soundOverride = "breath";
			soundEnabled = 1;
		};
		class HorseIdleJump: HorseStandIdle
		{
			visibleSize = 0.9;
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 1;
			looped = 0;
			speed = -1.5;
			minPlayTime = 1;
			file = "Edaly_Horse\anims\Horse_Jump.rtm";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wovr.p3d";
			static = 0;
			duty = 1;
			soundEnabled = 1;
			soundOverride = "animals_horse_whinny_3";
			soundEdge[] = {0.1,0.4};
			limitGunMovement = 1;
			interpolationspeed = 1;
			interpolationrestart = 1;
			leftHandIKCurve[] = {0.6,0,0.85,1};
			interpolateTo[] = {"HorseTrotFront",0.02};
			interpolateFrom[] = {"HorseWalkFront",0.02,"HorseTrotFront",0.02,"HorseCanterFront",0.02};
			ConnectTo[] = {"HorseWalkFront",0.01};
		};

		///////////// WALK /////////////

		class HorseWalkFront: HorseStandIdle
		{
			actions = "Edaly_Horse_Actions";
			duty = -0.7;
			file = "Edaly_Horse\anims\Horse_WalkF.rtm";
			speed = -1;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class HorseWalkFrontLF: HorseStandIdle
		{
			actions = "Edaly_Horse_Actions";
			duty = -0.7;
			file = "Edaly_Horse\anims\Horse_WalkFL.rtm";
			speed = 1;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class HorseWalkFrontRF: HorseStandIdle
		{
			actions = "Edaly_Horse_Actions";
			duty = -0.7;
			file = "Edaly_Horse\anims\Horse_WalkFR.rtm";
			speed = 1;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class HorseWalkFrontLB: HorseStandIdle
		{
			actions = "Edaly_Horse_Actions";
			duty = -0.7;
			file = "Edaly_Horse\anims\Horse_WalkBL.rtm";
			speed = 1;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class HorseWalkFrontRB: HorseStandIdle
		{
			actions = "Edaly_Horse_Actions";
			duty = -0.7;
			file = "Edaly_Horse\anims\Horse_WalkBR.rtm";
			speed = 1;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class HorseWalkBack: HorseStandIdle
		{
			actions = "Edaly_Horse_Actions";
			duty = -0.7;
			file = "Edaly_Horse\anims\Horse_WalkB.rtm";
			speed = -1;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			interpolateTo[] = {"HorseStandIdle",0.02};
			interpolateFrom[] = {"HorseWalkFront",0.02,"HorseTrotFront",0.02,"HorseCanterFront",0.02,"HorseDie",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};

		class HorseLimpF: HorseStandIdle
		{
			actions = "Edaly_Horse_Actions";
			duty = -0.7;
			file = "Edaly_Horse\anims\Horse_LimpF.rtm";
			speed = -2;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			interpolateFrom[] = {"HorseStandIdle",0.02,"HorseTrotFront",0.02,"HorseCanterFront",0.02,"HorseDie",0.02};
			interpolateTo[] = {"HorseStandIdle",0.02};
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class HorseLimpB: HorseLimpF
		{
			actions = "Edaly_Horse_Actions";
			file = "Edaly_Horse\anims\Horse_LimpB.rtm";
			speed = -2;
			connectTo[] = {};
			variantsAI[] = {};
		};

		///////////// TROT /////////////

		class HorseTrotFront: HorseStandIdle
		{
			actions = "Edaly_Horse_Actions";
			duty = -0.7;
			file = "Edaly_Horse\anims\Horse_TrotF.rtm";
			speed = -0.5;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};

		///////////// CANTER /////////////

		class HorseCanterFront: HorseStandIdle
		{
			actions = "Edaly_Horse_fastactions";
			file = "Edaly_Horse\anims\Horse_SprintF.rtm";
			duty = -0.5;
			speed = 2;
			stamina = -1;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Sprint";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};

		///////////// SPRINT /////////////
		class HorseSprintFront: HorseStandIdle
		{
			actions = "Edaly_Horse_fastactions";
			file = "Edaly_Horse\anims\Horse_SprintF.rtm";
			duty = 0.5;
			stamina = -1;
			speed = 2;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Sprint";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};

		class HorseNeigh: HorseStandIdle
		{
			actions = "Edaly_Horse_Actions";
			duty = -1;
			file = "Edaly_Horse\anims\Horse_Neigh.rtm";
			speed = -3;
			looped = 0;
			soundEdge[] = {0.2};
			soundOverride = "neigh";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
			interpolateTo[] = {"HorseStandIdle",0.02};
			interpolateFrom[] = {"HorseStandIdle",0.001};
		};
		class HorseEat: HorseStandIdle
		{
			actions = "Edaly_Horse_Actions";
			duty = -1;
			file = "Edaly_Horse\anims\Horse_Eat.rtm";
			speed = -2;
			looped = 0;
			soundEdge[] = {0.2};
			soundOverride = "blowlips";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
			interpolateTo[] = {"HorseStandIdle",0.0002};
			interpolateFrom[] = {"HorseStandIdle",0.0001};
		};
		///////////// TURN/STRAFE /////////////

		class HorseTurnLeft: HorseStandIdle
		{
			actions = "Edaly_Horse_Actions";
			duty = -0.7;
			file = "Edaly_Horse\anims\Horse_TurnL.rtm";
			speed = -1.5;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			interpolateTo[] = {"HorseStandIdle",0.02};
			interpolateFrom[] = {"HorseStandIdle",0.02,"HorseWalkFront",0.02,"HorseTrotFront",0.02,"HorseCanterFront",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class HorseTurnRight: HorseStandIdle
		{
			actions = "Edaly_Horse_Actions";
			duty = -0.7;
			file = "Edaly_Horse\anims\Horse_TurnR.rtm";
			speed = -1.5;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			interpolateTo[] = {"HorseStandIdle",0.02};
			interpolateFrom[] = {"HorseStandIdle",0.02,"HorseWalkFront",0.02,"HorseTrotFront",0.02,"HorseCanterFront",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class HorseStrafeRight: HorseStandIdle
		{
			actions = "Edaly_Horse_Actions";
			duty = -0.7;
			file = "Edaly_Horse\anims\Horse_StrafeRight.rtm";
			speed = -1.5;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			variantsAI[] = {};
			connectTo[] = {};
			interpolateTo[] = {"HorseStandIdle",0.02};
			interpolateFrom[] = {"HorseStandIdle",0.02};
		};
		class HorseStrafeLeft: HorseStandIdle
		{
			actions = "Edaly_Horse_Actions";
			duty = -0.7;
			file = "Edaly_Horse\anims\Horse_StrafeLeft.rtm";
			speed = -1.5;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			variantsAI[] = {};
			connectTo[] = {};
			interpolateTo[] = {"HorseStandIdle",0.02};
			interpolateFrom[] = {"HorseStandIdle",0.02};
		};

		////// SWIM //////

		class HorseSwimFront: HorseStandIdle
		{
			actions = "SwimmingActions";
			file = "edaly_Horse\anims\Horse_SwimF.rtm";
			duty = -0.5;
			speed = -2;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Sprint";
			soundEnabled = 0;
			interpolateFrom[] = {"HorseWalkFront",0.02};
			interpolateTo[] = {"HorseSwimIdle",0.02,"HorseStandIdle",0.02,"HorseDieWater",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class HorseSwimIdle: HorseSwimFront
		{
			actions = "SwimmingActions";
			file = "edaly_Horse\anims\Horse_SwimIdle.rtm";
			duty = -0.5;
			speed = -2;
			soundEdge[] = {1};
			soundOverride = "";
			soundEnabled = 0;
			connectTo[] = {};
			interpolateFrom[] = {"HorseStandIdle",0.02,"HorseSwimFront",0.02};
			interpolateTo[] = {"HorseDieWater",0.02,"HorseSwimFront",0.02,"HorseStandIdle",0.02};
			variantsAI[] = {};
		};
		class HorseSwimTurnLeft: HorseSwimIdle
		{
			actions = "SwimmingActions";
			duty = -0.7;
			file = "edaly_Horse\anims\Horse_SwimTurnL.rtm";
			speed = -1.5;
			interpolateFrom[] = {"HorseStandIdle",0.02,"HorseSwimFront",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class HorseSwimTurnRight: HorseSwimIdle
		{
			actions = "SwimmingActions";
			duty = -0.7;
			file = "edaly_Horse\anims\Horse_SwimTurnR.rtm";
			speed = -1.5;
			interpolateFrom[] = {"HorseStandIdle",0.02,"HorseSwimFront",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class HorseDieWater: DefaultDie
		{
			actions = "NoActions";
			file = "edaly_Horse\anims\Horse_Death.rtm";
			speed = -2;
			looped = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			variantAfter[] = {0,0,0};
			terminal = 1;
		};

		class HorseFreefall: HorseStandIdle
		{
			actions = "Edaly_Horse_Actions";
			duty = -1;
			file = "Edaly_Horse\anims\Horse_SwimIdle.rtm";
			connectTo[] = {};
			interpolateFrom[] = {"HorseStandIdle",0.02};
			speed = -6;
			stamina = -1;
			variantsAI[] = {};
		};
		class HorseDie: DefaultDie
		{
			actions = "NoActions";
			file = "\Edaly_Horse\anims\Horse_Death.rtm";
			speed = -2;
			looped = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			variantAfter[] = {0,0,0};
			terminal = 1;
		};
	};
	class Actions: Actions
	{
		class NoActions: NoActions
		{
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = 0;
		};
		class Edaly_Horse_Actions: NoActions
		{
	        WalkF = "HorseWalkFront";
	        WalkLF = "HorseWalkFrontLF";
	        WalkRF = "HorseWalkFrontRF";
	        WalkLB = "HorseWalkFrontLB";
	        WalkRB = "HorseWalkFrontRB";
	        WalkB = "HorseWalkBack";
	        WalkL = "HorseStrafeLeft";
	        WalkR = "HorseStrafeRight";

	        StartFreefall = "HorseFreefall";

	        PlayerWalkF = "HorseWalkFront";
	        PlayerWalkLF = "HorseWalkFrontLF";
	        PlayerWalkRF = "HorseWalkFrontRF";
	        PlayerWalkLB = "HorseWalkFrontLB";
	        PlayerWalkRB = "HorseWalkFrontRB";
	        PlayerWalkB = "HorseWalkBack";
	        PlayerWalkL = "HorseStrafeLeft";
	        PlayerWalkR = "HorseStrafeRight";

	        SlowF = "HorseWalkFront";
	        SlowB = "HorseWalkBack";
	        SlowLF = "HorseWalkFrontLF";
	        SlowRF = "HorseWalkFrontRF";
	        SlowLB = "HorseWalkFrontLB";
	        SlowRB = "HorseWalkFrontRB";
	        SlowL = "HorseStrafeLeft";
	        SlowR = "HorseStrafeRight";

	        PlayerSlowF = "HorseWalkFront";
	        PlayerSlowB = "HorseWalkBack";
	        PlayerSlowLF = "HorseWalkFrontLF";
	        PlayerSlowRF = "HorseWalkFrontRF";
	        PlayerSlowLB = "HorseWalkFrontLB";
	        PlayerSlowRB = "HorseWalkFrontRB";
	        PlayerSlowL = "HorseStrafeLeft";
	        PlayerSlowR = "HorseStrafeRight";

	        TactF = "HorseTrotFront";
	        TactLF = "HorseWalkFrontLF";
	        TactRF = "HorseWalkFrontRF";
	        TactL = "HorseStrafeLeft";
	        TactR = "HorseStrafeRight";
	        TactLB = "HorseWalkFrontLB";
	        TactRB = "HorseWalkFrontRB";
	        TactB = "HorseWalkBack";
	        PlayerTactF = "HorseTrotFront";
	        PlayerTactLF = "HorseWalkFrontLF";
	        PlayerTactRF = "HorseWalkFrontRF";
	        PlayerTactL = "HorseStrafeLeft";
	        PlayerTactR = "HorseStrafeRight";
	        PlayerTactLB = "HorseWalkFrontLB";
	        PlayerTactRB = "HorseWalkFrontRB";
	        PlayerTactB = "HorseWalkBack";

	        FastF = "HorseCanterFront";

	        LimpF = "HorseLimpF";
	        LimpL = "HorseStrafeLeft";
	        LimpR = "HorseStrafeRight";
	        LimpB = "HorseLimpB";

			Stop = "HorseStandIdle";
			StopRelaxed = "HorseStandIdle";

			GetOver = "HorseIdleJump";

			TurnL = "HorseTurnLeft";
			TurnR = "HorseTurnRight";

			Down = "HorseStandIdle4";
			Up = "HorseStandIdle3";
			TurnLRelaxed = "HorseTurnLeft";
			TurnRRelaxed = "HorseTurnRight";

			Default = "HorseStandIdle";

			EvasiveForward = "HorseCanterFront";

			saluteOff = "HorseStandIdle";

     		Salute = "HorseNeigh";
     		SitDown = "HorseEat";

			Stand = "HorseStandIdle";
			PlayerStand = "HorseStandIdle";

			Combat = "HorseStandIdle";
			CanNotMove = "HorseStandIdle";
			Civil = "HorseStandIdle";
			CivilLying = "HorseStandIdle";
			FireNotPossible = "HorseStandIdle";
			Die = "HorseDie";

			startSwim = "HorseSwimIdle";
			surfaceSwim = "HorseSwimFront";
			stopSwim = "HorseSwimIdle";
        	bottomSwim = "HorseSwimFront";
	        swimUp = "";
	        swimDown = "";
            startDive = "";
            StopDive = "";
	        SurfaceDive = "";
	        BottomDive = "";

			turnSpeed = 16;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = "ManPosNoWeapon";
		};

		class Edaly_Horse_Limp: Edaly_Horse_Actions
		{
			LimpF = "HorseLimpF";
			LimpB = "HorseLimpB";
			EvasiveForward = "HorseLimpF";

			TurnL = "HorseTurnLeft";
			TurnR = "HorseTurnRight";

			Stop = "HorseLimpIdle";
			StopRelaxed = "HorseLimpIdle";

			Die = "HorseDie";

			turnSpeed = 16;
			limitFast = 5.5;
			useFastMove = 1;
		};
		class Edaly_Horse_fastactions: Edaly_Horse_Actions
		{
			FastF = "HorseCanterFront";
			EvasiveForward = "HorseCanterFront";
			Die = "HorseDie";
			TurnL = "HorseTurnLeft";
			TurnR = "HorseTurnRight";
			turnSpeed = 16;
			limitFast = 5.5;
			useFastMove = 1;
		};

		class SwimmingActions: NoActions
		{
			default = "HorseSwimIdle";
			Stop = "HorseSwimIdle";

			startSwim = "HorseSwimFront";
			stopSwim = "HorseStandIdle";

			surfaceSwim = "HorseSwimFront";
        	bottomSwim = "";

	        swimUp = "";
	        swimDown = "";

	        Die = "HorseDieWater";

	        WalkF = "HorseSwimFront";
	        FastF = "HorseSwimFront";

	        PlayerSlowF = "HorseSwimFront";
	        PlayerSlowB = "";
	        PlayerSlowLF = "";
	        PlayerSlowRF = "";
	        PlayerSlowLB = "";
	        PlayerSlowRB = "";

			TurnL = "HorseSwimTurnLeft";
			TurnR = "HorseSwimTurnRight";

			TurnLRelaxed = "HorseSwimTurnLeft";
			TurnRRelaxed = "HorseSwimTurnRight";

			upDegree = "ManPosSwimming";
			limitFast = 2;
		};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"head",1,"Neck",1,"Neck1",1};
		untiltWeaponDefault[] = {};
		legsDefault[] = {"LFinger0",0.5,"LFoot",0.5,"LForearm",0.5,"LHand",0.5,"LHorseLink",0.5,"LToe0",0.5,"RFinger0",0.5,"RFoot",0.5,"RForearm",0.5,"RHand",0.5,"RHorseLink",0.5,"RToe0",0.5,"RUpperArm",0.5,"LUpperArm",0.5};
		headDefault[] = {"head",0.25,"Jaw",0.25,"EarL",0.25,"EarR",0.25,"Reins_Bn_Neck_L",0.25,"Reins_Bn_Neck_R",0.25,"Reins_Bn_Head_R",0.25,"Reins_Bn_Head_L",0.25,"Neck1",0.23,"Neck2",0.22};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
};
