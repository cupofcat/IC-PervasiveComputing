
/**
 * @author AESE LAB, Imperial college london
 */

#ifndef WSNDEMO_H__
#define WSNDEMO_H__

enum {
  AM_RSSIMSG = 10
};

typedef struct RssiMsg{
  int16_t rssi;
} RssiMsg;

enum {
  SEND_INTERVAL_MS = 250,
  LOG2SAMPLES = 7,
};

#endif 
