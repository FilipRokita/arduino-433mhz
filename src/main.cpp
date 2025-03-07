// This code is for receiving signals from 433 MHz transmitter

#include <Arduino.h>
#include <RCswitch.h>

RCSwitch mySwitch = RCSwitch();

void setup() {
  Serial.begin(9600); // Initialize serial port
  mySwitch.enableReceive(0);  // Receiver on interrupt 0 => that is pin #2
  Serial.println("433 MHz Receiver is ready");
}

void loop() {
  if (mySwitch.available()) {
    Serial.print("Received signal: ");
    Serial.println(mySwitch.getReceivedValue());

    mySwitch.resetAvailable(); // Reset the received value
  }
}