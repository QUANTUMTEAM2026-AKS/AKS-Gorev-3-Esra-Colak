
int ledPin = 7;
int LDRPin = A0;

void setup() {
  pinMode (ledPin, OUTPUT);

}

void loop() {
  int isikdegeri = analogRead(LDRPin);

  delay(100);

  if (isikdegeri < 600)
  digitalWrite(7, LOW);
  else
  digitalWrite(7, HIGH);

}