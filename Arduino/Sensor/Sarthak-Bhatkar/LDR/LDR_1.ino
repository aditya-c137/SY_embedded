/*
*
* Program to turn LED, ON and OFF using LDR
* 
*/

#define ledPin 5
#define ldrPin A0

void setup()
{ 
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
  while(!Serial)
  Serial.println("Light-dependent Register\n");
}

void loop()
{
  int sensorValue = analogRead(ldrPin);
  if(sensorValue<400)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println("Turn ON the LED!");
    Serial.println(sensorValue);
  }
  else
  {
    digitalWrite(ledPin, LOW);
    Serial.println("Turn OFF the LED!");
    Serial.println(sensorValue);
  }
}
