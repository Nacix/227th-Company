class CfgVehicles {
	#undef SET_ARMOR_VALS
	#define SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,mult) \
		armor = QUOTE(baseArmor*mult); \
		passThrough = QUOTE(pass); \
		explosionShielding = QUOTE(blastProc*mult); \
		minimalHit = QUOTE(minHit); \
		material = -1;
	#undef SET_ARMOR_HEAD
	#define SET_ARMOR_HEAD(baseArmor,pass,blastProc,minHit,headMult) \
		class HitFace \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,headMult) \
			name = "face_hub"; \
			radius = 0.08; \
		}; \
		class HitNeck: HitFace \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,headMult) \
			name = "neck"; \
			radius = 0.1; \
		}; \
		class HitHead: HitNeck \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,headMult) \
			name = "head"; \
			radius = 0.2; \
			depends = "HitFace max HitNeck"; \
		};
	#undef SET_ARMOR_TORSO
	#define SET_ARMOR_TORSO(baseArmor,pass,blastProc,minHit) \
		class HitPelvis \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,1) \
			name = "pelvis"; \
			radius = 0.24; \
			visual = "injury_body"; \
		}; \
		class HitAbdomen: HitPelvis \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,1) \
			name = "spine1"; \
			radius = 0.16; \
		}; \
		class HitDiaphragm: HitAbdomen \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,1) \
			name = "spine2"; \
			radius = 0.18; \
		}; \
		class HitChest: HitDiaphragm \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,1) \
			name = "spine3"; \
			radius = 0.18; \
		}; \
		class HitBody: HitChest \
		{ \
			armor = 1000; \
			material = -1; \
			name = "body"; \
			passThrough = 1; \
			radius = 0; \
			explosionShielding = 6; \
			minimalHit = 0.01; \
			depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest"; \
		};
	#undef SET_ARMOR_LIMBS
	#define SET_ARMOR_LIMBS(baseArmor,pass,blastProc,minHit,limbMult) \
		class HitArms \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,limbMult) \
			name = "arms"; \
			radius = 0.1; \
			visual = "injury_hands"; \
		}; \
		class HitHands: HitArms \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,limbMult) \
			name = "hands"; \
			radius = 0.1; \
			visual = "injury_hands"; \
			depends = "HitArms"; \
		}; \
		class HitLegs \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,limbMult) \
			name = "legs"; \
			radius = 0.14; \
			visual = "injury_legs"; \
		}; \
		class Incapacitated: HitLegs \
		{ \
			armor = 1000; \
			material = -1; \
			name = "body"; \
			passThrough = 1; \
			radius = 0; \
			explosionShielding = 3; \
			visual = ""; \
			minimalHit = 0; \
			depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2"; \
		}; \
		class HitLeftArm \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,limbMult) \
			name = "hand_l"; \
			radius = 0.08; \
			visual = "injury_hands"; \
		}; \
		class HitRightArm: HitLeftArm \
		{ \
			name = "hand_r"; \
		}; \
		class HitLeftLeg \
		{ \
			SET_ARMOR_VALS(baseArmor,pass,blastProc,minHit,limbMult) \
			name = "leg_l"; \
			radius = 0.1; \
			visual = "injury_legs"; \
		}; \
		class HitRightLeg: HitLeftLeg \
		{ \
			name = "leg_r"; \
		};
	#undef SET_ARMOR
	#define SET_ARMOR(baseArmor,pass,blastProc,minHit,headMult,limbMult) \
		class HitPoints: HitPoints \
		{ \
			SET_ARMOR_HEAD(baseArmor,1,blastProc,minHit,headMult) \
			SET_ARMOR_TORSO(baseArmor,pass,blastProc,minHit) \
			SET_ARMOR_LIMBS(baseArmor,1,blastProc,minHit,limbMult) \
		};

	#define ADD_BACKPACK(className,rawName,parentClass) \
		class TAG##_B_Pack_##className##: parentClass \
		{ \
			displayName = TAG_NAME(rawName); \
			hiddenSelectionsTextures[] = { QPATHTOF(data\backpacks\b_##className##_co.paa) }; \
		}
	#define ADD_JETPACK(className,rawName,parentClass) \
		class TAG##_B_Pack_##className##: parentClass \
		{ \
			displayName = TAG_NAME(rawName); \
			hiddenSelectionsTextures[] = { QPATHTOF(data\backpacks\jetpacks\b_##className##_co.paa) }; \
		}
	#define ADD_BACKPACK_STRAPS(className,rawName,parentClass) \
		ADD_BACKPACK(className,rawName,parentClass); \
		class TAG##_B_Pack_##className##_straps: parentClass##_s \
		{ \
			displayName = TAG_NAME(rawName## (Straps)); \
			hiddenSelectionsTextures[] = { QPATHTOF(data\backpacks\b_##className##_co.paa) }; \
		}

	#define ADD_UNIFORM_TROOPER_BASE(className,rawName,groupDir,localDir) \
		SUBCLASS(B_##className##_Base,TAG##_B_Trooper_Base) \
		{ \
			displayName = TAG_NAME(rawName); \
			scope = 2; \
			hiddenSelectionsTextures[]= \
			{ \
				QPATHTOF(data\uniforms\##groupDir##\##localDir##\u_up_##className##_co.paa), \
				QPATHTOF(data\uniforms\##groupDir##\##localDir##\u_low_##className##_co.paa) \
			}; \
		}
	#define ADD_UNIFORM_INSULATED(className,rawName) \
		SUBCLASS(B_Insulated_##className##_Base,TAG##_B_Insulated_Base) \
		{ \
			displayName = TAG_NAME(rawName); \
			scope = 2; \
			hiddenSelectionsTextures[]= \
			{ \
				QPATHTOF(data\uniforms\insulated\u_insulated_##className##_co.paa), \
				QPATHTOF(data\uniforms\insulated\u_insulated_##className##_co.paa) \
			}; \
		}

	#define ADD_UNIFORM_TROOPER(className,rawName) ADD_UNIFORM_TROOPER_BASE(className,rawName,trooper,className)
	#define ADD_UNIFORM_JET(className,rawName) ADD_UNIFORM_TROOPER_BASE(Jet_##className,rawName,jet,className)
	#define ADD_UNIFORM_TROOPER_CUSTOM(className,rawName) ADD_UNIFORM_TROOPER_BASE(className,rawName,custom,className)

	class B_Soldier_Base_F;
	class B_Soldier_F: B_Soldier_Base_F
	{
		class HitPoints;
	};
	class B_Kitbag_rgr;
	class 3AS_Katarn_Backpack_Base;

	class JLTS_Clone_backpack;
	class JLTS_Clone_backpack_s;
	class JLTS_Clone_belt_bag;
	class JLTS_Clone_backpack_RTO;
	class JLTS_Clone_backpack_s_RTO;
	class JLTS_Clone_RTO_pack;
	class JLTS_Clone_ARC_backpack;
	class JLTS_Clone_jumppack_Chicken;
	class JLTS_Clone_jumppack_JT12;
	class JLTS_Clone_Jumppack_mc;

	ADD_BACKPACK(ARC,ARC Backpack,JLTS_Clone_ARC_backpack);
	ADD_BACKPACK(ARC_Medic,ARC Medic Backpack,JLTS_Clone_ARC_backpack);
	
	ADD_BACKPACK(RTO,RTO Backpack,JLTS_Clone_backpack_RTO);

	SUBCLASS(B_Pack_RTO_straps,JLTS_Clone_backpack_s_RTO)
	{
		displayName = TAG_NAME(RTO Backpack (Straps));
		hiddenSelectionsTextures[] = { QPATHTOF(data\backpacks\b_RTO_co.paa) };
	};

	ADD_BACKPACK(RTO_mini,RTO Pack (Mini),JLTS_Clone_RTO_pack);

	ADD_BACKPACK_STRAPS(AT,AT Backpack,JLTS_Clone_backpack);
	ADD_BACKPACK_STRAPS(Medic,Medic Backpack,JLTS_Clone_backpack);
	ADD_BACKPACK_STRAPS(EOD,EOD Backpack,JLTS_Clone_backpack);
	ADD_BACKPACK_STRAPS(Basic,Trooper Backpack,JLTS_Clone_backpack);

	ADD_JETPACK(JP_Chicken,Jump Pack (Chicken),JLTS_Clone_jumppack_Chicken);

	ADD_JETPACK(JT12,Jetpack (JT-12),JLTS_Clone_jumppack_JT12);
	ADD_JETPACK(JT12_medic,Jetpack (JT-12) [Medic],JLTS_Clone_jumppack_JT12);
	ADD_JETPACK(JT12_mercy,Jetpack (JT-12) [Mercy],JLTS_Clone_jumppack_JT12);

	ADD_JETPACK(JP_MC,Jump Pack (MC),JLTS_Clone_Jumppack_mc);
	ADD_JETPACK(JP_MC_medic,Jump Pack (MC) [Medic],JLTS_Clone_Jumppack_mc);
	ADD_JETPACK(JP_MC_pilot,Jump Pack (MC) [Pilot],JLTS_Clone_Jumppack_mc);
	ADD_JETPACK(JP_MC_krayt,Jump Pack (MC) [Krayt],JLTS_Clone_Jumppack_mc);
	ADD_JETPACK(JP_MC_valyrian,Jump Pack (MC) [Valyrian],JLTS_Clone_Jumppack_mc);

	SUBCLASS(B_Trooper_Base,B_Soldier_F)
	{
		author = "Anorexican";
		scope = 1;
		_generalMacro = CLASS(B_Trooper_Base);
		displayName = TAG_NAME(CloneTrooperBase);
		side = 0;
		faction = CLASS(BLU_Krayt_F);
		uniformClass = CLASS(U_B_Trooper_Base);
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.40;
		minTotalDamageThreshold = 0.001;
		impactDamageMultiplier = 0.5;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\uniforms\trooper\ct\u_up_ct_co.paa),
			QPATHTOF(data\uniforms\trooper\ct\u_low_ct_co.paa)
		};
		SET_ARMOR(11.5,0.625,12,0.01,0.25,0.4)
		class Wounds
		{
			tex[] = {};
			mat[]=
			{
				"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat",
				"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
				"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
				"MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat",
				"MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
				"MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"a3\characters_f\heads\data\hl_white.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
	};
	
	SUBCLASS(B_Insulated_Base,TAG##_B_Trooper_Base)
	{
		_generalMacro = CLASS(B_Insulated_Base);
		displayName = TAG_NAME(CloneInsulatedBase);
		uniformClass = CLASS(U_B_Insulated_Base);
		model = "\3AS\3AS_Characters\Clones\Uniforms\Model\3AS_ColdAssault_Armor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\uniforms\insulated\u_insulated_ct_co.paa),
			QPATHTOF(data\uniforms\insulated\u_insulated_ct_co.paa)
		};
	};

	ADD_UNIFORM_TROOPER(CR,CRBase);
	ADD_UNIFORM_TROOPER(CT,CTBase);
	ADD_UNIFORM_TROOPER(SCT,SCTBase);
	ADD_UNIFORM_TROOPER(VCT,VCTBase);
	ADD_UNIFORM_TROOPER(CSP,CSPBase);
	ADD_UNIFORM_TROOPER(CLP,CLPBase);
	ADD_UNIFORM_TROOPER(CP,CPBase);
	ADD_UNIFORM_TROOPER(CS,CSBase);
	ADD_UNIFORM_TROOPER(CSS,CSSBase);
	ADD_UNIFORM_TROOPER(CSM,CSMBase);

	ADD_UNIFORM_TROOPER_CUSTOM(Cookie,CookieBase);
	ADD_UNIFORM_TROOPER_CUSTOM(Jinx,JinxBase);
	ADD_UNIFORM_TROOPER_CUSTOM(Knight,KnightBase);
	ADD_UNIFORM_TROOPER_CUSTOM(Luci,LuciBase);
	ADD_UNIFORM_TROOPER_CUSTOM(Neca,NecaBase);
	ADD_UNIFORM_TROOPER_CUSTOM(Speed,SpeedBase);
	ADD_UNIFORM_TROOPER_CUSTOM(Valyrian,ValyrianBase);

	ADD_UNIFORM_JET(CT,JetBase);
	ADD_UNIFORM_JET(NCO,JetNCOBase);

	ADD_UNIFORM_INSULATED(CT,InsulatedBase);
	ADD_UNIFORM_INSULATED(Geonosis_CT,InsulatedGeonosisBase);
};