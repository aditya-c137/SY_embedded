#include <Stepper.h>
const int stepsPerRevolution = 200;
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
   myStepper.setSpeed(20);//20rpm
   Serial.begin(9600);
}

void loop() {
   Serial.println("Clockwise");
   myStepper.step(stepsPerRevolution);
   delay(5000);
   Serial.println("Anticlockwise");
   myStepper.step(-stepsPerRevolution);
   delay(5000);
}
