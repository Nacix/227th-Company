class CfgAmmo
{
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
};