#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define sensorOut 8

int PW;
int red = 0;
int green = 0;
int blue = 0;

void setup() {
	pinMode(S0, OUTPUT);
	pinMode(S1, OUTPUT);
	pinMode(S2, OUTPUT);
	pinMode(S3, OUTPUT);
	digitalWrite(S0,HIGH);
	digitalWrite(S1,LOW);
	pinMode(sensorOut, INPUT);
	Serial.begin(9600);
}

void loop() {
	red = getRed();
	delay(200);

	green = getGreen();
	delay(200);

	blue = getBlue();
	delay(200);

	Serial.print("Red = ");
	Serial.print(red);
	Serial.print(" - Green = ");
	Serial.print(green);
	Serial.print(" - Blue = ");
	Serial.println(blue);
}

int getRed() {
	digitalWrite(S2,LOW);
	digitalWrite(S3,LOW);
	PW = pulseIn(sensorOut, LOW);
	return PW;
}

int getGreen() {
	digitalWrite(S2,HIGH);
	digitalWrite(S3,HIGH);
	PW = pulseIn(sensorOut, LOW);
	return PW;
}

int getBlue() {
	digitalWrite(S2,LOW);
	digitalWrite(S3,HIGH);
	PW = pulseIn(sensorOut, LOW);
	return PW;
}
