int Trig=2;
int Echo=3;
int ledpin=4;int duration=0;
int distance=0;
void setup()
{
  Serial.begin(9600);
  pinMode(Trig ,OUTPUT);
  pinMode(Echo,INPUT);
    pinMode(,OUTPUT);
    pinMode(bulb,OUTPUT);
}
void loop()
{
  digitalWrite(Trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig,LOW);
  delayMicroseconds(10);
  duration=pulseIn(Echo,HIGH);
  distance=duration/2*0.0343;
  Serial.print(distance);
    Serial.println("CM");
  if(distance<50)
    digitalWrite(ledpin, HIGH);
  else
    digitalWrite(ledpin, LOW);
}
