#define btn1 7
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup()
{
  lcd.begin(16, 2);
}
 
void loop()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("ADS");
  lcd.setCursor(0, 1);
  lcd.print("Arduino project");
  delay(500);

  for (int posicao = 0; posicao < 39; posicao++)
  {
    lcd.scrollDisplayRight();
    delay(500);
  }

}