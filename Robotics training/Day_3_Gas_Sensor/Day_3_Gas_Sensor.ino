#define sensor A0
#define bu D2
void setup()
{
pinMode (sensor,INPUT);
pinMode(bu,OUTPUT);
Serial.begin(9600) ; 
}
void loop()
{
int gasvalue=analogRead(sensor);
Serial.print("Gas value is ");
Serial.print(gasvalue);
Serial.print('\n');
delay(1000);
if(gasvalue>50)
{
digitalWrite(bu,HIGH);
delay(1000);
}
else
{
digitalWrite(bu,LOW);
delay(1000);
}
}
