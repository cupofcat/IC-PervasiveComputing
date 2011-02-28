/**
 * @author AESE LAB, Imperial College London
 */
#include "WSNDemo.h"  

module BaseMoteC {
  uses interface Boot;
  uses interface Receive as RssiMsgReceive;
  uses interface CC2420Packet;
  uses interface AMSend as SerialSend;
  uses interface Leds;
  uses interface SplitControl as RadioControl;
  uses interface SplitControl as SerialControl;

} implementation {

  uint16_t value;
  message_t uartbuf;
  
  event void Boot.booted() {
    call RadioControl.start();
  }

  event void RadioControl.startDone(error_t result) {
    call SerialControl.start();
  }

  event void RadioControl.stopDone(error_t result) {
  }
  
  event message_t* RssiMsgReceive.receive(message_t *msg,
				      void *payload,
				      uint8_t len) {
    // This variable is unused
    RssiMsg *rssiMsgIn = (RssiMsg*) payload;
    RssiMsg *rssiMsgOut;

    rssiMsgOut = (RssiMsg*)call SerialSend.getPayload(&uartbuf, sizeof(RssiMsg));
    if (rssiMsgOut == NULL) {
      call Leds.led0On(); 
      return msg;
    }
    else {  
      value = (int16_t) call CC2420Packet.getRssi(msg);
      value = value + 45;
	  if(value < 0x14) {
        // This is far. We need red
        call Leds.led0On(); 
        call Leds.led1Off();
        call Leds.led2Off();
	  } else if (value <= 0x1e) {
        call Leds.led0Off(); 
        call Leds.led1Off();
        call Leds.led2On();
      } else if (value >= 0xf0) {
        call Leds.led0On(); 
        call Leds.led1On();
        call Leds.led2On();
      } else {
        call Leds.led0Off(); 
        call Leds.led1On();
        call Leds.led2Off();
      }
      
      memcpy(rssiMsgOut, &value, sizeof(RssiMsg));
       
      call SerialSend.send(0xffff, &uartbuf, sizeof(RssiMsg));
 
    } 
    return msg;
  }

  event void SerialSend.sendDone(message_t *msg, error_t error) {
  }

  event void SerialControl.startDone(error_t error) {
  }

  event void SerialControl.stopDone(error_t error) {
  }
  
}
