int LED = 4;
void setup() {
pinMode(LED,OUTPUT);

}

void loop() 
{
digitalWrite(LED,HIGH);
delay(50);
digitalWrite(LED,LOW);
delay(50);
}
