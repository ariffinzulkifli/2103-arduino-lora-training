int red = 9;
int green = 10;
int blue = 11;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  rgb(HIGH, LOW, LOW, 1000);  // red for a second
  rgb(LOW, HIGH, LOW, 1000);  // green for a second
  rgb(LOW, LOW, HIGH, 1000);  // blue for a second

  rgb(HIGH, LOW, HIGH, 1000);  // magenta for a second
  rgb(LOW, HIGH, HIGH, 1000);  // cyan for a second
  rgb(HIGH, HIGH, LOW, 1000);  // yellow for a second
}

void rgb(int r, int g, int b, int wait){
  digitalWrite(red, r);
  digitalWrite(green, g);
  digitalWrite(blue, b);
  delay(wait);
  
}
