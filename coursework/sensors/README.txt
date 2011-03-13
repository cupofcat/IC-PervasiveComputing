The application consist of 4 parts:
 1. SensorsReadC
      Responsible for obtaining the readings from the sensors.
 2. LightReceiverC
      Responsible for receiving the readings from the other sensor
      and signalling if the light level is above/below threshold.
 3. LedsFalsher
      Used for flashing the LEDs in periodic fashion.
 4. NodeC
      Main part of the system that uses previous parts to obtain the readings
      from the sensors every 1000ms, broadcast these readings to the other
      sensor and the base station, receive the readings from the other sensor
      and flash the LEDs accordingly.

Detailed comments on how each of the parts work can be found in
corresponding interface files (SensorsRead.nc, LightReceiver.nc,
LedsFlasher.nc) and implementation files (SensorsReadC.nc,
LightReceiverC.nc, LedsFlasherC.nc, NodeC.nc).

There is also a header file Node.h with some constants defined.

TinyOS part of the base station code is in subfolder base/