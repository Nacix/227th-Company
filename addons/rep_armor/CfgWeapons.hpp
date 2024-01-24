class CfgWeapons
{
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

	#define DEF_ARMOR_BASE DEF_ARMOR(13.5,0.8,1,0,0,0)
	#define SET_ARMOR_BASE SET_ARMOR(13.5,0.8,1,0,0,0)
	
	// ############################################################ P2 Trooper Helmets ############################################################

	SUBCLASS(H_P2_CT,JLTS_CloneHelmetP2)
	{
		displayName = TAG_NAME(Trooper Helmet);
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\p2\h_p2_ct_co.paa) };
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
    ADD_CT_HELMET(Rex,Rex's Helmet);
    ADD_CT_HELMET(Riven,Riven's Helmet);
    ADD_CT_HELMET(Sage,Sage's Helmet);
    ADD_CT_HELMET(Sparky,Sparky's Helmet);
    ADD_CT_HELMET(Sparrow,Sparrow's Helmet);
    ADD_CT_HELMET(Speed,Speed's Helmet);
    ADD_CT_HELMET(Valyrian,Valyrian's Helmet);
    ADD_CT_HELMET(Wicked,Wicked's Helmet);

	// ############################################################ ARC Helmets ############################################################

	SUBCLASS(H_ARC_CT,JLTS_CloneHelmetARC_illum)
	{
		displayName = TAG_NAME(ARC Helmet);
		scope = 2;
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\arc\h_arc_ct_co.paa),QPATHTOF(data\helmets\arc\h_arc_ct_co.paa) };
		DEF_ARMOR_BASE;
	};

	ADD_ARC_HELMET(Cookie,Cookie's ARC Helmet);
	ADD_ARC_HELMET(Devil,DevilDolphin's ARC Helmet);
	ADD_ARC_HELMET(Jinx,Jinx's ARC Helmet);
	ADD_ARC_HELMET(Knight,Knight's ARC Helmet);

	// ############################################################ ARF Helmets ############################################################

	SUBCLASS(H_ARF_CT,SEA_Helmet_ARF_Base)
	{
		displayName = TAG_NAME(ARF Helmet);
		subItems[] = {};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\arf\h_arf_ct_co.paa),
			QPATHTOF(data\helmets\arf\h_arf_plates_ct_co.paa),
			QPATHTOF(data\helmets\arf\h_arf_visor_ct_co.paa)
		};
		DEF_ARMOR_BASE;
	};

	ADD_ARF_HELMET(Spartacus,Spartacus' Helmet);

	// ############################################################ Engineer Helmets ############################################################

	SUBCLASS(H_Engineer_CT,SEA_Helmet_Engineer_Base)
	{
		displayName = TAG_NAME(Engineer Helmet);
		subItems[] = {};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\engineer\h_engineer_ct_co.paa),
			QPATHTOF(data\helmets\engineer\h_engineer_ct_co.paa)
		};
		DEF_ARMOR_BASE;
	};

	ADD_ENGINEER_HELMET(CSP,Engineer Helmet [CSP]);
	ADD_ENGINEER_HELMET(NCO,Engineer Helmet [NCO]);

	// ############################################################ SpecOps Helmets ############################################################

	SUBCLASS(H_SpecOp_CT,SEA_Helmet_SpecOps_SR_Base)
	{
		displayName = TAG_NAME(Spec-Ops Helmet);
		subItems[] = {};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\specops\h_specop_ct_co.paa),
			"\JLTS_AE\Data\BaseTextures\SpecOps\Antennas\SR_Antenna_co.paa",
			QPATHTOF(data\helmets\specops\h_specop_ct_co.paa)
		};
		DEF_ARMOR_BASE;
	};

	ADD_SPECOP_HELMET(Geonosis,Spec-Ops Helmet [Geonosis]);
	ADD_SPECOP_HELMET(Geonosis_NCO,Spec-Ops Helmet [Geonosis NCO]);
	ADD_SPECOP_HELMET(CSP,Spec-Ops Helmet [CSP]);
	ADD_SPECOP_HELMET(NCO,Spec-Ops Helmet [NCO]);

	// ############################################################ Insulated Helmets ############################################################

	SUBCLASS(H_Insulated_CT,3AS_ColdAssault_Helmet_Base)
	{
		displayName = TAG_NAME(Insulated Helmet);
		scope = 2;
		subItems[] = {};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\helmets\insulated\h_insulated_ct_co.paa),
			QPATHTOF(data\helmets\insulated\h_insulated_ct_co.paa),
			QPATHTOF(data\helmets\insulated\h_insulated_ct_co.paa)
		};
		DEF_ARMOR_BASE;
	};

	ADD_INSULATED_HELMET(Geonosis,Insulated Helmet [Geonosis]);

	// ############################################################ P1 Trooper Helmets ############################################################

	SUBCLASS(H_P1_CT,3AS_P1_Base)
	{
		displayName = TAG_NAME(Trooper Helmet (P1));
		subItems[] = {};
		hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\p1\h_p1_ct_co.paa) };
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

	ADD_NVG_RANGE(Brown);
	ADD_NVG_RANGE(Gray);
	ADD_NVG_RANGE(Jinx);
	ADD_NVG_RANGE(Yellow);
	
	ADD_NVG_MACRO(Brown);
	ADD_NVG_MACRO(Gray);
	ADD_NVG_MACRO(White);
	ADD_NVG_MACRO(Yellow);

	ADD_NVG_VISOR(Brown);
	ADD_NVG_VISOR(Gray);
	ADD_NVG_VISOR(Valyrian);
	ADD_NVG_VISOR(Yellow);

	// ############################################################ Basic Vests ############################################################

	SUBCLASS(V_Invisible_CT,JLTS_CloneVestHolster)
	{
		displayName = TAG_NAME(Invisible Vest);
		hiddenSelectionsTextures[] = { "", "" };
		DEF_ARMOR(0.8,0.5,0,1,0.15,0.25);
	};

	SUBCLASS(V_Suspenders_CT,JLTS_CloneVestSuspender)
	{
		displayName = TAG_NAME(Suspenders);
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\basic\trooper\v_suspenders_ct_co.paa) };
		DEF_ARMOR(0.8,0.5,0,1,0.15,0.25);
	};

	SUBCLASS(V_AB_CT,TAG##_V_Invisible_CT)
	{
		displayName = TAG_NAME(Trooper Vest);
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\basic\trooper\v_ab_ct_co.paa), "" };
		DEF_ARMOR(0.8,0.5,0,1,0.15,0.25);
	};

	SUBCLASS(V_AB_Medic,JLTS_CloneVestAirborne)
	{
		displayName = TAG_NAME(Medic Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\basic\medic\v_ab_medic_low_co.paa),
			QPATHTOF(data\vests\basic\medic\v_ab_medic_up_co.paa)
		};
		DEF_ARMOR(0.8,0.5,0,1,0.15,0.25);
	};

	SUBCLASS(V_AB_AT,JLTS_CloneVestAirborne)
	{
		displayName = TAG_NAME(AT Vest);
		hiddenSelectionsTextures[]=
		{ 
			QPATHTOF(data\vests\basic\at\v_ab_at_low_co.paa),
			QPATHTOF(data\vests\basic\at\v_ab_at_up_co.paa)
		};
		DEF_ARMOR(0.8,0.5,0,1,0.15,0.25);
	};

	SUBCLASS(V_AB_RTO,JLTS_CloneVestAirborne)
	{
		displayName = TAG_NAME(RTO Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\basic\rto\v_ab_rto_low_co.paa),
			QPATHTOF(data\vests\basic\rto\v_ab_rto_up_co.paa)
		};
		DEF_ARMOR(0.8,0.5,0,1,0.15,0.25);
	};

	SUBCLASS(V_AB_Support,JLTS_CloneVestAirborne)
	{
		displayName = TAG_NAME(Support Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\basic\support\v_ab_support_low_co.paa),
			QPATHTOF(data\vests\basic\support\v_ab_support_up_co.paa)
		};
		DEF_ARMOR(1.4,0.5,0,1,0.25,0.45);
	};

	SUBCLASS(V_AB_EOD,JLTS_CloneVestAirborne)
	{
		displayName = TAG_NAME(EOD Vest);
		hiddenSelectionsTextures[] = { "", QPATHTOF(data\vests\basic\eod\v_ab_eod_co.paa) };
		DEF_ARMOR(1.4,0.5,0,1,0.25,0.45);
	};

	SUBCLASS(V_AB_Marksman,JLTS_CloneVestAirborne)
	{
		displayName = TAG_NAME(Marksman Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\basic\marksman\v_ab_marksman_low_co.paa),
			QPATHTOF(data\vests\basic\marksman\v_ab_marksman_up_co.paa)
		};
	};

	SUBCLASS(V_AB_Geonosis,JLTS_CloneVestAirborne)
	{
		displayName = TAG_NAME(Geonosis Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\basic\trooper\v_ab_geonosis_co.paa),
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"
		};
	};

	SUBCLASS(V_AB_Jet,JLTS_CloneVestAirborne)
	{
		displayName = TAG_NAME(Jet Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\basic\trooper\v_ab_jet_co.paa),
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"
		};
	};

	// ############################################################ ARC Vests ############################################################

	SUBCLASS(V_ARC_CT,JLTS_CloneVestARC)
	{
		displayName = TAG_NAME(ARC Vest);
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\arc\v_arc_ct_co.paa) };
		DEF_ARMOR(1.4,0.5,0,1,0.25,0.45);
	};

	SUBCLASS(V_ARC_Cookie,TAG##_V_ARC_CT)
	{
		displayName = TAG_NAME(ARC Vest (Cookie));
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\arc\v_arc_cookie_co.paa) };
	};

	SUBCLASS(V_ARC_Jinx,TAG##_V_ARC_CT)
	{
		displayName = TAG_NAME(ARC Vest (Jinx));
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\arc\v_arc_jinx_co.paa) };
	};

	SUBCLASS(V_ARC_Medic,TAG##_V_ARC_CT)
	{
		displayName = TAG_NAME(ARC Vest (Medic));
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\arc\v_arc_medic_co.paa) };
	};

	SUBCLASS(V_ARC_Valyrian,TAG##_V_ARC_CT)
	{
		displayName = TAG_NAME(ARC Vest (Valyrian));
		hiddenSelectionsTextures[] = { QPATHTOF(data\vests\arc\v_arc_valyrian_co.paa) };
	};

	SUBCLASS(V_ARC_Veteran,TAG##_V_ARC_CT)
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

	SUBCLASS(V_Kama_CP,JLTS_CloneVestAirborne)
	{
		displayName = TAG_NAME(Corporal Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\officer\v_kama_cp_co.paa),
			QPATHTOF(data\vests\officer\v_kama_cp_up_co.paa)
		};
		DEF_ARMOR(1.4,0.5,0,1,0.25,0.45);
	};

	SUBCLASS(V_Kama_Neca,TAG##_V_Kama_CP)
	{
		displayName = TAG_NAME(Neca's Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\officer\v_kama_neca_co.paa),
			QPATHTOF(data\vests\officer\v_kama_cp_up_co.paa)
		};
	};

	SUBCLASS(V_Kama_CS,TAG##_V_Kama_CP)
	{
		displayName = TAG_NAME(Sergeant Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\officer\v_kama_cs_co.paa),
			QPATHTOF(data\vests\officer\v_kama_cs_up_co.paa)
			
		};
		DEF_ARMOR(1.4,0.5,0,1,0.25,0.45);
	};

	SUBCLASS(V_Kama_Spartacus,TAG##_V_Kama_CP)
	{
		displayName = TAG_NAME(Spartacus' Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\officer\v_kama_spartacus_co.paa),
			QPATHTOF(data\vests\officer\v_kama_cs_up_co.paa)
			
		};
	};

	SUBCLASS(V_Kama_Officer,JLTS_CloneVestOfficer)
	{
		displayName = TAG_NAME(Officer Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\officer\v_kama_officer_co.paa),
			QPATHTOF(data\vests\officer\v_kama_officer_co.paa)
		};
		DEF_ARMOR(1.4,0.5,0,1,0.25,0.45);
	};

	SUBCLASS(V_Kama_Valyrian,TAG##_V_Kama_Officer)
	{
		displayName = TAG_NAME(Valyrian's Vest);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\vests\officer\v_kama_valyrian_co.paa),
			QPATHTOF(data\vests\officer\v_kama_valyrian_co.paa)
		};
	};

	// ############################################################ Uniform Items ############################################################

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
	ADD_UNIFORM_TROOPER(CR,Trooper Armor (Cadet),150);
	ADD_UNIFORM_TROOPER(CT,Trooper Armor (CT),150);
	ADD_UNIFORM_TROOPER(SCT,Trooper Armor (SCT),150);
	ADD_UNIFORM_TROOPER(VCT,Trooper Armor (VCT),200);
	ADD_UNIFORM_TROOPER(CSP,Trooper Armor (CSP),200);
	ADD_UNIFORM_TROOPER(CLP,Trooper Armor (CLP),200);
	ADD_UNIFORM_TROOPER(CP,Trooper Armor (CP),200);
	ADD_UNIFORM_TROOPER(CS,Trooper Armor (CS),200);
	ADD_UNIFORM_TROOPER(CSS,Trooper Armor (CSS),200);
	ADD_UNIFORM_TROOPER(CSM,Trooper Armor (CSM),200);

	// Custom Trooper Uniforms
	ADD_UNIFORM_TROOPER(Cookie,Cookie's Armor,200);
	ADD_UNIFORM_TROOPER(Jinx,Jinx's Armor,200);
	ADD_UNIFORM_TROOPER(Knight,Knight's Armor,200);
	ADD_UNIFORM_TROOPER(Neca,Neca's Armor,200);
	ADD_UNIFORM_TROOPER(Speed,Speed' Armor,200);
	ADD_UNIFORM_TROOPER(Valyrian,Valyrian's Armor,200);

	// Special Trooper Uniforms
	ADD_UNIFORM_TROOPER(Jet_CT,Jet Trooper Armor,200);
	ADD_UNIFORM_TROOPER(Jet_NCO,Jet Trooper Armor (NCO),200);

	// Insulated Uniforms
	ADD_UNIFORM_INSULATED(CT,Insulated Armor,200);
	ADD_UNIFORM_INSULATED(Geonosis_CT,Insulated Armor (Geonosis),200);
};