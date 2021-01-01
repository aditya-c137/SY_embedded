/*
driving a dc motor
*/

const int input_1=8; //input to driver for direction of rotation
const int input_2=9; //input to driver for direction of rotation
const int motor=2; //pwm pin for controlling speed

void setup() {
  pinMode(motor,OUTPUT) ; //to set PWM pin as output
  pinMode(input_1,OUTPUT) ; //Logic pins also set as output
  pinMode(input_2,OUTPUT) ; 
  
  Serial.begin(9600);
  while (! Serial);
  Serial.println("Speed 0 to 255");
}

void loop() {
  Serial.println("Clockwise rotation");
  digitalWrite(input_1,HIGH);
  digitalWrite(input_2,LOW);
  if (Serial.available()) {
      int speed = Serial.parseInt();
      if (speed >= 0 && speed <= 255) {
         analogWrite(motor, speed);
      }
  }  
  delay(5000);
  
  Serial.println("Anticlockwise rotation");
  digitalWrite(input_1,LOW);
  digitalWrite(input_2,HIGH);
  if (Serial.available()) {
      int speed = Serial.parseInt();
      if (speed >= 0 && speed <= 255) {
         analogWrite(motor, speed);
      }
  }  
  delay(5000);
  
  Serial.println("Stop rotation");
  digitalWrite(input_1,HIGH);
  digitalWrite(input_2,HIGH);
  
  delay(5000);
}
