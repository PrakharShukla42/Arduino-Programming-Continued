void setup()
{
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  int RANGE=analogRead(A0);
  Serial.println(RANGE);
  if (RANGE<=400)
  {
    digitalWrite(3,HIGH);
    digitalWrite(5,LOW);
  }
  else
  {
    digitalWrite(3,LOW);
    digitalWrite(5,HIGH);
  }
  
 }
