const int motorPin = 9;
int potVal;

void setup() {
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  potVal = analogRead(A0);
  Serial.print("potVal: ");
  Serial.print(potVal);
  Serial.println();

  digitalWrite(motorPin, potVal);

}
