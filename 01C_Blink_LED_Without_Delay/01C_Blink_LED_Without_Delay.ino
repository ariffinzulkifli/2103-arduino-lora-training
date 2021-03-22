int ledState = LOW;
unsigned long previousMillis = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= 1000) {
    previousMillis = currentMillis;

    if (ledState == LOW) ledState = HIGH;
    else ledState = LOW;

    digitalWrite(LED_BUILTIN, ledState);
  }
}
