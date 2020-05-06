#include<Servo.h>
Servo myServo;
int button = 3;
int buttonPoll = 0;
int state = 0;
int old = 0;
void setup() {
  // put your setup code here, to run once:
  int state = 0;
  int old = 0;
  int buttonPoll = 0;
  myServo.attach(9);
  myServo.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonPoll = digitalRead(button);
  if (button == 1) {
    delay(50);
    buttonPoll = digitalRead(button);
    if (buttonPoll == 0) {
      state == old + 1;
    }
  } else {
    delay(100);
  }
  switch (state) {
    case 1:
      myServo.write(45);
      delay(3000);
      myServo.write(45);
      delay(3000);
      myServo.write(45);
      delay(3000);
      myServo.write(45);
      delay(3000);
      old = state;
      break;
    case 2:
      myServo.write(45);
      delay(2000);
      myServo.write(45);
      delay(2000);
      myServo.write(45);
      delay(2000);
      myServo.write(45);
      delay(2000);
      old = state;
      break;
    case 3:
      myServo.write(45);
      delay(1000);
      myServo.write(45);
      delay(1000);
      myServo.write(45);
      delay(1000);
      myServo.write(45);
      delay(1000);
      old = state;
    default:
      myServo.write(0);
      old = 0;
      break;
  }
}
