#include "../include/AddDevice.h"
/*! 
* @file AddDevice.c
* @date 2025 05 18
* @details This module adds a device to the SmartHouse structure.
* @author Tunay
* @param house Pointer to the SmartHouse structure.
* @param type The type of the device to be added.
* @param status The status of the device to be added.
* @param data Additional data for the device.
*/
void AddDevice(SmartHouse *house, DeviceType type,DeviceStatus status, int data) {

    if (house == NULL) {
        perror("SmartHouse pointer is NULL");
        return;
    }

    if (house->device_count >= MAX_DEVICES) {
        fprintf(stderr, "Cannot add more devices, maximum limit reached.\n");
        return;
    }

    Device *new_device = &house->devices[house->device_count++];
    new_device->type = type;
    new_device->status = status;
    new_device->data = data;

    printf("Device added: Type=%d, Status=%d, Data=%d\n", type, status, data);
}