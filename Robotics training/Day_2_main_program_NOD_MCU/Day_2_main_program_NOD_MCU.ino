#include<Servo.h>
#define GPIO1 D1
void setup()
{
  pinMode(GPIO1,OUTPUT);
}
void loop()
{
  digitalWrite(GPIO1,HIGH);
delay(100);
digitalWrite(GPIO1,LOW);
delay(50);
}
