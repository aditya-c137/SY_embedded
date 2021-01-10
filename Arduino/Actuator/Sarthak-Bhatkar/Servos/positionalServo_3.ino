/*
* 
* Roatation of Servo Motor without Servo.h!
* 
*/
int servo_zero = 500;
int servo_oneEighty = 2400;
int increment = 20;
int pos = servo_zero;
int servoPin = 9;


void setup() {
  Serial.begin(9600);     
  pinMode(servoPin, OUTPUT);
  while(!Serial){}
  Serial.println("Servo Motor Rotation without Servo.h");
}

void loop() 
{
  pos += increment;

  if(pos > servo_oneEighty) 
  {
    Serial.println("REVERSE!");
    pos = servo_oneEighty;
    increment *= -1;
    delay(500);
  } 
  else if(pos < servo_zero) 
  {
    Serial.println("FORWARD!");
    pos = servo_zero;
    increment *= -1;
    delay(500);
  }

  Serial.print("pos = ");
  Serial.println(pos);

  digitalWrite(servoPin, HIGH);
  delayMicroseconds(pos);
  digitalWrite(servoPin, LOW);
  delay(20);
}
