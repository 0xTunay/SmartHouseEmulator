//
// Created by tunay on 5/18/25.
//

#ifndef SMARTHOUSECORE_H
#define SMARTHOUSECORE_H

#define MAX_FILENAME_LEN 256
#define DEVICE_ERROR -1
#define DEVICE_OK 0
#define DEVICE_NOT_INITIALIZED -1
#define MAX_DEVICES 64

typedef enum {STATUS_OFF, STATUS_ON} DeviceStatus;
typedef enum {MOTION_MISSING,MOTION_FOUND} MotionStatus;

typedef enum {
    DEVICE_LIGHT,
    DEVICE_HEATER,
    DEVICE_TEMPERATURE,
    DEVICE_TEMPERATURE_SENSOR,
    DEVICE_MONITOR_SENSOR
} DeviceType;

typedef struct {
    DeviceType type;
    DeviceStatus status;

    union {
        int temperature;
        MotionStatus motionStatus;
        int light;
    }data;
} Device;

typedef struct {
    Device devices[MAX_DEVICES];
    int device_count;
}SmartHouse;

void SmartHouseCore_Init(void);
void AddDevice(SmartHouse *house, DeviceType type,DeviceStatus status, int data);

#endif //SMARTHOUSECORE_H
