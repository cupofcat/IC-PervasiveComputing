
module NodeC
{
  uses interface Boot;
  uses interface Timer<TMilli> as SendToBaseTimer;
  uses interface SensorsRead;
  uses interface LightReceiver;
  uses interface LedsFlasher;
  uses interface Timer<Tmilli> as LedsTimer;
  uses interface Packet;
  uses interface AMSend as BaseStationSend;
  uses interface SplitControl as RadioControl;
}
implementation
{
  bool send_to_base_busy = FALSE;
  message_t pkt;

  /** INITIALISATIONS **/

  event void Boot.booted()
  {
    call RadioControl.start();
  }

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
  
  /** READ SENSORS AND SEND **/

  event void SendToBaseTimer.fired()
  {
    if (!send_to_base_busy)
    {
      // Obtain the address of payload inside the packet
      // TODO: This possibly can be called only once, because the address
      //       to pkt is always the same (?)

      SensorsReadingsMsg* readings =
         (SensorsReadingsMsg*)(call Packet.getPayload(
                                               &pkt,
                                               sizeof (SensorsReadingsMsg)));
    
      call SensorsRead.read(readings);
    }
  }

  event void SensorsRead.readDone()
  {
    // Send the readings to base station
    //TODO: Should it be AM_BROADCAST_ADDR? Or just levae it, so neighbours receive it as well?
    if (call BaseStationSend.send(AM_BROADCAST_ADDR,
                                  &pkt,
                                  sizeof(SensorsReadingsMsg)) == SUCCESS)
    {
      send_to_base_busy = TRUE;
    }
    
    //TODO: Send the light to neighbour (of maybe just broadcast everywhere the same, as now?)
  }

  event void BaseStationSend.sendDone(message_t* msg, error_t error)
  {
    if (&pkt == msg)
    {
      send_to_base_busy = FALSE;
    }
  }

  /** FLASHING LEDS ON RECEIVING LIGHT VALUES **/

  event void LightReceiver.receiveDark()
  {
    call LedsFlasher.set(RED_LED);
    call LedsFlasher.start(4, 1);
    call LedsTimer.startOneShot(20);
  }

  event void LightReceiver.receiveLight()
  {
    call LedsFlasher.set(YELLOW_LED);
    call LedsFlasher.start(4, 1);
    call LedsTimer.startOneShot(20);
  }

  event void LedsTimer.fired()
  {
    LedsFlasher.stop();
  }
}