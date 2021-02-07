/*
* Program to drive Stepper Motor 
* in Clockwise and Anticlockwise
* direction
*/

#include "Stepper.h"

int str = 100;    	// Steps per revolution

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
  Serial.println("ClockWise")
  myStepper.step(str);
  delay(250);
  Serial.println("AntiClockWise")
  myStepper.step(-str);
  delay(250);
}
