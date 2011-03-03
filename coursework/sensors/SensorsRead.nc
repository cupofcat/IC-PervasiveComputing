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