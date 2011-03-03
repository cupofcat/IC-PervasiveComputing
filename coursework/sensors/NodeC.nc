module NodeC
{
  uses interface Boot;
  uses interface Timer<TMilli> SendToBaseTimer;
  uses interface Leds;
  uses interface AMSend as BaseStationSend;
  uses interface SplitControl as RadioControl;
}
implementation
{
  message_t msg;

  event void Boot.booted()
  {
    
  }
}

