#define Touch D2
#define Led D3

void setup() 
{
  pinMode (Touch,INPUT);
  pinMode  (Led,OUTPUT);
}
void loop()
{
  int Tstate=digitalRead(Touch);
  if  (Tstate==1)
  {
    digitalWrite(Led,HIGH);
    
  }
  else
  {
    digitalWrite(Led,LOW);
    delay(500);
  }
}
 
