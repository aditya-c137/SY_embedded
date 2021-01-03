
#include <Stepper.h> // header file

#define STEPS 32 // changable steps on motor

Stepper stepper(STEPS, 8, 10, 9, 11);

int val = 0;

void setup() {
  Serial.begin(9600);
  stepper.setSpeed(200);
}

void loop() {

  if (Serial.available()>0)
  {
    val = Serial.parseInt();
    stepper.step(val);
    Serial.println(val);
  }  }
 
