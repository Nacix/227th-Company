class XtdGearModels
{
	class CfgWeapons 
	{
		NEW_CLASS(H_P2_Trooper)
		{
			label = TAG_NAME(P2 Helmet);
			author = "Anorexican";
			options[] = {"type", "skin"};
			class type
			{
				label = "Type";
				values[] = {"Trooper", "Specialist", "ARC"};
				alwaysSelectable = 1;
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
					"CLP",
					"CP",
					"CS",
					"CSS",
					"CFS",
					"CSM",
					"Jet",
					"EOD",
					"EOD [CSP]",
					"EOD [NCO]",
					"Cookie",
					"DevilDolphin",
					"Jinx",
					"Knight",
					"Valyrian",
					"Canada",
					"Catcher",
					"Fiveo",
					"Fox",
					"Hotshot",
					"Jager",
					"Kitsune",
					"Luci",
					"Neca",
					"Rage",
					"Rex",
					"Riven",
					"Sage",
					"Space",
					"Sparky",
					"Sparrow",
					"Spartacus",
					"Speed",
					"Valyrian",
					"Wicked"
				};
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
				values[] = { "Default", "SCT", "VCT", "CSP", "CS", "CSS", "CSM", "Jinx" };
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
			};
			class skin
			{
				label = "Skin";
				values[] = { "Default", "CXG1", "CXG2", "Carrot", "Texan" };
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

				class Default
				{
					label = "Default";
				};
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
			};
			class skin
			{
				label = "Skin";
				values[] = { "Default", "CSP", "NCO" };
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
			};
			class skin
			{
				label = "Skin";
				values[] = { "Brown", "Gray", "White", "Yellow" };
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
			};
			class skin
			{
				label = "Skin";
				values[]=
				{
					"Invisible",
					"Trooper",
					"Suspenders",
					"Anti-Tank",
					"EOD",
					"Geonosis",
					"Jet",
					"Marksman",
					"Medic",
					"RTO",
					"Support",
					"Corporal",
					"Sergeant",
					"Officer",
					"Neca",
					"Spartacus",
					"Valyrian"
				};
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
					"CLP",
					"CP",
					"CS",
					"CSS",
					"CSM",
					"Jet",
					"Jet [NCO]",
					"Cookie",
					"Jinx",
					"Knight",
					"Neca",
					"Speed",
					"Valyrian"
				};
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
				values[] = { "Basic", "RTO", "ARC" };
				alwaysSelectable = 1;
			};
			class straps
			{
				label = "Straps";
				values[] = { "Default", "Yes" };
			};
			class skin
			{
				label = "Skin";
				values[] = { "Default", "Medic", "Anti-Tank", "EOD", "RTO (Mini)" };
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
			};
			class skin
			{
				label = "Skin";
				values[] = { "Default", "Medic", "Pilot", "Krayt", "Mercy", "Valyrian" };
			};
		};
	};
};