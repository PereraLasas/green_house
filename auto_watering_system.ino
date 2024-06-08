int digitalSensor = A0; //A0 pin
int pumpPin = 8; //relay pin

void setup() {
  pinMode(digitalSensor, INPUT);
  pinMode(pumpPin, OUTPUT);
}

void loop() {
  if(digitalRead(digitalSensor) == HIGH){
    digitalWrite(pumpPin, HIGH);
    
  }else{
    digitalWrite(pumpPin, LOW);
  }
  // 1hour (pump stop time)
}
