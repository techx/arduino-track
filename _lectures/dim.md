---
layout: lecture
title: Dimming LEDs (analog output)
number: 4
---


### 1.5 - Dim offboard LED (ternary blink) (Claire)

**Source code:** [1.5_fade/1.5_fade.ino](1.5_fade/1.5_fade.ino)

* [DOC CAM] Motivation: in the real world, we want more things than just ON/OFF
  * Turn it on and off really fast at different frequencies
  * We could do it ourselves, or use this handy function, **_PWM_**
  * This function only works on pins that support PWM (look for **~** in front of number)
  * CHANGE THE PIN
  * Wire the LED to **_11_**
  
* Explain the difference between analog and digital signals
* [IDE] `analogWrite()`
  * 255, 0, 64
* Exploratory
  * Other brightness values
  * Advanced: how could you get it to fade in and out?
  * Advanced: wire RGB LED
  * ~ observe ~
* _[SLIDE 14] optional wiring diagram_
