/*
    KP LIBERATION MODULE FUNCTIONS

    File: functions.hpp
    Author: KP Liberation Dev Team - https://github.com/KillahPotatoes
    Date: 2019-06-09
    Last Update: 2019-06-13
    License: GNU General Public License v3.0 - https://www.gnu.org/licenses/gpl-3.0.html

    Description:
        Defines for all functions, which are brought by this module.
*/

class cratefiller {
    file = "modules\27_mission\fnc";

    // Module post initialization
    class mission_postInit {
        postInit = 1;
    };

    // Module pre initialization
    class mission_preInit {
        preInit = 1;
    };

    // Registers a mission for the usage as event or "buyable" sidemission
    class mission_registerMission {};

    // Starts the given mission or selects one from the given array
    class mission_startMission {};

};
