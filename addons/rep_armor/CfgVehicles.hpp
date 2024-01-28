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
	
	ADD_BACKPACK(RTO,RTO Backpack,JLTS_Clone_backpack_RTO,325);

	SUBCLASS(B_Pack_RTO_straps,JLTS_Clone_backpack_s_RTO)
	{
		displayName = TAG_NAME(RTO Backpack (Straps));
		maximumLoad = QUOTE(325);
		hiddenSelectionsTextures[] = { QPATHTOF(data\backpacks\b_RTO_co.paa) };
	};

	ADD_BACKPACK(RTO_Mini,RTO Pack (Mini),JLTS_Clone_RTO_pack,250);

	ADD_BACKPACK_STRAPS(AT,AT Backpack,JLTS_Clone_backpack,375);
	ADD_BACKPACK_STRAPS(Medic,Medic Backpack,JLTS_Clone_backpack,350);
	ADD_BACKPACK_STRAPS(EOD,EOD Backpack,JLTS_Clone_backpack,375);
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
		SET_ARMOR_UNIFORM(11.5,0.625,12,0.01,0.25,0.4)
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
};