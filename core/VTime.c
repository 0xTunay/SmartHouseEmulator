#include <time.h>
#include <stdio.h>
#include "../include/VTime.h"

void time_init(vtime_t *vtime)
{
    time_t t = time(NULL);
    struct tm *now = localtime(&t);

    vtime->tm_sec  = now->tm_sec;
    vtime->tm_min  = now->tm_min;
    vtime->tm_hour = now->tm_hour;
    vtime->tm_mday = now->tm_mday;
    vtime->tm_mon  = now->tm_mon;
    vtime->tm_year = now->tm_year + 1900;
}