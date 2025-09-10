#include <LiquidCrystal_I2C.h> // 7 SEGMENT  loaded

LiquidCrystal_I2C lcd(0x27 , 16 , 2);	

void setup()
{
  lcd.init();
  lcd.clear();
  lcd.backlight();
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("This is Insane I am Learing");
  lcd.scrollDisplayLeft();
  delay(300);

}
