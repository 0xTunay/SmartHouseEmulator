//
// Created by tunay on 5/18/25.
//
/*!
 * @date 2025 05 18
 * @details this module initialize core the application
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/SmartHouseCore.h"

/*!
 * @details init smarthouse struct
 */

void SmartHouseCore_Init(SmartHouse *house){

    if(house == NULL){
        perror("pointer error");
        exit(EXIT_FAILURE);
    }

    house->device_count = 0;

    house->devices = malloc(sizeof(Device) * MAX_DEVICES);
    if(house->devices == NULL){
        fprintf(stderr, "Error allocating memory for device array\n");
        exit(EXIT_FAILURE);
    }

    memset(house->devices, 0, sizeof(Device) * MAX_DEVICES);

    puts("SmartHouseEmulator v1.0");


    free(house->devices);
}
