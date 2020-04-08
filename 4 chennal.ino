    int Relay1 = 0;
    int Relay2 = 0;
    int Relay3 = 0;
    int Relay4 = 0;

void setup()
{
    Serial.begin(9600);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);
   
}

void loop()
{
  if (Serial.available())
  {
    
  int TONY = Serial.read();
  
               if(TONY == 'A')
                  { 
                    Relay1 = ~Relay1;
                    digitalWrite(10,Relay1);
                   }
                   if(TONY == 'B')
                  { 
                    Relay2 = ~Relay2;
                    digitalWrite(11,Relay2);
                   }
                   if(TONY == 'C')
                  { 
                    Relay3 = ~Relay3;
                    digitalWrite(12,Relay3);
                   }
                   if(TONY == 'D')
                  {
                    Relay4 = ~Relay4;
                    digitalWrite(13,Relay4);
                   }
  
   }
  }
