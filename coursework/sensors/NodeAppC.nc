#include "Node.h"

configuration NodeAppC
{
}
implementation
{
  components MainC, LedsC;
  components new TimerMilliC() as BaseStationTimer;
  components new TempC() as TempSensor;
  components ActiveMessageC;  
  components new AMSenderC(AM_BASE) as BaseStationSender;

  components SensorsReadC;
  SensorsReadC.TemperatureRead -> TempSensor;
  SensorsReadC.LightRead -> TempSensor;

  components NodeC as App;
  App -> MainC.Boot;
  App.SendToBaseTimer -> BaseStationTimer;
  App.Leds -> LedsC;
  App.SensorsRead -> SensorsReadC;
  App.Packet -> BaseStationSender;
  
  App.BaseStationSend -> BaseStationSender;
  App.RadioControl -> ActiveMessageC;
}
