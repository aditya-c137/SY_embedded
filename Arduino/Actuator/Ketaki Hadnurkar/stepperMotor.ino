/* Stepper Motor controlled using uno and a driving ic */

#include <Stepper.h>
const int stepsPerRevolution = 90;  //4 degree rotation in each step can be changed accroding to need

Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);  
// initialize the stepper library on pins 8 through 11 of arduino uno

void setup() {
   myStepper.setSpeed(60);  // set the speed at 60 rpm
   Serial.begin(9600);
}

void loop() {
   Serial.println("clockwise"); // step one revolution in clockwise direction
   myStepper.step(stepsPerRevolution);
   delay(500);
   Serial.println("counterclockwise");  // step one revolution in anticlockwise direction
   myStepper.step(-stepsPerRevolution); //negating to reverse direction
   delay(500);
}
