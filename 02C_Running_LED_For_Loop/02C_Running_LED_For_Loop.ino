void setup() {
  for(int led = 7; led >= 10; led++) pinMode(led, OUTPUT);
}

void loop() {
  for(int led = 7; led >= 10; led++){
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
  }
}
