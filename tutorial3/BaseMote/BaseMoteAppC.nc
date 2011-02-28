/**
 * @author AESE LAB, Imperial College London
 */

#include "message.h"

configuration BaseMoteAppC {
} implementation {
  components LedsC, MainC;
  components BaseMoteC as App;
  components new AMReceiverC(AM_RSSIMSG);
  components CC2420ActiveMessageC;
  components SerialActiveMessageC as AM;         
  App.Boot -> MainC.Boot;
  App.CC2420Packet -> CC2420ActiveMessageC.CC2420Packet;
  App.SerialSend -> AM.AMSend[AM_RSSIMSG];
  App.RadioControl -> CC2420ActiveMessageC;
  App.SerialControl -> AM;
  App.RssiMsgReceive -> AMReceiverC;
  App.Leds -> LedsC;
 }
