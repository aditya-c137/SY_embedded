int LDR = A0; // LDR is connected to A0(Analog Pin)
int LED = 3; // LED is connected to 3
int value = 0; // to store input value of LDR

void setup(){
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop(){
  value = analogRead(LDR);
  Serial.println(value);
  
  if (value >800) //threshold value 800 
  {
    analogWrite(LED, HIGH);
    Serial.println("Led Glowing");
  }
  else{
    analogWrite(LED, LOW);
    Serial.println("Led Off");
  }
  delay(5000);
}
