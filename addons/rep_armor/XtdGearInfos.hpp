class XtdGearInfos
{
	class CfgWeapons
	{
		#define XTD_H_P2(className,typeName,skinName) \
			class TAG##_H_P2_##className## \
			{ \
				model = QUOTE(TAG##_H_P2_CT); \
				type = QUOTE(typeName); \
				skin = QUOTE(skinName); \
			}
		#define XTD_H_ARC(className,skinName) \
			class TAG##_H_ARC_##className## \
			{ \
				model = QUOTE(TAG##_H_P2_CT); \
				type = QUOTE(ARC); \
				skin = QUOTE(skinName); \
			}
		#define XTD_H_ARF(className,skinName) \
			class TAG##_H_ARF_##className## \
			{ \
				model = QUOTE(TAG##_H_ARF); \
				skin = QUOTE(skinName); \
			}
		#define XTD_H_P1(className,skinName) \
			class TAG##_H_P1_##className## \
			{ \
				model = QUOTE(TAG##_H_P1); \
				skin = QUOTE(skinName); \
			}
		#define XTD_H_P2_PILOT(className,skinName) \
			class TAG##_H_P2_Pilot_##className## \
			{ \
				model = QUOTE(TAG##_H_Pilot); \
				type = QUOTE(P2); \
				skin = QUOTE(skinName); \
			}
		#define XTD_H_P1_PILOT(className,skinName) \
			class TAG##_H_P1_Pilot_##className## \
			{ \
				model = QUOTE(TAG##_H_Pilot); \
				type = QUOTE(P1); \
				skin = QUOTE(skinName); \
			}
		#define XTD_H_INSULATED(className,skinName) \
			class TAG##_H_Insulated_##className## \
			{ \
				model = QUOTE(TAG##_H_Insulated); \
				skin = QUOTE(skinName); \
			}
		#define XTD_H_ENGINEER(className,skinName) \
			class TAG##_H_Engineer_##className## \
			{ \
				model = QUOTE(TAG##_H_Engineer); \
				skin = QUOTE(skinName); \
			}
		#define XTD_H_SPECOP(className,typeName,skinName) \
			class TAG##_H_SpecOp_##className## \
			{ \
				model = QUOTE(TAG##_H_SpecOp); \
				type = QUOTE(typeName); \
				skin = QUOTE(skinName); \
			}
		#define XTD_V_ARC(className,skinName) \
			class TAG##_V_ARC_##className## \
			{ \
				model = QUOTE(TAG##_V_ARC); \
				skin = QUOTE(skinName); \
			}
		#define XTD_V_OMNI(className,typeName,skinName) \
			class TAG##_V_##className## \
			{ \
				model = QUOTE(TAG##_V_Omni); \
				type = QUOTE(typeName); \
				skin = QUOTE(skinName); \
			}
		#define XTD_NV_RANGE(className,skinName) \
			class TAG##_NV_Range_##className## \
			{ \
				model = QUOTE(TAG##_NV_Range); \
				skin = QUOTE(skinName); \
			}
		#define XTD_NV_MACRO(className,skinName) \
			class TAG##_NV_Macro_##className## \
			{ \
				model = QUOTE(TAG##_NV_Macro); \
				position = QUOTE(Default); \
				skin = QUOTE(skinName); \
			}; \
			class TAG##_NV_Macro_##className##_spec \
			{ \
				model = QUOTE(TAG##_NV_Macro); \
				position = QUOTE(Specialist); \
				skin = QUOTE(skinName); \
			}
		#define XTD_NV_VISOR(className,skinName) \
			class TAG##_NV_Visor_##className## \
			{ \
				model = QUOTE(TAG##_NV_Visor); \
				skin = QUOTE(skinName); \
			}
		#define XTD_U_TROOPER(className,skinName) \
			class TAG##_U_B_##className## \
			{ \
				model = QUOTE(TAG##_U_Trooper); \
				skin = QUOTE(skinName); \
			}
		#define XTD_U_INSULATED(className,skinName) \
			class TAG##_U_B_Insulated_##className## \
			{ \
				model = QUOTE(TAG##_U_Insulated); \
				skin = QUOTE(skinName); \
			}

		// P2 Trooper Helmets
		XTD_H_P2(CT,Trooper,Default);
		XTD_H_P2(SCT,Trooper,SCT);
		XTD_H_P2(VCT,Trooper,VCT);
		XTD_H_P2(CSP,Trooper,CSP);
		XTD_H_P2(CLP,Trooper,CLP);
		XTD_H_P2(CP,Trooper,CP);
		XTD_H_P2(CS,Trooper,CS);
		XTD_H_P2(CSS,Trooper,CSS);
		XTD_H_P2(CFS,Trooper,CFS);
		XTD_H_P2(CSM,Trooper,CSM);

		// P2 Specialist Helmets
		XTD_H_P2(Jet,Specialist,Jet);
		XTD_H_P2(EOD,Specialist,EOD);
		XTD_H_P2(EOD_CSP,Specialist,EOD_CSP);
		XTD_H_P2(EOD_NCO,Specialist,EOD_NCO);

		// P2 ARC Helmets
		XTD_H_ARC(Cookie,Cookie);
		XTD_H_ARC(Devil,DevilDolphin);
		XTD_H_ARC(Jinx,Jinx);
		XTD_H_ARC(Knight,Knight);
		XTD_H_ARC(Trooper,Default);

		// P2 Custom Helmets
		XTD_H_P2(Canada,Trooper,Canada);
		XTD_H_P2(Catcher,Trooper,Catcher);
		XTD_H_P2(Fiveo,Trooper,Fiveo);
		XTD_H_P2(Fox,Trooper,Fox);
		XTD_H_P2(Hotshot,Trooper,Hotshot);
		XTD_H_P2(Jager,Trooper,Jager);
		XTD_H_P2(Kitsune,Trooper,Kitsune);
		XTD_H_P2(Luci,Trooper,Luci);
		XTD_H_P2(Neca,Trooper,Neca);
		XTD_H_P2(Rage,Trooper,Rage);
		XTD_H_P2(Rex,Trooper,Rex);
		XTD_H_P2(Riven,Trooper,Riven);
		XTD_H_P2(Sage,Trooper,Sage);
		XTD_H_P2(Space,Trooper,Space);
		XTD_H_P2(Sparky,Trooper,Sparky);
		XTD_H_P2(Sparrow,Trooper,Sparrow);
		XTD_H_P2(Spartacus,Trooper,Spartacus);
		XTD_H_P2(Speed,Trooper,Speed);
		XTD_H_P2(Valyrian,Trooper,Valyrian);
		XTD_H_P2(Wicked,Trooper,Wicked);

		// P1 Trooper Helmets
		XTD_H_P1(Trooper,Default);
		XTD_H_P1(SCT,SCT);
		XTD_H_P1(VCT,VCT);
		XTD_H_P1(CSP,CSP);
		XTD_H_P1(CS,CS);
		XTD_H_P1(CSS,CSS);
		XTD_H_P1(CSM,CSM);
		XTD_H_P1(Jinx,Jinx);

		// P2 Pilot Helmets
		XTD_H_P2_PILOT(CX,Default);
		XTD_H_P2_PILOT(Carrot,Carrot);
		XTD_H_P2_PILOT(Texan,Texan);

		// P1 Pilot Helmets
		XTD_H_P1_PILOT(CX,Default);
		XTD_H_P1_PILOT(CXG1,CXG1);
		XTD_H_P1_PILOT(CXG2,CXG2);

		// ARF Helmets
		XTD_H_ARF(Trooper,Default);
		XTD_H_ARF(Spartacus,Spartacus);

		// Insulated Helmets
		XTD_H_INSULATED(Trooper,Default);
		XTD_H_INSULATED(Geonosis,Geonosis);

		// Engineer Helmets
		XTD_H_ENGINEER(Trooper,Default);
		XTD_H_ENGINEER(CSP,CSP);
		XTD_H_ENGINEER(NCO,NCO);

		// Spec-Ops Helmets
		XTD_H_SPECOP(Trooper,Default,Default);
		XTD_H_SPECOP(CSP,Default,CSP);
		XTD_H_SPECOP(NCO,Default,NCO);
		XTD_H_SPECOP(Geonosis,Geonosis,Default);
		XTD_H_SPECOP(Geonosis_NCO,Geonosis,NCO);

		// NV - Rangefinders
		XTD_NV_RANGE(Brown,Brown);
		XTD_NV_RANGE(Gray,Gray);
		XTD_NV_RANGE(Jinx,Jinx);
		XTD_NV_RANGE(Yellow,Yellow);

		// NV - Macrobinoculars
		XTD_NV_MACRO(Brown,Brown);
		XTD_NV_MACRO(Gray,Gray);
		XTD_NV_MACRO(White,White);
		XTD_NV_MACRO(Yellow,Yellow);

		// NV - Visors
		XTD_NV_VISOR(Brown,Brown);
		XTD_NV_VISOR(Gray,Gray);
		XTD_NV_VISOR(Valyrian,Valyrian);
		XTD_NV_VISOR(Yellow,Yellow);

		// ARC Vests
		XTD_V_ARC(Cadet,Cadet);
		XTD_V_ARC(Trooper,Trooper);
		XTD_V_ARC(Medic,Medic);
		XTD_V_ARC(Veteran,Veteran);
		XTD_V_ARC(Cookie,Cookie);
		XTD_V_ARC(Jinx,Jinx);
		XTD_V_ARC(Valyrian,Valyrian);

		// Miscellaneous Vests
		XTD_V_OMNI(Invisible,Basic,Invisible);
		XTD_V_OMNI(Trooper,Basic,Trooper);
		XTD_V_OMNI(Suspenders,Basic,Suspenders);
		XTD_V_OMNI(AT,Specialist,AT);
		XTD_V_OMNI(EOD,Specialist,EOD);
		XTD_V_OMNI(Geonosis,Specialist,Geonosis);
		XTD_V_OMNI(Jet,Specialist,Jet);
		XTD_V_OMNI(Marksman,Specialist,Marksman);
		XTD_V_OMNI(Medic,Specialist,Medic);
		XTD_V_OMNI(RTO,Specialist,RTO);
		XTD_V_OMNI(Support,Specialist,Support);
		XTD_V_OMNI(CP,Leadership,Corporal);
		XTD_V_OMNI(CS,Leadership,Sergeant);
		XTD_V_OMNI(Officer,Leadership,Officer);
		XTD_V_OMNI(Neca,Leadership,Neca);
		XTD_V_OMNI(Spartacus,Leadership,Spartacus);
		XTD_V_OMNI(Valyrian,Leadership,Valyrian);

		// Trooper Uniforms
		XTD_U_TROOPER(CR,Cadet);
		XTD_U_TROOPER(CT,CT);
		XTD_U_TROOPER(SCT,SCT);
		XTD_U_TROOPER(VCT,VCT);
		XTD_U_TROOPER(CSP,CSP);
		XTD_U_TROOPER(CLP,CLP);
		XTD_U_TROOPER(CP,CP);
		XTD_U_TROOPER(CS,CS);
		XTD_U_TROOPER(CSS,CSS);
		XTD_U_TROOPER(CSM,CSM);

		// Special Trooper Uniforms
		XTD_U_TROOPER(Jet_CT,Jet);
		XTD_U_TROOPER(Jet_NCO,Jet_NCO);

		// Custom Trooper Uniforms
		XTD_U_TROOPER(Cookie,Cookie);
		XTD_U_TROOPER(Jinx,Jinx);
		XTD_U_TROOPER(Knight,Knight);
		XTD_U_TROOPER(Neca,Neca);
		XTD_U_TROOPER(Speed,Speed);
		XTD_U_TROOPER(Valyrian,Valyrian);

		// Insulated Uniforms
		XTD_U_INSULATED(CT,Default);
		XTD_U_INSULATED(Geonosis_CT,Geonosis);
	};
	class CfgVehicles
	{
		#define XTD_B_OMNI(className,typeName,skinName) \
			class TAG##_B_Pack_##className## \
			{ \
				model = QUOTE(TAG##_B_Omni); \
				type = QUOTE(typeName); \
				straps = QUOTE(Default); \
				skin = QUOTE(skinName); \
			}
		#define XTD_B_JETPACK(className,typeName,skinName) \
			class TAG##_B_Pack_##className## \
			{ \
				model = QUOTE(TAG##_B_Jetpack); \
				type = QUOTE(typeName); \
				skin = QUOTE(skinName); \
			}
		#define XTD_B_OMNI_STRAPS(className,typeName,skinName) \
			XTD_B_OMNI(className,typeName,skinName); \
			class TAG##_B_Pack_##className##_straps \
			{ \
				model = QUOTE(TAG##_B_Omni); \
				type = QUOTE(typeName); \
				straps = QUOTE(Yes); \
				skin = QUOTE(skinName); \
			}

		// Backpacks
		XTD_B_OMNI_STRAPS(Basic,Basic,Default);
		XTD_B_OMNI_STRAPS(Medic,Basic,Medic);
		XTD_B_OMNI_STRAPS(AT,Basic,AT);
		XTD_B_OMNI_STRAPS(EOD,Basic,EOD);
		XTD_B_OMNI_STRAPS(RTO,RTO,Default);
		XTD_B_OMNI(RTO_mini,RTO,RTO_Mini);
		XTD_B_OMNI(ARC,ARC,Default);
		XTD_B_OMNI(ARC_Medic,ARC,Medic);

		// Jetpacks
		XTD_B_JETPACK(JP_MC,MC,Default);
		XTD_B_JETPACK(JP_MC_medic,MC,Medic);
		XTD_B_JETPACK(JP_MC_pilot,MC,Pilot);
		XTD_B_JETPACK(JP_MC_krayt,MC,Krayt);
		XTD_B_JETPACK(JP_MC_valyrian,MC,Valyrian);
		XTD_B_JETPACK(JT12,JT12,Default);
		XTD_B_JETPACK(JT12_medic,JT12,Medic);
		XTD_B_JETPACK(JT12_mercy,JT12,Mercy);
		XTD_B_JETPACK(JP_Chicken,Chicken,Default);
	};
};