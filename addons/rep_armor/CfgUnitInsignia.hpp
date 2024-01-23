class CfgUnitInsignia {
	#define NEW_INSIGNIA(className) \
	class TAG##_Insignia_##className## \
	{ \
		displayName = TAG_NAME(className); \
		texture = QPATHTOF(data\icons\icon_##className##_co.paa); \
	}

	NEW_INSIGNIA(Centurion);
	NEW_INSIGNIA(EOD);
	NEW_INSIGNIA(Krayt);
	NEW_INSIGNIA(Emblem);
	NEW_INSIGNIA(Medic);
	NEW_INSIGNIA(Purrgil);
	NEW_INSIGNIA(Reaper);
	NEW_INSIGNIA(Varactyl);
	NEW_INSIGNIA(Mercy);
	NEW_INSIGNIA(Nimbus);
};