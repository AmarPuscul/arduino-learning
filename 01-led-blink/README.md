# Basic Arduino LED Blink

## Project Description

This project is a simple beginner-level Arduino project that demonstrates how to blink an LED using an Arduino board. The LED is connected with a 220Ω resistor, which limits the current and protects the LED from damage.

The purpose of this project is to understand the basics of Arduino programming, digital output control, and simple electronic circuit connections.

## Components Used

- Arduino board
- LED
- 220Ω resistor
- Breadboard
- Jumper wires
- USB cable

## How It Works

The Arduino sends a HIGH signal to the selected digital pin, which turns the LED on. After a short delay, the Arduino sends a LOW signal, which turns the LED off. This process repeats continuously and creates a blinking effect.

The 220Ω resistor is connected in series with the LED to reduce the current flowing through the circuit.

## Circuit Connection

Example connection:

- LED anode / longer leg → 220Ω resistor → Arduino digital pin 13
- LED cathode / shorter leg → GND
