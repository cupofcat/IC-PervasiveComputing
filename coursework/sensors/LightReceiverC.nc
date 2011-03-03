module LightReceiverC
{
  uses
  {
    interface Receive;
  }
  
  provides interface LightReceiver;
}

implementation
{
  message_t pkt;
  
  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len)
  {
    SensorsReadingsMsg* readings = (SensorsReadingsMsg*)payload;
    if (payload->raw_light < RAW_LIGHT_TRESHOLD)
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