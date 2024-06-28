#include<Servo.h>
Servo myServo;
int servoPin=6;
void setup() {
  // put your setup code here, to run once:
  myServo.attach(servoPin);

}

void loop() {
  for(int i=0;i<=180;i++){
  // put your main code here, to run repeatedly:
  myServo.write(i);
  delay(15);
  }
  for(int i=180;i>=0;i--)
  {
    myServo.write(i);
    delay(15);
  }

}