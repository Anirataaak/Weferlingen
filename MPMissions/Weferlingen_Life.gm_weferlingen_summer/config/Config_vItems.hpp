/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled, other values = added value)
*        drinkable = Item Drinkable (-1 = Disabled, other values = added value)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 750;
        sellPrice = 350;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_pickaxe.paa";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 900;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_defibrillator.paa";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 350;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 850;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_spikeStrip.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 150;
        sellPrice = 75;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_lockpick.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 12;
        buyPrice = -1;
        sellPrice = 95000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_goldBar.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 35000;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 7500;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_defuseKit.paa";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 75000;
        sellPrice = 50000;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 150000;
        sellPrice = 125000;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_storageBig.paa";
    };

    //Obst

    class apple {
        variable = "apple";
        displayName = "Apfel";
        weight = 1;
        buyPrice = 65;
        sellPrice = 50;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "Pfirsich";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class pea {
        variable = "pea";
        displayName = "Birne";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class cherry {
        variable = "cherry";
        displayName = "Kirsche";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class plum {
        variable = "plum";
        displayName = "Pflaume";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class apricot {
        variable = "apricot";
        displayName = "Aprikose";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    // Gemüse

    class potato {
        variable = "potato";
        displayName = "Kartoffel";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class cabbage {
        variable = "cabbage";
        displayName = "Kohl";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class tomato {
        variable = "tomato";
        displayName = "Tomate";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class bell_pepper {
        variable = "bell_pepper";
        displayName = "Paprika";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class strawberry {
        variable = "strawberry";
        displayName = "Erdbeere";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class carrot {
        variable = "carrot";
        displayName = "Möhre";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class lettuce {
        variable = "lettuce";
        displayName = "Kopfsalat";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class corn {
        variable = "corn";
        displayName = "Mais";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    // Nutzpflanze

    class sunflower {
        variable = "sunflower";
        displayName = "Sonnenblume";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class cotton {
        variable = "cotton";
        displayName = "Baumwolle";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class sugar_cane {
        variable = "sugar_cane";
        displayName = "Zuckerrohr";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class wheat {
        variable = "wheat";
        displayName = "Weizen";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class hops {
        variable = "hops";
        displayName = "Hopfen";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class raps {
        variable = "raps";
        displayName = "Raps";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    // Natürliche Ressourcen

    class hard_coal {
        variable = "hard_coal";
        displayName = "Steinkohle";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class crude_oil {
        variable = "crude_oil";
        displayName = "Rohöl";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class natural_gas {
        variable = "natural_gas";
        displayName = "Erdgas";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class stone {
        variable = "stone";
        displayName = "Stein";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class wood {
        variable = "wood";
        displayName = "Holz";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class iron_ore {
        variable = "iron_ore";
        displayName = "Eisenerz";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class brown_coal {
        variable = "brown_coal";
        displayName = "Braunkohle";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class sand {
        variable = "sand";
        displayName = "Sand";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class gravel {
        variable = "gravel";
        displayName = "Kies";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class uranium {
        variable = "uranium";
        displayName = "Uran";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    // Drogen

    class hanf {
        variable = "hanf";
        displayName = "Hanf";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class coca {
        variable = "coca";
        displayName = "Coca-Blätter";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class opium_poppy {
        variable = "opium_poppy";
        displayName = "Schlafmohn";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class magic_mushroom {
        variable = "magic_mushroom";
        displayName = "Zauberpilz";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    //Obsterzeugnisse

    class apple_juice {
        variable = "apple_juice";
        displayName = "Apfelsaft";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class pea_juice {
        variable = "pea_juice";
        displayName = "Birnensaft";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class cherry_juice {
        variable = "cherry_juice";
        displayName = "Kirschsaft";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class plum_juice {
        variable = "plum_juice";
        displayName = "Pflaumsaft";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class peach_icetea {
        variable = "peach_icetea";
        displayName = "Pfirsich Eistee";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class apricot_joghurt {
        variable = "apricot_joghurt";
        displayName = "Aprikosenjoghurt";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    //Gemüseerzeugnisse

    class popcorn {
        variable = "popcorn";
        displayName = "Popcorn";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class ready_made_salat {
        variable = "ready_made_salat";
        displayName = "Fertigsalat";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class animal_feed {
        variable = "animal_feed";
        displayName = "Tierfutter";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class strawberry_milk {
        variable = "strawberry_milk";
        displayName = "Erdbeermilch";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class ketchup {
        variable = "ketchup";
        displayName = "Ketchup";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class cabbage_salad {
        variable = "cabbage_salad";
        displayName = "Kohlsalat";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class mashed_potatoes {
        variable = "mashed_potatoes";
        displayName = "Kartoffelpüree";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    //Nutzpflanzerzeugnisse

    class sunflower_oil {
        variable = "sunflower_oil";
        displayName = "Sonnenblumenöl";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class cloth {
        variable = "cloth";
        displayName = "Stoff";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class sugar {
        variable = "sugar";
        displayName = "Zucker";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class flour {
        variable = "flour";
        displayName = "Mehl";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class beer {
        variable = "beer";
        displayName = "Bier";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class raps_oil {
        variable = "raps_oil";
        displayName = "Rapsöl";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };
};
