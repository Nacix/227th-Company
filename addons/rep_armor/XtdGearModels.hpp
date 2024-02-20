class XtdGearModels
{

	#define SET_BACKGROUND(className,optionName) \
		class className \
		{ \
			label = QUOTE(optionName); \
			image = "#(rgb,8,8,3)color(0.42,0.125,0.03,1)"; \
		}
		
	#define SET_BACKGROUND_GENERIC(className) SET_BACKGROUND(className,className)
	#define SET_BACKGROUND_PRETTY(className,optionName) SET_BACKGROUND(className,optionName)

	#define SET_BACKGROUND_DEFAULT(optionName) SET_BACKGROUND_GENERIC(optionName)
	#define SET_BACKGROUND_DEFAULT_PRETTY(className,optionName) SET_BACKGROUND_PRETTY(className,optionName)

	class CfgWeapons 
	{
		NEW_CLASS(H_P2_CT)
		{
			label = TAG_NAME(P2 Helmet);
			author = "Anorexican";
			options[] = {"type", "skin"};
			class type
			{
				label = "Type";
				values[] = {"Trooper", "ARC"};
				alwaysSelectable = 1;
				SET_BACKGROUND_DEFAULT(Trooper);
				SET_BACKGROUND_DEFAULT(ARC);
			};
			class skin
			{
				label = "Skin";
				values[]=
				{
					"Default",
					"SCT",
					"VCT",
					"CSP",
					"CLC",
					"CP",
					"CS",
					"CSS",
					"CFS",
					"CSM",
					"Jet",
					"Cookie",
					"DevilDolphin",
					"Jinx",
					"Knight",
					"Canada",
					"Catcher",
					"Fiveo",
					"Kitsune",
					"Luci",
					"Rex",
					"Riven",
					"Sage",
					"Sparky",
					"Sparrow",
					"Spartacus",
					"Speed",
					"Valyrian",
					"Wicked"
				};
				SET_BACKGROUND_DEFAULT(Default);
				SET_BACKGROUND_DEFAULT(SCT);
				SET_BACKGROUND_DEFAULT(VCT);
				SET_BACKGROUND_DEFAULT(CSP);
				SET_BACKGROUND_DEFAULT(CLC);
				SET_BACKGROUND_DEFAULT(CP);
				SET_BACKGROUND_DEFAULT(CS);
				SET_BACKGROUND_DEFAULT(CSS);
				SET_BACKGROUND_DEFAULT(CFS);
				SET_BACKGROUND_DEFAULT(CSM);
				SET_BACKGROUND_DEFAULT(Jet);
				SET_BACKGROUND_DEFAULT(Cookie);
				SET_BACKGROUND_DEFAULT(DevilDolphin);
				SET_BACKGROUND_DEFAULT(Jinx);
				SET_BACKGROUND_DEFAULT(Knight);
				SET_BACKGROUND_DEFAULT(Canada);
				SET_BACKGROUND_DEFAULT(Catcher);
				SET_BACKGROUND_DEFAULT(Fiveo);
				SET_BACKGROUND_DEFAULT(Kitsune);
				SET_BACKGROUND_DEFAULT(Luci);
				SET_BACKGROUND_DEFAULT(Rex);
				SET_BACKGROUND_DEFAULT(Riven);
				SET_BACKGROUND_DEFAULT(Sage);
				SET_BACKGROUND_DEFAULT(Sparky);
				SET_BACKGROUND_DEFAULT(Sparrow);
				SET_BACKGROUND_DEFAULT(Spartacus);
				SET_BACKGROUND_DEFAULT(Speed);
				SET_BACKGROUND_DEFAULT(Valyrian);
				SET_BACKGROUND_DEFAULT(Wicked);
			};
		};
		NEW_CLASS(H_ARF)
		{
			label = TAG_NAME(ARF Helmet);
			author = "Anorexican";
			options[] = { "skin" };
			class skin
			{
				label = "Skin";
				values[] = { "Default", "Spartacus" };
				SET_BACKGROUND_DEFAULT(Default);
				SET_BACKGROUND_DEFAULT(Spartacus);
			};
		};
		NEW_CLASS(H_P1)
		{
			label = TAG_NAME(P1 Helmet);
			author = "Anorexican";
			options[] = { "skin" };
			class skin
			{
				label = "Skin";
				values[] = { "Default", "SCT", "VCT", "CSP", "CS", "CSS", "CSM" };
				SET_BACKGROUND_DEFAULT(Default);
				SET_BACKGROUND_DEFAULT(SCT);
				SET_BACKGROUND_DEFAULT(VCT);
				SET_BACKGROUND_DEFAULT(CSP);
				SET_BACKGROUND_DEFAULT(CS);
				SET_BACKGROUND_DEFAULT(CSS);
				SET_BACKGROUND_DEFAULT(CSM);
			};
		};
		NEW_CLASS(H_Pilot)
		{
			label = TAG_NAME(Pilot Helmet);
			author = "Anorexican";
			options[] = { "type", "skin" };
			class type
			{
				label = "Type";
				values[] = { "P1", "P2" };
				alwaysSelectable = 1;
				SET_BACKGROUND_DEFAULT(P1);
				SET_BACKGROUND_DEFAULT(P2);
			};
			class skin
			{
				label = "Skin";
				values[] = { "Default", "CXG1", "CXG2", "Carrot", "Texan" };
				SET_BACKGROUND_DEFAULT(Default);
				SET_BACKGROUND_DEFAULT(CXG1);
				SET_BACKGROUND_DEFAULT(CXG2);
				SET_BACKGROUND_DEFAULT(Carrot);
				SET_BACKGROUND_DEFAULT(Texan);
			};
		};
		NEW_CLASS(H_Insulated)
		{
			label = TAG_NAME(Insulated Helmet);
			author = "Anorexican";
			options[] = { "skin" };
			class skin
			{
				label = "Skin";
				values[] = { "Default", "Geonosis" };
				SET_BACKGROUND_DEFAULT(Default);
				SET_BACKGROUND_DEFAULT(Geonosis);
			};
		};
		NEW_CLASS(H_Engineer)
		{
			label = TAG_NAME(Engineer Helmet);
			author = "Anorexican";
			options[] = { "skin" };
			class skin
			{
				label = "Skin";
				values[] = { "Default", "CSP", "NCO" };
				SET_BACKGROUND_DEFAULT(Default);
				SET_BACKGROUND_DEFAULT(CSP);
				SET_BACKGROUND_DEFAULT(NCO);
			};
		};
		NEW_CLASS(H_SpecOp)
		{
			label = TAG_NAME(Spec-Ops Helmet);
			author = "Anorexican";
			options[] = { "type", "skin" };
			class type 
			{
				label = "Type";
				values[] = { "Default", "Geonosis" };
				alwaysSelectable = 1;
				SET_BACKGROUND_DEFAULT(Default);
				SET_BACKGROUND_DEFAULT(Geonosis);
			};
			class skin
			{
				label = "Skin";
				values[] = { "Default", "CSP", "NCO" };
				SET_BACKGROUND_DEFAULT(Default);
				SET_BACKGROUND_DEFAULT(CSP);
				SET_BACKGROUND_DEFAULT(NCO);
			};
		};
		NEW_CLASS(NV_Internal)
		{
			label = TAG_NAME(Internal Chip);
			author = "Anorexican";
			options[] = { "variant" };
			class variant
			{
				label = "Variant";
				values[] = { "NV", "NV_TI", "NV_hybrid" };
				SET_BACKGROUND_DEFAULT(NV);
				SET_BACKGROUND_DEFAULT_PRETTY(NV_TI,TI);
				SET_BACKGROUND_DEFAULT_PRETTY(NV_hybrid,NV / TI);
			};
		};
		NEW_CLASS(NV_Range)
		{
			label = TAG_NAME(Rangefinder);
			author = "Anorexican";
			options[] = { "skin" };
			class skin
			{
				label = "Skin";
				values[] = { "Brown", "Gray", "Jinx", "Yellow" };
				SET_BACKGROUND_DEFAULT(Brown);
				SET_BACKGROUND_DEFAULT(Gray);
				SET_BACKGROUND_DEFAULT(Jinx);
				SET_BACKGROUND_DEFAULT(Yellow);
			};
		};
		NEW_CLASS(NV_Macro)
		{
			label = TAG_NAME(Macrobinoculars);
			author = "Anorexican";
			options[] = { "position", "skin" };
			class position
			{
				label = "Position";
				values[] = { "Default", "Specialist" };
				alwaysSelectable = 1;
				SET_BACKGROUND_DEFAULT(Default);
				SET_BACKGROUND_DEFAULT(Specialist);
			};
			class skin
			{
				label = "Skin";
				values[] = { "Brown", "Gray", "White", "Yellow" };
				SET_BACKGROUND_DEFAULT(Brown);
				SET_BACKGROUND_DEFAULT(Gray);
				SET_BACKGROUND_DEFAULT(White);
				SET_BACKGROUND_DEFAULT(Yellow);
			};
		};
		NEW_CLASS(NV_Visor)
		{
			label = TAG_NAME(Officer Visor);
			author = "Anorexican";
			options[] = { "skin" };
			class skin
			{
				label = "Skin";
				values[] = { "Brown", "Gray", "Valyrian", "Yellow" };
				SET_BACKGROUND_DEFAULT(Brown);
				SET_BACKGROUND_DEFAULT(Gray);
				SET_BACKGROUND_DEFAULT(Valyrian);
				SET_BACKGROUND_DEFAULT(Yellow);
			};
		};
		NEW_CLASS(V_ARC)
		{
			label = TAG_NAME(ARC Vest);
			author = "Anorexican";
			options[] = { "skin" };
			class skin
			{
				label = "Skin";
				values[] = { "Cadet", "Trooper", "Medic", "Veteran", "Cookie", "Jinx", "Valyrian" };
				SET_BACKGROUND_DEFAULT(Cadet);
				SET_BACKGROUND_DEFAULT(Trooper);
				SET_BACKGROUND_DEFAULT(Medic);
				SET_BACKGROUND_DEFAULT(Veteran);
				SET_BACKGROUND_DEFAULT(Cookie);
				SET_BACKGROUND_DEFAULT(Jinx);
				SET_BACKGROUND_DEFAULT(Valyrian);
			};
		};
		NEW_CLASS(V_Omni)
		{
			label = TAG_NAME(Specialist Vest);
			author = "Anorexican";
			options[] = { "type", "skin" };
			class type
			{
				label = "Type";
				values[] = { "Basic", "Specialist", "Leadership" };
				alwaysSelectable = 1;
				SET_BACKGROUND_DEFAULT(Basic);
				SET_BACKGROUND_DEFAULT(Specialist);
				SET_BACKGROUND_DEFAULT(Leadership);
			};
			class skin
			{
				label = "Skin";
				values[]=
				{
					"Invisible",
					"Trooper",
					"Suspenders",
					"AT",
					"Geonosis",
					"Jet",
					"Marksman",
					"Medic",
					"RTO",
					"Support",
					"Corporal",
					"Sergeant",
					"Officer",
					"Spartacus",
					"Valyrian"
				};
				SET_BACKGROUND_DEFAULT(Invisible);
				SET_BACKGROUND_DEFAULT(Trooper);
				SET_BACKGROUND_DEFAULT(Suspenders);
				SET_BACKGROUND_DEFAULT_PRETTY(AT,Anti-Tank);
				SET_BACKGROUND_DEFAULT(Geonosis);
				SET_BACKGROUND_DEFAULT(Jet);
				SET_BACKGROUND_DEFAULT(Marksman);
				SET_BACKGROUND_DEFAULT(Medic);
				SET_BACKGROUND_DEFAULT(RTO);
				SET_BACKGROUND_DEFAULT(Support);
				SET_BACKGROUND_DEFAULT(Corporal);
				SET_BACKGROUND_DEFAULT(Sergeant);
				SET_BACKGROUND_DEFAULT(Officer);
				SET_BACKGROUND_DEFAULT(Spartacus);
				SET_BACKGROUND_DEFAULT(Valyrian);
			};
		};
		NEW_CLASS(U_Trooper)
		{
			label = TAG_NAME(Trooper Uniform);
			author = "Anorexican";
			options[] = { "skin" };
			class skin
			{
				label = "Skin";
				values[]=
				{
					"Cadet",
					"CT",
					"SCT",
					"VCT",
					"CSP",
					"CLC",
					"CP",
					"CS",
					"CSS",
					"CSM",
					"Jet",
					"Jet_NCO",
					"Cookie",
					"Jinx",
					"Knight",
					"Speed",
					"Valyrian"
				};
				SET_BACKGROUND_DEFAULT(Cadet);
				SET_BACKGROUND_DEFAULT(CT);
				SET_BACKGROUND_DEFAULT(SCT);
				SET_BACKGROUND_DEFAULT(VCT);
				SET_BACKGROUND_DEFAULT(CSP);
				SET_BACKGROUND_DEFAULT(CLC);
				SET_BACKGROUND_DEFAULT(CP);
				SET_BACKGROUND_DEFAULT(CS);
				SET_BACKGROUND_DEFAULT(CSS);
				SET_BACKGROUND_DEFAULT(CSM);
				SET_BACKGROUND_DEFAULT(Jet);
				SET_BACKGROUND_DEFAULT_PRETTY(Jet_NCO,Jet [NCO]);
				SET_BACKGROUND_DEFAULT(Cookie);
				SET_BACKGROUND_DEFAULT(Jinx);
				SET_BACKGROUND_DEFAULT(Knight);
				SET_BACKGROUND_DEFAULT(Speed);
				SET_BACKGROUND_DEFAULT(Valyrian);
			};
		};
		NEW_CLASS(U_Insulated)
		{
			label = TAG_NAME(Insulated Uniform);
			author = "Anorexican";
			options[] = { "skin" };
			class skin
			{
				label = "Skin";
				values[] = { "Default", "Geonosis" };
				SET_BACKGROUND_DEFAULT(Default);
				SET_BACKGROUND_DEFAULT(Geonosis);
			};
		};
	};
	class CfgVehicles
	{
		NEW_CLASS(B_Omni)
		{
			label = TAG_NAME(Backpack);
			author = "Anorexican";
			options[] = { "type", "straps", "skin" };
			class type
			{
				label = "Type";
				values[] = { "Invisible", "Belt", "Basic", "RTO", "ARC" };
				alwaysSelectable = 1;
				SET_BACKGROUND_DEFAULT(Invisible);
				SET_BACKGROUND_DEFAULT(Belt);
				SET_BACKGROUND_DEFAULT(Basic);
				SET_BACKGROUND_DEFAULT(RTO);
				SET_BACKGROUND_DEFAULT(ARC);
			};
			class straps
			{
				label = "Straps";
				values[] = { "Default", "Yes" };
				SET_BACKGROUND_DEFAULT(Default);
				SET_BACKGROUND_DEFAULT(Yes);
			};
			class skin
			{
				label = "Skin";
				values[] = { "Default", "Medic", "AT", "EOD", "Jet", "Snow", "RTO_Mini", "RTO_Module" };
				SET_BACKGROUND_DEFAULT(Default);
				SET_BACKGROUND_DEFAULT(Medic);
				SET_BACKGROUND_DEFAULT_PRETTY(AT,Anti-Tank);
				SET_BACKGROUND_DEFAULT(EOD);
				SET_BACKGROUND_DEFAULT(Jet);
				SET_BACKGROUND_DEFAULT(Snow);
				SET_BACKGROUND_DEFAULT_PRETTY(RTO_Mini,RTO (Mini));
				SET_BACKGROUND_DEFAULT_PRETTY(RTO_Module,RTO (Module));
			};
		};
		NEW_CLASS(B_Jetpack)
		{
			label = TAG_NAME(Jetpack);
			author = "Anorexican";
			options[] = { "type", "skin" };
			class type
			{
				label = "Type";
				values[] = { "MC", "JT12", "Chicken" };
				alwaysSelectable = 1;
				SET_BACKGROUND_DEFAULT(MC);
				SET_BACKGROUND_DEFAULT(JT12);
				SET_BACKGROUND_DEFAULT(Chicken);
			};
			class skin
			{
				label = "Skin";
				values[] = { "Default", "Medic", "Pilot", "Krayt", "Mercy", "Valyrian" };
				SET_BACKGROUND_DEFAULT(Default);
				SET_BACKGROUND_DEFAULT(Medic);
				SET_BACKGROUND_DEFAULT(Pilot);
				SET_BACKGROUND_DEFAULT(Krayt);
				SET_BACKGROUND_DEFAULT(Mercy);
				SET_BACKGROUND_DEFAULT(Valyrian);
			};
		};
	};
};