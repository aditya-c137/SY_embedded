int motorset = 9;
int p = 0;

void setup() {
Serial.begin(9600);

}

void loop() {
  while(p<255)
  {p = p+15;
  analogWrite(motorset, p);
  delay(1000);
  analogWrite(motorset, 0);
  delay(1000);
  Serial.println(p);
  }
}
