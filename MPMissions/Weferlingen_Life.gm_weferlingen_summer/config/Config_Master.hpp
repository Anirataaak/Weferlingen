#define true 1
#define false 0

/*
    Master settings for various features and functionality
*/
class Life_Settings {

    //Spyglass

    spyGlass_toggle = false;

    //Loggingoptionen

    battlEye_friendlyLogging = false;
    player_advancedLog = true;
    player_moneyLog = true;
    player_deathLog = true;

    //Speicheroptionen für den Spieler

    save_virtualItems = true;
    save_playerStats = true;
    save_civilian_weapons = true;
    save_civilian_position = true;
    save_civilian_position_restart = true;
    save_civilian_positionStrict = false;

    //Hier werden alle Virtuellen Items aufgelistet, die gespeichert werden sollen!

                             //Misc
    saved_virtualItems[] = { "pickaxe","fuelEmpty","fuelFull", "spikeStrip", "lockpick","defuseKit","storageSmall","storageBig","defibrillator","toolkit",
                             //Obst
                             "apple","peach","pea","cherry","plum","apricot",
                             //Gemüse
                             "potato","cabbage","tomato","bell_pepper","strawberry","carrot","lettuce","corn",
                             //Nutzpflanzen
                             "sunflower","cotton","sugar_cane","wheat","hops","raps",
                             //Natürliche Ressourcen
                             "hard_coal","crude_oil","natural_gas","stone","wood","iron_ore","brown_coal","sand","gravel","uranium",
                             //Drogen
                             "hanf","coca","opium_poppy","magic_mushroom",
                             //Obsterzeugnisse
                             "apple_juice","pea_juice","cherry_juice","plum_juice","peach_icetea","apricot_joghurt",
                             //Gemüseerzeugnisse
                             "popcorn","ready_made_salat","animal_feed","strawberry_milk","ketchup","cabbage_salad","mashed_potatoes",
                             //Nutzpflanzerzeugnisse
                             "sunflower_oil","cloth","sugar","flour","beer","raps_oil"
                             };

    //Speicheroptionen für Fahrzeuge

    save_vehicle_virtualItems = true;
    save_vehicle_inventory = true;
    save_vehicle_fuel = false;
    save_vehicle_damage = false;
    save_vehicle_illegal = true;

                             //Misc
    save_vehicle_items[] = { "pickaxe","fuelEmpty","fuelFull", "spikeStrip", "lockpick","defuseKit","storageSmall","storageBig","defibrillator","toolkit",
                             //Obst
                             "apple","peach","pea","cherry","plum","apricot",
                             //Gemüse
                             "potato","cabbage","tomato","bell_pepper","strawberry","carrot","lettuce","corn",
                             //Nutzpflanzen
                             "sunflower","cotton","sugar_cane","wheat","hops","raps",
                             //Natürliche Ressourcen
                             "hard_coal","crude_oil","natural_gas","stone","wood","iron_ore","brown_coal","sand","gravel","uranium",
                             //Drogen
                             "hanf","coca","opium_poppy","magic_mushroom",
                             //Obsterzeugnisse
                             "apple_juice","pea_juice","cherry_juice","plum_juice","peach_icetea","apricot_joghurt",
                             //Gemüseerzeugnisse
                             "popcorn","ready_made_salat","animal_feed","strawberry_milk","ketchup","cabbage_salad","mashed_potatoes",
                             //Nutzpflanzerzeugnisse
                             "sunflower_oil","cloth","sugar","flour","beer","raps_oil"
                             };

    //Bank und ATM Settings

    global_ATM = true; //Allow users to access any ATM on the map (Marked & Unmarked).
    noatm_timer = 10; //Time in minutes that players cannot deposit money after selling stolen gold.
    minimum_cops = 5; //Minimum cops required online to rob the Federal Reserve

    //Todessettings

    drop_weapons_onDeath = true;

    //Paar Standard Game Settings
    donor_level = false;
    enable_fatigue = true;
    total_maxWeight = 42;
    respawn_timer = 300;

    //Channel 7 Settings
    news_broadcast_cost = 150000;
    news_broadcast_cooldown = 20;
    news_broadcast_header_length = 60;

    //Klamotten Settings
    civ_skins = false;
    cop_extendedSkins = false;
    clothing_noTP = false;
    clothing_box = true;

    //Alle Klamotten die das Gesicht verstecken

    clothing_masks[] = { "H_Shemag_olive", "H_Shemag_khk", "H_Shemag_tan", "H_Shemag_olive_hs", "H_ShemagOpen_khk", "H_ShemagOpen_tan", "G_Balaclava_blk",
                         "G_Balaclava_combat", "G_Balaclava_lowprofile", "G_Balaclava_oli", "G_Bandanna_aviator", "G_Bandanna_beast", "G_Bandanna_blk", "G_Bandanna_khk",
                         "G_Bandanna_oli", "G_Bandanna_shades", "G_Bandanna_sport", "G_Bandanna_tan", "U_O_GhillieSuit", "U_I_GhillieSuit", "U_B_GhillieSuit",
                         "H_RacingHelmet_1_black_F", "H_RacingHelmet_1_red_F", "H_RacingHelmet_1_white_F", "H_RacingHelmet_1_blue_F", "H_RacingHelmet_1_yellow_F",
                         "H_RacingHelmet_1_green_F", "H_RacingHelmet_1_F", "H_RacingHelmet_2_F", "H_RacingHelmet_3_F", "H_RacingHelmet_4_F" };

    //Escapemenu Settings
    escapeMenu_timer = 10;
    escapeMenu_displayExtras = true;
    escapeMenu_displayText = "Danke fürs Spielen!";

    //Fuel Settings
    pump_service = true;
    fuel_cost = 240;
    service_chopper = 5000;
    fuelCan_refuel = 1000;

    //Gang Settings
    gang_price = 150000; //Gang creation price. --Remember they are persistent so keep it reasonable to avoid millions of gangs.
    gang_upgradeBase = 50000;
    gang_upgradeMultiplier = 2.5;

    //Gang Zonen

    gang_area[] = {"gang_area_1","gang_area_2","gang_area_3"};

    //Häuser Settings
    house_limit = 5;
    houseGarage_buyPrice = 1000000;
    houseGarage_sellPrice = 350000;

    //Jagen / Fischen Settings
    animaltypes_fish[] = { "Salema_F", "Ornate_random_F", "Mackerel_F", "Tuna_F", "Mullet_F", "CatShark_F", "Turtle_F" };
    animaltypes_hunting[] = { "Sheep_random_F", "Goat_random_F", "Hen_random_F", "Cock_random_F", "Rabbit_F" };

    //Item Restrictions
    restrict_medic_weapons = false;
    restrict_clothingPickup = false;
    restrict_weaponPickup = false;
    restricted_uniforms[] = { "U_Rangemaster", "U_B_CombatUniform_mcam_tshirt", "U_B_CombatUniform_mcam_worn", "U_B_survival_uniform" };
    restricted_weapons[] = { "hgun_P07_snds_F", "arifle_MX_F", "arifle_MXC_F" };

    //Gefängnis settings

    jail_forceWalk = true;
    jail_timeMultiplier = 15;
    jail_seize_inventory = true;

    //Items die beim Gefängnisgang entfernt werden

                             //Misc
    jail_seize_vItems[] = { "pickaxe","fuelEmpty","fuelFull", "spikeStrip", "lockpick","defuseKit","storageSmall","storageBig","defibrillator","toolkit",
                             //Obst
                             "apple","peach","pea","cherry","plum","apricot",
                             //Gemüse
                             "potato","cabbage","tomato","bell_pepper","strawberry","carrot","lettuce","corn",
                             //Nutzpflanzen
                             "sunflower","cotton","sugar_cane","wheat","hops","raps",
                             //Natürliche Ressourcen
                             "hard_coal","crude_oil","natural_gas","stone","wood","iron_ore","brown_coal","sand","gravel","uranium",
                             //Drogen
                             "hanf","coca","opium_poppy","magic_mushroom",
                             //Obsterzeugnisse
                             "apple_juice","pea_juice","cherry_juice","plum_juice","peach_icetea","apricot_joghurt",
                             //Gemüseerzeugnisse
                             "popcorn","ready_made_salat","animal_feed","strawberry_milk","ketchup","cabbage_salad","mashed_potatoes",
                             //Nutzpflanzerzeugnisse
                             "sunflower_oil","cloth","sugar","flour","beer","raps_oil"
                             };

    //Orte an den Polizisten Civilisten ins Gefängnis stecken können

    sendtoJail_locations[] = { "police_hq_1", "police_hq_2", "cop_spawn_3", "cop_spawn_5", "Correctional_Facility" };

    //Medic Settings
    revive_cops = false;
    revive_civ = false;
    revive_east = false;
    revive_fee = 5000;
    hospital_heal_fee = 500;

    //Startgeld
    bank_cop = 50000;
    bank_civ = 50000;
    bank_med = 50000;

    //Paychecks

    paycheck_cop = 8000;
    paycheck_civ = 8000;
    paycheck_med = 8000;

    //Paycheck Settings

    paycheck_period = 5; //Scaled in minutes
    bank_transferTax = .05; //Tax that player pays when transferring money from ATM. Tax = Amount * multiplier

    //DP Mission Settings
    delivery_points[] = { "dp_1", "dp_2", "dp_3", "dp_4", "dp_5", "dp_6", "dp_7", "dp_8", "dp_9", "dp_10", "dp_11", "dp_12", "dp_13", "dp_14", "dp_15", "dp_15", "dp_16", "dp_17", "dp_18", "dp_19", "dp_20", "dp_21", "dp_22", "dp_23", "dp_24", "dp_25" };
    fuelTank_winMultiplier = 1; //Win Multiplier in FuelTank Missions. Increase for greater payout. Default = 1

    //Durchssuchungssettings
    seize_exempt[] = { "Binocular", "ItemWatch", "ItemCompass", "ItemGPS", "ItemMap", "NVGoggles", "FirstAidKit", "ToolKit", "Chemlight_red", "Chemlight_yellow", "Chemlight_green", "Chemlight_blue", "optic_ACO_grn_smg" }; //Arma items that will not get seized from player inventories
    seize_uniform[] = { "U_Rangemaster" };
    seize_vest[] = { "V_TacVest_blk_POLICE" };
    seize_headgear[] = { "H_Cap_police" };
    seize_minimum_rank = 2;

    //Vehicle System Settings
    chopShop_vehicles[] = { "Car", "Air" };
    vehicle_infiniteRepair[] = {false, false, true, false};
    vehicleShop_rentalOnly[] = { };
    vehicleShop_3D = true;

    //Kauf Settings
    vehicle_purchase_multiplier_CIVILIAN = 1;
    vehicle_purchase_multiplier_COP = .5;
    vehicle_purchase_multiplier_MEDIC = .75;
    vehicle_purchase_multiplier_OPFOR = -1;

    //Leih Settings
    vehicle_rental_multiplier_CIVILIAN = .80;
    vehicle_rental_multiplier_COP = .3;
    vehicle_rental_multiplier_MEDIC = .55;
    vehicle_rental_multiplier_OPFOR = -1;

    //Verkauf Settings
    vehicle_sell_multiplier_CIVILIAN = .5;
    vehicle_sell_multiplier_COP = .5;
    vehicle_sell_multiplier_MEDIC = .5;
    vehicle_sell_multiplier_OPFOR = -1;

    //Andere Fahrzeug Settings
    vehicle_chopShop_multiplier = .25;
    vehicle_storage_fee_multiplier = .2;
    vehicle_cop_impound_multiplier = .1;

    disableCommanderView = true;

    /* Wanted System Settings *
    /* crimes[] = {String, Bounty, Code} */
    crimes[] = {
        {"STR_Crime_187V","650","187V"},
        {"STR_Crime_187","2000","187"},
        {"STR_Crime_901","450","901"},
        {"STR_Crime_215","200","215"},
        {"STR_Crime_213","1000","213"},
        {"STR_Crime_211","100","211"},
        {"STR_Crime_207","350","207"},
        {"STR_Crime_207A","200","207A"},
        {"STR_Crime_390","1500","390"},
        {"STR_Crime_487","150","487"},
        {"STR_Crime_488","70","488"},
        {"STR_Crime_480","100","480"},
        {"STR_Crime_481","100","481"},
        {"STR_Crime_482","500","482"},
        {"STR_Crime_483","950","483"},
        {"STR_Crime_459","650","459"},
        {"STR_Crime_666","200","666"},
        {"STR_Crime_667","4500","667"},
        {"STR_Crime_668","1500","668"},
        {"STR_Crime_1","250","1"},
        {"STR_Crime_2","200","2"},
        {"STR_Crime_3","150","3"},
        {"STR_Crime_4","250","4"},
        {"STR_Crime_5","100","5"},
        {"STR_Crime_6","80","6"},
        {"STR_Crime_7","150","7"},
        {"STR_Crime_8","5000","8"},
        {"STR_Crime_9","5000","9"},
        {"STR_Crime_10","15000","10"},
        {"STR_Crime_11","10000","11"},
        {"STR_Crime_12","2500","12"},
        {"STR_Crime_13","1500","13"},
        {"STR_Crime_14","500","14"},
        {"STR_Crime_15","2500","15"},
        {"STR_Crime_16","1500","16"},
        {"STR_Crime_17","100","17"},
        {"STR_Crime_18","1500","18"},
        {"STR_Crime_19","2500","19"},
        {"STR_Crime_20","500","20"},
        {"STR_Crime_21","500","21"},
        {"STR_Crime_22","2000","22"},
        {"STR_Crime_23","5000","23"},
        {"STR_Crime_24","10000","24"},
        {"STR_Crime_25","20000","25"}
    };
    
    /* ! --- Do not change --- ! */
    framework_version = "5.0.0";
    /* ------------------------- */
    
};

#include "Config_Clothing.hpp"
#include "Config_Licenses.hpp"
#include "Config_Vehicles.hpp"
#include "Config_vItems.hpp"
#include "Config_vItemShops.hpp"
#include "Config_Weapons.hpp"
#include "Config_Gather.hpp"
#include "Config_SpawnPoints.hpp"
#include "Config_Process.hpp"
#include "Config_Housing.hpp"
#include "Config_Garages.hpp"
#include "Config_Loadouts.hpp"