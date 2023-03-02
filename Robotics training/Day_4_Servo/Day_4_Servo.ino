#include <Servo.h>
Servo myservo;
void setup()
{
  myservo.attach(D1);
  Serial.begin(9600);
  
}
void loop()
{
  myservo.write(0);
  delay(1000);
  myservo.write(90);
  delay(1000);
  myservo.write(20);
  delay(1000);
  myservo.write(120);
  delay(1000);
  myservo.write(180);
  delay(1000);
}
