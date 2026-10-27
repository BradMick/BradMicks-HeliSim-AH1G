class CfgPatches
{
    class bmkhs_ah1g_helisim
    {
        units[] = {};
        author = "BradMick";
        weapons[] = {};
        requiredVersion = 2.10;
        //HeliSim Core, and the AH-1G - this pack modifies its class, so it must load after it.
        //TODO(AH1G): loadorder_f_vietnam stands in for the SOG addon that defines vn_air_ah1g_01_base -
        //read it in game with configSourceAddonList (configFile >> "CfgVehicles" >> "vn_air_ah1g_01_base").
        requiredAddons[] = {"bmkhs_helisim", "loadorder_f_vietnam"};
        //The airframe this pack drives. Every AH-1G variant inherits from it (vn_b_air_ah1g_02 > vn_air_ah1g_02_base > here).
        bmkhsBaseClass   = "vn_air_ah1g_01_base";
        #include "version.hpp"
    };
};

#include "CfgFunctions.hpp"
#include "config\CfgEventHandlers.hpp"
#include "config\cfgVehicles.hpp"
