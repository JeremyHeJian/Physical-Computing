int ledPin = 3;
int ledPin2 = 5;
int ledPin3 = 6;
int ledPin4 = 9;
int ledPin5 = 10;
int ledPin6 = 11;

int switchPin = 2;
int switchRead = 0;
int mode = 0;

boolean pressing = false;

//Mode 2 Variables
int counter = 0;

bool flipFlop = false;

long pMillis = 0;

int interval = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);

  pinMode(switchPin, INPUT);
  Serial.begin(9600);
}

void loop() {

  switchRead = digitalRead(switchPin);
  //Serial.println(switchRead);

  if (switchRead == 1) {
    pressing = true;
  }

  if (switchRead == 0 && pressing == true) {
    pressing = false;
    //do something
    //counter = counter + 1;
    mode++;
    Serial.println(mode);
  }

  if (mode == 0) {
    //Reset of Off Condition
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin6, LOW);
    Serial.println("Mode 0");

  }
  else if (mode == 1) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    Serial.println("Mode 1");

  } else if (mode == 2) {
    //run Mode program
    if (millis() - pMillis >= interval) {
      pMillis = millis();
      if (flipFlop == false) {
        counter++;
      } else {
        counter--;

      }
      Serial.println(counter);
    }

    analogWrite(ledPin, counter);
    analogWrite(ledPin2, counter);
    analogWrite(ledPin3, counter);
    analogWrite(ledPin4, counter);
    analogWrite(ledPin5, counter);
    analogWrite(ledPin6, counter);



    if (counter >= 255) {
      flipFlop = true;
    }

    if (counter <= 0) {
      flipFlop = false;
      delay(500);
    }



    Serial.println("Mode 2");

  } else {
    mode = 0;
  }

}
