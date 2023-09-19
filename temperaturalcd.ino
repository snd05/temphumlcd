#include <LiquidCrystal.h>
#include <dht11.h>

#define DHT11PIN 4

dht11 DHT11;

LiquidCrystal lcd(12, 11, 5, 6, 3, 2); // RS, E, D4, D5, D6, D7

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  int chk = DHT11.read(DHT11PIN);

  lcd.setCursor(0, 0);
  lcd.print("Temp (C): ");
  lcd.print((float)DHT11.temperature, 2);
  endl;
  lcd.print("Hum(%): ");
  lcd.print((float)DHT11.humidity);

  delay(2000);
}
