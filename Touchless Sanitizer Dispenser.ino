const int IR_SENSOR_PIN = 2; 
const int RELAY_PIN = 3;     

void setup() {
  pinMode(IR_SENSOR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, HIGH); 
}

void loop() {
  int sensorValue = digitalRead(IR_SENSOR_PIN);

  if (sensorValue == LOW) { 
    digitalWrite(RELAY_PIN, LOW); 
    delay(500); 
  }  
  else {
    digitalWrite(RELAY_PIN, HIGH);
    delay(100);
  }
}