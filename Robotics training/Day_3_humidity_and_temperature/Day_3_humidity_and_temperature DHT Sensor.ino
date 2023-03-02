#include<DHT.h>
#define sensor D1
DHT dht1(sensor,DHT11);
void setup()
{
pinMode(sensor,INPUT);
Serial.begin(9600);
}
void loop()
{
float temp=dht1.readTemperature();
float humidity=dht1.readHumidity();
Serial.print(" Temp is ");
Serial.print(temp);
Serial.print('\n');
Serial.print("Humidity is ");
Serial.print(humidity);
delay(1000);
