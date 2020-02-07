---
layout: lecture
title: Servo (libraries)
number: 8
---

### 3.1 - Servo

* [DOC CAM] Motivation:
  * Learn how to use more complicated outputs!
  * Servo: motor module that can turn to a specific angle
  * Useful for things like *robotic arms* that require precise control
* Gather materials
  * 1 servo
  * 3 wires
* Assemble
  * WARNING: if you do this backwards you’ll break your servo :disappointed:
  * Put the hat on the servo
  * Servo BROWN to breadboard GND
  * Servo RED to breadboard high
  * Servo ORANGE to pin 6 (any ~ pin)
  * _[SLIDE 18] optional servo wiring diagram_
* [IDE] NEW FILE
  * Servos require a complicated input signal, but thankfully someone else has written code to control them for us. This is what we call a *library*.
  * Sketch → Include Library → Servo
  * For loop
    * Has anyone used a for loop before?
    * Initial condition, stop condition, iteration
    * Repeat everything inside the curly braces ("loop")
* ~ observe the moves ~

### 3.2 - Servo with joystick (Noah)

* [DOC CAM] Motivation: CONTROL OUR ROBOT ARM
* Gather parts
  * Joystick and hat
  * 3 male to female wires (wire only on one side)
* Assemble
  * Hat on joystick
  * Joystick VCC → breadboard high
  * Joystick GND → breadboard GND
  * Joystick data → pin A1
  * _[SLIDE 19] optional joystick wiring diagram_
* [IDE] same file
  * `map()`: input is 0 → 1023, but we can only write 0 → 180
* Extensions
  * Play with other joystick axis
  * Use joystick toggle button (?)
  * Joystick to control RGB LED channels
  * Combine anything you have lol
