

void dot() {
  digitalWrite(LED_BUILTIN, HIGH);     //spelling my first name (yuvraj) through morse code
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void dash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(3000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  
  dash();
  dot();
  dash();
  dash();

  dot();
  dot();
  dash();

  dot();
  dot();
  dot();
  dash();

  dot();
  dash();
  dot();

  dot();
  dash();

  dot();
  dash();
  dash();
  dash();

}
