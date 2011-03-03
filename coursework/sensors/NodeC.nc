#include "Node.h"

module NodeC
{
  uses interface Boot;
  uses interface Timer<TMilli> SendToBaseTimer;
  uses interface Leds;
  uses interface SensorsRead;
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

  event void SendToBase.fired()
  {
    if (send_to_base_busy)
    {
      return;
    }

    // Obtain the address of payload inside the packet
    // TODO: This possibly can be called only once, because the address
    //       to pkt is always the same (?)
    SensorsReadingsMsg* readings =
        (SensorsReadingsMsg*)(call Packet.getPayload(
                                              &pkt,
                                              sizeof (SensorsReadingsMsg)));
    
    call SensorsRead.read(readings);  
  }

  event void SensorsRead.readDone()
  {
    // Send the readings to base station
    if (call BaseStationSend.send(BASE_STATION_ADDR,
                                  &pkt,
                                  sizeof(SensorsReadingsMsg)) == SUCCESS)
    {
      send_to_base_busy = TRUE;
    }
    
    //TODO: Send the light to neighbour
  }

  event void BaseStationSend.sendDone(message_t* msg, error_t error)
  {
    if (&pkt == msg)
    {
      send_to_base_busy = FALSE;
    }
  }
}