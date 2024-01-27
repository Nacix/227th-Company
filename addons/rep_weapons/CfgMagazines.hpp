class CfgMagazines
{
    class 3AS_16Rnd_EC20_Mag;
    class 3AS_60Rnd_EC30_Mag;
    class 3AS_100Rnd_EC40_Mag;
    class 3AS_45Rnd_EC50_Mag;
    class 3AS_300Rnd_EC60_Mag;
    class 3AS_10Rnd_EC80_Mag;
    class 3AS_AntiArmour_mag;

    SUBCLASS(15Rnd_EC20_Mag_F,3AS_16Rnd_EC20_Mag)
    {
        author = "Anorexican";
        displayName = "15Rnd EC20 Cartridge";
        ammo = CLASS(B_EC20_Pellets_Submunition);
        count = 15;
        mass = 3;
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

    SUBCLASS(30Rnd_EC50_Mag_F,3AS_45Rnd_EC50_Mag)
    {
        author = "Anorexican";
        displayName = "30Rnd EC50 Cartridge";
        count = 30;
        mass = 3;
        descriptionShort = "30-charge EC50 tibanna cartridge<br />Used in: DP-23";
    };

    SUBCLASS(45Rnd_EC40_Mag_F,3AS_100Rnd_EC40_Mag)
    {
        author = "Anorexican";
        displayName = "45Rnd EC40 Cartridge";
        count = 45;
        mass = 5;
        descriptionShort = "45-charge EC40 tibanna cartridge<br />Used in: DC-15A";
    };

    SUBCLASS(60Rnd_EC40_Mag_F,3AS_100Rnd_EC40_Mag)
    {
        author = "Anorexican";
        displayName = "60Rnd EC40 Cartridge";
        count = 60;
        mass = 5;
        descriptionShort = "60-charge EC40 tibanna cartridge<br />Used in: Westar M5";
    };

    SUBCLASS(60Rnd_EC30_Mag_F,3AS_60Rnd_EC30_Mag)
    {
        author = "Anorexican";
        displayName = "60Rnd EC30 Cartridge";
        count = 60;
        mass = 5;
        descriptionShort = "60-charge EC30 tibanna cartridge<br />Used in: DC-15S";
    };

    SUBCLASS(100Rnd_EC40_Mag_F,3AS_100Rnd_EC40_Mag)
    {
        author = "Anorexican";
        displayName = "100Rnd EC40 Cartridge";
        count = 100;
        mass = 7;
        descriptionShort = "100-charge EC40 tibanna cartridge<br />Used in: DC-15LE & DC-17M";
    };

    SUBCLASS(15Rnd_EC80_Mag_F,3AS_10Rnd_EC80_Mag)
    {
        author = "Anorexican";
        displayName = "15Rnd EC80 Cartridge";
        count = 15;
        mass = 5;
        initSpeed = 1000;
        descriptionShort = "15-charge EC80 tibanna cartridge<br />Used in: DC-15X";
    };

    SUBCLASS(36Rnd_EC50_Mag_F,3AS_45Rnd_EC50_Mag)
    {
        author = "Anorexican";
        displayName = "36Rnd EC50 Cartridge";
        count = 36;
        mass = 5;
        descriptionShort = "36-charge EC50 tibanna cartridge<br />Used in: DC-15C";
    };

    SUBCLASS(21Rnd_EC60_Mag_F,3AS_300Rnd_EC60_Mag)
    {
        author = "Anorexican";
        displayName = "21Rnd EC60 Cartridge";
        count = 21;
        mass = 5;
        descriptionShort = "21-charge EC60 tibanna cartridge<br />Used in: DW-32S";
    };

    SUBCLASS(5Rnd_EC80_Mag_F,3AS_10Rnd_EC80_Mag)
    {
        author = "Anorexican";
        displayName = "5Rnd EC80 Cartridge";
        count = 5;
        mass = 5;
        initSpeed = 850;
        descriptionShort = "5-charge EC80 tibanna cartridge<br />Used in: DC-17M";
    };

    SUBCLASS(1Rnd_ECX130_Mag_F,TAG_CLASS(45Rnd_EC40_Mag_F))
    {
        author = "Anorexican";
        displayName = "1Rnd ECX130 Cartridge";
        ammo = CLASS(B_ECX130_147x114_AT);
        count = 1;
        mass = 6;
        initSpeed = 850;
        descriptionShort = "ECX130 superheated tibanna cartridge<br />Used in: DC-15L";
    };

    SUBCLASS(1Rnd_ECX1000_Mag_F,3AS_AntiArmour_mag)
    {
        author = "Anorexican";
        displayName = "1Rnd ECX1000 Cartridge";
        count = 1;
        mass = 5;
        descriptionShort = "ECX1000 volatile tibanna cartridge<br />Used in: DC-17M";
    };
};