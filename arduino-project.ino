#include <LiquidCrystal.h>

// Initialize LCD (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // Set up the LCD's number of columns and rows
  lcd.begin(16, 2);

  // Print a message
  lcd.setCursor(0, 0);
  lcd.print("Hello, World!");
}

void loop() {
  // Nothing needed here
}