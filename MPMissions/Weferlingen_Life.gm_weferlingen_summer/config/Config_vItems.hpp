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
*        icon = "";
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc
    class pickaxe {
        variable = "pickaxe";
        displayName = "Spitzhacke";
        weight = 2;
        buyPrice = 750;
        sellPrice = 350;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "Defibrillator";
        weight = 4;
        buyPrice = 900;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "Toolkit";
        weight = 4;
        buyPrice = 350;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "Leerer Benzinkanister";
        weight = 2;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "Voller Benzinkanister";
        weight = 5;
        buyPrice = 850;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "Spikes";
        weight = 15;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "Dietrich";
        weight = 1;
        buyPrice = 150;
        sellPrice = 75;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "Goldbarren";
        weight = 12;
        buyPrice = -1;
        sellPrice = 95000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "Explosivladung";
        weight = 15;
        buyPrice = 35000;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "Seitenschneider";
        weight = 5;
        buyPrice = 7500;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "Entschärfungskit";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "Lagerkiste Klein";
        weight = 5;
        buyPrice = 75000;
        sellPrice = 50000;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "Lagerkiste Groß";
        weight = 10;
        buyPrice = 150000;
        sellPrice = 125000;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
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
        icon = "";
    };
};
