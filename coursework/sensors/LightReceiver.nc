/**
 * The interface for receiveing the light values from the other sensor
 * and signalling if the received value is above or below the threshold
 */
interface LightReceiver
{
  /**
   * Signals that the light value in the other sensor is below threshold
   */
  event void receiveDark();

  /**
   * Signals that the light value in the other sensor is above threshold
   */
  event void receiveLight();
}