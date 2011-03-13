module LightReceiverC
{
  uses interface Receive;
  provides interface LightReceiver;
}

implementation
{
  message_t pkt;

  /**
   * Upon receiving the readings from another sensor we extract the light
   * reading and decide if it is above or below the threshold. Then we
   * signal the appropiate event.
   *
   * The treshold is defined in Node.h
   */
  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len)
  {
    SensorsReadingsMsg* readings = (SensorsReadingsMsg*)payload;
    if (readings->raw_light < RAW_LIGHT_THRESHOLD)
    {
      signal LightReceiver.receiveDark();
    }
    else
    {
      signal LightReceiver.receiveLight();
    }
    return msg;
  }
}