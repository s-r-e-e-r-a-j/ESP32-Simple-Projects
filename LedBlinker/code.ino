
int redledpin=22;
int yellowledpin=23;
int greenledpin=15;

void setup() {

  pinMode(redledpin, OUTPUT);
  pinMode(yellowledpin, OUTPUT);
  pinMode(greenledpin, OUTPUT);
}

void loop() {
  
  digitalWrite(redledpin, HIGH);
  delay(1000);
  digitalWrite(redledpin, LOW);
  delay(1000);
  digitalWrite(yellowledpin, HIGH);
  delay(1000);
  digitalWrite(yellowledpin, LOW);
  delay(1000);
  digitalWrite(greenledpin, HIGH);
  delay(1000);
  digitalWrite(greenledpin, LOW);
  delay(1000);
  digitalWrite(greenledpin, HIGH);
  delay(1000);
  digitalWrite(greenledpin, LOW);
  delay(1000);
  digitalWrite(yellowledpin, HIGH);
  delay(1000);
  digitalWrite(yellowledpin, LOW);
  delay(1000);
  digitalWrite(redledpin, HIGH);
  delay(1000);
  digitalWrite(redledpin, LOW);
  delay(1000);


}
