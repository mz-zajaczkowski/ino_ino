#include <RCSwitch.h>
//#include <string>

RCSwitch mySwitch = RCSwitch();
const char* numDipSet = "11111";
const char* alphaDipSet = "00010";

void setup() {

  // Transmitter is connected to Arduino Pin #10  
  mySwitch.enableTransmit(4);
  
}

void loop() {

  mySwitch.switchOn(numDipSet, alphaDipSet);

  // Wait a second
  delay(1000);
  
  // Switch off
  mySwitch.switchOff(numDipSet, alphaDipSet);
  
  // Wait another second
  delay(1000);
  
}
