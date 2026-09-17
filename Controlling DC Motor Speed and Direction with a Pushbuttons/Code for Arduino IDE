int speedPin = 5;
int dir1 = 4;
int dir2 = 3;
int mSpeed = 0;
 int buttonMinus = 8;
 int buttonPlus = 9;
 int buttonMinusVal;
 int buttonPlusVal;


void setup() {
  // put your setup code here, to run once:
pinMode(speedPin, OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);
 pinMode(buttonMinus, INPUT);
 pinMode(buttonPlus, INPUT);
 digitalWrite(buttonMinus, HIGH);
 digitalWrite(buttonPlus, HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 buttonMinusVal = digitalRead(buttonMinus);
 buttonPlusVal = digitalRead(buttonPlus);

  Serial.print("Motor Speed = ");
  Serial.println(mSpeed);
 delay(100);
  

if (buttonMinusVal == 0){
  mSpeed = mSpeed -10;
}
if (buttonPlusVal == 0){
  mSpeed = mSpeed +10;
}
if (mSpeed == 10){
  mSpeed = 100;
}
if (mSpeed == -10){
  mSpeed = -100;
}

if (mSpeed>255){
  mSpeed = 255;
}
if (mSpeed<-255){
  mSpeed = -255;
}
if (mSpeed ==90){
  mSpeed =0;
}
if (mSpeed ==-90){
  mSpeed =0;
}
if (mSpeed == 95){
  mSpeed =0;
}
if (mSpeed ==-95){
  mSpeed =0;
}
if (mSpeed ==0){
  analogWrite(speedPin, 0);
}
if(mSpeed<0){
  digitalWrite(dir1, LOW);
digitalWrite(dir2, HIGH);
analogWrite(speedPin, abs(mSpeed));
}
if (mSpeed>0){
digitalWrite(dir1, HIGH);
digitalWrite(dir2, LOW);
analogWrite(speedPin,mSpeed);
}


}
