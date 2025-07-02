//
// Created by tunay on 5/18/25.
//
/*!
 * @date 2025 05 18
 * @details this module initialize core the application
 * @author Tunay 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "../include/SmartHouseCore.h"

/*!
 * @details init smarthouse struct
    * @note this function should be called before using the SmartHouse struct
    * @param house pointer to the SmartHouse struct to be initialized
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


}
/*!
 * @details free smarthouse struct
 * @note this function should be called when the program is done using the SmartHouse struct
 * @param house pointer to the SmartHouse struct to be freed
 */
void SmartHouseCore_Free(SmartHouse *house){
    if(house == NULL){
        perror("pointer error");
        exit(EXIT_FAILURE);
    }

    if(house->devices != NULL){
        free(house->devices);
        house->devices = NULL;
    }
    puts("SmartHouseEmulator freed");
}