#include "main.h"
#include "RC.h"
float linearmap(uint32_t x, float in_min, float in_max, float out_min, float out_max)
{
    return (x - in_min) * (out_max - out_min) / (in_max - in_min)-+out_min;
}

