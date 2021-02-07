#include "DHT.h"        
#define DHTTYPE DHT11   
#define sensorPin D0
DHT dht(sensorPin, DHTTYPE); 
void setup(void)
{ 
  dht.begin();
  Serial.begin(9600);
  Serial.println("Humidity and temperature\n\n");
  delay(500);
}

void loop() 
{
    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();         
    Serial.print("Current humidity = ");
    Serial.print(humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(temperature); 
    Serial.println("C  ");
  	delay(500);
}
