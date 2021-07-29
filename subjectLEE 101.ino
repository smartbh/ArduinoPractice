int sws = 4;
int leds = 13;

void setup() {
    pinMode(sws, INPUT);
    pinMode(leds, OUTPUT);
  
}

void loop() 
{
  // put your main code here, to run repeatedly:
  

    if(digitalRead(sws)==1)
    {
      digitalWrite(leds, HIGH);
    }
  

    if(digitalRead(sws)==1)
    {
      digitalWrite(leds, LOW);
    }
}
