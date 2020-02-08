---
layout: lecture
title: LCD Screen
details: bonus exercise!
workshop: 3
number: 9
---

Now that you've wired up the servo and joystick, you're ready for an even
bigger challenge, the _liquid-crystal display_ ([LCD][lcd]). You can draw
words, pictures, or even a game screen using this display!

![The LCD in the kit.](https://www.elegoo.com/wp-content/uploads/2017/01/6-9.jpg)

## Wiring

For this exercise we won't be walking you through the wiring. This is
preparation for the hackathon tomorrow and the rest of your DIY career! Feel
free to ask mentors for help and reference the internet.

You'll need the LCD, many wires, and a [potentiometer][pot]. A potentiometer is a
knob that changes resistance when you turn it. It's use to adjust the
contrast of the screen.

Here are two example wiring diagrams for the LCD. Some wiring in the diagrams
may conflict with things you've wired up earlier, so you can either take
things apart or use different pins.

### LCD Wiring Example 1

![LCD wiring example 1]({{ site.baseurl }}/static/img/lcd-example-1.png)

### LCD Wiring Example 2

![LCD wiring example 2]({{ site.baseurl }}/static/img/lcd-example-2.png)

## Coding

The LCD is controlled by the [`LiquidCrystal` library][lc-lib]. To confirm
that you've wired the LCD correctly, first upload the [`HelloWorld`
example][lcd-hello] from `File > Examples > LiquidCrystal > HelloWorld`.

![HelloWorld example output](https://www.arduino.cc/en/uploads/Tutorial/lcd_photo.png)

Once you've got `HelloWorld` working, you're all set! Read through the
library documentation and examples to make something fun. You can also
download [a fun example we made]({{ site.baseurl
}}/static/files/lcd_control.ino) to control a ball on the LCD using the
joystick.

**Bonus exercise 1**: Use the joystick or button(s) to type something out on the LCD.

**Bonus exercise 2**: Make a game using the joystick or button(s) and the LCD.

## Wrap up

And that's the end of workshop 3! In the next workshop you can build anything
you want for the hour using the hardware in your kit.

[lcd]: https://en.wikipedia.org/wiki/Liquid-crystal_display
[pot]: https://en.wikipedia.org/wiki/Potentiometer
[lc-lib]: https://www.arduino.cc/en/Reference/LiquidCrystal
[lcd-hello]: https://www.arduino.cc/en/Tutorial/HelloWorld