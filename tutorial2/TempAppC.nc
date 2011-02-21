configuration ReadTempAppC
{
}

implementation
{
  components MainC, BlinkC, LedsC;
  components new TempC() as TempSensor;
  components new TimerMilliC() as Timer0;


  ReadTempC -> MainC.Boot;

  ReadTempC.Timer0 -> Timer0;
  ReadTempC.Leds -> LedsC;
  ReadTempC.Read -> TempSensor;
}
