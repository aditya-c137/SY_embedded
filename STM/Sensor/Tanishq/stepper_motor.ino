/*
This is code to control a stepper mototr. There are two type of controls we have. And that is the direction and the speed/steps per second of the motor.
We take the input for the number of steps user want per second, the number of seconds it want motor to rotate and finally the direction weather to be clockwise
or anticlockwise. 

Since motor takes one step corresponding to change in state . We need to calculate these delays using the inputs we got...............

*/

#define STEP_PIN 3                                                                   //Define the pin to output pulse                                                                   
#define DIR_PIN 4                                                                    //Define the direction pin


#define MOTOR_STEPS 200                                                          //Assuming motor steps to be 200 or 1.8degree per step


void setup() {
  
  pinMode(STEP_PIN, OUTPUT);                                                   //set the pulse pin as output
  pinMode(DIR_PIN, OUTPUT);                                                    //set the direction pin as output

  Serial.begin(9600);                                                         //Initialise serial monitor, We need it to take user inputs
}

int rot_speed;
int duration;                                                                         //define some variables
int direction_motor;

void loop() {


  //  Taking input for the speed of rotation..........................................
  
  Serial.print("Enter the steps you want per second (0-");
  Serial.print(MOTOR_STEPS);
  rot_speed = Serial.parseInt();
  if(rot_speed>=0 && rot_speed<=MOTOR_STEPS){                                               //check if speed is not any unusual value. if so tell it to use
    //do nothing, we are good to go
    }
  else{
    rot_speed = 0;
    Serial.println("Invalid number of steps......");                                        //Inform user about it
    }

    

    //Taking input for the duration for which the motor should be kept on................
    
    Serial.println("Enter the duration for which you want to keep the motor on in seconds: ");      
    duration = Serial.parseInt();
    if(duration<0){                                                                                      //check if duration is not negative............
      duration = 0;
      Serial.println("Duration can't be negative");
      }



     //Taking input for the direction of the motor........................................
    Serial.println("Enter the direction(for clockwise enter 1 and for anticlockwise enter 1) : ");
    direction_motor = Serial.parseInt();
    if(direction_motor==0 || direction_motor==1){
      //good to go
      }                                                                                                        //Check for any unusual value.............
     else{
      direction_motor = 0;
      Serial.println("Hey, I asked u to ente 0 or 1");
      }






  int delay_motor = 1000000/rot_speed;                                                           //Calculate the delay that we need to add between each switch of state   
  int iterate_times = duration/ (2*delay_motor); 
  
  if(direction_motor==0){
    digitalWrite(DIR_PIN, LOW);                                                                  //set the dir_pin to low if direction is anticlockwise
    }
   else{
    digitalWrite(DIR_PIN, HIGH);                                                                //set the dir_pin to high if direction is clockwise
    }



   
  for(int i=0; i<iterate_times; i++){                                                             //Run the motor using specified inputs
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(delay_motor);
    digitalWrite(STEP_PIN, LOW);                                                                    
    delayMicroseconds(delay_motor);
    
    
    }
  
  

}
