//
// Created by tunay on 5/18/25.
//

#ifndef SMARTHOUSECORE_H
#define SMARTHOUSECORE_H

#define MAX_FILENAME_LEN 256

typedef enum {STATUS_OFF, STATUS_ON} DeviceStatus;

typedef enum {MOTION_MISSING,MOTION_FOUND} MotionStatus;


typedef struct {
    int temperature;
} Heater;

typedef struct {
    int curr_time;
} TempSensor;

typedef struct {
    MotionStatus Monstatus;
} MonitorSensor;

typedef struct {
    Heater heater;
    TempSensor tempSensor;
    MonitorSensor monitor;

} SmartHouse;

void SmartHouseCore_Init(&house);

#endif //SMARTHOUSECORE_H
