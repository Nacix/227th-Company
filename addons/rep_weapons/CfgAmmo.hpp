class CfgAmmo
{
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
};