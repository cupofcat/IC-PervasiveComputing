#include "Node.h"

/**
 * The interface for obtaining the readings from light and temperature
 * sensors. The pointer to the structure where the readings are written
 * must be provided upon calling read()!
 *
 * When the readings are obtained the readDone() event is signalled.
 */
interface SensorsRead
{
  /**
   * Initiates the reading of the temperature and light sensors'
   * raw values and writes the results into the provided structure.
   */
  command void read(SensorsReadingsMsg* readings);

  /**
   * Signals the completion of the read()
   */
  event void readDone();
}