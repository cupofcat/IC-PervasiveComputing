
/**
 * @author AESE LAB, Imperial college london
 */

#ifndef WSNDEMO_H__
#define WSNDEMO_H__

enum {
  AM_RSSIMSG = 10
};

typedef struct RssiMsg{
  uint16_t rssi;
} RssiMsg;

typedef nx_struct SensorsReadingsMsg {
  nx_uint16_t node_id;
  nx_uint16_t event_type;
  nx_uint16_t raw_temp;
  nx_uint16_t raw_light;
} SensorsReadingsMsg;

enum {
  SEND_INTERVAL_MS = 250,
  LOG2SAMPLES = 7,
};

#endif 
