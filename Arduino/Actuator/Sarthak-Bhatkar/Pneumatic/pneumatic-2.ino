/*
* Program to control the pneumatic using push button
*/

#define signalPin 5
#define pushButton 6

void setup()
{
  pinMode(signalPin, OUTPUT);  		// Signal Pin  --> OUTPUT
  pinMode(pushButton, INPUT);		// Push Button --> INPUT
}

void loop()
{
  if(digitalRead(pushButton)==HIGH)
  {
    digitalWrite(signalPin, HIGH);	// Turning the signal ON
  	delay(1000); 
  	digitalWrite(signalPin, LOW);		// Turning the signal OFF
  	delay(1000); 
  }
  
}
