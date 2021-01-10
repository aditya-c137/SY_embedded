/*
* Servo Motor is attach at digital pin 9 of Arduino Uno.
* Rotation is restricted from 0 degrees to 180 degrees.
* In this program, we are taking the input from the user
* and rotating the servo at a perticular angle.
*/

#include <Servo.h>

Servo myServo;
bool flag = false;
int read = 0;


void setup()
{
  myServo.attach(9, 500/*min*/, 2500/*max*/);  //min and max default values are 544 and 2400 if not specified
  Serial.begin(9600);
  while(!Serial){}
  Serial.println("Sero Motor!\nRotation is restricted between 0 degrees and 180 degrees.");
  myServo.write(00);  
}



void loop()
{
  Serial.println("Servo is at "+ String(myServo.read())+" degrees.");
  while(read==myServo.read())
  {
    if(Serial.available() > 0)
    {
  		read = Serial.parseInt();
      	myServo.write(read);
      	Serial.println("Servo is at an angle of "+ String(read)+" degrees.");
      	flag = false;
    }
    else if(!flag)
    {
      flag = true;
      Serial.println("Enter the angle: ");
    }
      
  }
  
}
