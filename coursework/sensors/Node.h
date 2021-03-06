#ifndef NODE_H__
#define NODE_H__

// Constant for LightReceiverC
const uint16_t RAW_LIGHT_THRESHOLD = 100;

// Constants for LedsFlasherC
const uint8_t RED_LED = 1;
const uint8_t GREEN_LED = 2;
const uint8_t YELLOW_LED = 4;

// Message type
enum {
  AM_SENSORSREADINGSMSG = 10
};

typedef nx_struct SensorsReadingsMsg {
  nx_uint16_t node_id;
  nx_uint16_t raw_temp;
  nx_uint16_t raw_light;
} SensorsReadingsMsg;

// Constant for NodeC
enum {
  SEND_TO_BASE_INTERVAL_MS = 1000,
};

#endif