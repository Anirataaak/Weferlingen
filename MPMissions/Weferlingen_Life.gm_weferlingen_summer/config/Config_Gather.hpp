class CfgGather {
    class Resources {

        //Obst

        class apple {
            amount = 5;
            zones[] = { "apple_1", "apple_2" };
            item = "";
            zoneSize = 45;
        };

        class pea {
            amount = 5;
            zones[] = { "pea_1", "pea_2" };
            item = "";
            zoneSize = 45;
        };

        class peach {
            amount = 5;
            zones[] = { "peach_1" };
            item = "";
            zoneSize = 45;
        };

        class cherry {
            amount = 5;
            zones[] = { "cherry_1" };
            item = "";
            zoneSize = 45;
        };

        class plum {
            amount = 5;
            zones[] = { "plum_1" };
            item = "";
            zoneSize = 45;
        };

        class apricot {
            amount = 5;
            zones[] = { "apricot_1" };
            item = "";
            zoneSize = 45;
        };

        //Gemüse

        class potato {
            amount = 5;
            zones[] = { "potato_1" };
            item = "";
            zoneSize = 45;
        };

        class cabbage {
            amount = 5;
            zones[] = { "cabbage_1" };
            item = "";
            zoneSize = 45;
        };

        class tomato {
            amount = 5;
            zones[] = { "tomato_1" };
            item = "";
            zoneSize = 45;
        };

        class bell_pepper {
            amount = 5;
            zones[] = { "bell_pepper_1" };
            item = "";
            zoneSize = 45;
        };

        class strawberry {
            amount = 5;
            zones[] = { "strawberry_1" };
            item = "";
            zoneSize = 45;
        };

        class carrot {
            amount = 5;
            zones[] = { "carrot_1" };
            item = "";
            zoneSize = 45;
        };

        class lettuce {
            amount = 5;
            zones[] = { "lettuce_1" };
            item = "";
            zoneSize = 45;
        };

        class corn {
            amount = 5;
            zones[] = { "corn_1" };
            item = "";
            zoneSize = 45;
        };

        // Nutzpflanze

        class sunflower {
            amount = 5;
            zones[] = { "sunflower_1" };
            item = "";
            zoneSize = 45;
        };

        class cotton {
            amount = 5;
            zones[] = { "cotton_1" };
            item = "";
            zoneSize = 45;
        };

        class sugar_cane {
            amount = 5;
            zones[] = { "sugar_cane_1" };
            item = "";
            zoneSize = 45;
        };

        class wheat {
            amount = 5;
            zones[] = { "wheat_1" };
            item = "";
            zoneSize = 45;
        };

        class hops {
            amount = 5;
            zones[] = { "hops_1" };
            item = "";
            zoneSize = 45;
        };

        class raps {
            amount = 5;
            zones[] = { "raps_1" };
            item = "";
            zoneSize = 45;
        };

        // Drogen

        class hanf {
            amount = 5;
            zones[] = { "hanf_1" };
            item = "";
            zoneSize = 45;
        };

        class coca {
            amount = 5;
            zones[] = { "coca_1" };
            item = "";
            zoneSize = 45;
        };

        class opium_poppy {
            amount = 5;
            zones[] = { "opium_poppy_1" };
            item = "";
            zoneSize = 45;
        };

        class magic_mushroom {
            amount = 5;
            zones[] = { "magic_mushroom_1" };
            item = "";
            zoneSize = 45;
        };
    };

/*
This block can be set using percent,if you want players to mine only one resource ,just leave it as it is.
Example:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { "copper_unrefined" };
This will make players mine only copper_unrefined
Now let's go deeper
Example 2:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { {"copper_unrefined",0,25},{"iron_unrefined",25,95},{"diamond_uncut",95,100} };
    };
    This will give :
    25(±1)% to copper_unrefined;
    70(±1)% to iron_unrefined;
    5%(±1)% to diamond_uncut;

                                                         ! Watch Out !
 If percents are used,you MUST put more than 1 resource in the mined parameter
 mined[] = { {"copper_unrefined",0,25} }; NOT OK (But the script will work)
 mined[] = { {"copper_unrefined",0,45 },{"iron_unrefined",45} };  NOT OK (The script won't work )
 mined[] = { {"copper_unrefined",0,45},{"copper_unrefined",80,100} }; NOT OK
 mined[] = { "copper_unrefined" }; OK
 mined[] = { {"copper_unrefined",0,35} , { "iron_unrefined" ,35,100 } }; OK
*/

    class Minerals {


        // Natürliche Ressourcen

        class hard_coal {
            amount = 5;
            zones[] = { "hard_coal_1" };
            item = "";
            mined[] = { "hard_coal" };
            zoneSize = 45;
        };

        class crude_oil {
            amount = 5;
            zones[] = { "crude_oil_1" };
            item = "";
            mined[] = { "crude_oil" };
            zoneSize = 45;
        };

        class natural_gas {
            amount = 5;
            zones[] = { "natural_gas_1" };
            item = "";
            mined[] = { "natural_gas" };
            zoneSize = 45;
        };

        class stone {
            amount = 5;
            zones[] = { "stone_1" };
            item = "";
            mined[] = { "stone" };
            zoneSize = 45;
        };

        class wood {
            amount = 5;
            zones[] = { "wood_1" };
            item = "";
            mined[] = { "wood" };
            zoneSize = 45;
        };

        class iron_ore {
            amount = 5;
            zones[] = { "iron_ore_1" };
            item = "";
            mined[] = { "iron_ore" };
            zoneSize = 45;
        };

        class brown_coal {
            amount = 5;
            zones[] = { "brown_coal_1" };
            item = "";
            mined[] = { "brown_coal" };
            zoneSize = 45;
        };

        class sand {
            amount = 5;
            zones[] = { "sand_1" };
            item = "";
            mined[] = { "sand" };
            zoneSize = 45;
        };

        class gravel {
            amount = 5;
            zones[] = { "gravel_1" };
            item = "";
            mined[] = { "gravel" };
            zoneSize = 45;
        };

        class uranium {
            amount = 5;
            zones[] = { "uranium_1" };
            item = "";
            mined[] = { "uranium" };
            zoneSize = 45;
        };
    };
};