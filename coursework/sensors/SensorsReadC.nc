#include "Node.h"

module SensorsReadC
{
  uses
  {
    interface Read<uint16_t> as TemperatureRead;
    interface Read<uint16_t> as LightRead; 
  }

  provides interface SensorsRead;
}

implementation
{
  /** The results will be stored here. Passed by caller when calling read() */
  SensorsReadingsMsg* readings;

  /**
   * Works by first reading the temperature and then, after temperature
   * is done being read, reading the light.
   *
   * This is because we can't read both at the same time and we want
   * to avoid the clashes.
   */  
  command void SensorsRead.read(SensorsReadingsMsg* rds)
  {
    readings = rds;
    call TemperatureRead.read();
  }

  event void TemperatureRead.readDone(error_t result, uint16_t data)
  {
    readings->raw_temp = data;
    call LightRead.read();
  }

  event void LightRead.readDone(error_t result, uint16_t data)
  {
    readings->raw_light = data;

    // Signal to the caller
    signal SensorsRead.readDone();
  }
}