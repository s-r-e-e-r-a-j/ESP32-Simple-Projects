
int pin_trig=33;
int pin_echo=23;
int buzzerpin=2;
int ledpin=4;
long duration;
int distance;

void setup() {
  
  pinMode(pin_trig, OUTPUT);
  pinMode(pin_echo, INPUT);
  pinMode(buzzerpin, OUTPUT);
  pinMode(ledpin, OUTPUT);

}

void loop() {
  
  digitalWrite(pin_trig, LOW);
  delayMicroseconds(9);
  digitalWrite(pin_trig, HIGH);
  delayMicroseconds(2);
  digitalWrite(pin_trig, LOW);
  duration=pulseIn(pin_echo, HIGH);
  distance=duration*0.034/2;
  if(distance < 30){
    tone(buzzerpin,262,250);
    digitalWrite(ledpin, HIGH);
  }else{
    noTone(buzzerpin);
    digitalWrite(ledpin, LOW);
  }

}
