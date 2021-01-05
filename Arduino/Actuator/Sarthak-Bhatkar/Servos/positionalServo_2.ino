/*
* Servo Motor is attach at digital pin 9 of Arduino Uno.
* Rotation is restricted from 0 degrees to 180 degrees.
* In this program, complete rotation of Servo Motor is shown.
*/

#include <Servo.h>

Servo myServo;

void setup()
{
  myServo.attach(9, 500/*min*/, 2500/*max*/);  //min and max default values are 544 and 2400 if not specified
  Serial.begin(9600);
  while(!Serial)
  Serial.println("Complete 180 degrees Sero Motor!");
  myServo.write(00);
}

void loop()
{
  for(int i=1;i<=180;i++)
  {
    myServo.write(i);
    delay(100);
  }
  for(int i=180;i>=0;--i)
  {
    myServo.write(i);
    delay(100);
  }
  
}
