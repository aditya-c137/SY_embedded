void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(2,INPUT); //Push Button to turn on
  pinMode(3,INPUT); //Push Button to turn off
  Serial.println("Press the push button to turn on or off");
}

void loop() {
  if(digitalRead(2)==HIGH)
  {
    digitalWrite(9,HIGH);
    Serial.println("ON");
    delay(5000);
  }
  else if(digitalRead(3)==HIGH)
  {
    digitalWrite(9,LOW);
    Serial.println("OFF");
    delay(5000);
  }
}
