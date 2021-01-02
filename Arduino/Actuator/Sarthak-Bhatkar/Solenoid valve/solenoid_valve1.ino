/*
* In the circuit, two push buttons are used. 
* Using those two, Solenoid can be turn ON or OFF.
*/

#define pushButtonON 9		// To turn 'ON' the Solenoid
#define pushButtonOFF 10	// To turn OFF the Solenoid
#define solenoidValve 5		
bool flag = false;
void setup()
{
  Serial.begin(9600);
  pinMode(pushButtonON, INPUT);
  pinMode(pushButtonOFF, INPUT);
  pinMode(solenoidValve, OUTPUT);
  while(!Serial){}
  
}

void loop()
{
  //digitalWrite(solenoidValve, HIGH);
  if(digitalRead(pushButtonON)==HIGH)
  {
    digitalWrite(solenoidValve, HIGH);
    Serial.println("Solenoid -> ON");
    delay(500);
  }
  else if(digitalRead(pushButtonOFF)==HIGH)
  {
    digitalWrite(solenoidValve, LOW);
    Serial.println("Solenoid -> OFF");
    delay(500);
  }
  
  while(!flag)
  {
    Serial.println("Solenoid can be turn 'ON' and 'OFF' using the push buttons.\n");
    Serial.println("Solenoid -> OFF");
  	flag = true;
  }
  
}
