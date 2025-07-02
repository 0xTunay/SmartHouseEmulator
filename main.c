/*!
 * @file main.c
 * @brief main file for init smarthouse.
 *
 * @author tunay
 * @date 2025-05-19
 */
#include <stdio.h>
#include <stdlib.h>

#include "include/SmartHouseCore.h"
/*!
 * @details main function for start program
 */
int main(void) {
    SmartHouse house;
	puts("Welcome to Smart House Emulator");
	puts("In this application you can build you own smart system ");
	
	SmartHouseCore_Init(&house);s
}
