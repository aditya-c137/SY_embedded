int motorPin = 2;
int input1 = 8;
int input2 = 9;
void setup() {
  Serial.begin(9600);
  pinMode(motorPin,OUTPUT);
  pinMode(input1,OUTPUT);
  pinMode(input2,OUTPUT);
  while(! Serial);
}

void loop() {
  Serial.println("Clockwise Motion");
  digitalWrite(input1,HIGH);
  digitalWrite(input2,LOW);
  if(Serial.available())
  {
    int speed = Serial.parseInt();
    if(speed>=0 && speed <=255)
      analogWrite(motorPin,speed);
  }
  delay(5000);
  Serial.println("Break");
  digitalWrite(input1,HIGH);
  digitalWrite(input2,HIGH);
  delay(5000);
  Serial.println("Anticlockwise Motion");
  digitalWrite(input1,LOW);
  digitalWrite(input2,HIGH);
  if(Serial.available())
  {
    int speed = Serial.parseInt();
    if(speed>=0 && speed <=255)
      analogWrite(motorPin,speed);
  }
  delay(5000);
  Serial.println("Break");
  digitalWrite(input1,LOW);
  digitalWrite(input2,LOW);
  delay(5000);
}
