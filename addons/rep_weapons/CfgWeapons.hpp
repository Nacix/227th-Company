class CfgWeapons
{
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

    class hgun_P07_F;
    class acc_pointer_IR;

    class JLTS_DC17SA: hgun_P07_F
    {
        class Single: Mode_SemiAuto
		{
			class StandardSound;
		};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class PointerSlot;
            class MuzzleSlot;
            class UnderBarrelSlot;
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
				irLaserPos = "laser pos"; // MemoryPosition for where our laser will point
				irLaserEnd = "laser dir"; // MemoryPosition for our laser's SOURCE (for some goofy reason; this isn't a mix-up)
				beamColor[] = {2000, 25, 100000}; // {R,G,B} value for our laser beam. These values also effect emissiveness, with higher numbers meaning higher brightness.
				dotColor[] = {665, 0.75, 2500}; // {R,G,B} value for our laser dot. The dot is cast when the laser hits a surface, and follows the same rules as beamColor[].
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
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
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
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
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

    SUBCLASS(hgun_DC17SA_F,JLTS_DC17SA)
    {
		displayName = TAG_NAME(DC-17SA);
		author = "Anorexican";
		baseWeapon = CLASS(hgun_DC17SA_F);
		hiddenSelectionsTextures[] = { QPATHTOF(data\dc17sa\hgun_dc17sa_co.paa) };
		magazines[] = { CLASS(21Rnd_EC30_mag) };
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};
		recoil = "recoil_pistol_signal";
		modes[]=
		{
			"Single",
			"Burst"
		};
		class Single
		{
			reloadTime = 0.12;
			dispersion = 0.0029;
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
			reloadTime = 0.08;
			dispersion = 0.0029;
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
};