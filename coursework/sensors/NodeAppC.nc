#include "Node.h"

configuration NodeAppC
{
}
implementation
{
  components MainC, LedsC;
  components new TimerMilliC() as SendToBaseTimer;
  components new TempC() as TempSensor;
  components SensorsReadC;
  components ActiveMessageC;  
  components new AMSenderC(AM_BASE) as BaseStationSender;

  components NodeC as App;

  App -> MainC.Boot;
  App.SendToBaseTimer -> SendToBaseTimer;
  App.Leds -> LedsC;
  App.SensorRead -> SensorReadC;
  App.Packet -> BaseStationSender;
  
  App.BaseStationSend -> BaseStationSender;
  App.RadioControl -> ActiveMessageC;
}
