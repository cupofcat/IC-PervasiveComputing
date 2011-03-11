module NodeC
{
  uses interface Boot;
  uses interface Timer<TMilli> as SendToBaseTimer;
  uses interface SensorsRead;
  uses interface LightReceiver;
  uses interface LedsFlasher;
  uses interface Timer<TMilli> as LedsTimer;
  uses interface Packet;
  uses interface AMSend as BaseStationSend; //TODO: Change the name - we're broadcasting
  uses interface SplitControl as RadioControl;

  uses interface Leds;
}
implementation
{
  bool send_to_base_busy = FALSE;
  SensorsReadingsMsg* readings;
  message_t pkt;

  void flash(uint8_t color)
  {
    call LedsFlasher.set(color);
    call LedsFlasher.start(300, 200);
    call LedsTimer.startOneShot(400);
  }

  /** INITIALISATIONS **/

  event void Boot.booted()
  {
    call RadioControl.start();
  }

  event void RadioControl.startDone(error_t result)
  {
    if (result == SUCCESS)
    {
      call SendToBaseTimer.startPeriodic(4000);
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
      readings = (SensorsReadingsMsg*)(call Packet.getPayload(&pkt,
                                                sizeof (SensorsReadingsMsg)));
    
      call SensorsRead.read(readings);
    }
  }

  event void SensorsRead.readDone()
  {
    // Set the rest of the fields
    readings->node_id    = TOS_NODE_ID;
    readings->event_type = 1;

    // Broadcast the readings
    if (call BaseStationSend.send(AM_BROADCAST_ADDR,
                                  &pkt,
                                  sizeof(SensorsReadingsMsg)) == SUCCESS)
    {
      send_to_base_busy = TRUE;
    }
  }

  event void BaseStationSend.sendDone(message_t* msg, error_t error)
  {
    if (&pkt == msg)
    {
      flash(GREEN_LED);
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
    call LedsFlasher.stop();
  }
}
