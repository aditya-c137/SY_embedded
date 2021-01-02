/*		
* Read the innput from Serial Moniter
* to control the speed of the DC motor.
*/

int motorPin = 6;
int read;

void setup()
{
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Input should be between 0 to 255.");
}

void loop()
{
  while(Serial.available())
  	read = Serial.parseInt();
  	if(read>0&&read<255)
  		analogWrite(motorPin, read);
}
