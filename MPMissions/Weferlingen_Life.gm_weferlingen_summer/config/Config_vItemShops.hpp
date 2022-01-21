/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*/
class VirtualShops {
    class super_marked {
        name = "Supermarkt";
        side = "civ";
        conditions = "";
        items[] = { "apple","peach","pea","cherry","plum","apricot","potato","cabbage","tomato",
                    "bell_pepper","strawberry","carrot","lettuce","corn","apple_juice","pea_juice",
                    "cherry_juice","plum_juice","peach_icetea","apricot_joghurt","popcorn",
                    "ready_made_salat","animal_feed","strawberry_milk","ketchup","cabbage_salad",
                    "mashed_potatoes","sunflower_oil","sugar","flour","raps_oil"
        };
    };
    class clothing_manufacturer {
        name = "Kleidungshersteller";
        side = "civ";
        conditions = "";
        items[] = { "cotton", "cloth"
        };
    };
    class farm {
        name = "Bauernhof";
        side = "civ";
        conditions = "";
        items[] = { "apple","peach","pea","cherry","plum","apricot","potato","cabbage","tomato",
                    "bell_pepper","strawberry","lettuce","corn","sunflower","cotton","sugar_cane",
                    "wheat","raps","hanf"
        };
    };
    class tavern {
        name = "Kneipe";
        side = "civ";
        conditions = "";
        items[] = { "beer"
        };
    };
};
