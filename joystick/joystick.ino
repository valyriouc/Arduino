void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  int x_value = analogRead(A0);
  int y_value = analogRead(A1);

  if (x_value == 0) {
    digitalWrite(12, HIGH);
  }
  else {
    digitalWrite(12, LOW);
  }

  if (x_value == 1023) {
    digitalWrite(10, HIGH);
  }
  else {
    digitalWrite(10, LOW);
  }

  if (y_value == 0) {
    digitalWrite(11, HIGH);
  }
  else {
    digitalWrite(11, LOW);
  }

  if (y_value == 1023) {
    digitalWrite(9, HIGH);
  }
  else {
    digitalWrite(9, LOW);
  }
}