---
layout: lecture
title: "RGB LED"
details: bonus exercise!
workshop: 1
number: 5
---

An RGB LED is basically the same as three LEDs in one package: red, green,
and blue. They share a common pin that goes to ground (GND), so it has four
pins total.

![The RGB LED](https://upload.wikimedia.org/wikipedia/commons/thumb/f/f1/RGB_LED.jpg/320px-RGB_LED.jpg)

The LONGEST pin is the one that goes to ground.

## Wiring

Don't unwire your regular LED to set this up! There's plenty of pins for both.

To wire it up, connect each leg of the three non-ground RGB LED legs to an
individual output pin. Don't forget a 220 ohm resistor!

![Example wiring diagram]({{ site.baseurl }}/static/img/rgb_wiring.png)

Set up each of these pins using `pinMode` in `setup` and choose any mix of
colors you want using `analogWrite` to each pin. Play with different
`analogWrite` values to see what colors you can create!

See [this lesson for Adafruit][adafruit] for more details on setting up an RGB LED.
This is an exercise for you to test what you've learned!

**Bonus exercise**: Can you make the RGB LED color slowly shift over time? If you need help, take a look at [this example code]({{ site.baseurl }}/static/files/rgb_led.ino) for reference.

## Wrap up

This concludes the first workshop! Leave your hardware as-is at your table
and remember where you sat.

[adafruit]: https://learn.adafruit.com/adafruit-arduino-lesson-3-rgb-leds