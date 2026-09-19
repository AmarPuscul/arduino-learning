# Arduino Ultrasonic Distance Meter

A simple push-to-measure distance meter built with an Arduino, an **HC-SR04 / HC-SR04+** ultrasonic sensor, a **16x2 I2C LCD**, and a push button.

Place a target in front of the sensor, press the button, and the distance in centimeters appears on the display.

<!-- Add a photo or GIF of your build here -->
<!-- ![Project photo](images/project.jpg) -->

---

## Features

- One measurement per button press
- Result shown on a 16x2 LCD over I2C (only two data wires)
- No external resistor for the button (uses the internal pull-up)
- Distance in centimeters with two decimals

---

## How it works

1. The LCD shows: `Place the Target` / `Press to Measure`
2. The sketch waits for the button to be pressed.
3. A 10 µs pulse is sent to the sensor's TRIG pin.
4. `pulseIn()` measures how long the ECHO pin stays HIGH.
5. The time is converted to distance:

```
distance (cm) = echo time (µs) / 58
```

6. The result stays on the screen for 5 seconds, then the prompt returns.

---

## What you need

- Arduino Uno / Nano (or compatible)
- HC-SR04 or HC-SR04+ ultrasonic sensor
- 16x2 LCD with I2C backpack (address `0x27`)
- Push button
- Breadboard and jumper wires

---

## Wiring

**HC-SR04 sensor**

```
VCC   ->  5V
TRIG  ->  D8
ECHO  ->  D11
GND   ->  GND
```

**I2C LCD**

```
VCC   ->  5V
GND   ->  GND
SDA   ->  A4
SCL   ->  A5
```

**Push button**

```
Pin 1 ->  D2
Pin 2 ->  GND
```

> The button goes between D2 and GND. The sketch turns on the internal pull-up on D2, so the pin reads HIGH when idle and LOW when pressed.

---

## Getting started

**1. Install the software**

- [Arduino IDE](https://www.arduino.cc/en/software)
- Library **LiquidCrystal_I2C** (Sketch → Include Library → Manage Libraries…)
- The `Wire` library is already included with the IDE

**2. Upload the sketch**

1. Clone or download this repository.
2. Open `HC-SR04PlusDisplayPlusButton.ino` in the Arduino IDE.
3. Select your board and port under *Tools*.
4. Click **Upload**.

> Tip: the Arduino IDE expects the `.ino` file to sit in a folder with the same name (`HC-SR04PlusDisplayPlusButton/`).

---

## Settings you can change

At the top of the sketch:

- `LiquidCrystal_I2C lcd(0x27, 16, 2)` - I2C address and LCD size
- `buttonPin = 2` - button pin
- `trigPin = 8` - sensor TRIG pin
- `echoPin = 11` - sensor ECHO pin
- `dt = 5000` - how long the result stays on screen, in milliseconds

---

## Troubleshooting

- **LCD is blank:** try address `0x3F` instead of `0x27`, and turn the small contrast screw on the back of the I2C backpack.
- **Always shows 0.00cm:** no echo was received. Check the TRIG/ECHO wires and make sure the target is within range.
- **Random or jumping values:** soft, angled, or very small surfaces reflect sound poorly. Try a flat, hard target.

---

## Good to know

- Typical range is about 2 cm to 400 cm.
- The `/58` factor assumes room temperature (about 20 °C), so readings shift slightly as temperature changes.
- The sketch waits (blocks) until the button is pressed. This is fine for a simple meter.

---

## Ideas for improvement

- Add a timeout to `pulseIn()` and show an "Out of range" message
- Average several readings for a steadier result
- Print values to the Serial Monitor (Serial is already started at 9600 baud)
- Add a cm / inch switch
- Add a temperature sensor for more accurate readings

---

## Suggested repository details

Copy these into the GitHub sidebar (the gear icon next to "About"):

**Description:**
`Push-button distance meter using Arduino, HC-SR04 ultrasonic sensor and a 16x2 I2C LCD.`

**Topics:**
`arduino` `hc-sr04` `ultrasonic-sensor` `lcd-i2c` `distance-meter` `arduino-project`

---

## License

Add your license here (for example [MIT](https://choosealicense.com/licenses/mit/)).

## Author

Your name - [GitHub profile](https://github.com/your-username)
