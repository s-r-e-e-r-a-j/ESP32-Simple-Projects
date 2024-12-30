
int inputpin=13;
int ledpin=18;
int value=0;
bool pirstate=false;


void setup() {
  Serial.begin(115200);
  pinMode(inputpin, INPUT);
  pinMode(ledpin, OUTPUT);
  
}

void loop() {

  value=digitalRead(inputpin);
  if(value == 1){
    if(pirstate == false){
      Serial.println("Motion Detected");
      digitalWrite(ledpin, HIGH);
      pirstate=true;
    }
  }else{
    digitalWrite(ledpin, LOW);
     if(pirstate == true){
      Serial.println("Motion Ended");
      pirstate=false;
     }
  }
  
}
