class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
        serverInit = QUOTE(call FUNC(init));
        clientInit = QUOTE(call FUNC(clientInit));
    };
};

class Extended_FiredBIS_EventHandlers {
	class ADDON {
		server_fired_eh = QUOTE(_this call FUNC(adjustGrenadePhysics));
	};
};