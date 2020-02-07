---
layout: lecture
title: Button (digital input)
number: 6
---

### 2.0 - Settle in (Claire)

* [SLIDE 6] Settle in
* Quick recap: **OUTPUT**
  * Board
  * Blink onboard LED
  * Blink offboard LED
  * Dim offboard LED
  * RGB LED (?)
* Now: **INPUT**
  * Button
  * Light sensor
  * Serial

### 2.1 - Button (Claire)

**Source code:** [2.1_button/2.1_button.ino](2.1_button/2.1_button.ino)

* Digital input is like digital output, but input (receive HIGH or LOW)
* [DOC CAM]
  * Gather materials
    * 1 Button (tiny)
    * 3 wires (any color)
  * Assemble
    * *Straddle the gap*
    * *Explain that pressing button makes invisible connection [here] to [here]*
    * Remove LED → GND wire
    * Add wire GND → breadboard GND row
    * Re-add wire GND row → LED
    * Add wire GND row → button
    * Add wire button → 7
  * ~ pause ~
* [IDE] New sketch (save the old one)
* `pinMode(pin, INPUT_PULLUP)`
  * INPUT
    * we want to get data
  * PULLUP
    * when button is not pressed, not connected to anything
    * would normally be undefined, random static electricity
    * PULLUP means Arduino automatically forces value to be HIGH when not pressed, LOW when pressed.
* `digitalRead()`
  * Read from pin
* Extensions
  * Make the button into a light switch (press to toggle on/off)
  * Click to control the color of your RGB LED if you got to 1.6 earlier

