#include <Timer.h>
#include "ReadTemp.h"

configuration ReadTempAppC
{
}

implementation
{
  components SerialActiveMessageC;
  components new SerialAMSenderC(AM_READTEMP);
  components MainC, ReadTempC, LedsC;
  components new TempC() as TempSensor;
  components new TimerMilliC() as Timer0;

  ReadTempC -> MainC.Boot;

  ReadTempC.Packet -> SerialAMSenderC;
  ReadTempC.AMPacket -> SerialAMSenderC;
  ReadTempC.AMSend -> SerialAMSenderC;
  ReadTempC.AMControl -> SerialActiveMessageC;

  ReadTempC.Timer0 -> Timer0;
  ReadTempC.Read -> TempSensor;
  ReadTempC.Leds -> LedsC;

}

