#ifndef READTEMP_H
#define READTEMP_H

enum {
    AM_READTEMP = 6,
    TIMER_PERIOD_MILLI = 250
};

typedef nx_struct ReadTempMsg {
	nx_uint16_t temp;
} ReadTempMsg;

#endif

