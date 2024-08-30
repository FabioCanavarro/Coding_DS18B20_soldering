#include <Arduino.h>

#include "OneWire.h"
#include "DallasTemperature.h"




OneWire oneWire(2);


DallasTemperature sensors(&oneWire);

void setup() {
  
  Serial.begin(9600);
  // Start up the library:
  sensors.begin();
}

void loop() {
  
  sensors.requestTemperatures();

  
  float temp = sensors.getTempCByIndex(0);


  Serial.print("Temperature: ");
  Serial.print(temp);

  Serial.print("C");

  delay(1000);
}