#include <SoftwareSerial.h>

SoftwareSerial SerialInput(10, 11); // RX, TX

String inputString = "";         // a string to hold incoming data
boolean stringComplete = false;

int inputPin = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(inputPin, INPUT);
  SerialInput.begin(9600);
  Serial.println("TEST");
}

void loop() {  
  
  if(digitalRead(inputPin)) {
    digitalWrite(LED_BUILTIN, HIGH);
    SerialInput.print(1);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
    SerialInput.print(0);
  }
  
  delay(500);
  
}
