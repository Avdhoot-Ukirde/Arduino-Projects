#include "DHT.h"
#define DHTTYPE DHT11

#define dht_dpin 3
DHT dht(dht_dpin, DHTTYPE);

void setup()
{
  dht.begin();
  Serial.begin(9600)
  Serial.println("Humidity and Temperature: ");
  delay(700);
}

void loop()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.print("Current Humidity = ");
  Serial.print(h);
  Serial.print("%  ");
  Serial.print("Current Temperature = ");
  Serial.print(t);
  Serial.print("*C  ");

  delay(800);
}