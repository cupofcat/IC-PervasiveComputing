#include "../Node.h"

/**
 * Mote part of the base station. It receives the sensor readings through the
 * radio and sends them through the USB, without any processing, to the JAVA
 * part.
 */
configuration BaseNodeAppC
{
}
implementation
{
  components BaseNodeC as App;

  components MainC;
  App.Boot -> MainC.Boot;

  // Wiring for the receiving
  components ActiveMessageC;
  components new AMReceiverC(AM_SENSORSREADINGSMSG);
  App.RadioReceive -> AMReceiverC;
  App.RadioControl -> ActiveMessageC;

  // Wiring for the sending over USB cable
  components new SerialAMSenderC(AM_SENSORSREADINGSMSG);
  components SerialActiveMessageC;
  App.SerialPacket -> SerialAMSenderC;
  App.SerialSend -> SerialAMSenderC;
  App.SerialControl -> SerialActiveMessageC;
}