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
  SensorsReadingsMsg* readings;
  
  command void read(SensorsReadingsMsg* readings)
  {
    call TemperatureRead.read();
  }
  
  event void TemperatureRead.readDone(error_t result, uint16_t data)
  {
    readings->raw_temp = data;
    call LightRead.read();
  }
  
  event void LightRead.readDone(errot_t result, uint16_t data)
  {
    readings->raw_light = data;
    signal SensorsRead.readDone();
  }
}

