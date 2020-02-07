---
layout: lecture
title: Overview of the Board
workshop: 1
number: 2
---

Next, let's open our kits and take a look at what's inside! We're using the
[Elegoo Uno Super Starter Kit][elegoo]. While you're opening the kits mentors
will come around and cut open the zipties holding the wires in the kits.

From the box, first take out the Elegoo Uno R3 board. We'll colloquially call
this the "Arduino". This board is like a mini computer we can program to do cool stuff.

![The Elegoo Uno R3 board](https://www.elegoo.com/wp-content/uploads/2017/01/4-23.jpg)

Hold up the Arduino if you've found it in the box!

Let's notice a few things on this board.

## Microcontroller IC

![The core chip of the board.]({{ site.baseurl }}/static/img/board_ic.jpg)

The IC (integrated circuit) is the main "brains" of the board. When we upload
code, we upload it to this chip. Everything else on the board is various
peripherals related to input and output.

## Pins

![The pins on the board.]({{ site.baseurl }}/static/img/board_pins.jpg)

The pins on the board allow it to interact with the world. The pins can serve
different purposes, from general purpose input-output [(GPIO)][gpio] to
various communication protocols like [I2C][i2c].

## USB Port

![The USB port on the board.]({{ site.baseurl }}/static/img/board_usb.jpg)

The USB port lets us program the board and send and receive debugging
messages from it.

## Reset button

![The reset button on the board.]({{ site.baseurl }}/static/img/board_reset.jpg)

If you press the reset button, the Arduino will restart its execution from
the beginning of the program you uploaded. This can be helpful for debugging.

## Built-in LED

![The built-in LED on the board.]({{ site.baseurl }}/static/img/board_led.jpg)

This board comes with a small LED (light) embedded in the board. It's kind of
hard to see, but it's marked by an "L" on the [silkscreen][silkscreen]. As
our first task, we'll program this LED to blink on and off!

[elegoo]: https://www.elegoo.com/product/elegoo-uno-project-super-starter-kit/
[gpio]: https://en.wikipedia.org/wiki/General-purpose_input/output
[i2c]: https://en.wikipedia.org/wiki/I%C2%B2C
[silkscreen]: https://en.wikipedia.org/wiki/Printed_circuit_board#Silkscreen_printing
