---
layout: lecture
title: Light Sensor (analog input)
workshop: 2
number: 7
---

### 2.2 - Analog inputs, Serial plotter (Noah)

**Source code:** [2.2_photoresistor/2.2_photoresistor.ino](2.2_photoresistor/2.2_photoresistor.ino)

* We did digital input, now *analog* input
* [DOC CAM] Introduce photoresistor
  * It’s like a resistor, but the resistance changes with brightness
  * We can make a clever circuit to measure this as a change in voltage, aka an *analog signal*
  * Gather materials
    * 1 photoresistor (squiggles, direction doesn’t matter)
    * 1 resistor (1k - brown, black, red)
    * 4 wires
  * Assemble
    * ![Voltage divider](img/voltage_divider.png)
    * 5V → breadboard power rail
    * Breadboard power rail → photoresistor leg 1
    * Photoresistor leg 2 → A0
    * Photoresistor leg 2 → Breadboard GND rail
    * _[SLIDE 17] optional voltage divider diagram_
    * [IDE] NEW FILE
      * `Serial.begin(115200)`
        * Serial = communication over USB cable
        * Communication rate
      * `analogRead()` (use variable!)
      * `Serial.println()`
      * Small delay
  * Observe the serial monitor
    * See how numbers go up and down
    * ~ check that everyone is on the same page ~
  * Observe the serial plotter
    * BIG PAYOFF!!
* Extensions:
  * Make a nightlight: turn LED on if photoresistor value < some threshold
  * Control LED brightness with photoresistor (sun bright → LED bright, or the opposite)
  * Replace photoresistor with thermistor
  * Replace photoresistor with joystick
* [SLIDE 7] Part 2 over
