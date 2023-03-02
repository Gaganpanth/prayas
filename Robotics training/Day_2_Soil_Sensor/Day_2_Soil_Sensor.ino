#define soil A0
#define buzzer D1
void setup()
{
  pinMode(soil,INPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
  
}
void loop()
{
float soilvalue=analogRead(soil);
Serial.print(soilvalue);
Serial.print('\n');
delay(1000);
if(soilvalue>400)
{
digitalWrite(buzzer,HIGH);
delay(1000);
}
else
{
digitalWrite(buzzer,LOW);
delay(1000);
}
}
