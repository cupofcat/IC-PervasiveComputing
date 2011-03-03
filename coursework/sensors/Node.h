#ifndef NODE_H__
#define NODE_H__

enum {
  AM_BASE = 10
};

typedef nx_struct SensorsReadingsMsg {
  nx_uint16_t raw_temp;
  nx_uint16_t raw_light;
} SensorsReadingsMsg;

enum {
  SEND_TO_BASE_INTERVALS = 1000,
};

#endif
