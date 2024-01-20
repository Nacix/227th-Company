class CfgUnitInsignia {
	#define NEW_INSIGNIA(name,display) \
	class TAG##_Insignia_##name## \
	{ \
		displayName = TAG_NAME(display); \
		texture = QPATHTOF(data\icons\##name##.paa); \
	}

	NEW_INSIGNIA(Centurion,Centurion);
	NEW_INSIGNIA(EOD,EOD);
	NEW_INSIGNIA(Krayt,Krayt);
	NEW_INSIGNIA(Logo,Logo);
	NEW_INSIGNIA(Medic,Medic);
	NEW_INSIGNIA(Purrgil,Purrgil);
	NEW_INSIGNIA(Reaper,Reaper);
	NEW_INSIGNIA(Varactyl,Varactyl);
	NEW_INSIGNIA(Mercy,Mercy);
	NEW_INSIGNIA(Nimbus,Nimbus);
};