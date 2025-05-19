void setup() {
  Serial.begin(9600);
}

void loop() {
  int variable_1 = analogRead(A0);
  Serial.println(variable_1);

  delay(100);
}
