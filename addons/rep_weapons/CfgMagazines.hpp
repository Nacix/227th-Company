class CfgMagazines
{
    class 3AS_60Rnd_EC30_Mag;
    class 3AS_100Rnd_EC40_Mag;
    class 3AS_45Rnd_EC50_Mag;
    class 3AS_10Rnd_EC80_Mag;

    SUBCLASS(24Rnd_EC30_Mag_F,3AS_60Rnd_EC30_Mag)
    {
        author = "Anorexican";
        displayName = "24Rnd EC30 Mag";
        count = 24;
        mass = 3;
        descriptionShort = "24-charge EC30 tibanna cartridge<br />Used in: DC-17SA";
    };

    SUBCLASS(45Rnd_EC40_Mag_F,3AS_100Rnd_EC40_Mag)
    {
        author = "Anorexican";
        displayName = "45Rnd EC40 Mag";
        count = 45;
        mass = 5;
        descriptionShort = "45-charge EC40 tibanna cartridge<br />Used in: DC-15A";
    };

    SUBCLASS(60Rnd_EC40_Mag_F,3AS_100Rnd_EC40_Mag)
    {
        author = "Anorexican";
        displayName = "60Rnd EC40 Mag";
        count = 60;
        mass = 5;
        descriptionShort = "60-charge EC40 tibanna cartridge<br />Used in: Westar M5";
    };

    SUBCLASS(60Rnd_EC30_Mag_F,3AS_60Rnd_EC30_Mag)
    {
        author = "Anorexican";
        displayName = "60Rnd EC30 Mag";
        count = 60;
        mass = 5;
        descriptionShort = "60-charge EC30 tibanna cartridge<br />Used in: DC-15S";
    };

    SUBCLASS(100Rnd_EC40_Mag_F,3AS_100Rnd_EC40_Mag)
    {
        author = "Anorexican";
        displayName = "100Rnd EC40 Mag";
        count = 100;
        mass = 7;
        descriptionShort = "100-charge EC40 tibanna cartridge<br />Used in: DC-15LE";
    };

    SUBCLASS(15Rnd_EC80_Mag_F,3AS_10Rnd_EC80_Mag)
    {
        author = "Anorexican";
        displayName = "15Rnd EC80 Mag";
        count = 15;
        mass = 5;
        initSpeed = 1000;
        descriptionShort = "15-charge EC80 tibanna cartridge<br />Used in: DC-15X";
    };

    SUBCLASS(36Rnd_EC50_Mag_F,3AS_45Rnd_EC50_Mag)
    {
        author = "Anorexican";
        displayName = "36Rnd EC50 Mag";
        count = 36;
        mass = 5;
        descriptionShort = "36-charge EC50 tibanna cartridge<br />Used in: DC-15C";
    };
};