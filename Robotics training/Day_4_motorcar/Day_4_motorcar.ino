#define en1 D5
#define en2 D6
int pin1=D1;
int pin2= D2; // D1 and D2 are first motor
int pin3=D3;
int pin4=D4; //D3 AND D4 are second motor
void setup()
{
pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);
pinMode(pin3,OUTPUT);
pinMode(pin4,OUTPUT);//setting pin as output
pinMode(en1,OUTPUT);
pinMode(en2,OUTPUT);
//setting pins to low
digitalWrite(pin1,LOW);
digitalWrite(pin2,LOW);
digitalWrite(pin3,LOW);
digitalWrite(pin4,LOW);
}
void loop()
{
  //To move car forward
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,LOW);//FIRST MOTOR
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  delay(2000);
  
  //to move car backward
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  delay(2000);
  analogWrite(en1,100);
  analogWrite(en2,100);
}
