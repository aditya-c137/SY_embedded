/*
solenoid valve
controlling the flow using two buttons for turning the solenoid valve on and off 
*/

int solenoidPin = 4;    //The output pin on the Arduino 
int button1 = 2;   //To turn the solenoid valve on
int button2 = 3;   //To turn the solenoid valve off

void setup() {
  pinMode(solenoidPin, OUTPUT); //Sets pin as output
  pinMode(button1,INPUT);   //Set pin as input
  pinMode(button2,INPUT);   //Set pin as input
}
 
void loop() {
  if(digitalRead(2)==HIGH){ //when button1 is pushed
    digitalWrite(solenoidPin, HIGH);    //Switch Solenoid ON
    delay(1000);                      
  }
  
  if(digitalRead(3)==HIGH){ //when button2 is pushed
    digitalWrite(solenoidPin, LOW);     //Switch Solenoid OFF
    delay(1000);                      
  }
}
