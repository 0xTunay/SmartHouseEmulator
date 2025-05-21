//
// Created by tunay on 5/18/25.
//
/*!
 * @date 2025 05 18
 * @details this module initialize core the application
 */
#include <stdio.h>
#include <stdlib.h>

#include "../include/SmartHouseCore.h"

/*!
 * @details init smarthouse struct
 */
void SmartHouseCore_Init(){
    SmartHouse house;

    SmartHouseCore_Init(&house);
    house.devices[0].type = DEVICE_LIGHT;
    house.devices[0].status = STATUS_OFF;
    house.devices[0].data.temperature = 18;

    puts("SmartHouseEmulator v1.0");



}
