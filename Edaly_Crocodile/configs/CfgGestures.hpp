class CfgGestures_Crocodile_Edaly
{
    skeletonName = "Crocodile_Skeleton";
    class ManActions{};
    class Actions
    {
        class NoActions
        {
            turnSpeed = 0;
            upDegree = 0;
            limitFast = 1;
            useFastMove = 0;
            stance = "ManStanceUndefined";
        };
        class NoHEADActions: NoActions
        {
            aiming = "aimingNo";
            legs = "legsNo";
            head = "headNo";
        };
    };
    class Default
    {
        actions = "NoActions";
        file = "";
        looped = 1;
        speed = 0.5;
        relSpeedMin = 0.5;
        relSpeedMax = 1;
        soundEnabled = 0;
        soundOverride = "";
        soundEdge[] = {0.5,1};
        terminal = 0;
        ragdoll = 0;
        equivalentTo = "";
        connectAs = "";
        connectFrom[] = {};
        connectTo[] = {};
        interpolateWith[] = {};
        interpolateTo[] = {};
        interpolateFrom[] = {};
        mask = "empty";
        interpolationSpeed = 6;
        interpolationRestart = 0;
        preload = 0;
        disableWeapons = 1;
        enableOptics = 0;
        showWeaponAim = 1;
        enableMissile = 1;
        enableBinocular = 1;
        showItemInHand = 0;
        showItemInRightHand = 0;
        showHandGun = 0;
        canPullTrigger = 1;
        Walkcycles = 1;
        headBobMode = 0;
        headBobStrength = 0;
        leftHandIKBeg = 0;
        leftHandIKEnd = 0;
        rightHandIKBeg = 0;
        rightHandIKEnd = 0;
        leftHandIKCurve[] = {1};
        rightHandIKCurve[] = {1};
        forceAim = 0;
    };
    class States{};
    class BlendAnims
    {
        class MaskStart
        {
            weight = 0.85;
        };
        empty[] = {};
    };
    class Interpolations{};
    transitionsInterpolated[] = {};
    transitionsSimple[] = {};
    transitionsDisabled[] = {};
};