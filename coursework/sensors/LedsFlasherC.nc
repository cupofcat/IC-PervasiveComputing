module LedsFlasherC
{
  uses
  {
    interface Leds;
    interface Timer<TMilli> as PeriodTimer;
    interface Timer<Tmilli> as TurnOffTimer;
  }
  
  provides interface LedsFlasher;
}

implementation
{
  uint8_t mask;
  uint16_t flash_time;
  
  command void set(uint8_t mask_)
  {
    mask = mask_;
  }
  
  command void start(uint16_t period, uint16_t flash_time_)
  {
    flash_time = flash_time_;
    call PeriodTimer.startPeriodic(period);
  }
  
  event void PeriodTimer.fired()
  {
    call Leds.set(mask);
    call TurnOffTimer.startOneShot(flash_time)
  }
  
  event void TurnOffTimer.fired()
  {
    call Leds.set(0);
  }
  
  command void stop()
  {
    call PeriodTimer.stop();
  }
}