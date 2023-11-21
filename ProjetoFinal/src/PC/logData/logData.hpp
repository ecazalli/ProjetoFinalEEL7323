
#pragma once;

#include <stdint.h>

 typedef struct timeDate{
    int hr, min, sec, is_pm;
    int mo, day, yr;    
} timeDate;


typedef struct logData {
    uint8_t log_controller_ID;
    timeDate log_time_date; 
    uint8_t log_senseH_ID;
    uint8_t log_batimentos;
    uint8_t log_senseT_ID;
    float log_temp;
}logData;