

#define yesilled 4
#define maviled 3
#define kirmiziled 2

#define buton1 8
#define buton2 7
#define buton3 6

void setup() {
  pinMode(yesilled, OUTPUT);
  pinMode(maviled, OUTPUT);
  pinMode(kirmiziled, OUTPUT);

  pinMode(buton1, INPUT);
  pinMode(buton2, INPUT);
  pinMode(buton3, INPUT);
}

void loop() {
  if (digitalRead(buton1) == 1)
  digitalWrite(yesilled, 1);
  else digitalWrite(yesilled, 0);

  if (digitalRead(buton2) == 1)
  digitalWrite(maviled, 1);
  else digitalWrite(maviled, 0);

  if (digitalRead(buton3) == 1)
  digitalWrite(kirmiziled, 1);
  else digitalWrite(kirmiziled, 0);
}