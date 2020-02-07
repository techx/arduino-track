---
layout: lecture
title: Dimming LEDs (analog output)
workshop: 1
number: 4
---

In the real world we want to do more than just turn things on and off. For
example, what if we wanted the LED to be 50% bright? However, if you remember
from the [Blink]({{ site.baseurl }}/lectures/blink/) exercise, our GPIO pins
can only output `HIGH` and `LOW`. Given this, how can we output anything
else?

The solution is pulse-width modulation ([PWM][pwm]). Basically, if you turn
the LED on and off really fast it will _appear_ dim. If you wanted it to be
50% bright, you would turn it on half the time and off the other half. If you
wanted it to be 75% bright, you would keep it on for three times as long as
you keep it off. This ratio of on to off is known as a _duty cycle_.

![Duty cycle examples](https://upload.wikimedia.org/wikipedia/commons/b/b8/Duty_Cycle_Examples.png)

## Coding PWM

Given what we know, we could do this ourselves with `digitalWrite` and
`delay`. However, Arduino has the handy function [`analogWrite`][analogWrite] built-in to do
it for us! Let's open up the Arduino IDE to a new sketch and set up our LED
pin just like last time.

```cpp
void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}
```

Notice that this time we are using **pin 11** instead of pin 13. `analogWrite`
only works on pins that support PWM, which are marked with a tilde `~` in
front of the number. Pin 11 is one of these.

Next, let's add some `analogWrite`s in the `loop`.

```cpp
void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(11, 255);
  delay(1000);
  analogWrite(11, 0);
  delay(1000);
}
```

What do these numbers in the second argument of the function mean?!
`analogWrite` is like `digitalWrite`, but it outputs analog values rather
than digital. This second argument is the duty cycle, which can be any value
between 0 and 255 (_2^8 - 1_). Choose any two numbers you want for your
two `analogWrite` commands.

With this, you can go ahead and re-upload your code! Play around with different brightness values and see how you perceive them.

**Bonus exercise**: Can you make the LED fade in and out continuously?

![Fading LED example]({{ site.baseurl }}/static/img/fade.gif)

Next, if we have time we'll play with a fun RGB LED :)

[pwm]: https://en.wikipedia.org/wiki/Pulse-width_modulation
[analogWrite]: https://www.arduino.cc/reference/en/language/functions/analog-io/analogwrite/