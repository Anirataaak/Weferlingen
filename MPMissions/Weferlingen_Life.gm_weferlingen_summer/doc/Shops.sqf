/*
    Dokumentation der Händler
*/

// Polizei Fahrzeug Händler

this addAction["Polizei Fahrzeuge",life_fnc_vehicleShopMenu,["cop_car",west,"cop_car_1","cop","APD - Kavala District"],1.5,true,true,"","true",5];
this setVariable ["realname","Cop Vehicle Store"];

// Polizei Fahrzeug Garage

this addAction[localize"STR_Garage_Title",  {
    if (life_HC_isActive) then {
        [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["HC_fnc_getVehicles",HC_Life];
    } else {
        [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["TON_fnc_getVehicles",2];
    };
    createDialog "Life_impound_menu";
    disableSerialization;
    ctrlSetText[2802,"Fetching Vehicles...."];
    life_garage_sp = "cop_car_1"; life_garage_type = "Car";
},"",0,false,false,"",'playerSide isEqualTo west',5];

// Polizei Fahrzeug einparken

this addAction[localize"STR_MAR_Store_vehicle_in_Garage",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store',5];

// Polizei Item-Shop

this addAction["Polizei Kiosk",life_fnc_virt_menu,"cop",1.5,true,true,"","true",5];

// Polizei Klamotten

this addAction["Polizei Klamotten",life_fnc_clothingMenu,"cop",1.5,true,true,"","true",5];

// Polizei Waffen

this addAction["Polizei Waffen",life_fnc_weaponShopMenu,"cop_basic",1.5,true,true,"","true",5];

// Polizei Luftfahrtslizenz

this addAction[format ["%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "cAir" >> "displayName")),
    [(getNumber(missionConfigFile >> "Licenses" >> "cAir" >> "price"))]
    call life_fnc_numberText],life_fnc_buyLicense,"cAir",0,false,false,"",' !license_cop_cAir && playerSide isEqualTo west ',5];

// Polizei Luftfahrtshändler

this addAction["Polizei Luftfahrzeuge", life_fnc_vehicleShopMenu,["cop_air",west,"cop_air_1","cop","APD - Kavala District"],1.5,true,true,"","true",5];

// Polizei Luftgarage

this addAction["Polizei Luftfahrgarage",  {
    if (life_HC_isActive) then {
        [getPlayerUID player,playerSide,"Air",player] remoteExecCall ["HC_fnc_getVehicles",HC_Life];
    } else {
        [getPlayerUID player,playerSide,"Air",player] remoteExecCall ["TON_fnc_getVehicles",2];
    };
    createDialog "Life_impound_menu";
    disableSerialization;
    ctrlSetText[2802,"Lade Fahrzeuge..."];
    life_garage_sp = "cop_air_1"; life_garage_type = "Air";
},"",0,false,false,"",'playerSide isEqualTo west',5];

// Polizei Luftfahrzeug einparken

this addAction[localize"STR_MAR_Store_vehicle_in_Garage",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store',5]; this setObjectTextureGlobal [0,"textures\cop_uniform.jpg"];

// Medics Medizinische Hilfe

this addAction[localize"STR_MAR_Medical_Assistance",life_fnc_healHospital,"",1.5,false,false,"",'isNull objectParent player && player distance _target < 5',5];

// Medics Luftfahrtslizenz

this addAction[format ["%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "mAir" >> "displayName")),
    [(getNumber(missionConfigFile >> "Licenses" >> "mAir" >> "price"))]
    call life_fnc_numberText],life_fnc_buyLicense,"mAir",0,false,false,"",' !license_med_mAir && playerSide isEqualTo independent ',5];

// Medics Waffenshop

this addAction[localize"STR_MAR_EMS_Item_Shop",life_fnc_weaponShopMenu,"med_basic",1.5,true,true,"","true",5];

// Medics Klamotten

this addAction[localize"STR_MAR_EMS_Clothing_Shop",life_fnc_clothingMenu,"med_clothing",1.5,true,true,"","true",5];

// Medics Fahrzeuge

this addAction[localize"STR_MAR_W_E_Vehicle Shop",life_fnc_vehicleShopMenu,["med_shop",independent,"med_car_1","med","Kavala Hospital"],1.5,true,true,"","true",5];

// Medics Luftfahrzeuge

this addAction[localize"STR_MAR_Helicopter_Shop", life_fnc_vehicleShopMenu,["med_air_hs",independent,"medic_spawn_1","med","Kavala Hospital"],1.5,true,true,"","true",5];

// Medics Garage

this addAction[localize"STR_MAR_W_Car_Garage",  {
    if (life_HC_isActive) then {
       [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["HC_fnc_getVehicles",HC_Life];
    } else {
        [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["TON_fnc_getVehicles",2];
    };
    createDialog "Life_impound_menu";
    disableSerialization;
    ctrlSetText[2802,"Fetching Vehicles...."];
    life_garage_sp = "med_car_1"; life_garage_type = "Car";
},"",0,false,false,"",'playerSide isEqualTo independent',5];

// Medics Luftfahrzeugsgarage

this addAction[localize"STR_MAR_Helicopter_Garage",  {
    if (life_HC_isActive) then {
       [getPlayerUID player,playerSide,"Air",player] remoteExecCall ["HC_fnc_getVehicles",HC_Life];
    } else {
        [getPlayerUID player,playerSide,"Air",player] remoteExecCall ["TON_fnc_getVehicles",2];
    };
    createDialog "Life_impound_menu";
    disableSerialization;
    ctrlSetText[2802,"Fetching Vehicles...."];
    life_garage_sp = "medic_spawn_1"; life_garage_type = "Air";
},"",0,false,false,"",'playerSide isEqualTo independent ',5];

// Medics Fahrzeug einarpken

this addAction[localize"STR_MAR_Store_vehicle_in_Garage",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store',5];

// Medics Markt

this addAction[localize"STR_Shops_Market",life_fnc_virt_menu,"med_market",1.5,false,false,"",' isNull objectParent player && player distance _target < 5 && playerSide isEqualTo independent ',5];

// Zivi Markt

this addAction[localize"STR_MAR_Clothing_Store",life_fnc_clothingMenu,"bruce",1.5,true,true,"","true",5];

// Zivi Generalstore

this addAction[localize "STR_MAR_General_Store",life_fnc_weaponShopMenu,"genstore",1.5,true,true,"","true",5];

// Zivi Garage

this addAction[localize"STR_Garage_Title",  {
    if (life_HC_isActive) then {
       [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["HC_fnc_getVehicles",HC_Life];
    } else {
        [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["TON_fnc_getVehicles",2];
    };
    life_garage_type = "Car";
    createDialog "Life_impound_menu";
    disableSerialization;
    ctrlSetText[2802,"Fetching Vehicles...."];
    life_garage_sp = "car_g_1";
},"",1.5,true,true,"","true",5];

// Zivi Fahrzeug einparken

this addAction[localize"STR_MAR_Store_vehicle_in_Garage",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store',5];

removeallWeapons this; this enableSimulation false; this allowDamage false; this addAction[localize"STR_MAR_Cop_Item_Shop",life_fnc_virt_menu,"cop",1.5,true,true,"","true",5];  this addAction[localize"STR_MAR_Helicopter_Shop",life_fnc_vehicleShopMenu,["cop_air",west,"cop_air_2","cop","APD - Air HQ"],1.5,true,true,"","true",5]; this addAction[localize"STR_Garage_Title",  {   if (life_HC_isActive) then {    [getPlayerUID player,playerSide,"Air",player] remoteExecCall ["HC_fnc_getVehicles",HC_Life]; } else { [getPlayerUID player,playerSide,"Air",player] remoteExecCall ["TON_fnc_getVehicles",2];};  createDialog "Life_impound_menu";  disableSerialization;  ctrlSetText[2802,"Fetching Vehicles...."];  life_garage_sp = "cop_air_2"; life_garage_type = "Air"; },"",0,false,false,"",'playerSide isEqualTo west',5]; this addAction[localize"STR_MAR_Store_vehicle_in_Garage",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store',5]; this setObjectTextureGlobal [0,"textures\cop_uniform.jpg"];
