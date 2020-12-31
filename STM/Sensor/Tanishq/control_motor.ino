/*
This is a very simple example of controlling a dc motor. There are two inputs.One for switch and other to control the speed of the motor. 
I assume that it is a push button switch. That means if it is pressed once it turns on and pushed again turn off. 
The second input is analog input using s potentiometer which controls speed. The input is in value 0 to 1023. But we have to convert it to
0 to 255 because pwm of arduino works on that range only.

The code below is made from choices I thought would be required to a user. It is malliable to meet any additional requirements. 

*/

#define PWM_Pin 9                                                          //Pin to send pwm signal to motor driver                      
#define State_Pin 10                                                       //It has no current use but it stores the value of current state of input



void setup() {
  
  pinMode(PWM_Pin, OUTPUT);                                               //set it as output
  pinMode(State_Pin, OUTPUT);                                             //same as above


  pinMode(A0, INPUT);;                                                    //analog input
  pinMode(6, INPUT);                                                      //switch digital input
  Serial.begin(9600);                                                     //initialise serial monitor. 9600 baud rate is enough in our case

}



long int time_start = millis();                                                //store the start time
boolean flag_state = false;                                                  //this bool stores weather motor is on or off

void loop() {

  

  int input = digitalRead(6);                                                 //read the switch input
  int analog_input = analogRead(A0);                                          //read the potentiometer input

  if(input == 1 && flag_state == false){                                       //if switch pressed and motor is off, on it
    flag_state = true;
    }
   else if (input == 1 && flag_state == true){                                 //if swich pressed and motor already on,off it
    flag_state = false;
    }
  
  int rpm_motor  = (analog_input/4);                                          //convert 0-1023 to 0-255
  

  if(flag_state){
    analogWrite(PWM_Pin, rpm_motor);                                         //run the motor if state asks u to....
    }
  


    //This part prints the speed of motor every secon on the screen
   
   if(time_start-millis()%1000 == 0){                                                          //check if 1 second passed

       if(flag_state){                                                                       //if motor is on
        int percentage_speed = (rpm_motor/255)*100;                                          //calculate speed in percentage of it with respect to max speed
        Serial.println("Speed of motor is "); 
        Serial.print(percentage_speed);                                                      //print it
        Serial.print( "%" );   
        }
       else{
        Serial.println("Motor is currently off");                                          //If motor is off print it to the screen
        }
    
    }

  

}
