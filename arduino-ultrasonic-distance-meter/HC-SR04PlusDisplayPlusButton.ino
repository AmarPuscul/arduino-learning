#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

int buttonPin = 2;
int buttonVal;
 int trigPin = 8;
 int echoPin = 11;
 int pingTravelTime;
 float convToCm;
  int dt = 5000;

void setup() {
  // put your setup code here, to run once:

pinMode(buttonPin,INPUT);
digitalWrite(buttonPin, HIGH);
 lcd.init();
 lcd.backlight();
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print("Place the Target");
lcd.setCursor(0, 1);
lcd.print("Press to Measure");
 buttonVal = digitalRead(buttonPin);
 while (buttonVal==1){
  buttonVal = digitalRead(buttonPin);
 }
  digitalWrite(trigPin, LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pingTravelTime = pulseIn(echoPin, HIGH);
  convToCm = pingTravelTime/58.;
  delay(25);
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("Target Distance");
   lcd.setCursor(0, 1);
   lcd.print(convToCm);
   lcd.print( "cm");
   
   delay(dt);

  




}
