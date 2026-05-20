# Three LED Sequence

## Project Description

This project demonstrates how to control multiple LEDs using an Arduino board. Three LEDs are connected to digital output pins, and they turn on one after another in a repeated sequence.

The purpose of this project is to practice working with multiple digital outputs and to understand how timing and delays can be used to create a simple LED pattern.

## Components Used

- Arduino board
- 3 LEDs
- 3 resistors
- Breadboard
- Jumper wires
- USB cable

## How It Works

The Arduino controls three LEDs connected to separate digital pins. The first LED turns on for a short period of time and then turns off. After that, the second LED turns on, followed by the third LED.

This sequence is repeated three times. By using the `digitalWrite()` function and `delay()`, the Arduino controls the timing of each LED.

## Circuit Connection

Each LED is connected to a separate Arduino digital pin through a resistor. The resistors are used to limit the current and protect the LEDs.

Example connection:

- First LED → Arduino digital pin 13
- Second LED → Arduino digital pin 10
- Third LED → Arduino digital pin 7
- LED negative legs/cathodes → GND

Project Images

What I Learned

Through this project, I learned how to:

Connect multiple LEDs to an Arduino board
Use more than one digital output pin
Control LEDs one by one using code
Create a simple sequence using delays
Understand how Arduino can control multiple components in a repeated pattern
Conclusion

This project builds on the basic LED blink project by adding multiple LEDs and creating a simple sequence. It is a useful beginner project for understanding digital outputs, timing, and basic circuit organization with Arduino.
