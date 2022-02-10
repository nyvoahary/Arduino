#include <LiquidCrystal_I2C.h>

//define I2C address......
LiquidCrystal_I2C lcd(0x3f,16,2);


void setup() {

  lcd.init();
  lcd.clear();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Tsara ny Tompo!");

  lcd.setCursor(0,1);
  lcd.print("Tojo ihany");

}

void loop() {


}