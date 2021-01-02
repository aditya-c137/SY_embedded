/*		Simple Code to Rotate a DC Motor		*/   
int motorPin = 6;

void setup()
{
  pinMode(motorPin, OUTPUT);
}

void loop()
{
  digitalWrite(motorPin, HIGH);
}
