interface LedsFlasher
{
  command void set(uint8_t mask);
  command void start(uint16_t period, uint16_t flash_time);
  command void stop();
}