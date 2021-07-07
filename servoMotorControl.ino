#include <Servo.h>

int servoPin = 9;
int potPin = A0;

Servo myServo;

void setup()
{
	// attach servo on pin 9 to the servo object
	myServo.attach(servoPin);
}

void loop()
{
	int analogValue;
	int position;

	// read potentiometer value (0 to 1023)
	analogValue = analogRead(potPin);

	// scale analogValue from 0 to 179
	position = map(analogValue, 0, 1023, 0, 179);

	// set servo position according to analogValue
	myServo.write(position);

	delay(15);
}