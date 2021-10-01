//Arduino to be connected to the Computer with the camera.

#include <SoftwareSerial.h>

#define rxPin 10
#define txPin 11

const int ledPin = 13; 
int incomingByte;     

SoftwareSerial mySerial = SoftwareSerial(rxPin, txPin);


void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
  mySerial.begin(9600);
}

 void loop() {
      if (mySerial.available() )
    {
         while ( mySerial.available() )
         Serial.write(mySerial.read());
         Serial.println();
    }

    if ( Serial.available() )
    {
        delay(5);
        while ( Serial.available() )
            mySerial.write( Serial.read() );
    }
}
