module NodeC
{
  uses interface Boot;
  uses interface Timer<TMilli> as SendToBaseTimer;
  uses interface SensorsRead;
  uses interface LightReceiver;
  uses interface LedsFlasher as ReceiveFlasher;
  uses interface Timer<TMilli> as ReceiveTimer;
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
      readings = (SensorsReadingsMsg*)(call Packet.getPayload(&pkt,
                                                sizeof (SensorsReadingsMsg)));
    
      call SensorsRead.read(readings);
    }
  }

  event void SensorsRead.readDone()
  {
    // Set the rest of the fields
    readings->node_id    = TOS_NODE_ID;

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
      send_to_base_busy = FALSE;
    }
  }

  /** FLASHING LEDS ON RECEIVING LIGHT VALUES **/

  event void LightReceiver.receiveDark()
  {
    call ReceiveFlasher.set(RED_LED);
    call ReceiveFlasher.start(150, 100);
    call ReceiveTimer.startOneShot(800);
  }

  event void LightReceiver.receiveLight()
  {
    call ReceiveFlasher.set(YELLOW_LED);
    call ReceiveFlasher.start(150, 100);
    call ReceiveTimer.startOneShot(800);
  }

  event void ReceiveTimer.fired()
  {
    call ReceiveFlasher.stop();
  }
}
