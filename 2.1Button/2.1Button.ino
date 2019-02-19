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
}

void loop() {
  int value = digitalRead(button);
  Serial.println(value);
  if (value) {
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
}
