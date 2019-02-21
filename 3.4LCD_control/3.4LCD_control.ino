/*
 Controlling LCD position using a potentiometer (variable resistor)

 For the 2019 Blueprint Arduino learnathon track

 Copyright 2019 HackMIT (Kye Burchard)
*/
// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);


int joystick_x = 1;
int joystick_y = 0;
int val_x;
int val_y;
int x;
int y;

int loop_period = 50;

void setup() {
  lcd.begin(16, 2);
  Serial.begin(115200);
}

void loop() {
  val_x = analogRead(joystick_x);
  val_y = analogRead(joystick_y);

  val_x = map(val_x, 0, 1023, -1, 2);
  val_y = map(val_y, 0, 1023, -1, 2);


  // clear the previous position
  lcd.setCursor(x, y);
  lcd.print(" ");
  
  x = (x + val_x) % 16;
  if (x < 0) {
    x += 16;
    }
  y = (y + val_y) % 2;

  lcd.setCursor(x, y);
  lcd.print("o");

  Serial.println(x);

//  lcd.setCursor(0, 0);
//  lcd.print(val_x);
//  lcd.setCursor(0, 1);
//  lcd.print(val_y)
//  Serial.println(val_x);
//  Serial.println(val_y);

  delay(loop_period);
}
