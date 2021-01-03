/*Servo motor
Controlling the position of servo motor using a potentiometer and a driving IC */

#include <Servo.h>
   Servo servo; //create servo object to control the servo
   int potpin = 0; //analog pin to connect potentiometer
   int value; //variable to read value from analog pin

void setup() {
   servo.attach(9); //attaches the servo motro on pin 9 of arduino to the servo object
}

void loop() {
   value = analogRead(potpin);//reads value of potentiometer(0 to 1023)
   value = map(value, 0, 1023, 0, 180);//scale it to a value between 0 and 180
   servo.write(value); //sets the servo position accoring to the value
   delay(10);
}
