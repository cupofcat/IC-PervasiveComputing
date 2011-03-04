module BaseNodeC
{
  uses
  {
    interface Boot;

    interface Receive as RadioReceive;
    interface SplitControl as RadioControl;

    interface Packet as SerialPacket;
    interface AMSend as SerialSend;
    interface SplitControl as SerialAMControl;
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

  event void SerialControl.startDone(error_t result)
  {
  }

  event void SerialControl.stopDone(error_t error)
  {
  }

  event message_t* RadioReceive.receive(message_t* msg, void* payload, uint8_t len) {
    SensorsReadingsMsg* readings_in = (SensorsReadingsMsg*) payload;
    SensorsReadingsMsg* readings_out;

    readings_out = (SensorsReadingsMsg*)(call SerialSend.getPayload(&serial_pkt, sizeof(SensorsReadingsMsg)));

    memcpy(readings_out, readings_in, sizeof(SensorsReadingsMsg));

    call SerialSend.send(0xffff, &serial_pkt, sizeof(SensorsReadingsMsg));

    return msg;
  }

  event void SerialSend.sendDone(message_t *msg, error_t error)
  {
  }
}