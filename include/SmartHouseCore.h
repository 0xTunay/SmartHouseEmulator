/*!
 * @file SmartHouseCore.h
 * @brief main header file for smart house.
 *
 * include initializite struct , enumeration functions, for the operation
 * of the smart house: DEVICE_LIGHT, DEVICE_HEATER,
 * DEVICE_TEMPERATURE and etc.
 *
 * @author tunay
 * @date 2025-05-18
 */

#ifndef SMARTHOUSECORE_H
#define SMARTHOUSECORE_H

/*!
 * @details this macros for limits in program
 */


#define MAX_FILENAME_LEN 256
#define DEVICE_ERROR -1
#define DEVICE_OK 0
#define DEVICE_NOT_INITIALIZED -1
#define MAX_DEVICES 64

typedef enum {STATUS_OFF, STATUS_ON} DeviceStatus;
typedef enum {MOTION_MISSING,MOTION_FOUND} MotionStatus;

/*!
 * @enum DeviceType
 * @brief Device type
 */

typedef enum {
    DEVICE_LIGHT,
    DEVICE_HEATER,
    DEVICE_TEMPERATURE,
    DEVICE_TEMPERATURE_SENSOR,
    DEVICE_MONITOR_SENSOR
} DeviceType;

/*!
 * @struct Device
 * @brief structure that describes device in a system
 */


typedef struct {
    DeviceType type;                 /*!< Device type  */
    DeviceStatus status;             /*!< Device status(STATUS_OFF,STATUS_ON) */

    union {
        int temperature;             /*!< value temperature  */
        MotionStatus motionStatus;   /*!< status movement */
        int light;                   /*!< light level in the room  */

    }data;                          /*!< data device */
} Device;

/*!
 * @struct SmartHouse
 * @brief description the structure all smart house system
 */

typedef struct {
    Device *devices;
    int device_count;
}SmartHouse;

/*!
 * @brief initialize structure smart house
 * @param house pointer on smart house structure, which needs to be  initialize
 */

void SmartHouseCore_Init(SmartHouse *house);
#endif //SMARTHOUSECORE_H
