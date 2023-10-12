int relayPin = 7;

void setup() {
  Serial.begin(57600);
  pinMode(relayPin, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    char command = Serial.read();
    if (command == '1') {
      digitalWrite(relayPin, HIGH);
    } else if (command == '0') {
      digitalWrite(relayPin, LOW);
    }
  }
}