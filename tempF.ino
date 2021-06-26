// the output pin of the LM35 temperature sensor
int lm35Pin = A0;

void setup() {
  // put your setup code here, to run once:
  // setup serial at 9600 baud
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogValue;
  float tempC;
  float tempF;

  // read the temperature sensor
  analogValue = analogRead(lm35Pin);

  // convert 10 bit analog value to celcius
  tempC = float(analogValue) / 1023;
  tempC *= 500;
  
  tempF = tempC * 1.8 + 32;

  // print the temperature over serial
  Serial.print("Temp: ");
  Serial.print(tempF);
  Serial.print("F");
  Serial.print("\n");

  // wait 1sec before reading the temp again
  delay(1000);
}
