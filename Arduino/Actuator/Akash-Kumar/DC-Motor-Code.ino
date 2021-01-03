void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT); //Port for motor
}

void loop()
{
  Serial.println("Motor is SPINNING!");
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  Serial.println("Motor is stationary");
  delay(1000); // Wait for 1000 millisecond(s)
}
