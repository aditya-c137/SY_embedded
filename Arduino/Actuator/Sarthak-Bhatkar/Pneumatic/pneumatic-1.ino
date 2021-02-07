/*
* Simple program to drive pneumatic
*/

#define signalPin 5

void setup()
{
  pinMode(signalPin, OUTPUT);  		// Signal Pin --> OUTPUT
}

void loop()
{
  digitalWrite(signalPin, HIGH);	// Turning the signal ON
  delay(1000); 
  digitalWrite(signalPin, LOW);		// Turning the signal OFF
  delay(1000); 
}
