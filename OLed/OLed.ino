#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(32,16,2);
void setup() {
  pinMode(A0,OUTPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.init();
  lcd.backlight();
  lcd.clear();

}

void loop() {
  lcd.print("Hello");
  delay(100);
  lcd.clear();
}

