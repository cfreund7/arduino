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
  float temperature;

  // read the temperature sensor
  analogValue = analogRead(lm35Pin);

  // convert 10 bit analog value to celcius
  temperature = float(analogValue) / 1023;
  temperature = temperature * 500;

  // print the temperature over serial
  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.print("C");
  Serial.print("\n");

  // wait 1sec before reading the temp again
  delay(1000);
}
