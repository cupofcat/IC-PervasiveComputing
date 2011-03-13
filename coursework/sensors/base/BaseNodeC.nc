module BaseNodeC
{
  uses
  {
    interface Boot;

    interface Receive as RadioReceive;
    interface SplitControl as RadioControl;

    interface Packet as SerialPacket;
    interface AMSend as SerialSend;
    interface SplitControl as SerialControl;
  }
}
implementation
{
  message_t serial_pkt;

  event void Boot.booted() {
    call RadioControl.start();
  }

  event void RadioControl.startDone(error_t result)
  {
    call SerialControl.start();
  }

  /**
   * Receives the sensors reading through the radio, copies the readings to
   * the serial packet and sends over the USB.
   */
  event message_t* RadioReceive.receive(message_t* msg, void* payload, uint8_t len) {
    SensorsReadingsMsg* readings_in = (SensorsReadingsMsg*) payload;
    SensorsReadingsMsg* readings_out;

    // Obtain the offset to the payload in serial packet
    readings_out =
        (SensorsReadingsMsg*)(call SerialSend.getPayload(&serial_pkt,
                                       sizeof(SensorsReadingsMsg)));

    // Copy the readings to the new packet
    memcpy(readings_out, readings_in, sizeof(SensorsReadingsMsg));

    // Send the readings over the USB cable
    call SerialSend.send(0xffff, &serial_pkt, sizeof(SensorsReadingsMsg));

    return msg;
  }

  /** EMPTY METHODS */

  event void RadioControl.stopDone(error_t error)
  {
    // This has to be implemented but we don't need to do anything
  }

  event void SerialControl.startDone(error_t result)
  {
    // This has to be implemented but we don't need to do anything
  }

  event void SerialControl.stopDone(error_t error)
  {
    // This has to be implemented but we don't need to do anything
  }

  event void SerialSend.sendDone(message_t *msg, error_t error)
  {
    // This has to be implemented but we don't need to do anything
  }
}