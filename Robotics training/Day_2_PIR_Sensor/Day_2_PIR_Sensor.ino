#define Soil A0
#define buzz D1
void setup() 
{
  pinMode(buzz,OUTPUT)
  pinMode (Soil,INPUT);
  Serial.begin (9600);
  
}
void loop()
{
  float Soilvalue=analogRead(Soil);
  Serial.println(Soil value);
  IF (Soilvalue>400)
  {
    digitalWrite(buzz,HIGH);
    delay(5000);
  }
  else
  {
    digitalWrite(buzz,LOW);
    delay(600);
  }
  }
  
   delay(750);
}
