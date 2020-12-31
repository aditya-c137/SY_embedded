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
}

void loop()
{
  while(Serial.available())
  	read = Serial.parseInt();
  	if(read>0&&read<255)
  		analogWrite(motorPin, read);
}
