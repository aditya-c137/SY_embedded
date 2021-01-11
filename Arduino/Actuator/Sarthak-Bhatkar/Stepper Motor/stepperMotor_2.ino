/*
* Program to drive Stepper Motor 
* by taking input from the user
*/

#include "Stepper.h"

int str = 00;    	// Steps per revolution
bool flag = false;
Stepper myStepper(str, 0, 1, 2, 3);

void setup()
{
  Serial.begin(9600);
  myStepper.setSpeed(50);		// speed is set to 50rpm
  while(!Serial)
  Serial.println("STEPPER MOTOR\n");
  
}

void loop()
{
  if(!flag)
  {
    Serial.println("Enter the steps per revolution : ");
    flag = true;
  }
  
  if (Serial.available())
  {
    str = Serial.parseInt();
    motor.step(str);
    flag = false;
  }

}
