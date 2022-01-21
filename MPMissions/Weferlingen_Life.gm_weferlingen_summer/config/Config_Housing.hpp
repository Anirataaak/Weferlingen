#define true 1
#define false 0

/*
    price - Cost of the building
    numberCrates - Allowed number of crates
    restrictedPos[] - Same as the old fn_getBuildingPositions. A list of restricted building positions (i.e, to stop spawning outside, or by windows etc)
        default: {}
    canGarage - True if the building can be used as a garage (need to buy ontop)
        default: false
    garageSpawnPos[] - worldToModel position to spawn vehicles, leave {} if canGarage is false.
        default: {}
    garageSpawnDir - Offset to garage direction to spawn at (+-90 etc). It will be used in the manner: getDir _garage + spawnDir
        default: 0
    garageBlacklists[] - List of blacklisted houses for buying garages
        default: {}
*/

class Housing {
  
    class gm_weferlingen_summer {

        class land_gm_euro_house_05_e {
            price = 1550000;
            numberCrates = 8;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };
        
        class land_gm_euro_house_05_w : land_gm_euro_house_05_e{};
        class land_gm_euro_house_05_d : land_gm_euro_house_05_e{};
    };
};
