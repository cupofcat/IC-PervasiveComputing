module NodeC
{
  uses interface Boot;

  // Triggers performing all the actions every 1s
  uses interface Timer<TMilli> as PeriodicTimer;
  uses interface SensorsRead;

  uses interface LightReceiver;
  uses interface LedsFlasher as ReceiveFlasher;
  // Handles turning off the LEDs some time after they start to flash
  uses interface Timer<TMilli> as ReceiveTimer;

  uses interface Packet;
  uses interface AMSend as BroadcastSend;
  uses interface SplitControl as RadioControl;
}
implementation
{
  /** Flag to indicate if the radio is busy */
  bool radio_busy = FALSE;
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
      // Start sensing and broadcasting the readings
      call PeriodicTimer.startPeriodic(SEND_TO_BASE_INTERVAL_MS);
    }
    else
    {
      call RadioControl.start();
    }
  }

  event void RadioControl.stopDone(error_t result)
  {
    // This has to be implemented, but there is nothing we need to do
  }
  
  /** READ SENSORS AND SEND **/

  event void PeriodicTimer.fired()
  {
    // Check if the radio is free
    if (!radio_busy)
    {
      // Obtain the address of the payload inside the packet
      readings = (SensorsReadingsMsg*)(call Packet.getPayload(&pkt,
                                                sizeof (SensorsReadingsMsg)));

      // Obtain the readings (the results will be written to readings struct)
      call SensorsRead.read(readings);
    }
  }

  event void SensorsRead.readDone()
  {
    // Set the remaining fields of the structure
    readings->node_id = TOS_NODE_ID;

    // Broadcast the readings
    if (call BroadcastSend.send(AM_BROADCAST_ADDR,
                                  &pkt,
                                  sizeof(SensorsReadingsMsg)) == SUCCESS)
    {
      radio_busy = TRUE;
    }
  }

  event void BroadcastSend.sendDone(message_t* msg, error_t error)
  {
    if (&pkt == msg)
    {
      radio_busy = FALSE;
    }
  }

  /** FLASHING LEDS ON RECEIVING LIGHT VALUES FROM THE OTHER NODE **/

  event void LightReceiver.receiveDark()
  {
    // Start flashing the red LED for 100ms every 150ms
    call ReceiveFlasher.set(RED_LED);
    call ReceiveFlasher.start(150, 100);

    // Stop flashing after 800ms
    call ReceiveTimer.startOneShot(800);
  }

  event void LightReceiver.receiveLight()
  {
    // Start flashing the yellow LED for 100ms every 150ms
    call ReceiveFlasher.set(YELLOW_LED);
    call ReceiveFlasher.start(150, 100);

    // Stop flashing after 800ms
    call ReceiveTimer.startOneShot(800);
  }

  event void ReceiveTimer.fired()
  {
    call ReceiveFlasher.stop();
  }
}