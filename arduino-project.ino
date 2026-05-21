#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// I2C address 0x27, 16 columns, 2 rows
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Initialize LCD
  lcd.init();

  // Turn on backlight
  lcd.backlight();

  // Set cursor to column 0, row 0
  lcd.setCursor(0, 0);

  // Print first line
  lcd.print("HellA World");

  // Set cursor to second line
  lcd.setCursor(0, 1);

  // Print second line
  lcd.print("Arduino I2C");
}

void loop() {

}
