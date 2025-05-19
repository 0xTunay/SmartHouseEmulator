//
// Created by tunay on 5/18/25.
//

#ifndef MAIN_H
#define MAIN_H

#define MAX_FILENAME_LEN 256

typedef enum {ON, OFF} status;
typedef enum {LIGHT, DOOR,} Device_type;

typedef struct {
	Device_type type;

	int id;
		union {
			int light;
			int door;
	};
} Device;

Device* SmartHouseInit(void);
#endif //MAIN_H