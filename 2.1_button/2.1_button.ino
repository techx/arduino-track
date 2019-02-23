/*
  Button

  This example shows how to control an LED using
  a simple digital button.

  Copyright 2019 HackMIT (Kye Burchard)
 */

int led = 13;
int button = 7;

void setup() {
  // initialize the digital pin as an output
  pinMode(led, OUTPUT);

  // initialize the button pin as an active-low input
  pinMode(button, INPUT_PULLUP);

  // open serial
  Serial.begin(115200);
}

void loop() {
  // read the value from the button
  int value = digitalRead(button);

  // print this value to the serial monitor
  Serial.println(value);

  // turn on LED if value is 0, off if value is 1
  if (value == 0) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
