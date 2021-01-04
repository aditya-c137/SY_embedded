
 
#define A  2                     
#define A1 3                     
#define B  4               
#define B1 5                     
#define x  5000                  
#define stepsPerRevolution 200         


void setup() {
  pinMode(A, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(B1, OUTPUT);
}


void loop() {  
  for (int i = 0; i < (stepsPerRevolution/4) ; i++) {
    digitalWrite(A, HIGH);
    digitalWrite(A1, LOW);
    digitalWrite(B, LOW);
    digitalWrite(B1, LOW);
    delayMicroseconds (x);

    digitalWrite(A, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(B1, LOW);
    delayMicroseconds (x);

    digitalWrite(A, LOW);
    digitalWrite(A1, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(B1, LOW);
    delayMicroseconds (x);

    digitalWrite(A, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(B, LOW);
    digitalWrite(B1, HIGH);
    delayMicroseconds (x);
  }
  delay(1000);
}
