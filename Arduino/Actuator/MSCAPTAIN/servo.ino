
#include <Servo.h> 
 
int servoPin = 9;
 
Servo mains;  
 
int angle = 0;
 
void setup() 
{ 
  mains.attach(servoPin); 
} 
void loop() 
{ 
  for(angle = 0; angle < 180; angle++)  
  {                                  
    mains.write(angle);               
    delay(15);                   
  } 
  for(angle = 180; angle > 0; angle--)    
  {                                
    mains.write(angle);           
    delay(15);       
  } 
}
