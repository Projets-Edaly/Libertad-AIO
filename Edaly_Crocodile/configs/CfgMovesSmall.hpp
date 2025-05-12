class CfgMovesBasic{
	class Default;
	class States;
	class Actions{
		class NoActions;
	};
	class BlendAnims;
};
class CfgMoves_Crocodile_Small_Edaly: CfgMovesBasic
{
	enableDirectControl = 0;
	skeletonName = "Crocodile_Skeleton";
	gestures = "CfgGestures_Crocodile_Edaly";
	collisionVertexPattern[] = {"1a","2a","3a","4a","5a","6a","7a","8a","9a","10a","11a","12a","13a","14a","15a","16a","17a","18a","19a","20a","21a","22a","23a","24a","25a","26a","27a","28a","29a","30a","31a","32a","33a","34a"};
	collisionGeomCompPattern[] = {1};
	class Default: Default
	{
		actions = "NoActions";
		adjstance = "m";
		aiming = "aimingDefault";
		aimingBody = "aimingUpDefault";
		aimPrecision = 1;
		boundingSphere = 1;
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
		idle = "idleDefault";
		ignoreMinPlayTime[] = {"CrocodileDieSmall"};
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
		collisionShape = "edaly_crocodile\CollShape.p3d";
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
		class CrocodileStandIdleSmall: StandBase
		{
			enableDirectControl = 1;
			actions = "Edaly_Crocodile_Actions_Small";
			duty = -1;
			file = "edaly_crocodile\anims\small_lie.rtm";
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			variantsAI[] = {"CrocodileIdleSmallStartSmallBaseSmall",0.02,"CrocodileStandIdleSmall",0.02,"CrocodileStandIdleSmall",0.02};
			variantsPlayer[] = {};
			speed = -9;
			relSpeedMin = 0.7;
			relSpeedMax = 1.1;
			looped = 1;
			soundEnabled = 0;
			connectTo[] = {"CrocodileWalkFrontSmall",0.02,"CrocodileRunFrontSmall",0.02,"CrocodileSwimFrontSmall",0.02};
			interpolateTo[] = {"CrocodileWalkFrontSmall",0.02,"CrocodileRunFrontSmall",0.02,"CrocodileDieSmall",0.02,"CrocodileSwimFrontSmall",0.02};
			interpolateFrom[] = {"CrocodileWalkFrontSmall",0.02,"CrocodileRunFrontSmall",0.02,"CrocodileSwimFrontSmall",0.02};
			enableBinocular = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			interpolationSpeed = 1;
			preload = 1;
		};
		class CrocodileIdleSmallStartSmallBaseSmall: CrocodileStandIdleSmall
		{
			duty = -0.7;
			file = "edaly_crocodile\anims\small_lie.rtm";
			speed = -3.2;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "";
			soundEnabled = 1;
			interpolateFrom[] = {"CrocodileStandIdleSmall",0.01};
			interpolateTo[] = {"CrocodileIdleSmallStartSmall",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};

		class CrocodileIdleSmallStartSmall: CrocodileStandIdleSmall
		{
			actions = "Edaly_Crocodile_Lying";
			file = "edaly_crocodile\anims\small_lie.rtm";
			speed = -2;
			disableWeapons = 1;
			canReload = 0;
			canBlendStep = 0;
			looped = 0;
			interpolationRestart = 2;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {0.1,1,0.2,0};
			rightHandIKEnd = 0;
			interpolateFrom[] = {"CrocodileIdleSmallStartSmallBaseSmall",0.01};
			ConnectTo[] = {"CrocodileIdleSmall",0.1};
			InterpolateTo[] = {"CrocodileIdleSmallEnd",0.02};
		};

		class CrocodileIdleSmall: CrocodileIdleSmallStartSmall
		{
			file = "edaly_crocodile\anims\small_lie.rtm";
			speed = -25;
			variantsAI[] = {"CrocodileIdleSmall2",0.5,"CrocodileIdleSmall3",0.2};
			ConnectTo[] = {"CrocodileIdleSmallEnd",0.1};
			InterpolateTo[] = {};
		};

		class CrocodileIdleSmallEnd: CrocodileIdleSmallStartSmall
		{
			actions = "Edaly_Crocodile_Actions_Small";
			file = "edaly_crocodile\anims\small_lieEnd.rtm";
			speed = -3;
			rightHandIKCurve[] = {0.8,0,0.9,1};
			ConnectTo[] = {"CrocodileStandIdleSmall",0.1};
			InterpolateTo[] = {"CrocodileStandIdleSmall",0.02};
		};
		class CrocodileWalkFrontSmall: CrocodileStandIdleSmall
		{
			actions = "Edaly_Crocodile_Actions_Small";
			duty = -0.7;
			file = "edaly_crocodile\anims\small_Walk.rtm";
			speed = -1.5;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileWalkBackSmall: CrocodileStandIdleSmall
		{
			actions = "Edaly_Crocodile_Actions_Small";
			duty = -0.7;
			file = "edaly_crocodile\anims\small_Walkback.rtm";
			connectTo[] = {};
			interpolateFrom[] = {"CrocodileStandIdleSmall",0.02,"CrocodileStandIdleSmall2",0.02,"CrocodileStandIdleSmall3",0.02,"CrocodileStandIdleSmall4",0.02};
			interpolateTo[] = {"CrocodileStandIdleSmall",0.02,"CrocodileDieSmall",0.02};
			speed = -1.5;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			variantsAI[] = {};
		};
		class CrocodileRunFrontSmall: CrocodileStandIdleSmall
		{
			actions = "Edaly_Crocodile_Actions_Small";
			file = "edaly_crocodile\anims\small_run.rtm";
			duty = -0.5;
			speed = 2;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Sprint";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileSwimFrontSmall: CrocodileStandIdleSmall
		{
			actions = "SwimmingActions";
			file = "edaly_crocodile\anims\small_swim.rtm";
			duty = -0.5;
			speed = -2;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Sprint";
			soundEnabled = 0;
			interpolateFrom[] = {"CrocodileWalkFrontSmall",0.02};
			interpolateTo[] = {"CrocodileSwimIdleSmall",0.02,"CrocodileStandIdleSmall",0.02,"CrocodileDieWaterSmall",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileSwimFrontSmallFast: CrocodileSwimFrontSmall
		{
			actions = "SwimmingActions";
			file = "edaly_crocodile\anims\small_swim.rtm";
			duty = -0.5;
			speed = 1;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Sprint";
			soundEnabled = 0;
			interpolateFrom[] = {"CrocodileSwimFrontSmall",0.02,"CrocodileSwimIdleSmall",0.02};
			interpolateTo[] = {"CrocodileSwimIdleSmall",0.02,"CrocodileDieWaterSmall",0.02,"CrocodileSwimFrontSmall",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileSwimUpSmall: CrocodileSwimFrontSmall
		{
			actions = "SwimmingActions";
			file = "edaly_crocodile\anims\small_swimup.rtm";
			duty = -0.5;
			speed = -2;
			interpolateFrom[] = {"CrocodileSwimIdleSmall",0.02,"CrocodileSwimFrontSmall",0.02};
			interpolateTo[] = {"CrocodileSwimIdleSmall",0.02,"CrocodileDieWaterSmall",0.02,"CrocodileSwimFrontSmall",0.02};
			soundEdge[] = {0.25,0.5,0.75,1};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileSwimDownSmall: CrocodileSwimFrontSmall
		{
			actions = "SwimmingActions";
			file = "edaly_crocodile\anims\small_swimdown.rtm";
			duty = -0.5;
			speed = -2;
			interpolateFrom[] = {"CrocodileSwimIdleSmall",0.02,"CrocodileSwimFrontSmall",0.02};
			interpolateTo[] = {"CrocodileSwimIdleSmall",0.02,"CrocodileDieWaterSmall",0.02,"CrocodileSwimFrontSmall",0.02};
			soundEdge[] = {0.25,0.5,0.75,1};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileSwimIdleSmall: CrocodileSwimFrontSmall
		{
			actions = "SwimmingActions";
			file = "edaly_crocodile\anims\small_swimidle.rtm";
			duty = -0.5;
			speed = -2;
			soundEdge[] = {1};
			soundOverride = "";
			soundEnabled = 0;
			connectTo[] = {};
			interpolateFrom[] = {"CrocodileStandIdleSmall",0.02,"CrocodileSwimDownSmall",0.02,"CrocodileSwimUpSmall",0.02,"CrocodileSwimFrontSmallFast",0.02,"CrocodileSwimFrontSmall",0.02};
			interpolateTo[] = {"CrocodileDieWaterSmall",0.02,"CrocodileSwimDownSmall",0.02,"CrocodileSwimUpSmall",0.02,"CrocodileSwimFrontSmallFast",0.02,"CrocodileSwimFrontSmall",0.02,"CrocodileStandIdleSmall",0.02};
			variantsAI[] = {};
		};
		class CrocodileFreefallSmall: CrocodileStandIdleSmall
		{
			actions = "Edaly_Crocodile_Actions_Small";
			file = "edaly_crocodile\anims\small_fall.rtm";
			duty = -0.5;
			speed = -2;
			soundEdge[] = {1};
			interpolateFrom[] = {"CrocodileStandIdleSmall",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileTurnLeftSmall: CrocodileStandIdleSmall
		{
			actions = "Edaly_Crocodile_Actions_Small";
			duty = -0.7;
			file = "edaly_crocodile\anims\small_TurnL.rtm";
			speed = -1.5;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 0;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileTurnRightSmall: CrocodileStandIdleSmall
		{
			actions = "Edaly_Crocodile_Actions_Small";
			duty = -0.7;
			file = "edaly_crocodile\anims\small_TurnR.rtm";
			speed = -1.5;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 0;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileSwimTurnLeftSmall: CrocodileSwimIdleSmall
		{
			actions = "SwimmingActions";
			duty = -0.7;
			file = "edaly_crocodile\anims\small_swimTurnL.rtm";
			speed = -1.5;
			interpolateFrom[] = {"CrocodileStandIdleSmall",0.02,"CrocodileSwimDownSmall",0.02,"CrocodileSwimUpSmall",0.02,"CrocodileSwimFrontSmall",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileSwimTurnRightSmall: CrocodileSwimIdleSmall
		{
			actions = "SwimmingActions";
			duty = -0.7;
			file = "edaly_crocodile\anims\small_swimTurnR.rtm";
			speed = -1.5;
			interpolateFrom[] = {"CrocodileStandIdleSmall",0.02,"CrocodileSwimDownSmall",0.02,"CrocodileSwimUpSmall",0.02,"CrocodileSwimFrontSmall",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class Crocodile_BiteSmall: CrocodileStandIdleSmall
		{
			actions = "Edaly_Crocodile_Actions_Small";
			duty = -0.7;
			file = "edaly_crocodile\anims\small_bite.rtm";
			speed = -1;
			looped = 0;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Sprint";
			soundEnabled = 0;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileTorpedoSmall: CrocodileStandIdleSmall
		{
			actions = "Edaly_Crocodile_Actions_Small";
			file = "\edaly_crocodile\anims\small_torpedo.rtm";
			speed = -2;
			looped = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			variantAfter[] = {0,0,0};
		};

		class CrocodileDieSmall: DefaultDie
		{
			actions = "NoActions";
			file = "\edaly_crocodile\anims\small_die.rtm";
			speed = -2;
			looped = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			variantAfter[] = {0,0,0};
			terminal = 1;
		};
		class CrocodileDieWaterSmall: DefaultDie
		{
			actions = "NoActions";
			file = "\edaly_crocodile\anims\small_diewater.rtm";
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
			stance = "ManStanceUndefined";
		};
		class Edaly_Crocodile_Actions_Small: NoActions
		{
	        WalkF = "CrocodileWalkFrontSmall";
	        WalkLF = "";
	        WalkRF = "";
	        WalkLB = "";
	        WalkRB = "";
	        WalkB = "CrocodileWalkBackSmall";

	        StartFreefall = "CrocodileFreefallSmall";
	        Para_Pilot = "CrocodileFreefallSmall";

	        PlayerWalkF = "CrocodileWalkFrontSmall";
	        PlayerWalkLF = "";
	        PlayerWalkRF = "";
	        PlayerWalkLB = "";
	        PlayerWalkRB = "";
	        PlayerWalkB = "CrocodileWalkBackSmall";

	        SlowF = "CrocodileRunFrontSmall";

	        PlayerSlowF = "CrocodileWalkFrontSmall";
	        PlayerSlowB = "CrocodileWalkBackSmall";
	        PlayerSlowLF = "";
	        PlayerSlowRF = "";
	        PlayerSlowLB = "";
	        PlayerSlowRB = "";

	        FastF = "CrocodileRunFrontSmall";

			Stop = "CrocodileStandIdleSmall";
			StopRelaxed = "CrocodileStandIdleSmall";

			TurnL = "CrocodileTurnLeftSmall";
			TurnR = "CrocodileTurnRightSmall";

			TurnLRelaxed = "CrocodileTurnLeftSmall";
			TurnRRelaxed = "CrocodileTurnRightSmall";

			Default = "CrocodileStandIdleSmall";
			JumpOff = "CrocodileStandIdleSmall";

			EvasiveForward = "CrocodileRunFrontSmall";

			SitDown = "CrocodileStandIdleSmall";

			saluteOff = "CrocodileStandIdleSmall";

			Stand = "CrocodileStandIdleSmall";
			PlayerStand = "CrocodileStandIdleSmall";

			startSwim = "CrocodileSwimIdleSmall";
			surfaceSwim = "CrocodileSwimFrontSmall";
			stopSwim = "CrocodileSwimIdleSmall";
        	bottomSwim = "CrocodileSwimFrontSmall";
	        swimUp = "CrocodileSwimUpSmall";
	        swimDown = "CrocodileSwimDownSmall";
            startDive = "CrocodileSwimIdleSmall";
            StopDive = "CrocodileSwimIdleSmall";
	        SurfaceDive = "CrocodileSwimFrontSmall";
	        BottomDive = "CrocodileSwimFrontSmall";


			Combat = "CrocodileStandIdleSmall";
			CanNotMove = "CrocodileStandIdleSmall";
			Civil = "CrocodileStandIdleSmall";
			CivilLying = "CrocodileStandIdleSmall";
			FireNotPossible = "CrocodileStandIdleSmall";
			GetOver = "CrocodileStandIdleSmall";
			Die = "CrocodileDieSmall";

			turnSpeed = 16;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = "ManPosNoWeapon";
		};
		class Edaly_Crocodile_fastactions: Edaly_Crocodile_Actions_Small
		{
			FastF = "CrocodileRunFrontSmall";
			EvasiveForward = "CrocodileRunFrontSmall";
			Die = "CrocodileDieSmall";
			TurnL = "CrocodileTurnLeftSmall";
			TurnR = "CrocodileTurnRightSmall";
			turnSpeed = 16;
			limitFast = 5.5;
			useFastMove = 1;
		};

		class SwimmingActions: NoActions
		{
			default = "CrocodileSwimIdleSmall";
			Stop = "CrocodileSwimIdleSmall";

			startSwim = "CrocodileSwimFrontSmall";
			stopSwim = "CrocodileStandIdleSmall";

			surfaceSwim = "CrocodileSwimFrontSmall";
        	bottomSwim = "CrocodileSwimFrontSmall";

	        swimUp = "CrocodileSwimUpSmall";
	        swimDown = "CrocodileSwimDownSmall";

	        Die = "CrocodileDieWaterSmall";

	        WalkF = "CrocodileSwimFrontSmall";
	        FastF = "CrocodileSwimFrontSmallFast";

	        PlayerSlowF = "CrocodileSwimFrontSmall";
	        PlayerSlowB = "";
	        PlayerSlowLF = "";
	        PlayerSlowRF = "";
	        PlayerSlowLB = "";
	        PlayerSlowRB = "";

			TurnL = "CrocodileSwimTurnLeftSmall";
			TurnR = "CrocodileSwimTurnRightSmall";

			TurnLRelaxed = "CrocodileSwimTurnLeftSmall";
			TurnRRelaxed = "CrocodileSwimTurnRightSmall";

			upDegree = "ManPosSwimming";
			limitFast = 2;
		};

		class Edaly_Crocodile_Lying: Edaly_Crocodile_Actions_Small
		{
			stop = "CrocodileIdleSmallStartSmall";
			StopRelaxed = "CrocodileIdleSmallStartSmall";
			default = "CrocodileIdleSmallStartSmall";
		};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"Head",0.2,"Jaw01",0.2,"Jaw02",0.2,"Nose",0.2,"L_EyeSocket",0.2,"L_Eye",0.2,"L_Eyelid_Top",0.2,"L_Eyelid_Bottom",0.2,"R_EyeSocket",0.2,"R_Eye",0.2,"R_Eyelid_Top",0.2,"R_Eyelid_Bottom",0.2};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {"Head",0.2,"Jaw01",0.2,"Jaw02",0.2,"Nose",0.2,"L_EyeSocket",0.2,"L_Eye",0.2,"L_Eyelid_Top",0.2,"L_Eyelid_Bottom",0.2,"R_EyeSocket",0.2,"R_Eye",0.2,"R_Eyelid_Top",0.2,"R_Eyelid_Bottom",0.2};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
};
