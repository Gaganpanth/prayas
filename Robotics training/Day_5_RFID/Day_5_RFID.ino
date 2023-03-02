#include <SPI.h>
#include <Wire.h>
#include <MFRC522.h>
#include <MFRC522Extended.h>
 
 
#define SS_PIN D4
#define RST_PIN D3
#define Buzz D1
MFRC522 mfrc522(SS_PIN,RST_PIN);
 
const char* NAME;
void setup() 
{
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  pinMode(Buzz,OUTPUT);
 
 
}
 
void loop() 
{
    Serial.println("Scan tag");
    Serial.println("Waiting for the tag");
    if ( ! mfrc522.PICC_IsNewCardPresent())
      {
        return;
      }
      // Select one of the cards
      if ( ! mfrc522.PICC_ReadCardSerial())
      {
        return;
      }
 
 
      String content = "";
 
      Serial.println(mfrc522.uid.size);
      for (byte i = 0; i < mfrc522.uid.size; i++)
      {
         content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
         Serial.println(content);
         content.concat(String(mfrc522.uid.uidByte[i], HEX));
      }
      Serial.println(content);
      content.toUpperCase();
      Serial.println("Waiting for the another");
 
      if (content.substring(1) == "D9 76 A9 B9") //change here the UID of the card that you want to give access
      {
 
        NAME = "Mayank";
        Serial.print(NAME);
        Serial.println(" is Present ");
       
        delay(1000);
      }
 
      else if (content.substring(1) == "D3 73 AF 02") //change here the UID of the card that you want to give access
      {
 
        NAME = "Abhinandan";
        Serial.print(NAME);
        Serial.println(" is Present ");
        digitalWrite(Buzz,HIGH);
        delay(1000);
         digitalWrite(Buzz,LOW);
 
 
      }
 
 
      else
      {
         digitalWrite(Buzz,LOW);
        Serial.println("Not Registered");
 
      }
 
     content.substring(1) = "";
 
 
}
