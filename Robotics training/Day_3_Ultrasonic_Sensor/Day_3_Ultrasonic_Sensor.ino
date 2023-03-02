#define bulb D4
const int trigpin=D1;
const int echopin=D2;
long duration;
int distance;
void setup()
{
  pinMode(bulb,OUTPUT);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
}s
void loop()
{
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  duration=pulseIn(echopin,HIGH);
  distance=(duration*0.034)/2;
  Serial.print("distance is ");
  Serial.println(distance);
  
  if(distance<40)
  {
    digitalWrite(bulb,HIGH);
  }
  else
  {
    digitalWrite(bulb,LOW);
  }
}
