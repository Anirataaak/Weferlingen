/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 3250, "" },
            { "hgun_Pistol_01_F", "", 7000, 3500, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 9850, 4925, "" },
            { "hgun_ACPC2_F", "", 11500, 5750, "" },
            { "SMG_05_F", "", 18000, 9000, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 20000, 10000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 250, 125, "" } //Apex DLC
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 1000, 500, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "arifle_TRG20_F", "", 25000, 12500, "" },
            { "arifle_Katiba_F", "", 30000, 15000, "" },
            { "srifle_DMR_01_F", "", 50000, 25000, "" },
            { "arifle_SDAR_F", "", 20000, 10000, "" },
            { "arifle_AK12_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKS_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKM_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 33000, 16500, "" }, //Apex DLC
            { "arifle_CTAR_blk_F", "", 30000, 15000, "" } //Apex DLC
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300, 150, "" },
            { "30Rnd_762x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, 140, "" },
            { "10Rnd_762x54_Mag", "", 500, 250, "" },
            { "20Rnd_556x45_UW_mag", "", 125, 60, "" },
            { "30Rnd_580x42_Mag_F", "", 125, 60, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Holosight", "", 3600, 1800, "" },
            { "optic_Hamr", "", 7500, 3750, "" },
            { "acc_flashlight", "", 1000, 500, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, 1250, "" },
            { "hgun_ACPC2_F", "", 4500, 2250, "" },
            { "hgun_PDW2000_F", "", 9500, 4750, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 500, 250, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 75, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "gm_g3a3_oli", "G3A3 (Olive)", 100, 100, "" },
            { "gm_g3a3_grn", "G3A3 (Green)", 100, 100, "" },
            { "gm_g3a3_des", "G3A3 (Des)", 100, 100, "" },
            { "gm_g3a3_blk", "G3A3 (Black)", 100, 100, "" },
            { "gm_g3a3_dmr", "", 100, 50, "" },
            { "gm_g3a3_dmr", "", 100, 50, "" },
            { "gm_g3a3_dmr", "", 100, 50, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 1700, 850, "" },
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 2000, 1000, "" },
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 20000, 10000, "" },
            { "hgun_P07_F", "", 7500, 3750, "" },
            { "hgun_P07_khk_F", "", 7500, 3750, "" }, //Apex DLC
            { "hgun_Pistol_heavy_01_F", "", 9500, 4750, "call life_coplevel >= 1" },
            { "SMG_02_ACO_F", "", 30000, 15000, "call life_coplevel >= 2" },
            { "arifle_MX_F", "", 35000, 17500, "call life_coplevel >= 2" },
            { "hgun_ACPC2_F", "", 17500, 8750, "call life_coplevel >= 3" },
            { "arifle_MXC_F", "", 30000, 15000, "call life_coplevel >= 3" },
            { "srifle_DMR_07_blk_F", "", 32000, 16000, "call life_coplevel >= 3" } //Apex DLC Sniper
        };
        mags[] = {
            { "gm_20rnd_762x51mm_b_t_dm21_g3_blk", "", 10, 10, "" },
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 125, 60, "" },
            { "11Rnd_45ACP_Mag", "", 130, 65, "call life_coplevel >= 1" },
            { "30Rnd_65x39_caseless_mag", "", 130, 65, "call life_coplevel >= 2" },
            { "30Rnd_9x21_Mag", "", 250, 125, "call life_coplevel >= 2" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "call life_coplevel >= 3" },
            { "20Rnd_650x39_Cased_Mag_F", "", 200, 100, "call life_coplevel >= 3" } //Apex DLC
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, 325, "" },
            { "optic_MRD", "", 2750, 1375, "call life_coplevel >= 1" },
            { "acc_flashlight_pistol", "", 250, 125, "call life_coplevel >= 1" },//Pistol Flashlight
            { "acc_flashlight", "", 750, 375, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 1200, 600, "call life_coplevel >= 2" },
            { "optic_Arco", "", 2500, 1250, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 2750, 1375, "call life_coplevel >= 2" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 1200, 600, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class test_center {
        name = "Weferlingen Testcenter Waffen";
        side = "";
        conditions = "";
        items[] = {
            { "gm_g3a3_oli", "G3A3 (Olive)", 100, 100, "" },
            { "gm_g3a3_grn", "G3A3 (Green)", 100, 100, "" },
            { "gm_g3a3_des", "G3A3 (Tan)", 100, 100, "" },
            { "gm_g3a3_blk", "G3A3 (Black)", 100, 100, "" },
            { "gm_g3a3_dmr_oli", "G3A3 DMR (Olive)", 100, 100, "" },
            { "gm_g3a3_dmr_des", "G3A3 DMR (Tan)", 100, 100, "" },
            { "gm_g3a3_dmr_blk", "G3A3 DMR (Black)", 100, 100, "" },
            { "gm_g3a4_oli", "G3A4 (Olive)", 100, 100, "" },
            { "gm_g3a4_grn", "G3A4 (Green)", 100, 100, "" },
            { "gm_g3a4_des", "G3A4 (Tan)", 100, 100, "" },
            { "gm_g3a4_blk", "G3A4 (Black)", 100, 100, "" },
            { "gm_g3a4_ebr_oli", "G3A4 EBR (Olive)", 100, 100, "" },
            { "gm_g3a4_ebr_des", "G3A4 EBR (Tan)", 100, 100, "" },
            { "gm_g3a4_ebr_blk", "G3A4 EBR (Black)", 100, 100, "" },
            { "gm_g36a1_blk", "G36A1 (Black)", 100, 100, "" },
            { "gm_g36a1_des", "G36A1 (Tan)", 100, 100, "" },
            { "gm_g36e_blk", "G36E (Black)", 100, 100, "" },
            { "gm_m16a1_blk", "M16A1 (Black)", 100, 100, "" },
            { "gm_m16a2_blk", "M16A2 (Black)", 100, 100, "" },
            { "gm_c7a1_oli", "C7A1 (Olive)", 100, 100, "" },
            { "gm_c7a1_grn", "C7A1 (Green)", 100, 100, "" },
            { "gm_c7a1_blk", "C7A1 (Black)", 100, 100, "" },
            { "gm_hmgpkm_prp", "HMG PKM (Plum)", 100, 100, "" },
            { "gm_lmgrpk74n_prp", "LMG RPK-74 (Plum)", 100, 100, "" },
            { "gm_lmgrpk74n_brn", "LMG RPK-74 (Brown)", 100, 100, "" },
            { "gm_lmgrpk_prp", "LMG RPK (Plum)", 100, 100, "" },
            { "gm_lmgrpk_brn", "LMG RPK (Brown)", 100, 100, "" },
            { "gm_rpk_wud", "RPK (Wood)", 100, 100, "" },
            { "gm_lp1_blk", "LP1 Flare Gun (Black)", 100, 100, "" },
            { "gm_mg3_blk", "MG3 (Black)", 100, 100, "" },
            { "gm_mg3_des", "MG3 (Tan)", 100, 100, "" },
            { "gm_mp2a1_blk", "MP2A1 (Black)", 100, 100, "" },
            { "gm_mp5a2_blk", "SG5A2 (Black)", 100, 100, "" },
            { "gm_mp5a3_blk", "SG5A3 (Black)", 100, 100, "" },
            { "gm_mp5sd2_blk", "SG5SD2 (Black)", 100, 100, "" },
            { "gm_mp5sd3_blk", "SG5SD3 (Black)", 100, 100, "" },
            { "gm_mpiak74n_brn", "MPi AK-74 (Brown)", 100, 100, "" },
            { "gm_mpiak74n_prp", "MPi AK-74 (Plum)", 100, 100, "" },
            { "gm_mpiaks74nk_brn", "MPi AKS-74K (Brown)", 100, 100, "" },
            { "gm_mpiaks74nk_prp", "MPi AKS-74K (Plum)", 100, 100, "" },
            { "gm_mpiaks74n_brn", "MPi AKS-74 (Brown)", 100, 100, "" },
            { "gm_mpiaks74n_prp", "MPi AKS-74 (Plum)", 100, 100, "" },
            { "gm_mpikm72_brn", "MPi KM-72 (Brown)", 100, 100, "" },
            { "gm_mpikm72_prp", "MPi KM-72 (Plum)", 100, 100, "" },
            { "gm_akm_wud", "AKM (Wood)", 100, 100, "" },
            { "gm_akm_pallad_wud", "AKM with Pallad (Wood)", 100, 100, "" },
            { "gm_akmn_wud", "AKMN (Wood)", 100, 100, "" },
            { "gm_mpikms72_brn", "MPi KMS-72 (Brown)", 100, 100, "" },
            { "gm_mpikms72_prp", "MPi KMS-72 (Plum)", 100, 100, "" },
            { "gm_svd_wud", "SVD (Wood)", 100, 100, "" },
            { "gm_pm63_blk", "PM-63 (Black)", 100, 100, "" },
            { "gm_p1_blk", "P1 (Black)", 100, 100, "" },
            { "gm_p2a1_blk", "P2A1 Flare Gun (Black)", 100, 100, "" },
            { "gm_pm_blk", "PM (Black)", 100, 100, "" },
            { "gm_hk69a1_blk", "HK 69A (Black)", 100, 100, "" },
            { "gm_pallad_d_brn", "Pallad-D (Brown)", 100, 100, "" },
            { "gm_pzf44_2_oli", "PzF44-2 (Olive)", 100, 100, "" },
            { "gm_pzf44_2_des", "PzF44-2 (Tan)", 100, 100, "" },
            { "gm_pzf44_2_win", "PzF44-2 (Winter)", 100, 100, "" },
            { "gm_m72a3_oli", "M72A3 (Olive)", 100, 100, "" },
            { "gm_pzf84_oli", "PzF84 (Olive)", 100, 100, "" },
            { "gm_pzf84_des", "PzF84 (Tan)", 100, 100, "" },
            { "gm_pzf84_win", "PzF84 (Winter)", 100, 100, "" },
            { "gm_pzf3_blk", "PzF3 (Black)", 100, 100, "" },
            { "gm_rpg7_prp", "RPG-7 (Plum)", 100, 100, "" },
            { "gm_rpg7_wud", "RPG-7 (Wood)", 100, 100, "" },
            { "gm_9k32m_oli", "9K32M Strela-2 (Olive)", 100, 100, "" },
            { "gm_fim43_oli", "FIM-43 Redeye (Olive)", 100, 100, "" }
        };
        mags[] = {
            { "gm_20rnd_762x51mm_b_t_dm21_g3_blk", "20Rnd 7,62x51mm", 100, 100, "" },
            { "gm_30Rnd_556x45mm_b_dm11_g36_blk", "30Rnd 5,56x45mm", 100, 100, "" },
            { "gm_20Rnd_556x45mm_b_M855_stanag_gry", "20Rnd 5,56x45mm", 100, 100, "" },
            { "gm_100rnd_762x54mm_b_t_t46_pk_grn", "100Rnd 7,62x54mm", 100, 100, "" },
            { "gm_45rnd_545x39mm_b_7n6_ak74_prp", "45Rnd 5,45x39mm", 100, 100, "" },
            { "gm_75rnd_762x39mm_b_m43_ak47_blk", "75Rnd 7,62x39mm", 100, 100, "" },
            { "gm_1Rnd_265mm_flare_single_wht_gc", "1Rnd 265mm Flare White", 100, 100, "" },
            { "gm_120rnd_762x51mm_b_t_dm21_mg3_grn", "120Rnd 7,62x51mm", 100, 100, "" },
            { "gm_32rnd_9x19mm_b_dm51_mp2_blk", "32Rnd 9x19mm", 100, 100, "" },
            { "gm_30rnd_9x19mm_b_dm51_mp5_blk", "30Rnd 9x19mm", 100, 100, "" },
            { "gm_30rnd_545x39mm_b_7n6_ak74_prp", "30Rnd 5,45x39mm", 100, 100, "" },
            { "gm_30rnd_762x39mm_b_m43_ak47_blk", "30Rnd 7,62x39mm", 100, 100, "" },
            { "gm_10Rnd_762x54mmR_ap_7n1_svd_blk", "10Rnd 7,62x54mm", 100, 100, "" },
            { "gm_25Rnd_9x18mm_b_pst_pm63_blk", "25Rnd 9x18mm", 100, 100, "" },
            { "gm_8rnd_9x19mm_b_dm11_p1_blk", "8Rnd 9x19mm", 100, 100, "" },
            { "gm_8rnd_9x18mm_b_pst_pm_blk", "8Rnd 9x18mm", 100, 100, "" },
            { "1Rnd_HE_Grenade_shell", "1Rnd High Explosive Grenade", 100, 100, "" },
            { "gm_1rnd_44x537mm_heat_dm32_pzf44_2", "1Rnd Heat Grenade", 100, 100, "" },
            { "gm_1Rnd_66mm_heat_m72a3", "1Rnd 66mm Heat Grenade", 100, 100, "" },
            { "gm_1rnd_84x245mm_heat_t_dm12_carlgustaf", "1Rnd 84x245mm Heat Grenade", 100, 100, "" },
            { "gm_1Rnd_60mm_heat_dm12_pzf3", "1Rnd 60mm Heat Grenade", 100, 100, "" },
            { "gm_1rnd_40mm_heat_pg7v_rpg7", "1Rnd 40mm Heat Grenade", 100, 100, "" },
            { "gm_1Rnd_72mm_he_9m32m", "1Rnd 72mm High Explosive Grenade", 100, 100, "" },
            { "gm_1Rnd_70mm_he_m585_fim43", "1Rnd 70mm High Explosive Grenade", 100, 100, "" }
        };
        accs[] = {
            { "gm_feroz24_blk", "Fero Z-24", 100, 100, "" },
            { "gm_c79a1_blk", "C79A1", 100, 100, "" },
            { "gm_pso1_gry", "PSO-1", 100, 100, "" },
            { "gm_zfk4x25_blk", "ZFK 4x25", 100, 100, "" },
            { "gm_feroz2x17_pzf44_2_blk", "Fero Z 2x17", 100, 100, "" },
            { "gm_feroz2x17_pzf84_blk", "Fero Z 2x17", 100, 100, "" },
            { "gm_pgo7v_blk", "PGO-7V", 100, 100, "" },
            { "gm_suppressor_safloryt_blk", "Silencer Safloryt", 100, 100, "" }
        };
    };

    class test_center_gs {
        name = "Weferlingen Testcenter General Store";
        side = "";
        conditions = "";
        items[] = {
            { "gm_gc_army_gauzeBandage", "Gauze Bandage", 100, 100, "" },
            { "gm_gc_army_medkit", "Personal Medkit", 100, 100, "" },
            { "gm_gc_compass_f73", "F73", 100, 100, "" },
            { "gm_ge_army_burnBandage", "Burn Bandage", 100, 100, "" },
            { "gm_ge_army_conat2", "Conat", 100, 100, "" },
            { "gm_ge_army_gauzeBandage", "Burn Bandage", 100, 100, "" },
            { "gm_ge_army_gauzeCompress", "Gauze Bandage", 100, 100, "" },
            { "gm_ge_army_medkit_80", "Medkit", 100, 100, "" },
            { "gm_repairkit_01", "Toolkit", 100, 100, "" },
            { "gm_df7x40_blk", "DF7X40", 100, 100, "" },
            { "gm_ferod16_oli", "FeroD-16 (Olive)", 100, 100, "" },
            { "gm_ferod16_des", "FeroD-16 (Tan)", 100, 100, "" },
            { "gm_ferod16_win", "FeroD-16 (Winter)", 100, 100, "" },
            { "gm_watch_kosei_80", "Kosei 80", 100, 100, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
