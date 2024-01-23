class CfgUnitInsignia {
	#define NEW_INSIGNIA(displayName) \
	class TAG##_Insignia_##displayName## \
	{ \
		displayName = TAG_NAME(displayName); \
		texture = QPATHTOF(data\icons\##displayName##.paa); \
	}

	NEW_INSIGNIA(Centurion);
	NEW_INSIGNIA(EOD);
	NEW_INSIGNIA(Krayt);
	NEW_INSIGNIA(Logo);
	NEW_INSIGNIA(Medic);
	NEW_INSIGNIA(Purrgil);
	NEW_INSIGNIA(Reaper);
	NEW_INSIGNIA(Varactyl);
	NEW_INSIGNIA(Mercy);
	NEW_INSIGNIA(Nimbus);
};