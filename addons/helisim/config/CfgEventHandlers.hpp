class Extended_PreInit_EventHandlers {
    class bmkhs_ah1g_helisim_preInit {
        init = "call compile preprocessFileLineNumbers 'bmkhs_ah1g_helisim\XEH_preInit.sqf';";
    };
};

//The pack starts itself. Nothing outside it calls in.
class Extended_Init_EventHandlers {
    class vn_air_ah1g_01_base {
        class bmkhs_ah1g_helisim_init_eh {
            init = "_this call bmkhs_ah1g_helisim_fnc_setup";
        };
    };
};

class Extended_GetIn_EventHandlers {
    class vn_air_ah1g_01_base {
        class bmkhs_ah1g_helisim_getin_eh {
            getIn = "_this call bmkhs_fnc_eventGetIn";
        };
    };
};
