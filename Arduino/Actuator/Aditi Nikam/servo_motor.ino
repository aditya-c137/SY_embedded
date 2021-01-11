#include <Servo.h>
   Servo myservo; // create servo object to control a servo
   int potpin = 0; // analog pin used to connect the potentiometer
   int val; //reads value from the analog pin

void setup() {
   myservo.attach(9); //servo on pin 9 to the servo object
}

void loop() {
   val = analogRead(potpin);
   val = map(val, 0, 1023, 0, 180);
   myservo.write(val);
   delay(20);
}
