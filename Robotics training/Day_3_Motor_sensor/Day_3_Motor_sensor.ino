#define motor1A D1
#define motor1B D2
void setup()
{
  pinMode(motor1A,OUTPUT);
  pinMode(motor1B,OUTPUT);
}
void loop()
{
  digitalWrite(motor1A,HIGH);
 
  digitalWrite(motor1B,LOW);
  delay(1000);
  digitalWrite(motor1B,HIGH);
  
  digitalWrite(motor1A,LOW);
  delay(1000); 
}
