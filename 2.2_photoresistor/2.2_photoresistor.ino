/*
  Photoresistor

  This example shows how to print analog values 
  to the serial monitor, using a photoresistor

  Copyright 2019 HackMIT (Kye Burchard)
 */

int sensor = A5;
int led = 13;

// TODO: pick a reasonable threshold based on serial
// plot
int THRESHOLD = 0;

void setup() {
  // initialize the digital pin as an output
  pinMode(led, OUTPUT);

  // open serial
  Serial.begin(9600);
}

void loop() {
  // read the value from the button
  int value = analogRead(sensor);

  // print this value to the serial monitor
  Serial.println(value);

  // turn on LED if value is above/below a threshold
  if (value > THRESHOLD) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
