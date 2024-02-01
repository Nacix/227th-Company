class CfgAmmo
{
    class MissileBase;
    class ammo_Penetrator_Base;
    
    class 3AS_Delta7_20mm_AA;
    class 3AS_EC20_BluePlasma;

    SUBCLASS(B_EC20_Pellets_Submunition_Deploy,3AS_EC20_BluePlasma)
    {
        simulationStep = 0.05;
        airFriction = -0.0033;
        hit = 5;
    };

    SUBCLASS(B_EC20_Pellets_Submunition,3AS_EC20_BluePlasma)
    {
        simulationStep = 0.0001;
        submunitionAmmo = CLASS(B_EC20_Pellets_Submunition_Deploy);
        submunitionConeType[] = { "poissondisc", 8 };
        submunitionConeAngle = 0.65;
        airFriction = -0.0005;
        thrust = 410;
        thrustTime = 3;
        timeToLive = 10;
        triggerSpeedCoef[] = { 0.85, 1 };
        triggerTime = 0.008;
    };

    SUBCLASS(B_ECX130_147x114_AT,3AS_Delta7_20mm_AA)
    {
        hit = 130;
        explosive = 0.35;
        caliber = 12.7; 
        craterEffects = "GrenadeCrater";
        explosionEffects = "GrenadeExplosion";
        explosionEffectsRadius = 0.01;
        explosionForceCoef = 0.01;
        explosionTime = -1;
        fuseDistance = 5;
        indirectHit = 20;
        indirectHitRange = 1;
        laserLock = 1;
    };

    SUBCLASS(ammo_Penetrator_ECP600,ammo_Penetrator_Base)
    {
        caliber = 40;
        warheadName = "TandemHEAT";
        hit = 600;
    };

    SUBCLASS(M_ECX780_THEAT,MissileBase)
    {
        hit = 180;
        indirectHit = 28;
        indirectHitRange = 3;
        warheadName = "TandemHEAT";
        submunitionAmmo = CLASS(ammo_Penetrator_ECP600);
        submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
        submunitionInitialOffset[] = { 0, 0, -0.2 };
        model = "\A3\Weapons_F_Tank\Launchers\Vorona\Vorona_missile_heat_fly";
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        explosive = 0.8;
        aiAmmoUsageFlags = "128 + 512";
        manualcontrolOffset = 80;
        flightProfiles[] = { "Cruise" };
        maneuvrability = 6;
        missileManualControlCone = 60;
        simulationStep = 0.002;
        maxControlRange = 600;
        initTime = 0.05;
        trackOversteer = 0.5;
        trackLead = 0.85;
        airFriction = 0.06;
        sideAirFriction = 0.09;
        maxSpeed = 200;
        thrustTime = 1;
        thrust = 70;
        fuseDistance = 5;
        effectsMissile = "missile2";
        whistleDist = 4;
        weaponLockSystem = 0;
        class CamShakeExplode
        {
            power = 11;
            duration = 1.4;
            frequency = 20;
            distance = 30;
        };
        class CamShakeHit
		{
			power = 110;
			duration = 0.5;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};

        class ace_missileguidance
		{
			enabled = 1;
			canVanillaLock = 0;
            correctionDistance = 3;
			offsetFromCrosshair[] = { 0, 0, 0 };

			attackProfiles[] = { "WIRE" };
			defaultAttackProfile = "WIRE";
            minDeflection = 0;
			maxDeflection = 0.0027;
			incDeflection = 0.0005;

			seekerLockModes[] = { "LOAL", "LOBL" };
			defaultSeekerLockMode = "LOAL";
			seekerTypes[] = { "SACLOS" };
			defaultSeekerType = "SACLOS";
			seekerMinRange = 80;
			seekerMaxRange = 600;
			seekLastTargetPos = 0;
			seekerAccuracy = 1;
			seekerAngle = 15;
		};
    };
    SUBCLASS(M_ECX100_HE,MissileBase)
    {
        hit = 100;
        indirectHit = 35;
        indirectHitRange = 10;
        warheadName = "HE";
        submunitionAmmo = "";
        submunitionDirectionType = "";
        submunitionInitSpeed = 0;
        submunitionParentSpeedCoef = 0;
        triggerOnImpact = 0;
        model = "\A3\Weapons_F_Tank\Launchers\Vorona\Vorona_missile_he_fly";
        explosive = 0.9;
        aiAmmoUsageFlags = "64 + 128";
        craterEffects = "ATMissileCrater";
        effectsMissile = "missile3";
        deleteParentWhenTriggered = 0;
        manualcontrolOffset = 80;
        flightProfiles[] = { "Cruise" };
        maneuvrability = 6;
        missileManualControlCone = 60;
        simulationStep = 0.002;
        maxControlRange = 600;
        initTime = 0.05;
        trackOversteer = 0.5;
        trackLead = 0.85;
        airFriction = 0.06;
        sideAirFriction = 0.09;
        maxSpeed = 200;
        thrustTime = 1;
        thrust = 70;
        fuseDistance = 5;
        whistleDist = 4;
        weaponLockSystem = 0;
        class CamShakeExplode
        {
            power = 11;
            duration = 1.4;
            frequency = 20;
            distance = 30;
        };
        class CamShakeHit
		{
			power = 110;
			duration = 0.5;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};

        class ace_missileguidance
		{
			enabled = 1;
			canVanillaLock = 0;
            correctionDistance = 3;
			offsetFromCrosshair[] = { 0, 0, 0 };

			attackProfiles[] = { "WIRE" };
			defaultAttackProfile = "WIRE";
            minDeflection = 0;
			maxDeflection = 0.0027;
			incDeflection = 0.0005;

			seekerLockModes[] = { "LOAL", "LOBL" };
			defaultSeekerLockMode = "LOAL";
			seekerTypes[] = { "SACLOS" };
			defaultSeekerType = "SACLOS";
			seekerMinRange = 80;
			seekerMaxRange = 600;
			seekLastTargetPos = 0;
			seekerAccuracy = 1;
			seekerAngle = 15;
		};
    };
};