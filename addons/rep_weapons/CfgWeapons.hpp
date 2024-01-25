class Default;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class UnderBarrelSlot;
class WeaponSlotsInfo;
class PointerSlot: SlotInfo
{
	compatibleItems[] += {
		CLASS(acc_pointer_Borange),
		CLASS(acc_pointer_Borange_IR),
		CLASS(acc_pointer_Short_Borange),
		CLASS(acc_pointer_Short_Borange_IR),
		CLASS(acc_pointer_Long_Borange),
		CLASS(acc_pointer_Long_Borange_IR)
	};
};

class CfgWeapons
{
	class arifle_MX_Base_F;
    class hgun_P07_F;
    class acc_pointer_IR;
	class optic_LRPS;

	class 3AS_optic_holo_DC15S;

	class 71st_BlasterRifle_Base;
	class 71st_DC15A_Base;
	class 71st_DC15A_UGL_Base;
	class 71st_DC15A_LE_Base;

	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class JLTS_DC15S;
	class JLTS_DC15X_scope;

    class JLTS_DC17SA: hgun_P07_F
    {
        class Single;
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class PointerSlot;
            class MuzzleSlot;
            class UnderBarrelSlot;
        };
    };

	class 71st_DC15A: 71st_DC15A_Base
	{
		class Single;
		class Burst;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
			class PointerSlot;
			class MuzzleSlot;
			class UnderBarrelSlot;
		};
	};

	class 71st_DC15A_UGL: 71st_DC15A_UGL_Base
	{
		class Single;
		class Burst;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
			class PointerSlot;
			class MuzzleSlot;
			class UnderBarrelSlot;
		};
	};

	class 71st_DC15S: JLTS_DC15S
	{
		class Single;
		class FullAuto;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
			class PointerSlot;
			class MuzzleSlot;
			class UnderBarrelSlot;
		};
	};

	class 71st_DC15A_LE: 71st_DC15A_LE_Base
	{
		class Single;
		class FullAuto;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
			class PointerSlot;
			class MuzzleSlot;
			class UnderBarrelSlot;
		};
	};

	class JLTS_DC15X: arifle_MX_Base_F
	{
		class Single;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
			class PointerSlot;
			class MuzzleSlot;
			class UnderBarrelSlot;
		};
	};
	SUBCLASS(optic_DC15X_scope,JLTS_DC15X_scope)
	{
		author = "Krinix & Anorexican";
		displayName = TAG_NAME(DC-15X Scope);
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			modelOptics = "\TK\71st\71_Weapons\acc\reticle_blue_2.p3d";
			weaponInfoType = "RscWeaponRangeZeroingFOV";
			class OpticsModes
			{
				class Snip
				{
					cameraDir = "";
					discreteDistance[] = { 100 };
					discreteDistanceInitIndex = 0;
					discretefov[] = { 0.042, 0.01 };
					discreteInitIndex = 0;
					distanceZoomMax = 2400;
					distanceZoomMin = 300;
					memoryPointCamera = "opticView";
					modelOptics[] = { "\TK\71st\71_Weapons\acc\reticle_blue_2.p3d", "\TK\71st\71_Weapons\acc\reticle_blue_2.p3d" };
					opticsDisablePeripherialVision = 1;
					opticsDisplayName = "WFOV";
					opticsFlare = 1;
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomInit = 0.042;
					opticsZoomMax = 0.042;
					opticsZoomMin = 0.01;
					useModelOptics = 1;
					visionMode[] = { "Normal", "NVG", "TI" };
		};
	};
        };
    };

    SUBCLASS(acc_pointer_Borange,acc_pointer_IR)
    {
        author = "Anorexican";
        displayName = TAG_NAME(DC-Series Laser Module);
        picture = "\MRC\JLTS\optionals\Glocko\data\ui\Glocko_flash_ui_ca.paa";
        model = "\MRC\JLTS\optionals\Glocko\Glocko_flash.p3d";

        class ItemInfo
		{
			allowedSlots[] = {801, 701, 901};
			mass = 6;
			mountAction = "MountSide";
			type = 301;
			unmountAction = "DismountSide";
			
			// We can define our laser's parameters here
			class Pointer
			{
				irLaserPos = "flash dir"; // MemoryPosition for where our laser will point
				irLaserEnd = "flash"; // MemoryPosition for our laser's SOURCE (for some goofy reason; this isn't a mix-up)
				beamColor[] = {100000, 500, 65}; // {R,G,B} value for our laser beam. These values also effect emissiveness, with higher numbers meaning higher brightness.
				dotColor[] = {2500, 500, 1}; // {R,G,B} value for our laser dot. The dot is cast when the laser hits a surface, and follows the same rules as beamColor[].
				dotSize = 0.025; // Size of our laser dot. Unfortunately, it doesn't actually function in-game. You can compensate using higher dotColor values, but that leads to crazy glow in dark areas.
				beamThickness = 0.1; // Thickness of our laser beam.
				beamMaxLength = 50; // Maximum distance (in meters) our beam can travel. Most likely overridden past a certain value. Still goes pretty far; definitely enough to blind your favorite pilot.
				isIR = 0; // If set to 1, laser will only be visible in Night or Thermal vision modes. I don't believe the other settings will fully apply in this mode.
			};
			
			class Flashlight {}; // Resets the flashlight data from InventoryFlashLightItem_Base_F so it doesn't sneak into our pointer.
		};

		// These definitions add compatibility with MRT's item switching framework, which allows us to switch between laser types using keybinds.
		MRT_SwitchItemNextClass = CLASS(acc_pointer_Borange_IR); // Classname of the item we'll switch to from here
		MRT_SwitchItemPrevClass = CLASS(acc_pointer_Borange_IR); // Classname of the item we switched here from
		MRT_switchItemHintText = "Visible Laser"; // Text that will be displayed in the hint box when switching to this item
    };

    SUBCLASS(acc_pointer_Borange_IR,TAG_CLASS(acc_pointer_Borange))
    {
        author = "Anorexican";
		scope = 1;
		displayName = TAG_NAME(DC-Series Laser Module);
		picture = "\MRC\JLTS\optionals\Glocko\data\ui\Glocko_flash_ui_ca.paa";
		model = "\MRC\JLTS\optionals\Glocko\Glocko_flash.p3d";

		class ItemInfo
		{
			allowedSlots[] = {801, 701, 901};
			mass = 6;
			mountAction = "MountSide";
			type = 301;
			unmountAction = "DismountSide";
			
			// We can define our laser's parameters here
			class Pointer
			{
				irLaserPos = "flash dir";
				irLaserEnd = "flash";
			};
			
			class Flashlight {}; // Resets the flashlight data from InventoryFlashLightItem_Base_F so it doesn't sneak into our pointer.
		};
		
		MRT_SwitchItemNextClass = CLASS(acc_pointer_Borange);
		MRT_SwitchItemPrevClass = CLASS(acc_pointer_Borange);
		MRT_switchItemHintText = "IR Laser";
    };

    SUBCLASS(acc_pointer_Short_Borange,TAG_CLASS(acc_pointer_Borange))
    {
		class ItemInfo: ItemInfo
		{
			class Pointer: Pointer
			{
				beamMaxLength = 20;
				irLaserPos = "flash dir";
				irLaserEnd = "flash";
			};
		};

        MRT_SwitchItemNextClass = CLASS(acc_pointer_Short_Borange_IR);
		MRT_SwitchItemPrevClass = CLASS(acc_pointer_Short_Borange_IR);
    };

    SUBCLASS(acc_pointer_Short_Borange_IR,TAG_CLASS(acc_pointer_Borange_IR))
    {
        MRT_SwitchItemNextClass = CLASS(acc_pointer_Short_Borange);
		MRT_SwitchItemPrevClass = CLASS(acc_pointer_Short_Borange);
    };

    SUBCLASS(acc_pointer_Long_Borange,TAG_CLASS(acc_pointer_Borange))
    {
        model = "\A3\weapons_f\acc\accv_pointer_F";
        
        class ItemInfo: ItemInfo
        {
            class Pointer: Pointer
            {
                beamMaxLength = 2000;
                irLaserPos = "laser pos";
                irLaserEnd = "laser dir";
            };
        };

        MRT_SwitchItemNextClass = CLASS(acc_pointer_Long_Borange_IR);
		MRT_SwitchItemPrevClass = CLASS(acc_pointer_Long_Borange_IR);
    };

    SUBCLASS(acc_pointer_Long_Borange_IR,TAG_CLASS(acc_pointer_Borange_IR))
    {
        model = "\A3\weapons_f\acc\accv_pointer_IR_F";

        class ItemInfo: ItemInfo
        {
            class Pointer: Pointer
            {
                beamMaxLength = 2000;
                irLaserPos = "laser pos";
                irLaserEnd = "laser dir";
            };
        };

        MRT_SwitchItemNextClass = CLASS(acc_pointer_Long_Borange);
        MRT_SwitchItemPrevClass = CLASS(acc_pointer_Long_Borange);
    };

	NEW_CLASS(acc_flashlight): jlts_glocko_flashlight
	{
		author = "Anorexican";
		displayName = TAG_NAME(DC-Series Flashlight);
	};

	NEW_CLASS(Optic_Holo): 3AS_optic_holo_DC15S
	{
		author = "Anorexican";
		displayName = TAG_NAME(Holosight);
		scope = 1;
    };

    SUBCLASS(hgun_DC17SA_F,JLTS_DC17SA)
    {
		displayName = TAG_NAME(DC-17SA);
		author = "Anorexican";
		baseWeapon = CLASS(hgun_DC17SA_F);
		hiddenSelectionsTextures[] = { QPATHTOF(data\dc17sa\hgun_dc17sa_co.paa) };
		magazines[] = { CLASS(24Rnd_EC30_mag) };
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};
		modes[]=
		{
			"Single",
			"Burst"
		};
		recoil = "3AS_recoil_DC15S";
		class Single: Single
		{
			reloadTime = "60 / 500";
			dispersion = "3.0 / 1000";
			minRange = 5;
			minRangeProbab = 0.30000001;
			midRange = 25;
			midRangeProbab = 0.60000002;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc17sa.wss),
					6.5,
					0.925,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Burst: Mode_Burst
		{
			burst = 2;
			reloadTime = "60 / 750";
			dispersion = "3.0 / 1000";
			textureType = "dual";
			minRange = 5;
			minRangeProbab = 0.30000001;
			midRange = 25;
			midRangeProbab = 0.60000002;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc17sa.wss),
					6.5,
					0.925,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			JLTS_hasElectronics = 0;
			JLTS_hasEMPProtection = 1;
		};

		class WeaponSlotsInfo
		{
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = { "3AS_optic_holo_DC15S" };
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					CLASS(acc_pointer_Borange),
					CLASS(acc_pointer_Borange_IR),
					CLASS(acc_flashlight)
				};
			};
		};
    };

	SUBCLASS(arifle_DC15A_F,71st_DC15A)
	{
		displayName = TAG_NAME(DC-15A);
		author = "Krinix & Anorexican";
		baseWeapon = CLASS(arifle_DC15A_F);
		recoil = "3AS_recoil_DC15A";
		magazines[] = { CLASS(45Rnd_EC40_Mag_F) };
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};
		class Single: Single
		{
			reloadTime = "60 / 500";
			dispersion = "(1.5 / 3.4377) / 1000";
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15a.wss),
					1.5,
					0.9,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Burst: Burst
		{
			burst = 5;
			reloadTime = "60 / 550";
			dispersion = "1.8 / 1000";
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15a.wss),
					1.5,
					0.9,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
	};

	SUBCLASS(arifle_DC15A_UGL_F,71st_DC15A_UGL)
	{
		displayName = TAG_NAME(DC-15A UGL);
		author = "Krinix & Anorexican";
		baseWeapon = CLASS(arifle_DC15A_UGL_F);
		recoil = "3AS_recoil_DC15A";
		magazines[] = { CLASS(45Rnd_EC40_Mag_F) };
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};
		class Single: Single
		{
			reloadTime = "60 / 500";
			dispersion = "(2.1 / 3.4377) / 1000";
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15a.wss),
					1.5,
					0.9,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Burst: Burst
		{
			burst = 5;
			reloadTime = "60 / 550";
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15a.wss),
					1.5,
					0.9,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
	};

	SUBCLASS(SMG_DC15S_F,71st_DC15S)
	{
		displayName = TAG_NAME(DC-15S);
		author = "Krinix & Anorexican";
		baseWeapon = CLASS(SMG_DC15S_F);
		magazines[] = { CLASS(60Rnd_EC30_Mag_F) };
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};
		class Single: Single
		{
			reloadTime = "60 / 700";
			dispersion = "(2.5 / 3.4377) / 1000";
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15c.wss),
					3,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class FullAuto: FullAuto
		{
			reloadTime = "60 / 650";
			dispersion = "2.8 / 1000";
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15c.wss),
					3,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
	};

	SUBCLASS(LMG_DC15LE_F,71st_DC15A_LE)
	{
		displayName = TAG_NAME(DC-15LE);
		author = "Krinix & Anorexican";
		baseWeapon = CLASS(LMG_DC15LE_F);
		recoil = "recoil_car_lsw";
		modes[] = { "Single", "Burst", "FullAuto", "FullAutoFast" };
		magazines[] = { CLASS(100Rnd_EC40_Mag_F) };
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};
		class Single: Single
		{
			reloadTime = "60 / 700";
			dispersion = "(1.4 / 3.4377) / 1000";
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15l.wss),
					1.5,
					0.9,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Burst: Mode_Burst
		{
			burst = 5;
			reloadTime = "60 / 600";
			dispersion = "(1.7 / 3.4377) / 1000";
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15l.wss),
					1.5,
					0.9,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class FullAuto: FullAuto
		{
			reloadTime = "60 / 500";
			dispersion = "(2.0 / 3.4377) / 1000";
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15l.wss),
					1.5,
					0.9,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class FullAutoFast: FullAuto
		{
			reloadTime = "60 / 600";
			dispersion = "(1.85 / 3.4377) / 1000";
			textureType = "fastAuto";
		};
	};

	SUBCLASS(srifle_DC15X_F,JLTS_DC15X)
	{
		displayName = TAG_NAME(DC-15X);
		author = "Krinix & Anorexican";
		baseWeapon = CLASS(srifle_DC15X_F);
		recoil = "3AS_recoil_DC15C";
		magazines[] = { CLASS(10Rnd_EC80_Mag_F) };
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};
		class Single: Single
		{
			reloadTime = "60 / 100";
			dispersion = "(0.5 / 3.4377) / 1000";
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\valken_38x.wss),
					2.75,
					0.9,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = { CLASS(optic_DC15X_scope) };
			};
		};
	};
};