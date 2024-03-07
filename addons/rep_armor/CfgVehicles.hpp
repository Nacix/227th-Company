class CfgVehicles
{
	// ############################################################ Referenced Classes ############################################################

	class B_Soldier_Base_F;
	class B_Soldier_F: B_Soldier_Base_F
	{
		class HitPoints;
	};
	class B_Kitbag_rgr;

	class 3AS_Katarn_Backpack_Base;

	class Headgear_Base_F;

	class JLTS_Clone_backpack;
	class JLTS_Clone_backpack_s;
	class JLTS_Clone_belt_bag;
	class JLTS_Clone_backpack_RTO;
	class JLTS_Clone_backpack_s_RTO;
	class JLTS_Clone_RTO_pack;
	class JLTS_Clone_ARC_backpack;
	class JLTS_Clone_LR_attachment;
	class JLTS_Clone_jumppack_Chicken;
	class JLTS_Clone_jumppack_JT12;
	class JLTS_Clone_Jumppack_mc;

	#define ADD_HELMET_OBJECT(namePretty,helmetClass,subcat) \
        class TAG##_Headgear_##helmetClass: Headgear_Base_F \
        { \
            author = "Anorexican"; \
            scope = 2; \
            scopeCurator = 2; \
            \
            displayName = TAG_NAME(namePretty); \
            editorCategory = CLASS(EdCat_Helmets); \
            editorSubcategory = CLASS(subcat); \
            vehicleClass = QUOTE(ItemsHeadgear); \
            \
            class TransportItems \
            { \
                NEW_CLASS(helmetClass) \
                { \
                    name = CLASS(helmetClass); \
                    count = 1; \
                }; \
            }; \
        }
	
	#define ADD_HELMET_OBJECT_ARC(namePretty,helmetClass) ADD_HELMET_OBJECT(namePretty,H_ARC_##helmetClass,EdSubcat_Helmets_ARC)
	#define ADD_HELMET_OBJECT_ARF(namePretty,helmetClass) ADD_HELMET_OBJECT(namePretty,H_ARF_##helmetClass,EdSubcat_Helmets_ARF)
	#define ADD_HELMET_OBJECT_ENGINEER(namePretty,helmetClass) ADD_HELMET_OBJECT(namePretty,H_Engineer_##helmetClass,EdSubcat_Helmets_Engineer)
	#define ADD_HELMET_OBJECT_INSULATED(namePretty,helmetClass) ADD_HELMET_OBJECT(namePretty,H_Insulated_##helmetClass,EdSubcat_Helmets_Insulated)
	#define ADD_HELMET_OBJECT_P2(namePretty,helmetClass) ADD_HELMET_OBJECT(namePretty,H_P2_##helmetClass,EdSubcat_Helmets_P2)
	#define ADD_HELMET_OBJECT_P2_CUSTOM(namePretty,helmetClass) ADD_HELMET_OBJECT(namePretty,H_P2_##helmetClass,EdSubcat_Helmets_P2_Custom)
	#define ADD_HELMET_OBJECT_P1(namePretty,helmetClass) ADD_HELMET_OBJECT(namePretty,H_P1_##helmetClass,EdSubcat_Helmets_P1)
	#define ADD_HELMET_OBJECT_PILOT_P1(namePretty,helmetClass) ADD_HELMET_OBJECT(namePretty,H_P1_Pilot_##helmetClass,EdSubcat_Helmets_Pilot)
	#define ADD_HELMET_OBJECT_PILOT_P2(namePretty,helmetClass) ADD_HELMET_OBJECT(namePretty,H_P2_Pilot_##helmetClass,EdSubcat_Helmets_Pilot)
	#define ADD_HELMET_OBJECT_SPECOP(namePretty,helmetClass) ADD_HELMET_OBJECT(namePretty,H_SpecOp_##helmetClass,EdSubcat_Helmets_SpecOp)
	#define ADD_HELMET_OBJECT_KATARN(namePretty,helmetClass) ADD_HELMET_OBJECT(namePretty,H_Katarn_##helmetClass,EdSubcat_Helmets_Katarn

	// ############################################################ Backpacks ############################################################

	ADD_BACKPACK(ARC_CT,ARC Backpack,JLTS_Clone_ARC_backpack,350);
	ADD_BACKPACK(ARC_Medic,ARC Medic Backpack,JLTS_Clone_ARC_backpack,350);

	SUBCLASS(B_Pack_Belt_CT,JLTS_Clone_belt_bag)
	{
		displayName = TAG_NAME(Belt Bag);
		maximumLoad = QUOTE(275);
	};

	SUBCLASS(B_Pack_RTO_module,JLTS_Clone_LR_attachment)
	{
		displayName = TAG_NAME(RTO Attachment (Module));
		maximumLoad = QUOTE(225);
	};
	
	ADD_BACKPACK(RTO,RTO Backpack,JLTS_Clone_backpack_RTO,350);

	SUBCLASS(B_Pack_RTO_straps,JLTS_Clone_backpack_s_RTO)
	{
		displayName = TAG_NAME(RTO Backpack (Straps));
		maximumLoad = QUOTE(325);
		hiddenSelectionsTextures[] = { QPATHTOF(data\backpacks\b_RTO_co.paa) };
	};

	ADD_BACKPACK(RTO_Mini,RTO Pack (Mini),JLTS_Clone_RTO_pack,275);

	ADD_BACKPACK_STRAPS(AT,AT Backpack,JLTS_Clone_backpack,425);
	ADD_BACKPACK_STRAPS(Medic,Medic Backpack,JLTS_Clone_backpack,350);
	ADD_BACKPACK_STRAPS(EOD,EOD Backpack,JLTS_Clone_backpack,450);
	ADD_BACKPACK_STRAPS(CT,Trooper Backpack,JLTS_Clone_backpack,275);
	ADD_BACKPACK_STRAPS(Jet,Jet Trooper Backpack,JLTS_Clone_backpack,300);
	ADD_BACKPACK_STRAPS(Snow_CT,Snow Trooper Backpack,JLTS_Clone_backpack,325);

	SUBCLASS(B_Pack_CT_invisible,TAG_CLASS(B_Pack_CT))
	{
		displayname = TAG_NAME(Trooper Backpack (Invisible));
		maximumLoad = QUOTE(275);
		hiddenSelectionsTextures[] = { "" };
	};

	ADD_JETPACK(Chicken_CT,Jump Pack (Chicken),JLTS_Clone_jumppack_Chicken,275);

	ADD_JETPACK(JT12_CT,Jetpack (JT-12),JLTS_Clone_jumppack_JT12,275);
	ADD_JETPACK(JT12_Medic,Jetpack (JT-12) [Medic],JLTS_Clone_jumppack_JT12,350);
	ADD_JETPACK(JT12_Mercy,Jetpack (JT-12) [Mercy],JLTS_Clone_jumppack_JT12,350);

	ADD_JETPACK(MC_CT,Jump Pack (MC),JLTS_Clone_Jumppack_mc,275);
	ADD_JETPACK(MC_Medic,Jump Pack (MC) [Medic],JLTS_Clone_Jumppack_mc,350);
	ADD_JETPACK(MC_Pilot,Jump Pack (MC) [Pilot],JLTS_Clone_Jumppack_mc,250);
	ADD_JETPACK(MC_Krayt,Jump Pack (MC) [Krayt],JLTS_Clone_Jumppack_mc,275);
	ADD_JETPACK(MC_Valyrian,Jump Pack (MC) [Valyrian],JLTS_Clone_Jumppack_mc,275);

	// ############################################################ Uniform Vehicles ############################################################

	SUBCLASS(B_Trooper_Base,B_Soldier_F)
	{
		author = "Anorexican";
		scope = 1;
		scopeCurator = 0;
		_generalMacro = CLASS(B_Trooper_Base);
		displayName = TAG_NAME(CloneTrooperBase);
		side = 1;
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
		SET_ARMOR_UNIFORM(9,0.65,12,0.01,0.25,0.4);
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

	SUBCLASS(B_Katarn_Base,TAG##_B_Trooper_Base)
	{
		_generalMacro = CLASS(B_Katarn_Base);
		displayName = TAG_NAME(CloneKatarnBase);
		uniformClass = CLASS(U_B_Katarn_Base);
		model = "\3AS\3AS_Characters\Commando\3AS_Katarn_Armor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\uniforms\katarn\u_katarn_ct_co.paa),
			"\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa"
		};
	};

	ADD_V_UNIFORM_TROOPER(CR,CRBase);
	ADD_V_UNIFORM_TROOPER(CT,CTBase);
	ADD_V_UNIFORM_TROOPER(SCT,SCTBase);
	ADD_V_UNIFORM_TROOPER(VCT,VCTBase);
	ADD_V_UNIFORM_TROOPER(CSP,CSPBase);
	ADD_V_UNIFORM_TROOPER(CLC,CLCBase);
	ADD_V_UNIFORM_TROOPER(CP,CPBase);
	ADD_V_UNIFORM_TROOPER(CS,CSBase);
	ADD_V_UNIFORM_TROOPER(CSS,CSSBase);
	ADD_V_UNIFORM_TROOPER(CSM,CSMBase);

	ADD_V_UNIFORM_TROOPER_CUSTOM(Cookie,CookieBase);
	ADD_V_UNIFORM_TROOPER_CUSTOM(Jinx,JinxBase);
	ADD_V_UNIFORM_TROOPER_CUSTOM(Knight,KnightBase);
	ADD_V_UNIFORM_TROOPER_CUSTOM(Luci,LuciBase);
	ADD_V_UNIFORM_TROOPER_CUSTOM(Speed,SpeedBase);
	ADD_V_UNIFORM_TROOPER_CUSTOM(Valyrian,ValyrianBase);

	ADD_V_UNIFORM_TROOPER_JET(CT,JetBase);
	ADD_V_UNIFORM_TROOPER_JET(NCO,JetNCOBase);

	ADD_V_UNIFORM_INSULATED(CT,InsulatedBase);
	ADD_V_UNIFORM_INSULATED(Geonosis_CT,InsulatedGeonosisBase);

	ADD_V_UNIFORM_KATARN(CT,KatarnBase);

	// ############################################################ Helmet Objects ############################################################

	ADD_HELMET_OBJECT_P2(P2 Helmet (CT),CT);
	ADD_HELMET_OBJECT_P2(P2 Helmet (SCT),SCT);
	ADD_HELMET_OBJECT_P2(P2 Helmet (VCT),VCT);
	ADD_HELMET_OBJECT_P2(P2 Helmet (CSP),CSP);
	ADD_HELMET_OBJECT_P2(P2 Helmet (CLC),CLC);
	ADD_HELMET_OBJECT_P2(P2 Helmet (CP),CP);
	ADD_HELMET_OBJECT_P2(P2 Helmet (CS),CS);
	ADD_HELMET_OBJECT_P2(P2 Helmet (CSS),CSS);
	ADD_HELMET_OBJECT_P2(P2 Helmet (CFS),CFS);
	ADD_HELMET_OBJECT_P2(P2 Helmet (CSM),CSM);

	ADD_HELMET_OBJECT_P2(P2 Jet Helmet,Jet);
	
	ADD_HELMET_OBJECT_P2_CUSTOM(P2 Custom Helmet (Canada),Canada);
	ADD_HELMET_OBJECT_P2_CUSTOM(P2 Custom Helmet (Catcher),Catcher);
	ADD_HELMET_OBJECT_P2_CUSTOM(P2 Custom Helmet (Cookie),Cookie);
	ADD_HELMET_OBJECT_P2_CUSTOM(P2 Custom Helmet (FiveO),Fiveo);
	ADD_HELMET_OBJECT_P2_CUSTOM(P2 Custom Helmet (Kitsune),Kitsune);
	ADD_HELMET_OBJECT_P2_CUSTOM(P2 Custom Helmet (Luci),Luci);
	ADD_HELMET_OBJECT_P2_CUSTOM(P2 Custom Helmet (Rex),Rex);
	ADD_HELMET_OBJECT_P2_CUSTOM(P2 Custom Helmet (Riven),Riven);
	ADD_HELMET_OBJECT_P2_CUSTOM(P2 Custom Helmet (Sage),Sage);
	ADD_HELMET_OBJECT_P2_CUSTOM(P2 Custom Helmet (Sparky),Sparky);
	ADD_HELMET_OBJECT_P2_CUSTOM(P2 Custom Helmet (Sparrow),Sparrow);
	ADD_HELMET_OBJECT_P2_CUSTOM(P2 Custom Helmet (Speed),Speed);
	ADD_HELMET_OBJECT_P2_CUSTOM(P2 Custom Helmet (Texan),Texan);
	ADD_HELMET_OBJECT_P2_CUSTOM(P2 Custom Helmet (Valyrian),Valyrian);
	ADD_HELMET_OBJECT_P2_CUSTOM(P2 Custom Helmet (Wicked),Wicked);

	ADD_HELMET_OBJECT_ARC(P2 ARC Helmet (CT),CT);
	ADD_HELMET_OBJECT_ARC(P2 ARC Helmet (Cookie),Cookie);
	ADD_HELMET_OBJECT_ARC(P2 ARC Helmet (DevilDolphin),Devil);
	ADD_HELMET_OBJECT_ARC(P2 ARC Helmet (Jinx),Jinx);
	ADD_HELMET_OBJECT_ARC(P2 ARC Helmet (Knight),Knight);

	ADD_HELMET_OBJECT_ARF(ARF Trooper Helmet (CT),CT);
	ADD_HELMET_OBJECT_ARF(ARF Trooper Helmet (Spartacus),Spartacus);

	ADD_HELMET_OBJECT_ENGINEER(Engineer Helmet (CT),CT);
	ADD_HELMET_OBJECT_ENGINEER(Engineer Helmet (CSP),CSP);
	ADD_HELMET_OBJECT_ENGINEER(Engineer Helmet (NCO),NCO);

	ADD_HELMET_OBJECT_SPECOP(Special Operations Helmet (CT),CT);
	ADD_HELMET_OBJECT_SPECOP(Special Operations Helmet (CSP),CSP);
	ADD_HELMET_OBJECT_SPECOP(Special Operations Helmet (NCO),NCO);
	ADD_HELMET_OBJECT_SPECOP(Special Operations Helmet (Geonosis),Geonosis);
	ADD_HELMET_OBJECT_SPECOP(Special Operations Helmet (Geonosis) [NCO],Geonosis_NCO);

	ADD_HELMET_OBJECT_INSULATED(Insulated Helmet (CT),CT);
	ADD_HELMET_OBJECT_INSULATED(Insulated Helmet (Geonosis),Geonosis);

	ADD_HELMET_OBJECT_KATARN(Katarn Helmet (CT),H_Katarn_CT);

	ADD_HELMET_OBJECT_P1(P1 Helmet (CT),CT);
	ADD_HELMET_OBJECT_P1(P1 Helmet (SCT),SCT);
	ADD_HELMET_OBJECT_P1(P1 Helmet (VCT),VCT);
	ADD_HELMET_OBJECT_P1(P1 Helmet (CLC),CLC);
	ADD_HELMET_OBJECT_P1(P1 Helmet (CP),CP);
	ADD_HELMET_OBJECT_P1(P1 Helmet (CSP),CSP);
	ADD_HELMET_OBJECT_P1(P1 Helmet (CS),CS);
	ADD_HELMET_OBJECT_P1(P1 Helmet (CSS),CSS);
	ADD_HELMET_OBJECT_P1(P1 Helmet (CFS),CFS);
	ADD_HELMET_OBJECT_P1(P1 Helmet (CSM),CSM);

	ADD_HELMET_OBJECT_PILOT_P1(P1 Pilot Helmet (CX),CX);
	ADD_HELMET_OBJECT_PILOT_P1(P1 Pilot Helmet (CXG1),CXG1);
	ADD_HELMET_OBJECT_PILOT_P1(P1 Pilot Helmet (CXG2),CXG2);

	ADD_HELMET_OBJECT_PILOT_P2(P2 Pilot Helmet (CX),CX);
	ADD_HELMET_OBJECT_PILOT_P2(P2 Pilot Helmet (Carrot),Carrot);
	ADD_HELMET_OBJECT_PILOT_P2(P2 Pilot Helmet (Texan),Texan);
};