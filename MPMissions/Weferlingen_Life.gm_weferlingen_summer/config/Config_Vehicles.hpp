class CarShops {

    class civ_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "gm_xx_civ_bicycle_01", "" },
            { "gm_ge_army_k125", "" },
            { "gm_gc_civ_p601", "" },
            { "gm_gc_dp_p601", "" },
            { "gm_ge_civ_typ1200", "" },
            { "gm_ge_dbp_typ1200", "" }
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "gm_ge_army_u1300l_cargo", "" },
            { "gm_ge_army_u1300l_container", "" },
            { "gm_gc_army_ural4320_cargo", "" },
            { "gm_gc_army_ural44202", "" },
            { "gm_ge_army_kat1_451_cargo", "" },
            { "gm_ge_army_kat1_451_container", "" },
            { "gm_ge_army_kat1_452_container", "" },
            { "gm_ge_army_kat1_454_cargo", "" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "" },
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "C_Plane_Civil_01_F", "" } //Apex DLC
        };
    };

    class reb_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "B_G_Offroad_01_F", "" },
            { "O_MRAP_02_F", "" },
            { "B_Heli_Light_01_stripped_F", "" },
            { "B_G_Offroad_01_armed_F", "" },
            { "O_T_LSV_02_unarmed_F", "" } //Apex DLC
        };
    };

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "gm_gc_ff_p601", "" },
            { "gm_ge_ff_typ1200", "" },
            { "gm_ge_ff_u1300l_firefighter", "" },
            { "gm_ge_army_u1300l_firefighter", "" }
        };
    };

    class med_air_hs {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" }
        };
    };

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "gm_gc_pol_p601", "" },
            { "gm_gc_army_p601", "" },
            { "gm_ge_pol_typ1200", "" },
            { "gm_gc_army_uaz469_cargo", "" },
            { "gm_ge_army_iltis_cargo", "" }
        };
    };

    class cop_air {
        side = "cop";
        conditions = "call life_coplevel >= 3";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "B_Heli_Transport_01_F", "call life_coplevel >= 4" }
        };
    };
};

class LifeCfgVehicles {

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class gm_gc_civ_p601 {
        vItemSpace = 60;
        conditions = "";
        price = 12500;
        textures[] = {};
    };

    class gm_gc_dp_p601 {
        vItemSpace = 60;
        conditions = "";
        price = 12500;
        textures[] = {};
    };

    class gm_ge_civ_typ1200 {
        vItemSpace = 60;
        conditions = "";
        price = 12500;
        textures[] = {};
    };

    class gm_ge_dbp_typ1200 {
        vItemSpace = 60;
        conditions = "";
        price = 12500;
        textures[] = {};
    };

    class gm_ge_army_k125 {
        vItemSpace = 40;
        conditions = "";
        price = 8000;
        textures[] = {};
    };

    class gm_xx_civ_bicycle_01 {
        vItemSpace = 15;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

    class gm_ge_army_u1300l_cargo {
        vItemSpace = 200;
        conditions = "";
        price = 80000;
        textures[] = {};
    };

    class gm_ge_army_u1300l_container {
        vItemSpace = 240;
        conditions = "";
        price = 100000;
        textures[] = {};
    };

    class gm_gc_army_ural4320_cargo {
        vItemSpace = 600;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

    class gm_gc_army_ural4320_reammo {
        vItemSpace = 600;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

    class gm_gc_army_ural4320_repair {
        vItemSpace = 600;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

    class gm_gc_army_ural375d_medic {
        vItemSpace = 600;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

    class gm_gc_army_ural375d_refuel {
        vItemSpace = 600;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

    class gm_gc_army_ural44202 {
        vItemSpace = 300;
        conditions = "";
        price = 125000;
        textures[] = {};
    };

    class gm_ge_army_kat1_451_cargo {
        vItemSpace = 700;
        conditions = "";
        price = 350000;
        textures[] = {};
    };

    class gm_ge_army_kat1_451_container {
        vItemSpace = 800;
        conditions = "";
        price = 400000;
        textures[] = {};
    };

    class gm_ge_army_kat1_452_container {
        vItemSpace = 1000;
        conditions = "";
        price = 600000;
        textures[] = {};
    };

    class gm_ge_army_kat1_454_cargo {
        vItemSpace = 1600;
        conditions = "";
        price = 700000;
        textures[] = {};
    };

    class gm_gc_pol_p601 {
        vItemSpace = 60;
        conditions = "";
        price = 12500;
        textures[] = {};
    };

    class gm_gc_army_p601 {
        vItemSpace = 60;
        conditions = "";
        price = 12500;
        textures[] = {};
    };

    class gm_ge_pol_typ1200 {
        vItemSpace = 60;
        conditions = "";
        price = 12500;
        textures[] = {};
    };

    class gm_gc_army_uaz469_cargo {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class gm_ge_army_iltis_cargo {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class gm_gc_ff_p601 {
        vItemSpace = 60;
        conditions = "";
        price = 12500;
        textures[] = {};
    };

    class gm_ge_ff_typ1200 {
        vItemSpace = 60;
        conditions = "";
        price = 12500;
        textures[] = {};
    };

    class gm_ge_ff_u1300l_firefighter {
        vItemSpace = 300;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class gm_ge_army_u1300l_firefighter {
        vItemSpace = 250;
        conditions = "";
        price = 32500;
        textures[] = {};
    };
};
