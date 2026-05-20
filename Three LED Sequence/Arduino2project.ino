int redLED = 12;
int blueLED = 8;
int yellowLED = 7;
int pause = 200;

void setup() {
  
  pinMode (12, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (7, OUTPUT);

}

void loop() {

  digitalWrite (redLED, HIGH);
  delay (pause);
  digitalWrite (redLED, LOW);
  delay (pause);
  digitalWrite (redLED, HIGH);
  delay (pause);
  digitalWrite (redLED, LOW);
  delay (pause);
  digitalWrite (redLED, HIGH);
  delay (pause);
  digitalWrite (redLED, LOW);
  delay (pause);

  digitalWrite (blueLED, HIGH);
  delay (pause);
  digitalWrite (blueLED, LOW);
  delay (pause);
  digitalWrite (blueLED, HIGH);
  delay (pause);
  digitalWrite (blueLED, LOW);
  delay (pause);
  digitalWrite (blueLED, HIGH);
  delay (pause);
  digitalWrite (blueLED, LOW);
  delay (pause);

  digitalWrite (yellowLED, HIGH);
  delay (pause);
  digitalWrite (yellowLED, LOW);
  delay (pause);
  digitalWrite (yellowLED, HIGH);
  delay (pause);
  digitalWrite (yellowLED, LOW);
  delay (pause);
  digitalWrite (yellowLED, HIGH);
  delay (pause);
  digitalWrite (yellowLED, LOW);
  delay (pause);


}
