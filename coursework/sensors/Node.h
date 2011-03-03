#ifndef NODE_H__
#define NODE_H__

enum {
  AM_BASE = 10
};

typedef struct SensorsReadingsMsg{
  uint16_t raw_temp;
  uint16_t raw_light;
} SensorsReadingsMsg;

enum {
  SEND_TO_BASE_INTERVALS = 1000
};

#endif