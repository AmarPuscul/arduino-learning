int redLight = 12;
int dot = 250;
int line = 600;
int pause = 700;

void setup() {
  
  pinMode (12, OUTPUT);

}

void loop() {
  
  digitalWrite (redLight, HIGH);
  delay (dot);
  digitalWrite (redLight, LOW);
  delay (dot);
  digitalWrite (redLight, HIGH);
  delay (dot);
  digitalWrite (redLight, LOW);
  delay (dot);
  digitalWrite (redLight, HIGH);
  delay (dot);
  digitalWrite (redLight, LOW);
  delay (dot);

  digitalWrite (redLight, HIGH);
  delay (line);
  digitalWrite (redLight, LOW);
  delay (line);
  digitalWrite (redLight, HIGH);
  delay (line);
  digitalWrite (redLight, LOW);
  delay (line);
  digitalWrite (redLight, HIGH);
  delay (line);
  digitalWrite (redLight, LOW);
  delay (line);

  digitalWrite (redLight, HIGH);
  delay (dot);
  digitalWrite (redLight, LOW);
  delay (dot);
  digitalWrite (redLight, HIGH);
  delay (dot);
  digitalWrite (redLight, LOW);
  delay (dot);
  digitalWrite (redLight, HIGH);
  delay (dot);
  digitalWrite (redLight, LOW);
  delay (dot);

  delay (pause);


}
