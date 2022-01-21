/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Poloshirt_stripped", "", 125, "" },
            { "U_C_Poloshirt_redwhite", "", 150, "" },
            { "U_C_Poloshirt_salmon", "", 175, "" },
            { "U_C_Poloshirt_blue", "", 250, "" },
            { "U_C_Poloshirt_burgundy", "", 275, "" },
            { "U_C_Poloshirt_tricolour", "", 350, "" },
            { "U_C_Poor_2", "", 250, "" },
            { "U_IG_Guerilla2_2", "", 650, "" },
            { "U_IG_Guerilla3_1", "", 735, "" },
            { "U_OrestesBody", "", 1100, "" },
            { "U_IG_Guerilla2_3", "", 1200, "" },
            { "U_C_HunterBody_grn", "", 1500, "" },
            { "U_C_WorkerCoveralls", "", 2500, "" },
            { "U_NikosBody", "", 3000, "" },
            { "U_NikosAgedBody", $STR_C_Civ_Niko, 5000, "" },
            { "U_C_Man_casual_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_3_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_5_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_6_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_3_F", "", 5000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_surfer", "", 130, "" },
            { "H_Bandanna_khk", "", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Helmet_Skate", "", 150, "" }, //Apex DLC
            { "H_Bandanna_gry", "", 150, "" },
            { "H_Bandanna_sgg", "", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" },
            { "H_Booniehat_grn", "", 425, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_AssaultPack_tna_f", "", 2000, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_FieldPack_ghex_f", "", 5000, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Carryall_ghex_f", "", 7500, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 9500, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 9500, "" } //Apex DLC
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_Cop_uniforms, 25, "" },
            { "U_B_CombatUniform_mcam_tshirt", "", 350, "call life_coplevel >= 1" },
            { "U_B_CombatUniform_mcam_worn", "", 550, "call life_coplevel >= 2" },
            { "U_B_survival_uniform", "", 1250, "call life_coplevel >= 1" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_police", "", 25, "" },
            { "H_Booniehat_mcamo", "", 120, "call life_coplevel >= 1" },
            { "H_HelmetB_plain_mcamo", "", 75, "call life_coplevel >= 1" },
            { "H_HelmetB_Enh_tna_F", "", 80, "call life_coplevel >= 1" }, //Apex DLC
            { "H_Beret_blk_POLICE", "", 50, "call life_coplevel >= 2" },
            { "H_MilCap_mcamo", "", 100, "call life_coplevel >= 2" },
            { "H_MilCap_gen_F", "", 1200, "call life_coplevel >= 2" }, //Apex DLC
            { "H_MilCap_tna_F", "", 1200, "call life_coplevel >= 2" }, //Apex DLC
            { "H_MilCap_oucamo", "", 1200, "call life_coplevel >= 2" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Squares", "", 10, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Combat", "", 55, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 800, "" },
            { "V_TacVest_blk_POLICE", "", 1000, "call life_coplevel >= 1" },
            { "V_TacVest_gen_F", "", 1000, "call life_coplevel >= 1" }, //Apex DLC
            { "V_PlateCarrier2_rgr", "", 1500, "call life_coplevel >= 2" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_cbr", "", 500, "" },
            { "B_AssaultPack_cbr", "", 700, "" },
            { "B_Kitbag_cbr", "", 800, "" },
            { "B_Bergen_sgg", "", 2500, "" },
            { "B_Carryall_cbr", "", 3500, "" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_EMS_uniforms, 50, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_blu", "", 10, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Blue", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_oli", $STR_C_EMS_backpacks, 3000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 11500, "" },
            { "U_IG_leader", "", 15340, "" },
            { "U_O_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_O_GhillieSuit", "", 50000, "" },
            { "U_B_T_Soldier_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 51000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 50032, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 52000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_HelmetO_ocamo", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_TacChestrig_grn_F", "", 17500, "" } //Apex DLC
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class test_center_clothing {
        title = "Weferlingen Testcenter Klamotten";
        conditions = "";
        side = "";
        uniforms[] = {
            { "gm_dk_army_uniform_soldier_84_m84", "Combat Uniform M/84", 100, "" },
            { "gm_dk_army_uniform_soldier_84_oli", "Combat Uniform M/84 (Olive)", 100, "" },
            { "gm_dk_army_uniform_soldier_84_win", "Combat Uniform M/84 (Winter)", 100, "" },
            { "gm_gc_army_uniform_dress_80_gry", "Dress Uniform, Army", 100, "" },
            { "gm_gc_army_uniform_soldier_80_blk", "Field Service Uniform, Black", 100, "" },
            { "gm_gc_army_uniform_soldier_80_str", "Field Service Uniform, Strichtarn", 100, "" },
            { "gm_gc_army_uniform_soldier_80_win", "Field Service Uniform, Winter", 100, "" },
            { "gm_gc_civ_uniform_man_01_80_blk", "Casual Clothing, Black", 100, "" },
            { "gm_gc_civ_uniform_man_01_80_blu", "Casual Clothing, Blue", 100, "" },
            { "gm_gc_civ_uniform_man_02_80_brn", "Casual Clothing, Brown", 100, "" },
            { "gm_gc_pol_uniform_dress_80_blu", "Dress Uniform, Police", 100, "" },
            { "gm_ge_army_uniform_crew_80_oli", "Tank Suit, Olive", 100, "" },
            { "gm_ge_army_uniform_soldier_80_oli", "Field Dress, Olive (Clean)", 100, "" },
            { "gm_ge_army_uniform_soldier_80_ols", "Field Dress, Olive", 100, "" },
            { "gm_ge_army_uniform_soldier_parka_80_oli", "Field Parka, Olive (Clean)", 100, "" },
            { "gm_ge_army_uniform_soldier_parka_80_ols", "Field Parka, Olive", 100, "" },
            { "gm_ge_army_uniform_soldier_parka_80_win", "Field Parka, Winter", 100, "" },
            { "gm_ge_bgs_uniform_soldier_80_smp", "Battle Dress, Borderguards", 100, "" },
            { "gm_ge_civ_uniform_blouse_80_gry", "Casual Clothing, Grey", 100, "" },
            { "gm_ge_dbp_uniform_suit_80_blu", "Uniform, Mailman", 100, "" },
            { "gm_ge_ff_uniform_man_80_orn", "Firefighter Suit", 100, "" },
            { "gm_ge_pol_uniform_blouse_80_blk", "Patrol Uniform, Police", 100, "" },
            { "gm_ge_pol_uniform_suit_80_grn", "Service Uniform, Police", 100, "" },
            { "gm_pl_army_uniform_soldier_80_moro", "Field Uniform, wz 4652", 100, "" },
            { "gm_pl_army_uniform_soldier_autumn_80_moro", "Field Uniform, wz 4652 (Liner)", 100, "" },
            { "gm_pl_army_uniform_soldier_rolled_80_moro", "Field Uniform, wz 4652 (Rolled)", 100, "" },
            { "gm_pl_army_uniform_soldier_80_winter", "Field Uniform, wz 4652 (Winter)", 100, "" },
            { "gm_gc_airforce_uniform_pilot_80_blu", "Pilot Coverall, Blue", 100, "" },
            { "gm_gc_civ_uniform_pilot_80_blk", "Pilot Coverall, Black", 100, "" },
            { "gm_pl_airforce_uniform_pilot_80_gry", "Pilot Coverall, Grey", 100, "" },
            { "gm_ge_army_uniform_pilot_oli", "Flight Suit, Olive", 100, "" },
            { "gm_ge_army_uniform_pilot_rolled_oli", "Flight Suit (Rolled)", 100, "" },
            { "gm_ge_army_uniform_pilot_sar", "Flight Suit, Orange", 100, "" },
            { "gm_ge_army_uniform_pilot_rolled_sar", "Flight Suit, Orange (Rolled)", 100, "" },
            { "gm_ge_pol_uniform_pilot_grn_ca", "Flight Suit, Green", 100, "" },
            { "gm_ge_pol_uniform_pilot_rolled_grn", "Flight Suit, Green (Rolled)", 100, "" },
            { "gm_ge_uniform_soldier_bdu_80_wdl", "Battle Dress Uniform, Woodland", 100, "" },
            { "gm_ge_uniform_soldier_bdu_rolled_80_wdl", "Battle Dress Uniform, Woodland (Rolled)", 100, "" },
            { "gm_xx_uniform_soldier_bdu_nogloves_80_wdl", "Battle Dress Uniform", 100, "" },
            { "gm_ge_uniform_soldier_90_flk", "Combat Uniform (5-Color)", 100, "" },
            { "gm_ge_uniform_soldier_90_trp", "Combat Uniform (3-Color)", 100, "" },
            { "gm_ge_uniform_soldier_rolled_90_flk", "Combat Uniform (Rolled, 5-Color)", 100, "" },
            { "gm_ge_uniform_soldier_rolled_90_trp", "Combat Uniform (Rolled, 3-Color)", 100, "" },
            { "gm_ge_uniform_soldier_tshirt_90_flk", "Combat Uniform (T-Shirt, 5-Color)", 100, "" },
            { "gm_ge_uniform_soldier_tshirt_90_trp", "Combat Uniform (T-Shirt, 3-Color)", 100, "" },
            { "gm_gc_civ_uniform_man_03_80_grn", "T-Shirt (Green)", 100, "" },
            { "gm_gc_civ_uniform_man_03_80_gry", "T-Shirt (Grey)", 100, "" },
            { "gm_gc_civ_uniform_man_03_80_blu", "T-Shirt (Blue)", 100, "" },
            { "gm_gc_civ_uniform_man_04_80_gry", "Worker Suit (Grey)", 100, "" },
            { "gm_gc_civ_uniform_man_04_80_blu", "Worker Suit (Blue)", 100, "" }
        };
        headgear[] = {
            { "gm_dk_headgear_m52_net_oli", "Helmet M/52 (Mesh)", 100, "" },
            { "gm_dk_headgear_m52_net_win", "Helmet M/52 (Winter)", 100, "" },
            { "gm_dk_headgear_m52_oli", "Helmet M/52 (Olive)", 100, "" },
            { "gm_gc_army_headgear_cap_80_gry", "Officer Cap", 100, "" },
            { "gm_gc_army_headgear_crewhat_80_blk", "Crew Hat, Black", 100, "" },
            { "gm_gc_army_headgear_hat_80_grn", "Side Cap, Green", 100, "" },
            { "gm_gc_army_headgear_m56", "Steel Helmet M56 (Olive)", 100, "" },
            { "gm_gc_army_headgear_m56_cover_blu", "Steel Helmet M56 (Blue)", 100, "" },
            { "gm_gc_army_headgear_m56_cover_str", "Steel Helmet M56 (Strichtarn)", 100, "" },
            { "gm_gc_army_headgear_m56_cover_win", "Steel Helmet M56 (Winter)", 100, "" },
            { "gm_gc_army_headgear_m56_net", "Steel Helmet M56 (Mesh)", 100, "" },
            { "gm_gc_bgs_headgear_hat_80_gry", "Side Cap, Gray", 100, "" },
            { "gm_gc_pol_headgear_cap_80_blu", "Police Cap", 100, "" },
            { "gm_ge_bgs_headgear_m35_53_blk", "Helmet M35/53", 100, "" },
            { "gm_ge_bgs_headgear_m35_53_net_blk", "Helmet M35/53 (Mesh)", 100, "" },
            { "gm_ge_dbp_headgear_cap_80_blu", "Postman Cap", 100, "" },
            { "gm_ge_ff_headgear_m35_53_tan", "Helmet M35/53 (Tan)", 100, "" },
            { "gm_ge_headgear_beret_bdx", "Beret, Bordeaux", 100, "" },
            { "gm_ge_headgear_beret_red", "Beret, Red", 100, "" },
            { "gm_ge_headgear_beret_grn", "Beret, Green", 100, "" },
            { "gm_ge_headgear_beret_bdx_armyaviation", "Beret, Army Aviation", 100, "" },
            { "gm_ge_headgear_beret_bdx_lrrp", "Beret, LRR", 100, "" },
            { "gm_ge_headgear_beret_bdx_paratrooper", "Beret, Paratroopers", 100, "" },
            { "gm_ge_headgear_beret_bdx_specop", "Beret, Special Forces", 100, "" },
            { "gm_ge_headgear_beret_blk_antitank", "Beret, Anti Tank", 100, "" },
            { "gm_ge_headgear_beret_blk_armor", "Beret, Armor", 100, "" },
            { "gm_ge_headgear_beret_blk_armorrecon", "Beret, Armored Recon", 100, "" },
            { "gm_ge_headgear_beret_blk_recon", "Beret, Recon", 100, "" },
            { "gm_ge_headgear_beret_blu_medical", "Beret, Medical", 100, "" },
            { "gm_ge_headgear_beret_crew_bdx_paratrooper", "Crew Headset, Paratroopers", 100, "" },
            { "gm_ge_headgear_beret_crew_blk_antitank", "Crew Headset, Anti Tank", 100, "" },
            { "gm_ge_headgear_beret_crew_blk_armor", "Crew Headset, Armor", 100, "" },
            { "gm_ge_headgear_beret_crew_blk_armorrecon", "Crew Headset, Armored Recon", 100, "" },
            { "gm_ge_headgear_beret_crew_blk_recon", "Crew Headset, Recon", 100, "" },
            { "gm_ge_headgear_beret_crew_grn_mechinf", "Crew Headset, Mechanized Infantry", 100, "" },
            { "gm_ge_headgear_beret_crew_red_antiair", "Crew Headset, Anti Air", 100, "" },
            { "gm_ge_headgear_beret_crew_red_artillery", "Crew Headset, Artillery", 100, "" },
            { "gm_ge_headgear_beret_crew_red_engineer", "Crew Headset, Engineer", 100, "" },
            { "gm_ge_headgear_beret_crew_red_maintenance", "Crew Headset, Maintenance", 100, "" },
            { "gm_ge_headgear_beret_crew_red_militarypolice", "Crew Headset, Military Police", 100, "" },
            { "gm_ge_headgear_beret_crew_red_nbc", "Crew Headset, NBC", 100, "" },
            { "gm_ge_headgear_beret_crew_red_opcom", "Crew Headset, Operative Communications", 100, "" },
            { "gm_ge_headgear_beret_crew_red_signals", "Crew Headset, Signals", 100, "" },
            { "gm_ge_headgear_beret_crew_red_supply", "Crew Headset, Supply", 100, "" },
            { "gm_ge_headgear_beret_grn_guardbtl", "Beret, Guard Battalion", 100, "" },
            { "gm_ge_headgear_beret_grn_infantry", "Beret, Infantry", 100, "" },
            { "gm_ge_headgear_beret_grn_mechinf", "Beret, Mechanized Infantry", 100, "" },
            { "gm_ge_headgear_beret_grn_music", "Beret, Musical Corps", 100, "" },
            { "gm_ge_headgear_beret_mrb", "Beret, Dark Blue", 100, "" },
            { "gm_ge_headgear_beret_red_antiair", "Beret, Anti-Air", 100, "" },
            { "gm_ge_headgear_beret_red_artillery", "Beret, Artillery", 100, "" },
            { "gm_ge_headgear_beret_red_engineer", "Beret, Engineer", 100, "" },
            { "gm_ge_headgear_beret_red_geoinfo", "Beret, Topography", 100, "" },
            { "gm_ge_headgear_beret_red_maintenance", "Beret, Maintenance", 100, "" },
            { "gm_ge_headgear_beret_red_militarypolice", "Beret, Military Police", 100, "" },
            { "gm_ge_headgear_beret_red_nbc", "Beret, NBC", 100, "" },
            { "gm_ge_headgear_beret_red_opcom", "Beret, Operative Communications", 100, "" },
            { "gm_ge_headgear_beret_red_signals", "Beret, Signals", 100, "" },
            { "gm_ge_headgear_beret_red_supply", "Beret, Supply", 100, "" },
            { "gm_ge_headgear_beret_un", "Beret, Cyan", 100, "" },
            { "gm_ge_headgear_crewhat_80_blk", "Crew Hat", 100, "" },
            { "gm_ge_headgear_hat_80_gry", "Field Cap, Gray", 100, "" },
            { "gm_ge_headgear_hat_80_m62_oli", "Field Cap, Olive (w/ M62)", 100, "" },
            { "gm_ge_headgear_hat_80_oli", "Field Cap, Olive", 100, "" },
            { "gm_ge_headgear_headset_crew_oli", "Crew Headset", 100, "" },
            { "gm_ge_headgear_m62", "Helmet M62 (Olive)", 100, "" },
            { "gm_ge_headgear_m62_cover_blu", "Helmet M62 (Blue)", 100, "" },
            { "gm_ge_headgear_m62_cover_win", "Helmet M62 (Winter)", 100, "" },
            { "gm_ge_headgear_m62_net", "Helmet M62 (Mesh)", 100, "" },
            { "gm_ge_headgear_winterhat_80_oli", "Winter Hat", 100, "" },
            { "gm_ge_pol_headgear_cap_80_grn", "Police Cap, Green", 100, "" },
            { "gm_ge_pol_headgear_cap_80_wht", "Police Cap, White", 100, "" },
            { "gm_pl_army_headgear_cap_80_moro", "Field Cap, wz. 0443", 100, "" },
            { "gm_pl_army_headgear_wz67_net_oli", "wz 67 (Mesh)", 100, "" },
            { "gm_pl_army_headgear_wz67_oli", "wz 67", 100, "" },
            { "gm_pl_headgear_wz67_oli", "wz 67", 100, "" },
            { "gm_pl_headgear_wz67_cover_win", "wz 67 (Winter)", 100, "" },
            { "gm_dk_headgear_m96_oli", "Combat Helmet M/96", 100, "" },
            { "gm_dk_headgear_m96_blu", "Combat Helmet M/96 (Blue)", 100, "" },
            { "gm_dk_headgear_m96_cover_m84", "Combat Helmet M/96 (M/84)", 100, "" },
            { "gm_dk_headgear_m96_cover_wht", "Combat Helmet M/96 (Winter)", 100, "" },
            { "gm_dk_headgear_hat_boonie_m84", "Boonie Hat, M/84", 100, "" },
            { "gm_ge_headgear_hat_boonie_oli", "Boonie Hat, Olive", 100, "" },
            { "gm_ge_headgear_hat_boonie_wdl", "Boonie Hat, Woodland", 100, "" },
            { "gm_gc_headgear_beret_officer_blk", "Beret (Officer, Dark Grey)", 100, "" },
            { "gm_gc_headgear_beret_officer_orn", "Beret (Officer, Orange)", 100, "" },
            { "gm_gc_headgear_beret_officer_str", "Beret (Officer, Strichtarn)", 100, "" },
            { "gm_gc_headgear_beret_blk", "Beret (Dark Grey)", 100, "" },
            { "gm_gc_headgear_beret_orn", "Beret (Orange)", 100, "" },
            { "gm_gc_headgear_beret_str", "Beret (Strichtarn)", 100, "" },
            { "gm_pl_headgear_beret_bdx", "Beret (Polish, Red)", 100, "" },
            { "gm_pl_headgear_beret_blk", "Beret (Polish, Black)", 100, "" },
            { "gm_pl_headgear_beret_blu", "Beret (Polish, Blue)", 100, "" },
            { "gm_ge_headgear_hat_beanie_blk", "Wool Hat, Black", 100, "" },
            { "gm_dk_headgear_m96_cover_wdl", "Combat Helmhet M/96 (Woodland)", 100, "" },
            { "gm_ge_headgear_m62_cover_wdl", "Helmet M62 (Woodland)", 100, "" },
            { "gm_pl_army_headgear_wz63_net_oli", "Helmet wz. 63 (Mesh)", 100, "" },
            { "gm_pl_army_headgear_wz63_oli", "Helmet wz. 63", 100, "" },
            { "gm_gc_headgear_fjh_model4_oli", "FJH Model 4", 100, "" },
            { "gm_gc_headgear_fjh_model4_wht", "FJH Model 4 (White)", 100, "" },
            { "gm_gc_headgear_zsh3_blu", "ZSh-3 (Blue)", 100, "" },
            { "gm_gc_headgear_zsh3_orn", "ZSh-3 (Orange)", 100, "" },
            { "gm_gc_headgear_zsh3_wht", "ZSh-3 (White)", 100, "" },
            { "gm_ge_headgear_sph4_oli", "Helmet SPH-4", 100, "" },
            { "gm_ge_headgear_hat_90_flk", "Field Cap (5-Color)", 100, "" },
            { "gm_ge_headgear_hat_90_trp", "Field Cap (3-Color)", 100, "" },
            { "gm_ge_headgear_hat_90_flk_m92", "Field Cap (5-Color w/ M92)", 100, "" },
            { "gm_ge_headgear_hat_90_trp_m92", "Field Cap (3-Color w/ M92)", 100, "" },
            { "gm_ge_headgear_hat_boonie_flk", "Boonie Hat (5-Color)", 100, "" },
            { "gm_ge_headgear_hat_boonie_trp", "Boone Hat (3-Color)", 100, "" },
            { "gm_ge_headgear_m92_cover_glasses_win", "Helmet M92 (Winter, Goggles)", 100, "" },
            { "gm_ge_headgear_m92_cover_win", "Helmet M92 (Winter)", 100, "" },
            { "gm_ge_headgear_m92_flk", "Helmet M92", 100, "" },
            { "gm_ge_headgear_m92_trp", "Helmet M92 (3-Color)", 100, "" },
            { "gm_ge_headgear_m92_glasses_flk", "Helmet M92 (Goggles)", 100, "" },
            { "gm_ge_headgear_m92_glasses_trp", "Helmet M92 (3-Color, Goggles)", 100, "" }
        };
        goggles[] = {
            { "gm_ge_facewear_m65", "Gasmask M65", 100, "" },
            { "gm_gc_army_facewear_schm41m", "Gasmask SchM-41M", 100, "" },
            { "gm_gc_army_facewear_dustglasses", "Dust Goggles", 100, "" },
            { "gm_ge_facewear_dustglasses", "Dust Glasses", 100, "" }
        };
        vests[] = {
            { "gm_dk_army_vest_54_crew", "Gear, Crew M/54", 100, "" },
            { "gm_dk_army_vest_54_machinegunner", "Gear, Machinegunner M/54", 100, "" },
            { "gm_dk_army_vest_54_rifleman", "Gear, Rifleman M/54", 100, "" },
            { "gm_gc_army_vest_80_at_str", "Gear, Anti-Tank, Strichtarn", 100, "" },
            { "gm_gc_army_vest_80_belt_str", "Belt, NVA", 100, "" },
            { "gm_gc_army_vest_80_leader_str", "Gear, Leader, Strichtarn", 100, "" },
            { "gm_gc_army_vest_80_lmg_str", "Gear, Machinegunner, Strichtarn", 100, "" },
            { "gm_gc_army_vest_80_rifleman_str", "Gear, Rifleman, Strichtarn", 100, "" },
            { "gm_gc_bgs_vest_80_border_str", "Gear, Border Guard, Strichtarn", 100, "" },
            { "gm_ge_army_vest_80_bag", "Gasmask-bag", 100, "" },
            { "gm_ge_army_vest_80_belt", "Belt, BW", 100, "" },
            { "gm_ge_army_vest_80_crew", "Gear, Crew", 100, "" },
            { "gm_ge_army_vest_80_demolition", "Gear, Detonator", 100, "" },
            { "gm_ge_army_vest_80_leader", "Gear, Leader", 100, "" },
            { "gm_ge_army_vest_80_machinegunner", "Gear, Machinegunner", 100, "" },
            { "gm_ge_army_vest_80_medic", "Gear, Medic", 100, "" },
            { "gm_ge_army_vest_80_mp_wht", "Gear, Military Police", 100, "" },
            { "gm_ge_army_vest_80_officer", "Gear, Officer", 100, "" },
            { "gm_ge_army_vest_80_rifleman", "Gear, Rifleman", 100, "" },
            { "gm_ge_bgs_vest_80_rifleman", "Gear, Borderguards", 100, "" },
            { "gm_ge_pol_vest_80_wht", "Gear, Police", 100, "" },
            { "gm_pl_army_vest_80_at_gry", "Tactical Suspenders, Anti-Tank", 100, "" },
            { "gm_pl_army_vest_80_leader_gry", "Tactical Suspenders, Leader", 100, "" },
            { "gm_pl_army_vest_80_marksman_gry", "Tactical Suspenders, Marksman", 100, "" },
            { "gm_pl_army_vest_80_mg_gry", "Tactical Suspenders, Machinegunner", 100, "" },
            { "gm_pl_army_vest_80_rifleman_gry", "Tactical Suspenders, Rifleman", 100, "" },
            { "gm_pl_army_vest_80_rig_gry", "Tactical Suspenders", 100, "" },
            { "gm_dk_army_vest_m00_m84", "Frag Vest M/00", 100, "" },
            { "gm_dk_army_vest_m00_m84_machinegunner", "Frag Vest, Machinegunner M/00", 100, "" },
            { "gm_dk_army_vest_m00_m84_rifleman", "Frag Vest, Rifleman M/00", 100, "" },
            { "gm_dk_army_vest_m00_blu", "Frag Vest M/00 (Blue)", 100, "" },
            { "gm_dk_army_vest_m00_win", "Frag Vest M/00 (Winter)", 100, "" },
            { "gm_dk_army_vest_m00_mwin_machinegunner", "Frag Vest, Machinegunner M/00 (Winter)", 100, "" },
            { "gm_dk_army_vest_m00_win_rifleman", "Frag Vest, Rifleman M/00 (Winter)", 100, "" },
            { "gm_dk_army_vest_m00_wdl", "Frag Vest M/00 (Woodland)", 100, "" },
            { "gm_dk_army_vest_m00_wdl_rifleman", "Frag Vest, Rifleman M/00 (Woodland)", 100, "" },
            { "gm_gc_vest_combatvest3_str", "Combat Vest M3", 100, "" },
            { "gm_pl_army_vest_80_rifleman_smg_gry", "Tactical Suspenders, SMG", 100, "" },
            { "gm_pl_army_vest_80_crew_gry", "Tactical Suspenders, Crew", 100, "" },
            { "gm_ge_army_vest_pilot_oli", "Ballistic Vest, Pilot", 100, "" },
            { "gm_ge_army_vest_pilot_pads_oli", "Ballistic Vest, Pilot (w/ Shoulderpads)", 100, "" },
            { "gm_ge_vest_90_crew_flk", "Belt Rig, Crew", 100, "" },
            { "gm_ge_vest_90_demolition_flk", "Belt Rig, Demolition", 100, "" },
            { "gm_ge_vest_90_leader_flk", "Belt Rig, Leader", 100, "" },
            { "gm_ge_vest_90_machinegunner_flk", "Belt Rig, Machinegunner", 100, "" },
            { "gm_ge_vest_90_medic_flk", "Belt Rig, Medic", 100, "" },
            { "gm_ge_vest_90_officer_flk", "Belt Rig, Officer", 100, "" },
            { "gm_ge_vest_90_rifleman_flk", "Belt Rig, Rifleman", 100, "" },
            { "gm_ge_vest_armor_90_crew_flk", "Flak Vest, Crew", 100, "" },
            { "gm_ge_vest_armor_90_demolition_flk", "Flak Vest, Demolition", 100, "" },
            { "gm_ge_vest_armor_90_flk", "Flak Vest", 100, "" },
            { "gm_ge_vest_armor_90_leader_flk", "Flak Vest, Machinegunner", 100, "" },
            { "gm_ge_vest_armor_90_machinegunner_flk", "Flak Vest, Medic", 100, "" },
            { "gm_ge_vest_armor_90_officer_flk", "Flak Vest, Officer", 100, "" },
            { "gm_ge_vest_armor_90_rifleman_flk", "Flak Vest, Rifleman", 100, "" }
        };
        backpacks[] = {
            { "gm_dk_army_backpack_73_oli", "Army Backpack", 100, "" },
            { "gm_gc_army_backpack_80_at_str", "RPG Ammo Bag, Strichtarn", 100, "" },
            { "gm_pl_army_backpack_at_80_gry", "RPG Ammo Bag, Gray", 100, "" },
            { "gm_gc_army_backpack_80_lmg_str", "MG Ammo Bag, Strichtarn", 100, "" },
            { "gm_gc_army_backpack_80_assaultpack_str", "Assault Pack, Strichtarn", 100, "" },
            { "gm_gc_army_backpack_80_assaultpack_lmg_str", "Assault Pack, MG, Strichtarn", 100, "" },
            { "gm_ge_army_backpack_80_oli", "Infantry Backpack, Olive", 100, "" },
            { "gm_pl_army_backpack_80_oli", "Kostka", 100, "" },
            { "gm_ge_backpack_satchel_80_blk", "Satchel, Black", 100, "" },
            { "gm_ge_backpack_satchel_80_san", "Satchel, Medical", 100, "" },
            { "gm_fagot_launcher_weaponBag", "Fagot - Tripod", 100, "" },
            { "gm_milan_launcher_weaponBag", "LATGM - Tripod", 100, "" },
            { "gm_ge_backpack_sem35_oli", "Radio SEM 35", 100, "" },
            { "gm_gc_backpack_r105m_brn", "Radio R-105M", 100, "" },
            { "gm_ge_army_backpack_90_flk", "Combat Backpack", 100, "" },
            { "gm_ge_army_backpack_90_trp", "Combat Backpack (3-Color)", 100, "" },
            { "gm_ge_army_backpack_90_cover_win", "Combat Backpack (Winter)", 100, "" }
        };
    };
};
