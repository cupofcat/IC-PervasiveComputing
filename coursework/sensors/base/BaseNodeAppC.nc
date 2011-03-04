#include "../Node.h"

configuration BaseNodeAppC
{
}
implementation
{
  components BaseNodeC as App;
  components MainC;
  App.Boot -> MainC.Boot;

  components ActiveMessageC;
  components new AMReceiverC(AM_SENSORSREADINGSMSG);
  App.RadioReceive -> AMReceiverC;
  App.RadioControl -> ActiveMessageC;

  components new SerialAMSenderC(AM_SENSORSREADINGSMSG);
  components SerialActiveMessageC;
  App.SerialPacket -> SerialAMSenderC;
  App.SerialSend -> SerialAMSenderC;
  App.SerialControl -> SerialActiveMessageC;
}
