module ReadTempC {
    uses interface Timer<TMilli> as Timer0;
    uses interface Read<uint16_t>;
    uses interface Boot;
    uses interface AMPacket;
    uses interface Packet;
    uses interface Leds;
    uses interface AMSend;
    uses interface SplitControl as AMControl;
}

implementation {

  bool busy = FALSE;
  message_t pkt;

  event void Boot.booted() {
    call AMControl.start();
    call Timer0.startPeriodic(1000);
  }

  event void AMControl.startDone(error_t err) {
    if (err == SUCCESS) {
      call Timer0.startPeriodic(TIMER_PERIOD_MILLI);
    }
    else {
      call AMControl.start();
    }
  }

  event void AMControl.stopDone(error_t err) {
  }

  event void Timer0.fired() {
    if (!busy) {
      ReadTempMsg* btrpkt = (ReadTempMsg*)(call Packet.getPayload(&pkt, sizeof (ReadTempMsg)));
      btrpkt->temp = 42;
      if (call AMSend.send(AM_BROADCAST_ADDR, &pkt, sizeof(ReadTempMsg)) == SUCCESS) {
        busy = TRUE;
      }
      call Leds.led0Toggle();
    }
  }

  event void AMSend.sendDone(message_t* msg, error_t error) {
    if (&pkt == msg) {
      busy = FALSE;
    }
  }

  event void Read.readDone(error_t result, uint16_t data)
  {
  }

}
