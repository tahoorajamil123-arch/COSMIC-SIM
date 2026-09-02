#include "DHT.h"

#define DHTPIN 15
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
  Serial.println("COSMIC-SIM: System Active");
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.print("Chamber Temp: ");
  Serial.print(t, 1);
  Serial.print(" °C | Chamber Humidity: ");
  Serial.print(h, 1);
  Serial.println(" %");

  delay(2000);
}
