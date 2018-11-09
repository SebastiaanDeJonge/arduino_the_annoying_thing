int ledWhite = 10;
int ledRed = 11;
int ledYellow = 12;
int ledBlue = 13;

int piezoPin = 9;
int potPin = 2;

int interval = 100;

void setup() {
  pinMode(ledWhite, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledBlue, OUTPUT);
}

void loop() {
  interval = analogRead(potPin);  

  unsigned long currentMillis = millis();
  
  if (interval > 1) {
    killLeds();
    tone(piezoPin, random(100,400), interval);
    digitalWrite(random(10,14), HIGH);
    delay(interval);
  } else {
    killLeds();
  }
}

void killLeds()
{
  digitalWrite(ledWhite, LOW);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledBlue, LOW);
}
