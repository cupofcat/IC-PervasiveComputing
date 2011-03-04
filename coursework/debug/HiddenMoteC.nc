/**
 * @author AESE Lab, Imperial College London
 */
#include "WSNDemo.h"

module HiddenMoteC {
  uses interface Boot;
  uses interface Timer<TMilli> as SendTimer;
  uses interface Leds;  
  uses interface AMSend as RssiMsgSend;
  uses interface SplitControl as RadioControl;
  uses interface Packet;
} implementation {
  message_t msg;
  
  SensorsReadingsMsg* readings;

  event void Boot.booted(){
    call RadioControl.start();
  }

  event void RadioControl.startDone(error_t result){
    call SendTimer.startPeriodic(SEND_INTERVAL_MS);
  }

  event void RadioControl.stopDone(error_t result){}


  event void SendTimer.fired(){
    call Leds.led1Toggle();
    readings = (SensorsReadingsMsg*)(call Packet.getPayload(&msg,
                                                sizeof (SensorsReadingsMsg)));
    readings->node_id = 0;
    readings->event_type = 5;
    readings->raw_temp = 666;
    readings->raw_light = 999;

    call RssiMsgSend.send(1, &msg, sizeof(SensorsReadingsMsg));    
  }

  event void RssiMsgSend.sendDone(message_t *m, error_t error){}
}
