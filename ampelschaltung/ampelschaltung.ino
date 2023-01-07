void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

int arr1[] = { 
  HIGH, LOW, LOW, 2000, // Halten 
  HIGH, HIGH, LOW, 1000, // Bereit für start
  LOW, LOW, HIGH, 5000, // Fahren 
  LOW, HIGH, LOW, 1000 // Bereit für halten 
};

void loop() {
  // put your main code here, to run repeatedly:

  for (byte i = 0; i < sizeof(arr1) / sizeof(int); i += 4) {
    digitalWrite(12, arr1[i]);
    digitalWrite(11, arr1[i+1]);
    digitalWrite(10, arr1[i+2]);
    delay(arr1[i+3]);
  }
}
