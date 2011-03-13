module LedsFlasherC
{
  uses
  {
    interface Leds;

    // Handles turning the LEDs on every fixed amount of time
    interface Timer<TMilli> as PeriodTimer;

    // Handles turning the LEDs off after flash_time ms pass
    interface Timer<TMilli> as TurnOffTimer;
  }

  provides interface LedsFlasher;
}

implementation
{
  uint8_t mask;
  uint16_t flash_time;

  command void LedsFlasher.set(uint8_t mask_)
  {
    mask = mask_;
  }

  command void LedsFlasher.start(uint16_t period, uint16_t flash_time_)
  {
    flash_time = flash_time_;
    call PeriodTimer.startPeriodic(period);
  }

  event void PeriodTimer.fired()
  {
    // Light the LEDs
    call Leds.set(mask);

    // Turn off after flash_time ms
    call TurnOffTimer.startOneShot(flash_time);
  }

  event void TurnOffTimer.fired()
  {
    // Turn off the LEDs
    call Leds.set(0);
  }

  command void LedsFlasher.stop()
  {
    call PeriodTimer.stop();
  }
}