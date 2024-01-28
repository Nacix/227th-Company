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
		CLASS(acc_pointer_Borange_DC17M),
		CLASS(acc_pointer_Borange_DC17M_IR),
		CLASS(acc_pointer_Short_Borange),
		CLASS(acc_pointer_Short_Borange_IR),
		CLASS(acc_pointer_Borange_DP23),
		CLASS(acc_pointer_Borange_DP23_IR),
		CLASS(acc_pointer_Long_Borange),
		CLASS(acc_pointer_Long_Borange_IR),
		CLASS(acc_pointer_Borange_Firepuncher),
		CLASS(acc_pointer_Borange_Firepuncher_IR),
	};
};

class CfgWeapons
{
	class Default;
	class Rifle_Base_F;
	class arifle_MX_Base_F;
    class hgun_P07_F;
    class acc_pointer_IR;
	class optic_LRPS;
	class UGL_F;

	class 3AS_optic_holo_DC15S;
	class 3AS_DC15C_Base_F;
	class 3AS_DC15L_Base_F;
	class 3AS_DC17M_Base_F;
	class 3AS_WestarM5_Base_F;

	class 71st_BlasterRifle_Base;
	class 71st_DC15A_Base;
	class 71st_DC15A_UGL_Base;
	class 71st_DC15A_LE_Base;

	
	class InventoryOpticsItem_Base_F;
	class JLTS_DC15S;
	class JLTS_Glocko_flashlight;
	class JLTS_DW32S;

	class k_773_rifle_base;
	
	class ItemCore: Default
	{
		class ItemInfo;
	};

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

	class JLTS_DP23: arifle_MX_Base_F
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

	class JLTS_DW32S: arifle_MX_Base_F
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

	class 3AS_WestarM5_F: 3AS_WestarM5_Base_F
	{
		class Single;
		class Burst;
		class FullAuto;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
			class PointerSlot;
			class MuzzleSlot;
			class UnderBarrelSlot;
		};
	};

	class 3AS_WestarM5_GL: 3AS_WestarM5_Base_F
	{
		class Single;
		class Burst;
		class FullAuto;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
			class PointerSlot;
			class MuzzleSlot;
			class UnderBarrelSlot;
		};
	};

	class 3AS_DC15C_F: 3AS_DC15C_Base_F
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

	class 3AS_DC15C_GL: 3AS_DC15C_Base_F
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

	class 3AS_DC17M_F: 3AS_DC17M_Base_F
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

	class 3AS_DC15L_F: 3AS_DC15L_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
			class PointerSlot;
			class MuzzleSlot;
			class UnderBarrelSlot;
		};
	};

	class k_773_rifle: k_773_rifle_base
	{
		class Single;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
			class MuzzleSlot;
			class PointerSlot;
			class UnderBarrelSlot;
		};
	};

	class k_773_scope1: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class 773scope;
			};
		};
	};
	class k_773_scope2: k_773_scope1
	{
		class ItemInfo: ItemInfo
		{
			class OpticsModes
			{
				class 773scope;
			};
		};
	};

	SUBCLASS(optic_Holo,3AS_optic_holo_DC15S)
	{
		author = "Anorexican";
		displayName = TAG_NAME(Holosight);
		scope = 2;
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

	SUBCLASS(optic_Firepuncher_scope,k_773_scope2)
	{
		displayName = TAG_NAME(Firepuncher Scope (12-20x));

		MRT_SwitchItemNextClass = CLASS(optic_Firepuncher_scope_off);
		MRT_SwitchItemPrevClass = CLASS(optic_Firepuncher_scope_off);
		MRT_SwitchItemHintText = "Magnifier [OFF]";

		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class 773scope: 773scope
				{
					opticsZoomInit = "0.25 / 12";
					opticsZoomMax = "0.25 / 12";
					opticsZoomMin = "0.25 / 20";
					visionMode[] = { "Normal", "NVG", "TI" };
				};
			};
		};
	};
	SUBCLASS(optic_Firepuncher_scope_off,k_773_scope1)
	{
		displayName = TAG_NAME(Firepuncher Scope (2-10x));

		MRT_SwitchItemNextClass = CLASS(optic_Firepuncher_scope);
		MRT_SwitchItemPrevClass = CLASS(optic_Firepuncher_scope);
		MRT_SwitchItemHintText = "Magnifier [ON]";

		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class 773scope: 773scope
				{
					opticsZoomInit = "0.25 / 2";
					opticsZoomMax = "0.25 / 2";
					opticsZoomMin = "0.25 / 10";
					visionMode[] = { "Normal", "NVG", "TI" };
				};
			};
		};
	};

    SUBCLASS(acc_pointer_Borange,acc_pointer_IR)
    {
        author = "Anorexican";
        displayName = TAG_NAME(DC-Series Laser Module);
		model = "\OPTRE_Weapons\smg\m12_laser.p3d";
		picture = "\OPTRE_weapons\smg\icons\m12_laser.paa";
		
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
			
			delete Flashlight; // Removes the flashlight data from InventoryFlashLightItem_Base_F so it doesn't sneak into our pointer.
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
				isIR = 1;
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
			};
			
			delete Flashlight; // Removes the flashlight data from InventoryFlashLightItem_Base_F so it doesn't sneak into our pointer.
		};
		
		MRT_SwitchItemNextClass = CLASS(acc_pointer_Borange);
		MRT_SwitchItemPrevClass = CLASS(acc_pointer_Borange);
		MRT_switchItemHintText = "IR Laser";
    };

	SUBCLASS(acc_pointer_Borange_DC17M,TAG_CLASS(acc_pointer_Borange))
    {
        model = "\OPTRE_Weapons\SMG\m7_laser.p3d";
        
		class ItemInfo: ItemInfo
        {
            class Pointer: Pointer
            {
				beamMaxLength = 150;
                irLaserPos = "laser dir";
                irLaserEnd = "laser";
            };
        };

        MRT_SwitchItemNextClass = CLASS(acc_pointer_Borange_DC17M_IR);
		MRT_SwitchItemPrevClass = CLASS(acc_pointer_Borange_DC17M_IR);
    };
    SUBCLASS(acc_pointer_Borange_DC17M_IR,TAG_CLASS(acc_pointer_Borange_IR))
    {
        model = "\OPTRE_Weapons\SMG\m7_laser.p3d";

		class ItemInfo: ItemInfo
        {
            class Pointer: Pointer
            {
				beamMaxLength = 150;
                irLaserPos = "laser dir";
                irLaserEnd = "laser";
            };
        };

        MRT_SwitchItemNextClass = CLASS(acc_pointer_Borange_DC17M);
        MRT_SwitchItemPrevClass = CLASS(acc_pointer_Borange_DC17M);
    };

    SUBCLASS(acc_pointer_Short_Borange,TAG_CLASS(acc_pointer_Borange))
    {
		model = "\MRC\JLTS\optionals\Glocko\Glocko_flash.p3d";
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
		model = "\MRC\JLTS\optionals\Glocko\Glocko_flash.p3d";
        MRT_SwitchItemNextClass = CLASS(acc_pointer_Short_Borange);
		MRT_SwitchItemPrevClass = CLASS(acc_pointer_Short_Borange);
    };

	SUBCLASS(acc_pointer_Borange_DP23,TAG_CLASS(acc_pointer_Short_Borange))
	{
		model = "\OPTRE_Weapons\smg\m12_laser.p3d";

		class ItemInfo: ItemInfo
		{
			class Pointer: Pointer
			{
				beamMaxLength = 20;
				irLaserPos = "laser dir";
				irLaserEnd = "laser";
			};
		};

		MRT_SwitchItemNextClass = CLASS(acc_pointer_Borange_DP23_IR);
		MRT_SwitchItemPrevClass = CLASS(acc_pointer_Borange_DP23_IR);
	};
	SUBCLASS(acc_pointer_Borange_DP23_IR,TAG_CLASS(acc_pointer_Short_Borange_IR))
	{
		model = "\OPTRE_Weapons\smg\m12_laser.p3d";

		class ItemInfo: ItemInfo
		{
			class Pointer: Pointer
			{
				beamMaxLength = 20;
				irLaserPos = "laser dir";
				irLaserEnd = "laser";
			};
		};

		MRT_SwitchItemNextClass = CLASS(acc_pointer_Borange_DP23);
		MRT_SwitchItemPrevClass = CLASS(acc_pointer_Borange_DP23);
	};

    SUBCLASS(acc_pointer_Long_Borange,TAG_CLASS(acc_pointer_Borange))
    {
        model = "\OPTRE_Weapons\SMG\m7_laser.p3d";
        
        class ItemInfo: ItemInfo
        {
            class Pointer: Pointer
            {
                beamMaxLength = 2000;
                irLaserPos = "laser dir";
                irLaserEnd = "laser";
            };
        };

        MRT_SwitchItemNextClass = CLASS(acc_pointer_Long_Borange_IR);
		MRT_SwitchItemPrevClass = CLASS(acc_pointer_Long_Borange_IR);
    };
    SUBCLASS(acc_pointer_Long_Borange_IR,TAG_CLASS(acc_pointer_Borange_IR))
    {
        model = "\OPTRE_Weapons\SMG\m7_laser.p3d";

        class ItemInfo: ItemInfo
        {
            class Pointer: Pointer
            {
                beamMaxLength = 2000;
                irLaserPos = "laser dir";
                irLaserEnd = "laser";
            };
        };

        MRT_SwitchItemNextClass = CLASS(acc_pointer_Long_Borange);
        MRT_SwitchItemPrevClass = CLASS(acc_pointer_Long_Borange);
    };

	SUBCLASS(acc_pointer_Borange_Firepuncher,TAG_CLASS(acc_pointer_Long_Borange))
	{
		model = "\OPTRE_Weapons\Shotgun\flashlight.p3d";

		class ItemInfo: ItemInfo
		{
			class Pointer: Pointer
			{
				irLaserPos = "flash dir";
				irLaserEnd = "flash";
			};
		};

		MRT_SwitchItemNextClass = CLASS(acc_pointer_Borange_Firepuncher_IR);
        MRT_SwitchItemPrevClass = CLASS(acc_pointer_Borange_Firepuncher_IR);
	};
	SUBCLASS(acc_pointer_Borange_Firepuncher_IR,TAG_CLASS(acc_pointer_Long_Borange_IR))
	{
		model = "\OPTRE_Weapons\Shotgun\flashlight.p3d";

		class ItemInfo: ItemInfo
		{
			class Pointer: Pointer
			{
				irLaserPos = "flash dir";
				irLaserEnd = "flash";
			};
		};

		MRT_SwitchItemNextClass = CLASS(acc_pointer_Borange_Firepuncher);
        MRT_SwitchItemPrevClass = CLASS(acc_pointer_Borange_Firepuncher);
    };

	NEW_CLASS(acc_flashlight): JLTS_Glocko_flashlight
	{
		author = "Anorexican";
		displayName = TAG_NAME(DC-Series Flashlight);
	};

    SUBCLASS(hgun_DC17SA_F,JLTS_DC17SA)
    {
		displayName = TAG_NAME(DC-17SA Blaster Pistol);
		author = "Anorexican";
		baseWeapon = CLASS(hgun_DC17SA_F);
		recoil = "3AS_recoil_dc15a";
		hiddenSelectionsTextures[] = { QPATHTOF(data\dc17sa\hgun_dc17sa_co.paa) };
		magazines[] = { CLASS(24Rnd_EC30_Mag_F) };
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
		class Single: Single
		{
			reloadTime = "60 / 500";
			dispersion = "(3.0 / 3.4377) / 1000";
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
			class StandardSound: StandardSound
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
			dispersion = "(3.3 / 3.4377) / 1000";
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
					CLASS(acc_pointer_Short_Borange),
					CLASS(acc_pointer_Short_Borange_IR),
					CLASS(acc_flashlight)
				};
			};
		};
    };

	SUBCLASS(arifle_DC15A_F,71st_DC15A)
	{
		displayName = TAG_NAME(DC-15A Blaster Rifle);
		author = "Krinix & Anorexican";
		baseWeapon = CLASS(arifle_DC15A_F);
		recoil = "recoil_MSBS65";
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
		displayName = TAG_NAME(DC-15A Blaster Rifle (UGL));
		author = "Krinix & Anorexican";
		baseWeapon = CLASS(arifle_DC15A_UGL_F);
		recoil = "recoil_MSBS65";
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
		displayName = TAG_NAME(DC-15S Blaster Carbine);
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
					0.785,
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
					0.785,
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
		displayName = TAG_NAME(DC-15LE Blaster Rifle);
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
			sounds[]=
			{
				"StandardSound"
			};
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
		displayName = TAG_NAME(DC-15X Precision Blaster);
		author = "Krinix & Anorexican";
		baseWeapon = CLASS(srifle_DC15X_F);
		recoil = "recoil_MSBS65";
		magazines[] = { CLASS(15Rnd_EC80_Mag_F) };
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
			dispersion = "(0.4 / 3.4377) / 1000";
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15x.wss),
					3.35,
					0.8,
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
				compatibleItems[] = { CLASS(optic_Holo), CLASS(optic_DC15X_scope) };
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] += {
					CLASS(acc_pointer_Long_Borange),
					CLASS(acc_pointer_Long_Borange_IR)
				};
			};
		};
	};
	
	SUBCLASS(arifle_WestarM5_F,3AS_WestarM5_F)
	{
		displayName = TAG_NAME(Westar M5 Blaster Carbine);
		author = "Anorexican";
		baseWeapon = CLASS(arifle_WestarM5_F);
		recoil = "recoil_MSBS65";
		magazines[] = { CLASS(60Rnd_EC40_Mag_F) };
		class FullAuto: FullAuto
		{
			reloadTime = "60 / 500";
			dispersion = "(1.4 / 3.4377) / 1000";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound: BaseSoundModeType
			{
				soundContinuous = 1;
				weaponSoundEffect = "";
				begin1[]=
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					3,
					1,
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
			reloadTime = "60 / 650";
			dispersion = "(1.3 / 3.4377) / 1000";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					3,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Single: Single
		{
			reloadTime = "60 / 700";
			dispersion = "(1.2 / 3.4377) / 1000";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					3,
					1,
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
			mass = 65;
		};
	};
	
	SUBCLASS(arifle_WestarM5_UGL_F,3AS_WestarM5_GL)
	{
		displayName = TAG_NAME(Westar M5 Blaster Carbine (UGL));
		author = "Anorexican";
		baseWeapon = CLASS(arifle_WestarM5_UGL_F);
		recoil = "recoil_MSBS65";
		magazines[] = { CLASS(60Rnd_EC40_Mag_F) };
		modes[] = { "Single", "Burst", "FullAuto" };
		class FullAuto: FullAuto
		{
			reloadTime = "60 / 500";
			dispersion = "(1.4 / 3.4377) / 1000";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound: BaseSoundModeType
			{
				soundContinuous = 1;
				weaponSoundEffect = "";
				begin1[]=
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					3,
					1,
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
			reloadTime = "60 / 650";
			dispersion = "(1.3 / 3.4377) / 1000";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					3,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Single: Single
		{
			reloadTime = "60 / 700";
			dispersion = "(1.2 / 3.4377) / 1000";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					3,
					1,
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
			mass = 70;
		};
	};

	SUBCLASS(arifle_DC15C_F,3AS_DC15C_F)
	{
		displayName = TAG_NAME(DC-15C Blaster Carbine);
		author = "Anorexican";
		baseWeapon = CLASS(arifle_DC15C_F);
		recoil = "recoil_trg21";
		magazines[] = { CLASS(36Rnd_EC50_Mag_F) };
		modes[] = { "Single", "Burst" };
		class Burst: Mode_Burst
		{
			burst = 2;
			reloadTime = "60 / 500";
			dispersion = "(1.6 / 3.4377) / 1000";
			textureType = "dual";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					"\Aux501\Weapons\Republic\DC15A\sounds\dc15a_shot.wss",
					2.25,
					1.2,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Single: Single
		{
			reloadTime = "60 / 700";
			dispersion = "(1.4 / 3.4377) / 1000";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					"\Aux501\Weapons\Republic\DC15A\sounds\dc15a_shot.wss",
					2.25,
					1.2,
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
			mass = 70;
		};
	};

	SUBCLASS(arifle_DC15C_UGL_F,3AS_DC15C_GL)
	{
		displayName = TAG_NAME(DC-15C Blaster Carbine (UGL));
		author = "Anorexican";
		baseWeapon = CLASS(arifle_DC15C_UGL_F);
		recoil = "recoil_trg21";
		magazines[] = { CLASS(36Rnd_EC50_Mag_F) };
		modes[] = { "Single", "Burst" };
		class Burst: Mode_Burst
		{
			burst = 2;
			reloadTime = "60 / 500";
			dispersion = "(1.6 / 3.4377) / 1000";
			textureType = "dual";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					"\Aux501\Weapons\Republic\DC15A\sounds\dc15a_shot.wss",
					2.25,
					1.25,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Single: Single
		{
			reloadTime = "60 / 700";
			dispersion = "(1.4 / 3.4377) / 1000";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					"\Aux501\Weapons\Republic\DC15A\sounds\dc15a_shot.wss",
					2.25,
					1.25,
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
			mass = 85;
		};
	};

	SUBCLASS(arifle_DC17M_F,3AS_DC17M_F)
	{
		displayName = TAG_NAME(DC-17M Blaster Platform);
		author = "Anorexican";
		baseWeapon = CLASS(arifle_DC17M_F);
		recoil = "recoil_MSBS65";
		magazines[] = { CLASS(100Rnd_EC40_Mag_F), CLASS(5Rnd_EC80_Mag_F), CLASS(1Rnd_ECX1000_Mag_F) };
		modes[] = { "Single", "Burst", "FullAuto" };
		class FullAuto: FullAuto
		{
			reloadTime = "60 / 600";
			dispersion = "(1.4 / 3.4377) / 1000";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound: BaseSoundModeType
			{
				soundContinuous = 1;
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dw32s.wss),
					3,
					1.5,
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
			reloadTime = "60 / 750";
			dispersion = "(1.3 / 3.4377) / 1000";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dw32s.wss),
					3,
					1.5,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Single: Single
		{
			reloadTime = "60 / 700";
			dispersion = "(1.2 / 3.4377) / 1000";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dw32s.wss),
					3,
					1.5,
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
			mass = 70;
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					CLASS(acc_pointer_Borange_DC17M),
					CLASS(acc_pointer_Borange_DC17M_IR),
				};
			};
		};
	};

	SUBCLASS(arifle_DC15L_F,3AS_DC15L_F)
	{
		displayName = TAG_NAME(DC-15L Dual-Purpose Blaster);
		author = "Anorexican";
		baseWeapon = CLASS(arifle_DC15L_F);
		recoil = "recoil_MSBS65";
		magazines[] = { CLASS(60Rnd_EC40_Mag_F) };
		modes[] = { "Single", "Burst" };
		muzzles[] = { "this", "AntiTank" };
		class Burst: Mode_Burst
		{
			burst = 5;
			reloadTime = "60 / 650";
			dispersion = "(1.3 / 3.4377) / 1000";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15l.wss),
					3,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = "60 / 700";
			dispersion = "(1.2 / 3.4377) / 1000";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15l.wss),
					3,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class AntiTank: Rifle_Base_F
		{
			displayName = "Anti-Tank Mode";
			discreteDistance[] = { 100 };
			discreteDistanceInitIndex = 0;
			drySound[] = { "\3AS\3AS_Main\Sounds\Blaster_empty", 2, 1, 20 };
			magazines[] = { CLASS(1Rnd_ECX130_Mag_F) };
			maxZeroing = 100;
			modes[] = { "Single" };
			reloadAction = "GestureReloadMX";
			reloadMagazineSound[] = { "\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss", 1, 1, 30 };
			class Single: Mode_SemiAuto
			{
				reloadTime = "60 / 60";
				dispersion = "(2.0 / 3.4377) / 1000";
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound: BaseSoundModeType
				{
					weaponSoundEffect = "";
					begin1[]=
					{
						QPATHTOF(data\sounds\valken_38x.wss),
						15,
						0.65,
						2250
					};
					soundBegin[]=
					{
						"begin1",
						1
					};
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 135;
		};
	};

	SUBCLASS(sgun_DP23_F,JLTS_DP23)
	{
		displayName = TAG_NAME(DP-23 CQC Blaster);
		author = "Anorexican";
		baseWeapon = CLASS(sgun_DP23_F);
		muzzles[] = { "this", CLASS(Blaster_F) };
		magazines[] = { CLASS(15Rnd_EC20_Mag_F) };
		drySound[] = { "\3AS\3AS_Main\Sounds\Blaster_empty", 2, 1, 20 };
		reloadMagazineSound[] = { "\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss", 1, 1, 30 };
		class Single: Single
		{
			reloadTime = "60 / 120";
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dp23.wss),
					6.5,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		SUBCLASS(Blaster_F,UGL_F)
		{
			displayName = "Blaster Mode";
			displayNameShort = "Blaster";
			muzzlePos = "usti hlavne";
			muzzleEnd = "konec hlavne";
			cursor = "";
			useModelOptics = 0;
			useExternalOptic = 1;
			magazineWell[] = {};
			magazines[] = { CLASS(30Rnd_EC50_Mag_F) };
			cameraDir = "eye";
			memoryPointCamera = "";
			discreteDistance[] = {100};
			discreteDistanceCameraPoint[]=
			{
				"eye"
			};
			discreteDistanceInitIndex = 0;
			initSpeed = -1;
			recoil = "recoil_akm";
			recoilProne = "assaultRifleBase";
			sounds[]=
			{
				"StandardSound"
			};
			class Single: Mode_SemiAuto
			{
				reloadTime = "60 / 365";
				dispersion = "(2 / 3.4377) / 1000";
				recoil = "recoil_single_primary_3outof10";
				recoilProne = "recoil_single_primary_prone_3outof10";
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[]=
					{
						QPATHTOF(data\sounds\dp23_rfl.wss),
						2,
						0.825,
						200
					};
					soundBegin[]=
					{
						"begin1",
						1
					};
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 70;
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = { CLASS(optic_Holo) };
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[]=
				{
					CLASS(acc_pointer_Borange_DP23),
					CLASS(acc_pointer_Borange_DP23_IR)
				};
			};
		};
	};

	SUBCLASS(srifle_DW32S_F,JLTS_DW32S)
	{
		mass = 70;
		displayName = TAG_NAME(DW-32S Blaster Rifle);
		author = "Anorexican";
		baseWeapon = CLASS(srifle_DW32S_F);
		recoil = "recoil_MSBS65";
		magazines[] = { CLASS(21Rnd_EC60_Mag_F) };
		class Single: Mode_SemiAuto
		{
			reloadTime = "60 / 250";
			dispersion = "(0.75 / 3.4377) / 1000";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dw32s.wss),
					2.5,
					0.875,
					250
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
			mass = 85;
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{ 
					CLASS(acc_pointer_Long_Borange),
					CLASS(acc_pointer_Long_Borange_IR)
				};
			};
		};
	};

	SUBCLASS(srifle_Firepuncher_F,k_773_rifle)
	{
		displayName = TAG_NAME(Firepuncher Precision Blaster);
		author = "Anorexican";
		baseWeapon = CLASS(srifle_Firepuncher_F);
		recoil = "recoil_MSBS65";
		magazines[] = { CLASS(15Rnd_EC80_Mag_F) };
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};
		class Single: Single
		{
			reloadTime = "60 / 250";
			dispersion = "(0.5 / 3.4377) / 1000";
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\firepuncher.wss),
					2.5,
					0.9,
					250
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\firepuncher_spr.wss),
					2.5,
					0.825,
					250
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
			mass = 85;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					CLASS(optic_Firepuncher_scope),
					CLASS(optic_Firepuncher_scope_off)
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{ 
					CLASS(acc_pointer_Borange_Firepuncher),
					CLASS(acc_pointer_Borange_Firepuncher_IR)
				};
			};
		};
	};
};