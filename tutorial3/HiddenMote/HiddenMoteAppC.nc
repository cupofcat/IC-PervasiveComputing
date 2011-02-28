
/**
 * @author AESE LAB, Imperial College London
 */

#include "WSNDemo.h"

configuration HiddenMoteAppC {
} implementation {
  components ActiveMessageC;  
  components MainC, LedsC;
  components new AMSenderC(AM_RSSIMSG) as RssiMsgSender;
  components new TimerMilliC() as SendTimer;

  components HiddenMoteC as App;
  

  App -> MainC.Boot;
  App.SendTimer -> SendTimer;
  App.Leds -> LedsC;
  
  App.RssiMsgSend -> RssiMsgSender;
  App.RadioControl -> ActiveMessageC;
}
