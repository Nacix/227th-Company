class CfgMagazines
{
    class CA_LauncherMagazine;
    
    class 3AS_16Rnd_EC20_Mag;
    class 3AS_60Rnd_EC30_Mag;
    class 3AS_100Rnd_EC40_Mag;
    class 3AS_45Rnd_EC50_Mag;
    class 3AS_300Rnd_EC60_Mag;
    class 3AS_5Rnd_EC80_Mag;
    class 3AS_10Rnd_EC80_Mag;
    class 3AS_10Rnd_EM90_mag;
    class 3AS_AntiArmour_mag;
    class JLTS_stun_mag_short;
    class JLTS_stun_mag_long;

    SUBCLASS(15Rnd_ST10_mag_F,JLTS_stun_mag_short)
    {
        author = "Anorexican";
        displayName = "15Rnd ST10 Stun Cartridge";
        descriptionShort = "15-charge ST10 stun cartridge<br />Duration: 10s";
        ammo = CLASS(B_ST10);
        initSpeed = 100;
        count = 15;
        mass = 5;
        JLTS_stunDuration = 10;
        JLTS_hasElectronics = 0;
    };

    SUBCLASS(15Rnd_ST20_mag_F,TAG##_15Rnd_ST10_mag_F)
    {
        displayName = "15Rnd ST20 Stun Cartridge";
        descriptionShort = "15-charge ST20 stun cartridge<br />Duration: 20s";
        JLTS_stunDuration = 20;
    };

    SUBCLASS(15Rnd_EC20_Mag_F,3AS_16Rnd_EC20_Mag)
    {
        author = "Anorexican";
        displayName = "15Rnd EC20 Cartridge";
        ammo = CLASS(B_EC20_Pellets_Submunition);
        count = 15;
        mass = 9;
        descriptionShort = "15-charge EC20 tibanna scatter cartridge<br />Used in: DP-23";
    };

    SUBCLASS(24Rnd_EC30_Mag_F,3AS_60Rnd_EC30_Mag)
    {
        author = "Anorexican";
        displayName = "24Rnd EC30 Cartridge";
        count = 24;
        mass = 3;
        descriptionShort = "24-charge EC30 tibanna cartridge<br />Used in: DC-17SA";
    };

    SUBCLASS(60Rnd_EC30_Mag_F,3AS_60Rnd_EC30_Mag)
    {
        author = "Anorexican";
        displayName = "60Rnd EC30 Cartridge";
        count = 60;
        mass = 8;
        descriptionShort = "60-charge EC30 tibanna cartridge<br />Used in: DC-15S";
    };

    SUBCLASS(45Rnd_EC40_Mag_F,3AS_100Rnd_EC40_Mag)
    {
        author = "Anorexican";
        displayName = "45Rnd EC40 Cartridge";
        count = 45;
        mass = 9;
        descriptionShort = "45-charge EC40 tibanna cartridge<br />Used in: DC-15A";
    };

    SUBCLASS(60Rnd_EC40_Mag_F,3AS_100Rnd_EC40_Mag)
    {
        author = "Anorexican";
        displayName = "60Rnd EC40 Cartridge";
        count = 60;
        mass = 12;
        descriptionShort = "60-charge EC40 tibanna cartridge<br />Used in: Westar M5";
    };

    SUBCLASS(100Rnd_EC40_Mag_F,3AS_100Rnd_EC40_Mag)
    {
        author = "Anorexican";
        displayName = "100Rnd EC40 Cartridge";
        count = 100;
        mass = 20;
        descriptionShort = "100-charge EC40 tibanna cartridge<br />Used in: DC-15LE & DC-17M";
    };

    SUBCLASS(24Rnd_EC50_Mag_F,3AS_45Rnd_EC50_Mag)
    {
        author = "Anorexican";
        displayName = "24Rnd EC50 Cartridge";
        count = 24;
        mass = 6;
        descriptionShort = "24-charge EC50 tibanna cartridge<br />Used in: DP-23";
    };

    SUBCLASS(36Rnd_EC50_Mag_F,3AS_45Rnd_EC50_Mag)
    {
        author = "Anorexican";
        displayName = "36Rnd EC50 Cartridge";
        count = 36;
        mass = 9;
        descriptionShort = "36-charge EC50 tibanna cartridge<br />Used in: DC-15C";
    };

    SUBCLASS(21Rnd_EC60_Mag_F,3AS_300Rnd_EC60_Mag)
    {
        author = "Anorexican";
        displayName = "21Rnd EC60 Cartridge";
        initSpeed = 875;
        count = 21;
        mass = 7;
        descriptionShort = "21-charge EC60 focused tibanna cartridge<br />Velocity: 875m/s<br />Used in: DW-32S";
    };

    SUBCLASS(5Rnd_EC80_Mag_F,3AS_5Rnd_EC80_Mag)
    {
        author = "Anorexican";
        displayName = "5Rnd EC80 Cartridge";
        mass = 4;
        initSpeed = 1000;
        descriptionShort = "5-charge EC80 focused tibanna cartridge<br />Velocity: 1000m/s<br />Used in: DC-17M";
    };

    SUBCLASS(15Rnd_EC80_Mag_F,3AS_10Rnd_EC80_Mag)
    {
        author = "Anorexican";
        displayName = "15Rnd EC80 Cartridge";
        count = 15;
        mass = 12;
        initSpeed = 1250;
        descriptionShort = "15-charge EC80 tibanna cartridge<br />Velocity: 1250m/s<br />Used in: 773 'Firepuncher'";
    };

    SUBCLASS(12Rnd_EC90_Mag_F,3AS_10Rnd_EM90_mag)
    {
        author = "Anorexican";
        displayName = "12Rnd EC90 Cartridge";
        count = 12;
        mass = 12;
        ammo = "3AS_EC90_BluePlasma";
        initSpeed = 1500;
        descriptionShort = "12-charge EC90 focused tibanna cartridge<br />Velocity: 1500m/s<br />Used in: DC-15X";
    };

    SUBCLASS(1Rnd_ECX130_Mag_F,TAG_CLASS(45Rnd_EC40_Mag_F))
    {
        author = "Anorexican";
        displayName = "1Rnd ECX130 Cartridge";
        ammo = CLASS(B_ECX130_147x114_AT);
        count = 1;
        mass = 2;
        initSpeed = 850;
        descriptionShort = "ECX130 superheated tibanna cartridge<br />Velocity: 850m/s<br />Used in: DC-15HX";
    };

    SUBCLASS(1Rnd_ECX1000_Mag_F,3AS_AntiArmour_mag)
    {
        author = "Anorexican";
        displayName = "1Rnd ECX1000 Cartridge";
        count = 1;
        mass = 10;
        descriptionShort = "ECX1000 volatile tibanna cartridge<br />Used in: DC-17M";
    };

    SUBCLASS(RPS6X_THEAT_SACLOS_F,CA_LauncherMagazine)
	{
		author = "Anorexican";
        displayName = TAG_NAME(ECX780 T-HEAT SACLOS Missile);
        descriptionShort = "Wire-Guided Tandem HEAT Missile<br />Damage: 180+600<br />Radius: 3m<br />Range: 1000m<br />Used in: RPS-6X";
		displayNameShort = "T-HEAT SACLOS";

		scope = 2;
		model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";

        ammo = CLASS(M_ECX780_THEAT);
		initSpeed = 140;
		mass = 60;
	};

    SUBCLASS(RPS6X_HE_SACLOS_F,TAG_CLASS(RPS6X_THEAT_SACLOS_F))
    {
        displayName = TAG_NAME(ECX100 HE SACLOS Missile);
        descriptionShort = "Wire-Guided HE Missile<br />Damage: 100<br />Radius: 8m<br />Range: 1000m<br />Used in: RPS-6X";
        displayNameShort = "HE SACLOS";

        ammo = CLASS(M_ECX100_HE);
    };
};