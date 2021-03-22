#include <dht.h>
#define dataPin 8
dht DHT;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int readData = DHT.read11(dataPin);

  float t = DHT.temperature;
  float h = DHT.humidity;

  Serial.print("Temperature = ");
  Serial.print(t);
  Serial.print(" ");
  Serial.print((char)176);
  Serial.print("C | ");
  Serial.print((t * 9.0) / 5.0 + 32.0);
  Serial.print(" ");
  Serial.print((char)176);
  Serial.println("F ");
  Serial.print("Humidity = ");
  Serial.print(h);
  Serial.println(" % ");
  Serial.println("");

  delay(2000);
}
