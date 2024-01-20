class CfgWeapons {
// ############################################################ Macro Definitions ############################################################
	// Sets armor value for a HitPoint
	#define SET_ARMOR_VALS(baseArmor,pass,mult) \
		armor = QUOTE(baseArmor*mult); \
		passThrough = QUOTE(pass);

	// Calls armor value setter for each region of the head with given multiplier
	#define SET_ARMOR_HEAD(baseArmor,pass,headMult) \
		class Head \
		{ \
			hitpointName = "HitHead"; \
			SET_ARMOR_VALS(baseArmor,0.5,headMult) \
		}; \
		class Face \
		{ \
			hitpointName = "HitFace"; \
			SET_ARMOR_VALS(baseArmor,0.5,headMult) \
		}; \
		class Neck \
		{ \
			hitpointName = "HitNeck"; \
			SET_ARMOR_VALS(baseArmor,0.5,headMult) \
		};
	
	// Calls armor value setter for each region of the torso with given multiplier
	#define SET_ARMOR_TORSO(baseArmor,pass,torsoMult) \
		class Body \
		{ \
			hitpointName = "HitBody"; \
			SET_ARMOR_VALS(baseArmor,pass*torsoMult,torsoMult) \
		}; \
		class Chest \
		{ \
			hitpointName = "HitChest"; \
			SET_ARMOR_VALS(baseArmor,pass*torsoMult,torsoMult) \
		}; \
		class Diaphragm \
		{ \
			hitpointName = "HitDiaphragm"; \
			SET_ARMOR_VALS(baseArmor,pass*torsoMult,torsoMult) \
		}; \
		class Abdomen \
		{ \
			hitpointName = "HitAbdomen"; \
			SET_ARMOR_VALS(baseArmor,pass*torsoMult,torsoMult) \
		}; \
		class Pelvis \
		{ \
			hitpointName = "HitPelvis"; \
			SET_ARMOR_VALS(baseArmor,pass*torsoMult,torsoMult) \
		};

	// Calls armor value setter for each region of the arms with given multiplier
	#define SET_ARMOR_ARMS(baseArmor,pass,armsMult) \
		class Arms \
		{ \
			hitpointName = "HitArms"; \
			SET_ARMOR_VALS(baseArmor,0.9,armsMult) \
		}; \
		class Hands \
		{ \
			hitpointName = "HitHands"; \
			SET_ARMOR_VALS(baseArmor,0.9,armsMult) \
		}; \
		class LeftArm \
		{ \
			hitpointName = "HitLeftArm"; \
			SET_ARMOR_VALS(baseArmor,0.9,armsMult) \
		}; \
		class RightArm \
		{ \
			hitpointName = "HitRightArm"; \
			SET_ARMOR_VALS(baseArmor,0.9,armsMult) \
		};

	// Calls armor value setter for each region of the legs with given multiplier
	#define SET_ARMOR_LEGS(baseArmor,pass,legsMult) \
		class Legs \
		{ \
			hitpointName = "HitLegs"; \
			SET_ARMOR_VALS(baseArmor,0.9,legsMult) \
		}; \
		class LeftLeg \
		{ \
			hitpointName = "HitLeftLeg"; \
			SET_ARMOR_VALS(baseArmor,0.9,legsMult) \
		}; \
		class RightLeg \
		{ \
			hitpointName = "HitRightLeg"; \
			SET_ARMOR_VALS(baseArmor,0.9,legsMult) \
		};

	// Calls setters for each part of the body
	#define SET_ARMOR(baseArmor,pass,headMult,torsoMult,armsMult,legsMult) \
		class HitpointsProtectionInfo \
		{ \
			SET_ARMOR_HEAD(baseArmor,pass,headMult) \
			SET_ARMOR_TORSO(baseArmor,pass,torsoMult) \
			SET_ARMOR_ARMS(baseArmor,pass,armsMult) \
			SET_ARMOR_LEGS(baseArmor,pass,legsMult) \
		};

	// Inherits ItemInfo from parent class and calls master setter for HitPoint armor
	#define DEF_ARMOR(baseArmor,pass,headMult,torsoMult,armsMult,legsMult) \
		class ItemInfo: ItemInfo \
		{ \
			SET_ARMOR(baseArmor,pass,headMult,torsoMult,armsMult,legsMult) \
		}

	#define ADD_CT_HELMET(className,rawName) \
		class TAG##_H_P2_##className##: TAG##_H_P2_Trooper \
		{ \
			displayName = TAG_NAME(rawName); \
			hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\p2\h_p2_##className##_co.paa) }; \
		}

	#define ADD_ARC_HELMET(className,rawName) \
		class TAG##_H_ARC_##className##: TAG##_H_ARC_Trooper \
		{ \
			displayName = TAG_NAME(rawName); \
			hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\arc\h_arc_##className##_co.paa),QPATHTOF(data\helmets\arc\h_arc_##className##_co.paa) }; \
		}

	#define ADD_ARF_HELMET(className,rawName) \
		class TAG##_H_ARF_##className##: TAG##_H_ARF_Trooper \
		{ \
			displayName = TAG_NAME(rawName); \
			hiddenSelectionsTextures[]= \
			{ \
				QPATHTOF(data\helmets\arf\##className##\h_arf_##className##_co.paa), \
				QPATHTOF(data\helmets\arf\##className##\h_arf_plates_##className##_co.paa), \
				QPATHTOF(data\helmets\arf\##className##\h_arf_visor_##className##_co.paa) \
			}; \
		}

	#define ADD_ENGI_HELMET(className,rawName) \
		class TAG##_H_Engineer_##className##: TAG##_H_Engineer_Trooper \
		{ \
			displayName = TAG_NAME(rawName); \
			hiddenSelectionsTextures[]= \
			{ \
				QPATHTOF(data\helmets\engi\h_engi_##className##_co.paa), \
				QPATHTOF(data\helmets\engi\h_engi_##className##_co.paa) \
			}; \
		}

	#define ADD_P1_CT_HELMET(className,rawName) \
		class TAG##_H_P1_##className##: TAG##_H_P1_Trooper \
		{ \
			displayName = TAG_NAME(rawName (P1)); \
			hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\p1\h_p1_##className##_co.paa) }; \
		}

	#define ADD_P1_PILOT_HELMET(className,rawName) \
		class TAG##_H_P1_Pilot_##className##: TAG##_H_P1_Pilot_CX \
		{ \
			displayName = TAG_NAME(rawName (P1)); \
			hiddenSelectionsTextures[]= \
			{ \
				QPATHTOF(data\helmets\p1\pilot\h_p1_pilot_##className##_co.paa), \
				QPATHTOF(data\helmets\p1\pilot\h_p1_pilot_tubes_co.paa), \
				QPATHTOF(data\helmets\p1\pilot\h_p1_pilot_##className##_co.paa) \
			}; \
		}
	#define ADD_P2_PILOT_HELMET(className,rawName) \
		class TAG##_H_P2_Pilot_##className##: TAG##_H_P2_Pilot_CX \
		{ \
			displayName = TAG_NAME(rawName); \
			hiddenSelectionsTextures[]= \
			{ \
				QPATHTOF(data\helmets\p2\pilot\h_p2_pilot_##className##_co.paa), \
				QPATHTOF(data\helmets\p2\pilot\h_p2_pilot_##className##_co.paa), \
				"", \
				QPATHTOF(data\helmets\p2\pilot\h_p2_pilot_tubes_co.paa), \
				QPATHTOF(data\helmets\p2\pilot\h_p2_pilot_##className##_co.paa), \
				"" \
			}; \
		}

	#define ADD_INSULATED_HELMET(className,rawName) \
		class TAG##_H_Insulated_##className##: TAG##_H_Insulated_Trooper \
		{ \
			displayName = TAG_NAME(rawName); \
			hiddenSelectionsTextures[]= \
			{ \
				QPATHTOF(data\helmets\insulated\h_insulated_##className##_co.paa), \
				QPATHTOF(data\helmets\insulated\h_insulated_##className##_co.paa), \
				QPATHTOF(data\helmets\insulated\h_insulated_##className##_co.paa) \
			}; \
		}

	#define ADD_SPECOP_HELMET(className,rawName) \
		class TAG##_H_SpecOp_##className##: TAG##_H_SpecOp_Trooper \
		{ \
			displayName = TAG_NAME(rawName); \
			hiddenSelectionsTextures[]= \
			{ \
				QPATHTOF(data\helmets\specops\h_specop_##className##_co.paa), \
				QUOTE(\JLTS_AE\Data\BaseTextures\SpecOps\Antennas\SR_Antenna_co.paa), \
				QPATHTOF(data\helmets\specops\h_specop_##className##_co.paa) \
			}; \
		}

	#define ADD_NVG(className,rawName,parentClass) \
		class TAG##_NV_##className##: parentClass \
		{ \
			displayName = TAG_NAME(rawName); \
			hiddenSelectionsTextures[] = { QPATHTOF(data\nvg\nv_##className##_co.paa) }; \
			modelOptics = QUOTE(\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d); \
		}

	#define ADD_NVG_MACRO(className,rawName,parentClass) \
		class TAG##_NV_Macro_##className##: parentClass \
		{ \
			displayName = TAG_NAME(rawName); \
			hiddenSelectionsTextures[] = { QPATHTOF(data\nvg\nv_macro_##className##_co.paa) }; \
			modelOptics = QUOTE(\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d); \
		}; \
		class TAG##_NV_Macro_##className##_spec: JLTS_CloneNVG_spec \
		{ \
			displayName = TAG_NAME(rawName## [Specialist]); \
			hiddenSelectionsTextures[] = { QPATHTOF(data\nvg\nv_macro_##className##_co.paa) }; \
		}

	#define ADD_UNIFORM(className,rawName,cargoSize,parentClass) \
		class TAG##_U_B_##className##: TAG##_U_B_##parentClass##_Base \
		{ \
			displayName = TAG_NAME(rawName); \
			scope = 2; \
			class ItemInfo: ItemInfo \
			{ \
				uniformClass = CLASS(B_##className##_Base); \
				containerClass = QUOTE(Supply##cargoSize); \
			}; \
		}

	#define ADD_TROOPER_UNIFORM(className,rawName,cargoSize) ADD_UNIFORM(className,rawName,cargoSize,Trooper)
	#define ADD_INSULATED_UNIFORM(className,rawName,cargoSize) ADD_UNIFORM(Insulated_##className,rawName,cargoSize,Insulated)

// ############################################################ Referenced Classes ############################################################

	class HeadgearItem;
	class ItemCore;
	class NVGoggles;
	class Uniform_Base;
	class UniformItem;
	class H_HelmetO_ViperSP_hex_F;
	class V_PlateCarrier1_rgr;

	class 3AS_Katarn_Helmet_Base;
	class 3AS_Katarn_Vest_Demo_Base;
	class 3AS_Katarn_Vest_Tech_Base;
	class ls_blueforHelmet_base;

	class JLTS_CloneNVG;
	class JLTS_CloneNVG_spec;
	class JLTS_CloneNVGRange;
	class JLTS_CloneNVGCC;

	REF_INFO(JLTS_CloneVestHolster,V_PlateCarrier1_rgr);
	REF_INFO(JLTS_CloneVestOfficer,V_PlateCarrier1_rgr);

	// References inherited class with ItemInfo -- always inherits from A3's Viper SP Helmet
	#define REF_INFO_VIPER(className) REF_INFO(className,H_HelmetO_ViperSP_hex_F)
	REF_INFO_VIPER(3AS_P1_Base);
	REF_INFO_VIPER(3AS_P2_Pilot_Helmet);
	REF_INFO_VIPER(JLTS_CloneHelmetP2);
	REF_INFO_VIPER(JLTS_CloneHelmetAB);

	// References inherited class with ItemInfo -- always inherits from JLTS' P2 Clone Helmet
	#define REF_INFO_P2(className) REF_INFO(className,JLTS_CloneHelmetP2)
	REF_INFO_P2(LSEA_Helmet_Pilot_P1_Base);
	REF_INFO_P2(SEA_Helmet_ARF_Base);
	REF_INFO_P2(SEA_Helmet_Engineer_Base);
	REF_INFO_P2(SEA_Helmet_SpecOps_SR_Base);
	REF_INFO_P2(JLTS_CloneHelmetARC);

	// References inherited class with ItemInfo -- always inherits from JLTS' Clone Officer Vest
	#define REF_INFO_VEST(className) REF_INFO(className,JLTS_CloneVestOfficer)
	REF_INFO_VEST(JLTS_CloneVestAirborne);
	REF_INFO_VEST(JLTS_CloneVestARC);
	REF_INFO_VEST(JLTS_CloneVestARCCadet);
	REF_INFO_VEST(JLTS_CloneVestCommander);
	REF_INFO_VEST(JLTS_CloneVestKama);
	REF_INFO_VEST(JLTS_CloneVestLieutenant);
	REF_INFO_VEST(JLTS_CloneVestRecon);
	REF_INFO_VEST(JLTS_CloneVestReconNCO);
	REF_INFO_VEST(JLTS_CloneVestReconOfficer);
	REF_INFO_VEST(JLTS_CloneVestSuspender);

	REF_INFO(3AS_ColdAssault_Helmet_Base,ItemCore);
	REF_INFO(3AS_H_Katarn_Helmet,3AS_Katarn_Helmet_Base);
	REF_INFO(JLTS_CloneHelmetARC_illum,JLTS_CloneHelmetARC);

	#define SET_ARMOR_BASE SET_ARMOR(13.5,0.8,1,0,0,0)
	#define DEF_ARMOR_BASE DEF_ARMOR(13.5,0.8,1,0,0,0)
	
// ############################################################ P2 Trooper Helmets ############################################################

	SUBCLASS(H_P2_Trooper,JLTS_CloneHelmetP2)
	{
		displayName = TAG_NAME(Trooper Helmet);
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\p2\h_p2_trooper_co.paa) };
		DEF_ARMOR_BASE;
	};

	ADD_CT_HELMET(SCT,SCT Helmet);
	ADD_CT_HELMET(VCT,VCT Helmet);
	ADD_CT_HELMET(CSP,CSP Helmet);
	ADD_CT_HELMET(CLP,CLP Helmet);
	ADD_CT_HELMET(CP,CP Helmet);
	ADD_CT_HELMET(CS,CS Helmet);
	ADD_CT_HELMET(CSS,CSS Helmet);
	ADD_CT_HELMET(CFS,CFS Helmet);
	ADD_CT_HELMET(CSM,CSM Helmet);

	ADD_CT_HELMET(Jet,Jet Helmet);
	ADD_CT_HELMET(EOD,EOD Helmet);
	ADD_CT_HELMET(EOD_CSP,EOD Helmet [CSP]);
	ADD_CT_HELMET(EOD_NCO,EOD Helmet [NCO]);

	ADD_CT_HELMET(Canada,Canada's Helmet);
    ADD_CT_HELMET(Catcher,Catcher's Helmet);
    ADD_CT_HELMET(FiveO,FiveO's Helmet);
    ADD_CT_HELMET(Fox,Fox's Helmet);
    ADD_CT_HELMET(Hotshot,Hotshot's Helmet);
    ADD_CT_HELMET(Jager,Jager's Helmet);
    ADD_CT_HELMET(Kitsune,Kitsune's Helmet);
    ADD_CT_HELMET(Luci,Luci's Helmet);
    ADD_CT_HELMET(Neca,Neca's Helmet);
    ADD_CT_HELMET(Rage,Rage's Helmet);
    ADD_CT_HELMET(Rex,Rex's Helmet);
    ADD_CT_HELMET(Riven,Riven's Helmet);
    ADD_CT_HELMET(Sage,Sage's Helmet);
    ADD_CT_HELMET(Space,Space's Helmet);
    ADD_CT_HELMET(Sparky,Sparky's Helmet);
    ADD_CT_HELMET(Sparrow,Sparrow's Helmet);
    ADD_CT_HELMET(Speed,Speed's Helmet);
    ADD_CT_HELMET(Valyrian,Valyrian's Helmet);
    ADD_CT_HELMET(Wicked,Wicked's Helmet);

// ############################################################ ARC Helmets ############################################################

	SUBCLASS(H_ARC_Trooper,JLTS_CloneHelmetARC_illum)
	{
		displayName = TAG_NAME(ARC Helmet);
		scope = 2;
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\arc\h_arc_trooper_co.paa),QPATHTOF(data\helmets\arc\h_arc_trooper_co.paa) };
		DEF_ARMOR_BASE;
	};

	ADD_ARC_HELMET(Cookie,Cookie's ARC Helmet);
	ADD_ARC_HELMET(Devil,DevilDolphin's ARC Helmet);
	ADD_ARC_HELMET(Jinx,Jinx's ARC Helmet);
	ADD_ARC_HELMET(Knight,Knight's ARC Helmet);

// ############################################################ ARF Helmets ############################################################

	SUBCLASS(H_ARF_Trooper,SEA_Helmet_ARF_Base)
	{
		displayName = TAG_NAME(ARF Helmet);
		subItems[] = {};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\arf\h_arf_trooper_co.paa),
			QPATHTOF(data\helmets\arf\h_arf_plates_trooper_co.paa),
			QPATHTOF(data\helmets\arf\h_arf_visor_trooper_co.paa)
		};
		DEF_ARMOR_BASE;
	};

	ADD_ARF_HELMET(Spartacus,Spartacus' Helmet);

// ############################################################ Engineer Helmets ############################################################

	SUBCLASS(H_Engineer_Trooper,SEA_Helmet_Engineer_Base)
	{
		displayName = TAG_NAME(Engineer Helmet);
		subItems[] = {};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\engi\h_engi_co.paa),
			QPATHTOF(data\helmets\engi\h_engi_co.paa)
		};
		DEF_ARMOR_BASE;
	};

	ADD_ENGI_HELMET(CSP,Engineer Helmet [CSP]);
	ADD_ENGI_HELMET(NCO,Engineer Helmet [NCO]);

// ############################################################ SpecOps Helmets ############################################################

	SUBCLASS(H_SpecOp_Trooper,SEA_Helmet_SpecOps_SR_Base)
	{
		displayName = TAG_NAME(Spec-Ops Helmet);
		subItems[] = {};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\specops\h_specop_trooper_co.paa),
			"\JLTS_AE\Data\BaseTextures\SpecOps\Antennas\SR_Antenna_co.paa",
			QPATHTOF(data\helmets\specops\h_specop_trooper_co.paa)
		};
		DEF_ARMOR_BASE;
	};

	ADD_SPECOP_HELMET(Geonosis,Spec-Ops Helmet [Geonosis]);
	ADD_SPECOP_HELMET(Geonosis_NCO,Spec-Ops Helmet [Geonosis NCO]);
	ADD_SPECOP_HELMET(CSP,Spec-Ops Helmet [CSP]);
	ADD_SPECOP_HELMET(NCO,Spec-Ops Helmet [NCO]);

// ############################################################ Insulated Helmets ############################################################

	SUBCLASS(H_Insulated_Trooper,3AS_ColdAssault_Helmet_Base)
	{
		displayName = TAG_NAME(Insulated Helmet);
		scope = 2;
		subItems[] = {};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\insulated\h_insulated_trooper_co.paa),
			QPATHTOF(data\helmets\insulated\h_insulated_trooper_co.paa),
			QPATHTOF(data\helmets\insulated\h_insulated_trooper_co.paa)
		};
		DEF_ARMOR_BASE;
	};

	ADD_INSULATED_HELMET(Geonosis,Insulated Helmet [Geonosis]);

// ############################################################ P1 Trooper Helmets ############################################################

	SUBCLASS(H_P1_Trooper,3AS_P1_Base)
	{
		displayName = TAG_NAME(Trooper Helmet (P1));
		subItems[] = {};
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\p1\h_p1_trooper_co.paa) };
		DEF_ARMOR_BASE;
	};

	ADD_P1_CT_HELMET(SCT,SCT Helmet);
	ADD_P1_CT_HELMET(VCT,VCT Helmet);
	ADD_P1_CT_HELMET(CSP,CSP Helmet);
	ADD_P1_CT_HELMET(CS,CS Helmet);
	ADD_P1_CT_HELMET(CSS,CSS Helmet);
	ADD_P1_CT_HELMET(CSM,CSM Helmet);

	ADD_P1_CT_HELMET(Jinx,Jinx's Helmet);

// ############################################################ P1 Pilot Helmets ############################################################

	SUBCLASS(H_P1_Pilot_CX,LSEA_Helmet_Pilot_P1_Base)
	{
		displayName = TAG_NAME(Pilot Helmet);
		subItems[] = {};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\p1\pilot\h_p1_pilot_cx_co.paa),
			QPATHTOF(data\helmets\p1\pilot\h_p1_pilot_tubes_co.paa),
			QPATHTOF(data\helmets\p1\pilot\h_p1_pilot_cx_co.paa)
		};
		DEF_ARMOR_BASE;
	};

	ADD_P1_PILOT_HELMET(CXG1,CXG1 Helmet);
	ADD_P1_PILOT_HELMET(CXG2,CXG2 Helmet);

// ############################################################ P2 Pilot Helmets ############################################################

	SUBCLASS(H_P2_Pilot_CX,3AS_P2_Pilot_Helmet)
	{
		displayName = TAG_NAME(Pilot Helmet);
		subItems[] = {};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\p2\pilot\h_p2_pilot_cx_co.paa),
			QPATHTOF(data\helmets\p2\pilot\h_p2_pilot_cx_co.paa),
			"",
			QPATHTOF(data\helmets\p2\pilot\h_p2_pilot_tubes_co.paa),
			QPATHTOF(data\helmets\p2\pilot\h_p2_pilot_cx_co.paa),
			""
		};
		DEF_ARMOR_BASE;
	};

	ADD_P2_PILOT_HELMET(Carrot,Carrot's Helmet);
	ADD_P2_PILOT_HELMET(Texan,Texan's Helmet);

// ############################################################ Night Vision ############################################################

	SUBCLASS(NV_Internal,JLTS_CloneNVG)
	{ 
		displayName = TAG_NAME(Internal NV);
		hiddenSelectionsTextures[] = { "" };
		modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
	};

	ADD_NVG(Range_Brown,Rangefinder (Brown),JLTS_CloneNVGRange);
	ADD_NVG(Range_Gray,Rangefinder (Gray),JLTS_CloneNVGRange);
	ADD_NVG(Range_Jinx,Rangefinder (Jinx),JLTS_CloneNVGRange);
	ADD_NVG(Range_Yellow,Rangefinder (Yellow),JLTS_CloneNVGRange);
	
	ADD_NVG_MACRO(Brown,Visor (Brown),JLTS_CloneNVG);
	ADD_NVG_MACRO(Gray,Visor (Gray),JLTS_CloneNVG);
	ADD_NVG_MACRO(White,Visor (White),JLTS_CloneNVG);
	ADD_NVG_MACRO(Yellow,Visor (Yellow),JLTS_CloneNVG);

	ADD_NVG(Visor_Brown,Visor (Brown),JLTS_CloneNVGCC);
	ADD_NVG(Visor_Gray,Visor (Gray),JLTS_CloneNVGCC);
	ADD_NVG(Visor_Valyrian,Visor (Valyrian),JLTS_CloneNVGCC);
	ADD_NVG(Visor_Yellow,Visor (Yellow),JLTS_CloneNVGCC);

// ############################################################ Basic Vests ############################################################

	SUBCLASS(V_Invisible,JLTS_CloneVestHolster)
	{
		displayName = TAG_NAME(Invisible Vest);
		hiddenSelectionsTextures[] = { "", "" };
		DEF_ARMOR(0.8,0.5,0,1,0.15,0.25);
	};

	SUBCLASS(V_Suspenders,JLTS_CloneVestSuspender)
	{
		displayName = TAG_NAME(Suspenders);
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\basic\trooper\v_suspenders_co.paa) };
		DEF_ARMOR(0.8,0.5,0,1,0.15,0.25);
	};

	SUBCLASS(V_Trooper,TAG##_V_Invisible)
	{
		displayName = TAG_NAME(Trooper Vest);
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\basic\trooper\v_trooper_co.paa), "" };
		DEF_ARMOR(0.8,0.5,0,1,0.15,0.25);
	};

	SUBCLASS(V_Medic,JLTS_CloneVestAirborne)
	{
		displayName = TAG_NAME(Medic Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\basic\medic\v_medic_low_co.paa),
			QPATHTOF(data\vests\basic\medic\v_medic_up_co.paa)
		};
		DEF_ARMOR(0.8,0.5,0,1,0.15,0.25);
	};

	SUBCLASS(V_AT,JLTS_CloneVestAirborne)
	{
		displayName = TAG_NAME(AT Vest);
		hiddenSelectionsTextures[]=
		{ 
			QPATHTOF(data\vests\basic\at\v_at_low_co.paa),
			QPATHTOF(data\vests\basic\at\v_at_up_co.paa)
		};
		DEF_ARMOR(0.8,0.5,0,1,0.15,0.25);
	};

	SUBCLASS(V_RTO,JLTS_CloneVestAirborne)
	{
		displayName = TAG_NAME(RTO Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\basic\rto\v_rto_low_co.paa),
			QPATHTOF(data\vests\basic\rto\v_rto_up_co.paa)
		};
		DEF_ARMOR(0.8,0.5,0,1,0.15,0.25);
	};

	SUBCLASS(V_Support,JLTS_CloneVestAirborne)
	{
		displayName = TAG_NAME(Support Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\basic\support\v_support_low_co.paa),
			QPATHTOF(data\vests\basic\support\v_support_up_co.paa)
		};
		DEF_ARMOR(1.4,0.5,0,1,0.25,0.45);
	};

	SUBCLASS(V_EOD,JLTS_CloneVestAirborne)
	{
		displayName = TAG_NAME(EOD Vest);
		hiddenSelectionsTextures[] = { "", QPATHTOF(data\vests\basic\eod\v_eod_co.paa) };
		DEF_ARMOR(1.4,0.5,0,1,0.25,0.45);
	};

	SUBCLASS(V_Marksman,JLTS_CloneVestAirborne)
	{
		displayName = TAG_NAME(Marksman Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\basic\marksman\v_marksman_low_co.paa),
			QPATHTOF(data\vests\basic\marksman\v_marksman_up_co.paa)
		};
	};

	SUBCLASS(V_Geonosis,JLTS_CloneVestAirborne)
	{
		displayName = TAG_NAME(Geonosis Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\basic\trooper\v_geonosis_co.paa),
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"
		};
	};

	SUBCLASS(V_Jet,JLTS_CloneVestAirborne)
	{
		displayName = TAG_NAME(Jet Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\basic\trooper\v_jet_co.paa),
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"
		};
	};

// ############################################################ ARC Vests ############################################################

	SUBCLASS(V_ARC_Trooper,JLTS_CloneVestARC)
	{
		displayName = TAG_NAME(ARC Vest);
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\arc\v_arc_trooper_co.paa) };
		DEF_ARMOR(1.4,0.5,0,1,0.25,0.45);
	};

	SUBCLASS(V_ARC_Cookie,TAG##_V_ARC_Trooper)
	{
		displayName = TAG_NAME(ARC Vest (Cookie));
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\arc\v_arc_cookie_co.paa) };
	};

	SUBCLASS(V_ARC_Jinx,TAG##_V_ARC_Trooper)
	{
		displayName = TAG_NAME(ARC Vest (Jinx));
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\arc\v_arc_jinx_co.paa) };
	};

	SUBCLASS(V_ARC_Medic,TAG##_V_ARC_Trooper)
	{
		displayName = TAG_NAME(ARC Vest (Medic));
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\arc\v_arc_medic_co.paa) };
	};

	SUBCLASS(V_ARC_Valyrian,TAG##_V_ARC_Trooper)
	{
		displayName = TAG_NAME(ARC Vest (Valyrian));
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\arc\v_arc_valyrian_co.paa) };
	};

	SUBCLASS(V_ARC_Veteran,TAG##_V_ARC_Trooper)
	{
		displayName = TAG_NAME(ARC Vest (Veteran));
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\arc\v_arc_veteran_co.paa) };
	};

	SUBCLASS(V_ARC_Cadet,JLTS_CloneVestARCCadet)
	{
		displayName = TAG_NAME(ARC Vest (Cadet));
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\arc\v_arc_cadet_co.paa) };
	};

// ############################################################ Leadership Vests ############################################################

	SUBCLASS(V_CP,JLTS_CloneVestAirborne)
	{
		displayName = TAG_NAME(Corporal Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\officer\v_kama_cp_co.paa),
			QPATHTOF(data\vests\officer\v_cp_up_co.paa)
		};
		DEF_ARMOR(1.4,0.5,0,1,0.25,0.45);
	};

	SUBCLASS(V_Neca,TAG##_V_CP)
	{
		displayName = TAG_NAME(Neca's Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\officer\v_kama_neca_co.paa),
			QPATHTOF(data\vests\officer\v_cp_up_co.paa)
		};
	};

	SUBCLASS(V_CS,JLTS_CloneVestAirborne)
	{
		displayName = TAG_NAME(Sergeant Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\officer\v_kama_cs_co.paa),
			QPATHTOF(data\vests\officer\v_cs_up_co.paa)
			
		};
		DEF_ARMOR(1.4,0.5,0,1,0.25,0.45);
	};

	SUBCLASS(V_Spartacus,TAG##_V_CS)
	{
		displayName = TAG_NAME(Spartacus' Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\officer\v_kama_spartacus_co.paa),
			QPATHTOF(data\vests\officer\v_cs_up_co.paa)
			
		};
	};

	SUBCLASS(V_Officer,JLTS_CloneVestOfficer)
	{
		displayName = TAG_NAME(Officer Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\officer\v_officer_co.paa),
			QPATHTOF(data\vests\officer\v_officer_co.paa)
		};
		DEF_ARMOR(1.4,0.5,0,1,0.25,0.45);
	};

	SUBCLASS(V_Valyrian,TAG##_V_Officer)
	{
		displayName = TAG_NAME(Valyrian's Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\officer\v_valyrian_co.paa),
			QPATHTOF(data\vests\officer\v_valyrian_co.paa)
		};
	};

// ############################################################ Uniforms ############################################################

	SUBCLASS(U_B_Trooper_Base,Uniform_Base)
	{
		author = "MrClock, Valyrian, & Anorexican";
		displayName = TAG_NAME(TrooperUniformBase);
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = CLASS(B_Trooper_Base);
			uniformType = "Neopren";
			containerClass = "Supply150";
			mass = 40;
		};
	};

	SUBCLASS(U_B_Insulated_Base,Uniform_Base)
	{
		author = "3rd Army Studios, Valyrian, & Anorexican";
		displayName = TAG_NAME(InsulatedUniformBase);
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = CLASS(B_Insulated_Base);
			uniformType = "Neopren";
			containerClass = "Supply200";
			mass = 40;
		};
	};

	// Trooper Uniforms
	ADD_TROOPER_UNIFORM(CR,Trooper Armor (Cadet),150);
	ADD_TROOPER_UNIFORM(CT,Trooper Armor (CT),150);
	ADD_TROOPER_UNIFORM(SCT,Trooper Armor (SCT),150);
	ADD_TROOPER_UNIFORM(VCT,Trooper Armor (VCT),200);
	ADD_TROOPER_UNIFORM(CSP,Trooper Armor (CSP),200);
	ADD_TROOPER_UNIFORM(CLP,Trooper Armor (CLP),200);
	ADD_TROOPER_UNIFORM(CP,Trooper Armor (CP),200);
	ADD_TROOPER_UNIFORM(CS,Trooper Armor (CS),200);
	ADD_TROOPER_UNIFORM(CSS,Trooper Armor (CSS),200);
	ADD_TROOPER_UNIFORM(CSM,Trooper Armor (CSM),200);

	// Custom Trooper Uniforms
	ADD_TROOPER_UNIFORM(Cookie,Cookie's Armor,200);
	ADD_TROOPER_UNIFORM(Jinx,Jinx's Armor,200);
	ADD_TROOPER_UNIFORM(Knight,Knight's Armor,200);
	ADD_TROOPER_UNIFORM(Neca,Neca's Armor,200);
	ADD_TROOPER_UNIFORM(Speed,Speed' Armor,200);
	ADD_TROOPER_UNIFORM(Valyrian,Valyrian's Armor,200);

	// Special Trooper Uniforms
	ADD_TROOPER_UNIFORM(Jet_CT,Jet Trooper Armor,200);
	ADD_TROOPER_UNIFORM(Jet_NCO,Jet Trooper Armor (NCO),200);

	// Insulated Uniforms
	ADD_INSULATED_UNIFORM(CT,Insulated Armor,200);
	ADD_INSULATED_UNIFORM(Geonosis_CT,Insulated Armor (Geonosis),200);
};