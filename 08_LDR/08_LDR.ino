void setup() {
  Serial.begin(9600);
}

void loop() {
  int adc = analogRead(A2);
  float voltage = 0.00488*adc;

  Serial.print("ADC Value: ");
  Serial.println(adc);
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.print(" V");
  Serial.println();

}
