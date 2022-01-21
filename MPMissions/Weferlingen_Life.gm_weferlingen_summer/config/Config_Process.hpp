/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {
    class apple_juice {
        MaterialsReq[] = {{"apple",1}};
        MaterialsGive[] = {{"apple_juice",1}};
        Text = "Presse Äpfel";
        NoLicenseCost = 1200;
    };

    class pea_juice {
        MaterialsReq[] = {{"pea",1}};
        MaterialsGive[] = {{"pea_juice",1}};
        Text = "Presse Birnen";
        NoLicenseCost = 1200;
    };

    class cherry_juice {
        MaterialsReq[] = {{"cherry",1}};
        MaterialsGive[] = {{"cherry_juice",1}};
        Text = "Presse Kirschen";
        NoLicenseCost = 1200;
    };

    class plum_juice {
        MaterialsReq[] = {{"plum",1}};
        MaterialsGive[] = {{"plum_juice",1}};
        Text = "Presse Pflaumen";
        NoLicenseCost = 1200;
    };

    class peach_icetea {
        MaterialsReq[] = {{"peach",1}};
        MaterialsGive[] = {{"peach_icetea",1}};
        Text = "Verarbeite Pfirsische";
        NoLicenseCost = 1200;
    };

    class apricot_joghurt {
        MaterialsReq[] = {{"apricot",1}};
        MaterialsGive[] = {{"apricot_joghurt",1}};
        Text = "Verarbeite Aprikosen";
        NoLicenseCost = 1200;
    };

    class popcorn {
        MaterialsReq[] = {{"corn",1}};
        MaterialsGive[] = {{"popcorn",1}};
        Text = "Erhitze Mais";
        NoLicenseCost = 1200;
    };

    class ready_made_salat_lettuce {
        MaterialsReq[] = {{"lettuce",1}};
        MaterialsGive[] = {{"ready_made_salat",1}};
        Text = "Zerhacke Kopfsalat";
        NoLicenseCost = 1200;
    };

    class ready_made_salat_bell_pepper {
        MaterialsReq[] = {{"bell_pepper",1}};
        MaterialsGive[] = {{"ready_made_salat",1}};
        Text = "Zerhacke Paprika";
        NoLicenseCost = 1200;
    };

    class animal_feed {
        MaterialsReq[] = {{"carrot",1}};
        MaterialsGive[] = {{"animal_feed",1}};
        Text = "Zerstampfe Karotten";
        NoLicenseCost = 1200;
    };

    class strawberry_milk {
        MaterialsReq[] = {{"strawberry",1}};
        MaterialsGive[] = {{"strawberry_milk",1}};
        Text = "Zerstampfe Erdbeeren";
        NoLicenseCost = 1200;
    };

    class ketchup {
        MaterialsReq[] = {{"tomato",1}};
        MaterialsGive[] = {{"ketchup",1}};
        Text = "Zerstampfe Tomaten";
        NoLicenseCost = 1200;
    };

    class cabbage_salad {
        MaterialsReq[] = {{"cabbage_salad",1}};
        MaterialsGive[] = {{"Kohlsalat",1}};
        Text = "Wasche Kohl";
        NoLicenseCost = 1200;
    };

    class mashed_potatoes {
        MaterialsReq[] = {{"potato",1}};
        MaterialsGive[] = {{"mashed_potatoes",1}};
        Text = "Zerstampfe Kartoffeln";
        NoLicenseCost = 1200;
    };

    class sunflower_oil {
        MaterialsReq[] = {{"sunflower",1}};
        MaterialsGive[] = {{"sunflower_oil",1}};
        Text = "Extrahiere Öl";
        NoLicenseCost = 1200;
    };

    class cloth_cotton {
        MaterialsReq[] = {{"cotton",1}};
        MaterialsGive[] = {{"cloth",1}};
        Text = "Flechte Baumwolle";
        NoLicenseCost = 1200;
    };

    class cloth_hanf {
        MaterialsReq[] = {{"hanf",1}};
        MaterialsGive[] = {{"cloth",1}};
        Text = "Flechte Hanf";
        NoLicenseCost = 1200;
    };

    class sugar {
        MaterialsReq[] = {{"sugar_canes",1}};
        MaterialsGive[] = {{"sugar",1}};
        Text = "Zerhacke Zuckerrohr";
        NoLicenseCost = 1200;
    };

    class flour {
        MaterialsReq[] = {{"wheat",1}};
        MaterialsGive[] = {{"flour",1}};
        Text = "Mahle Weizen";
        NoLicenseCost = 1200;
    };

    class beer {
        MaterialsReq[] = {{"hops",1}};
        MaterialsGive[] = {{"beer",1}};
        Text = "Braue Bier";
        NoLicenseCost = 1200;
    };

    class raps_oil {
        MaterialsReq[] = {{"raps",1}};
        MaterialsGive[] = {{"raps_oil",1}};
        Text = "Extrahiere Öl";
        NoLicenseCost = 1200;
    };
};
