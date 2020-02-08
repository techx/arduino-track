/*
  Controlling LCD position using a potentiometer (variable resistor)
  For the 2020  Blueprint Arduino learnathon track

  MIT License, (c) 2020 Kye Burchard
*/
// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int joystick_x = 1;
int joystick_y = 0;
int val_x;
int val_y;
int x;
int y;

int loop_period = 50;

void setup() {
  // initialize LCD
  lcd.begin(16, 2);
}

void loop() {
  // read value from joystick
  val_x = analogRead(joystick_x);
  val_y = analogRead(joystick_y);

  // rescale joystick values to -1, 0, or 1
  val_x = map(val_x, 0, 1023, -1, 2);
  val_y = map(val_y, 0, 1023, -1, 2);


  // clear the previous ball
  lcd.setCursor(x, y);
  lcd.print(" ");
  
  x = (x + val_x) % 16;

  // correct negatives
  if (x < 0) {
    x += 16;
    }
  y = (y + val_y) % 2;

  // print the new ball
  lcd.setCursor(x, y);
  lcd.print("o");

  delay(loop_period);
}
