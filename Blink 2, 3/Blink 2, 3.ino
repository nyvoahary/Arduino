
#define LED 3 
#define LED1 2

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
  pinMode(LED1, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  digitalWrite(LED1, LOW);
  delay(500);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED, LOW);
  delay(500);
}
