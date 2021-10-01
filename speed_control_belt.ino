int TRIAC = 6;
int speed_val=0;
void setup()
{
  pinMode(TRIAC, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(3), zero_crossing, CHANGE);
  Serial.begin(9600);
  pinMode(A0, INPUT);
}
void zero_crossing()
{
  int chop_time = (200*speed_val);
  delayMicroseconds(chop_time);   
  digitalWrite(TRIAC, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIAC, LOW);
}
void loop()  
{
    int pot=analogRead(A0);
    int data1 = map(pot, 0, 1023,10,40);  
    speed_val=data1;
    Serial.println(pot);
    delay(400);
}
