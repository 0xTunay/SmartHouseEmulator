#ifndef VTIME_H
#define VTIME_H


typedef struct  {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
} vtime_t;

void time_init( vtime_t *vtime);

#endif // VTIME_H