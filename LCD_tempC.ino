#include <LiquidCrystal.h>

int lm35Pin = A0;

int lcdRSPin = 12;
int lcdEPin = 11;
int lcdD4Pin = 5;
int lcdD5Pin = 4;
int lcdD6Pin = 3;
int lcdD7Pin = 2;

LiquidCrystal lcd(lcdRSPin, lcdEPin, lcdD4Pin, lcdD5Pin, lcdD6Pin, lcdD7Pin);

void setup()
{
  Serial.begin(9600);
  
  lcd.begin(16,2);
  lcd.print("Temp: ");
  lcd.setCursor(8,0);
  lcd.print("C");
}

void loop()
{
  int analogValue;
  float temp;

  analogValue = analogRead(lm35Pin);

  temp = float(analogValue)/1023;
  temp *= 500;

  delay(1000);
  
  lcd.setCursor(6,0);
  lcd.print(temp,0);
  lcd.setCursor(8,0);
  
}
