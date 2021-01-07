void setup() {
pinMode(9, OUTPUT);
pinMode(2, INPUT);
pinMode(3, INPUT);
}
void loop() {
if(digitalRead(2)==HIGH)
{
  digitalWrite(9,HIGH);
  delay(1500);
}
else if(digitalRead(3)==HIGH)
{
  digitalWrite(9,LOW);
delay(1000);
}}
