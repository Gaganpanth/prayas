#include <LiquidCrystal_I2C.h>
 
// set the LCD number of columns and rows
int lcdColumns = 16;
int lcdRows = 2;
 
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);  
 
void setup(){
  // initialize LCD
  lcd.init();
  // turn on LCD backlight                      
  lcd.backlight();
}
 
void loop(){
  // set cursor to first column, first row
  lcd.setCursor(0, 0);
  // print message
  lcd.print("Hello, World");
   lcd.setCursor(2, 1);
  // print message
  lcd.print("I lOVE TIKTOK");
  delay(1000);
  // clears the display to print new message
  lcd.clear();
 }
