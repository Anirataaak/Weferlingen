this addAction["Supermarkt",life_fnc_virt_menu,"super_marked",1.5,true,true,"","true",5];

this addAction[getText(missionConfigFile >> "ProcessAction" >> "strawberry_milk" >> "text"),
    life_fnc_processAction,"strawberry_milk",0,false,false,"",' life_inv_strawberry_milk > 0 && !life_is_processing && !life_action_inUse',5];
this addAction[format ["%1 ($%2)",(getText(missionConfigFile >> "Licenses" >> "juice_press" >> "displayName")),
    [(getNumber(missionConfigFile >> "Licenses" >> "juice_press" >> "price"))]
    call life_fnc_numberText],life_fnc_buyLicense,"juice_press",0,false,false,"",' !license_civ_juice_press && playerSide isEqualTo civilian ',5];

this addAction["Autogarage",  {
    if (life_HC_isActive) then {
        [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["HC_fnc_getVehicles",HC_Life];
    } else {
        [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["TON_fnc_getVehicles",2];
    };
    life_garage_type = "Car";
    createDialog "Life_impound_menu";
    disableSerialization;
    ctrlSetText[2802,"Lade Fahrzeuge..."];  life_garage_sp = "";
},"",1.5,true,true,"","true",5];
this addAction["Fahrzeug einlagern",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store',5];