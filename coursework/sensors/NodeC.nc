module NodeC
{
  uses interface Boot;
  uses interface Timer<TMilli> SendToBaseTimer;
  uses interface Leds;
  uses interface Read<uint16_t> as TemperatureRead;
  uses interface Read<uint16_t> as LightRead;
  uses interface Packet;
  uses interface AMSend as BaseStationSend;
  uses interface SplitControl as RadioControl;
}
implementation
{
  bool send_to_base_busy;
  message_t pkt;
  
  uint16_t raw_temp;
  uint16_t raw_light;
  
  void send_to_base();
  
  /** BOOT **/

  event void Boot.booted()
  {
    call RadioControl.start();
  }
  
  /** RADIO CONTROL **/
  
  event void RadioControl.startDone(error_t result)
  {
    if (result == SUCCESS)
    {
      call SendToBaseTimer.startPeriodic(1000);
    }
    else
    {
      call RadioControl.start();
    }
  }

  event void RadioControl.stopDone(error_t result)
  {
  }
  
  /** TIMER **/

  event void SendToBase.fired()
  {
    call TemperatureRead.read();   
  }
  
  /** READING TEMPERATURE AND LIGHT **/
  
  event void TemperatureRead.readDone(error_t result, uint16_t data)
  {
    raw_temp = data;
    call LightRead.read();
  }
  
  event void LightRead.readDone(errot_t result, uint16_t data)
  {
    raw_light = data;
    send_to_base();
  }
  
  /** BASE STATION COMMUNICATION **/
  
  void send_to_base()
  {
    if (!send_to_base_busy)
    {
      // Obtain the address of payload inside the packet
      SensorsReadingsMsg* readings =
          (SensorsReadingsMsg*)(call Packet.getPayload(
                                                &pkt,
                                                sizeof (SensorsReadingsMsg)));

      // Fill in the data
      readings->raw_temp  = raw_temp;
      readings->raw_light = raw_light;
      
      // Send the readings to base station
      if (call BaseStationSend.send(BASE_STATION_ADDR,
                                    &pkt,
                                    sizeof(SensorsReadingsMsg)) == SUCCESS)
      {
        send_to_base_busy = TRUE;
      }
    }
  }

  event void BaseStationSend.sendDone(message_t* msg, error_t error)
  {
    if (&pkt == msg)
    {
      send_to_base_busy = FALSE;
    }
  }
}

