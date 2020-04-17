
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047

#define ACTIVATED LOW

const int PIEZO = 11;
const int LED = 13;

const int BUTTON_C = 10;
const int BUTTON_D = 9;
const int BUTTON_E = 8;
const int BUTTON_F = 7;
const int BUTTON_G = 6;
const int BUTTON_A = 5;
const int BUTTON_B = 4;



void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BUTTON_C, INPUT);
  digitalWrite(BUTTON_C, HIGH);
  pinMode(BUTTON_D, INPUT);
  digitalWrite(BUTTON_D, HIGH);
  pinMode(BUTTON_E, INPUT);
  digitalWrite(BUTTON_E, HIGH);
  pinMode(BUTTON_F, INPUT);
  digitalWrite(BUTTON_F, HIGH);
  pinMode(BUTTON_G, INPUT);
  digitalWrite(BUTTON_G, HIGH);
  pinMode(BUTTON_A, INPUT);
  digitalWrite(BUTTON_A, HIGH);
  pinMode(BUTTON_B, INPUT);
  digitalWrite(BUTTON_B, HIGH);

  digitalWrite(LED, LOW);

  //Setup humidity sensor
  Serial.begin(9600);
  delay(500);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor
}

void loop()
{
  //  while(digitalRead(BUTTON_C) == ACTIVATED)
  //  {
  //    tone(PIEZO,NOTE_C4);
  //    digitalWrite(LED,HIGH);
  //  }
  //
  //  while(digitalRead(BUTTON_D) == ACTIVATED)
  //  {
  //    tone(PIEZO,NOTE_D4);
  //    digitalWrite(LED,HIGH);
  //  }
  //
  //  while(digitalRead(BUTTON_E) == ACTIVATED)
  //  {
  //    tone(PIEZO,NOTE_E4);
  //    digitalWrite(LED,HIGH);
  //  }
  //
  //  while(digitalRead(BUTTON_F) == ACTIVATED)
  //  {
  //    tone(PIEZO,NOTE_F4);
  //    digitalWrite(LED,HIGH);
  //  }
  //
  //  while(digitalRead(BUTTON_G) == ACTIVATED)
  //  {
  //    tone(PIEZO,NOTE_G4);
  //    digitalWrite(LED,HIGH);
  //  }
  //
  //  while(digitalRead(BUTTON_A) == ACTIVATED)
  //  {
  //    tone(PIEZO,NOTE_A4);
  //    digitalWrite(LED,HIGH);
  //  }
  //
  //  while(digitalRead(BUTTON_B) == ACTIVATED)
  //  {
  //    tone(PIEZO,NOTE_B4);
  //    digitalWrite(LED,HIGH);
  //  }
  //
  //  noTone(PIEZO);
  //  digitalWrite(LED,LOW);

  //while(digitalRead(BUTTON_C) == ACTIVATED && digitalRead(BUTTON_D) == ACTIVATED && digitalRead(BUTTON_E) == ACTIVATED && digitalRead(BUTTON_F) == ACTIVATED && digitalRead(BUTTON_G) == ACTIVATED)
  if (digitalRead(BUTTON_C) == ACTIVATED && digitalRead(BUTTON_D) == ACTIVATED && digitalRead(BUTTON_E) == ACTIVATED && digitalRead(BUTTON_F) == ACTIVATED && digitalRead(BUTTON_G) == ACTIVATED)
  {
    tone(PIEZO, NOTE_C4);
    digitalWrite(LED, HIGH);
  }

  else if (digitalRead(BUTTON_D) == ACTIVATED && digitalRead(BUTTON_E) == ACTIVATED && digitalRead(BUTTON_F) == ACTIVATED && digitalRead(BUTTON_G) == ACTIVATED)
  {
    tone(PIEZO, NOTE_D4);
    digitalWrite(LED, HIGH);
  }

  else if (digitalRead(BUTTON_E) == ACTIVATED && digitalRead(BUTTON_F) == ACTIVATED && digitalRead(BUTTON_G) == ACTIVATED)
  {
    tone(PIEZO, NOTE_E4);
    digitalWrite(LED, HIGH);
  }

  else if (digitalRead(BUTTON_F) == ACTIVATED && digitalRead(BUTTON_G) == ACTIVATED)
  {
    tone(PIEZO, NOTE_F4);
    digitalWrite(LED, HIGH);
  }
  else if (digitalRead(BUTTON_E) == ACTIVATED && digitalRead(BUTTON_G) == ACTIVATED)
  {
    tone(PIEZO, NOTE_FS4);
    digitalWrite(LED, HIGH);
  }

  else if (digitalRead(BUTTON_G) == ACTIVATED)
  {
    tone(PIEZO, NOTE_G4);
    digitalWrite(LED, HIGH);
  }

  //    while (digitalRead(BUTTON_A) == ACTIVATED)
  //    {
  //      tone(PIEZO, NOTE_A4);
  //      digitalWrite(LED, HIGH);
  //    }
  //
  //    while (digitalRead(BUTTON_B) == ACTIVATED)
  //    {
  //      tone(PIEZO, NOTE_B4);
  //      digitalWrite(LED, HIGH);
  //    }

  else noTone(PIEZO);
  digitalWrite(LED, LOW);
}
