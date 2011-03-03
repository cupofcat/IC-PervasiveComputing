#include "Node.h"

configuration NodeAppC
{
}
implementation
{
  components SensorsReadC;
  components new TempC() as TempSensor;
  SensorsReadC.TemperatureRead -> TempSensor;
  SensorsReadC.LightRead -> TempSensor;
  
  components LightReceiverC;
  components new AMReceiverC(AM_RSSIMSG);
  LightReceiverC.Receive -> AMReceiverC;
  
  components LedsFlasherC;
  components LedsC;
  components new TimerMilliC() as LedsTimer1;
  components new TimerMilliC() as LedsTimer2;
  LedsFlasherC.Leds -> LedsC;
  LedsFlasherC.PeriodTimer -> LedsTimer1;
  LedsFlasherC.TurnOffTimer -> LedsTimer2;

  components NodeC as App;
  components MainC;
  components new TimerMilliC() as BaseStationTimer;
  components ActiveMessageC;  
  components new AMSenderC(AM_BASE) as BaseStationSender;
  App -> MainC.Boot;
  App.SensorsRead -> SensorsReadC;
  App.LightReceiver -> LightReceiverC;
  App.LedsFlasher -> LedsFlasherC;
  App.SendToBaseTimer -> BaseStationTimer;
  App.RadioControl -> ActiveMessageC;
  App.Packet -> BaseStationSender;
  App.BaseStationSend -> BaseStationSender;
}