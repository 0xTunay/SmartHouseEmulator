/*!
 * @file AddRoom.h
 * @brief File for manage add room
 *
 * @details Modul provides work with rooms.
 * You can add rooms and delete rooms also connection with AddDevice.C/H
 *
 * @author tunay
 * @date 2025-05-23
 */

#ifndef ADDROOM_H
#define ADDROOM_H

#include "../include/SmartHouseCore.h"

void AddRoom(SmartHouse *house, DeviceType type,DeviceStatus status, int data);

#endif // ADDROOM_H