int State = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  }

void loop()
{
  if(Serial.available()) 
  {
    int Tony = Serial.read();

    if (Tony == 'A')
    {
      State = ~State;
      digitalWrite(13,State);
      delay(500);
    }
  }
}
