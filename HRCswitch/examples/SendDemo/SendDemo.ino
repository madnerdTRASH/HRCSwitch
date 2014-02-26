/*
HRCSwitch SendDemo
HRCSwitch is a fork of RCSwitch libraries that also support HomeEasy Protocol
If you use send with 3 arguments the library will send a HE300 Protocol Code
If you use send with 2 arguments the library will send RCSwitch Protocol 1

mySwitch.send(Decimal Code,Length)
mySwitch.send(Remote/Device code,Button/Recipient code,on/off)

*/

#include <HRCSwitch.h>
HRCSwitch mySwitch = HRCSwitch();

const int TXpin = 10;

void setup() {
  Serial.begin(9600);
  mySwitch.enableTransmit(TXpin);
  Serial.println("HRCSwitch ready");
}

void loop() {
  //Turn ON HE300 
  mySwitch.send(1234,0,true);
  delay(2000);
  //Turn ON RCSwitch
  mySwitch.send(1234,24);
  delay(2000);
  //Turn OFF HE300 
  mySwitch.send(1234,0,false);
  delay(2000);
  //Turn OFF RCSwitch
  mySwitch.send(1233,24);
  delay(2000);
  

}