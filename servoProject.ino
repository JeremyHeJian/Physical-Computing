#include <Servo.h>
int switchPin = 2;
int switchRead = 0;
int mode = 0;

int servoPin = 9;
int servoPos = 180;
Servo myServo;
boolean pressing = false;



void setup() {
  // put your setup code here, to run once:
  pinMode(switchPin, INPUT);
  myServo.attach(servoPin);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  switchRead = digitalRead(switchPin);

  if (switchRead == 1) {
    pressing = true;
  }

  if (switchRead == 0 && pressing == true) {
    pressing = false;
    //do something
    //counter = counter + 1;
    mode++;
    Serial.println(mode);

    if (mode == 0) {
      //Reset of Off Condition
      myServo.write(0);
      Serial.println("Mode 0");

    }
    else if (mode == 1) {
      myServo.write(90);
      delay(3000);
      myServo.write(0);
      delay(3000);
      Serial.println("Mode 1");

    } else if (mode == 2) {
      myServo.write(90);
      delay(2000);
      myServo.write(0);
      delay(2000);
      Serial.println("Mode 2");

    }
    else if (mode == 3) {
      myServo.write(90);
      delay(1000);
      myServo.write(0);
      delay(1000);
      Serial.println("Mode 3");
      }else {
        mode = 0;
      }
  }    }
