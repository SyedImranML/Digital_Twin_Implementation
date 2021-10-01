//Arduino to be connected to the robotic Arm


#include <SoftwareSerial.h>
#define rxPin 10
#define txPin 11
#define ledpin 13
char initialstat[10];
char finalstat[10];
SoftwareSerial mySerial = SoftwareSerial(rxPin, txPin);

void setup() {
    pinMode(rxPin, INPUT);
    pinMode(txPin, OUTPUT);
    pinMode(ledpin, OUTPUT);
   

    Serial.begin(9600);
     mySerial.begin(9600);
 }

void loop() {

    if ( mySerial.available() )
    {
         while ( mySerial.available() ){
          initialstat[0] = mySerial.read();
          Serial.write(initialstat[0]);
          Serial.println();
          if(initialstat[0] == '1')
            {
              digitalWrite(ledpin, HIGH);
            }
           if(initialstat[0] == '0')
            {
              digitalWrite(ledpin, LOW);
            }
          }        
    }

    if ( Serial.available() )
    {
        delay(5);

        while ( Serial.available() )
            mySerial.write( Serial.read() );
    }
}
