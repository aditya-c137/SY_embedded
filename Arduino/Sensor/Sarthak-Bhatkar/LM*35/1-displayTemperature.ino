const int sensorPin = A1;	

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  int tempADCval;
  float temp_val;
  tempADCval = analogRead(sensorPin);	
  temp_val = (tempADCval/1024) * 5000;	
  temp_val = (temp_val/10);	
  Serial.print("Temperature: ");
  Serial.print(temp_val);
  Serial.println(" °C");
  delay(1000);
  
}
