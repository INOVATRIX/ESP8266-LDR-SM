#define ldr_pin A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(ldr_pin));
  delay(500);
}