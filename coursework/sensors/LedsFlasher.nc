/**
 * The interface for flashing the LEDs in periodic manner
 */
interface LedsFlasher
{
  /**
   * Set which LEDs to flash.
   * bit 0 - red LED
   * bit 1 - green LED
   * bit 2 - yellow LED
   *
   * Predefined constants are provided in Node.h for ease of use.
   * Bitwise OR between constants can be used to set any configuration
   * of the LEDs (e.g. RED_LED | YELLOW_LED)
   */
  command void set(uint8_t mask);

  /**
   * Start flashing the LEDs with given period and duration of the flash
   *
   * period - period in ms
   * flash_time - duration of each flash
   */
  command void start(uint16_t period, uint16_t flash_time);

  /**
   * Stop the flashing of the LEDs
   */
  command void stop();
}