/*
*    Format:
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*/
class CfgSpawnPoints {

     class gm_weferlingen_summer {
            class Civilian {
                class Weferlingen {
                    displayName = "Weferlingen";
                    spawnMarker = "civ_spawn_weferlinge";
                    icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                    conditions = "";
                };
                class Mariental {
                    displayName = "Testcenter";
                    spawnMarker = "civ_spawn_weferlingen";
                    icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                    conditions = "";
                };
            };

            class Cop {
                class Weferlingen {
                    displayName = "Volkspolizei Weferlingen";
                    spawnMarker = "cop_spawn_weferlinge";
                    icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
                    conditions = "";
                };

                class Mariental {
                    displayName = "Polizei Testcenter";
                    spawnMarker = "cop_spawn_weferlingen";
                    icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
                    conditions = "";
                };
            };

            class Medic {
                class Weferlingen {
                    displayName = "Deutsches Rotes Kreuz Weferlingen";
                    spawnMarker = "medic_spawn_weferlinge";
                    icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                    conditions = "";
                };

                class Mariental {
                    displayName = "Deutsches Rotes Kreuz Testcenter";
                    spawnMarker = "medic_spawn_weferlingen";
                    icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                    conditions = "";
                };
            };
     };
};
