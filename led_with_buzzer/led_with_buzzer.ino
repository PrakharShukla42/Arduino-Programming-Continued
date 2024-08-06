const int buzzer=9;
const int LED =10;
void setup() {
  
 pinMode(buzzer,OUTPUT);
 pinMode(LED,OUTPUT);
}

void loop() {
  digitalWrite(LED,HIGH);
  tone(buzzer,1000);
  delay(1000);
  digitalWrite(LED,LOW);
  noTone(buzzer);
  delay(1000);
}
