int IRS = 2; 
int LED = 13;


void setup() 
{
  pinMode (IRS, INPUT);
  pinMode (LED, OUTPUT);
}

void loop()
{
  int statusSensor = digitalRead (IRS);
  
  if (statusSensor == 1)
    digitalWrite(LED, LOW);
  else
  
    digitalWrite(LED, HIGH);
  
}
