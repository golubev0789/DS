#include <OneWire.h>
#include "microDS18B20.h"

MicroDS18B20<2> sensor1;
MicroDS18B20<3> sensor2;
MicroDS18B20<4> sensor3;
MicroDS18B20<5> sensor4;
MicroDS18B20<6> sensor5;

float temp1;
float temp2;
float temp3;
float temp4;
float temp5;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensor1.requestTemp();
  sensor2.requestTemp();
  sensor3.requestTemp();
  sensor4.requestTemp();
  sensor5.requestTemp();
  temp1 = sensor1.getTemp();
  temp2 = sensor2.getTemp();
  temp3 = sensor3.getTemp();
  temp4 = sensor4.getTemp();
  temp5 = sensor5.getTemp();
  delay(1000);
  if (sensor1.readTemp()) {
    Serial.print(temp1); Serial.print('\t');
    }
  if (sensor2.readTemp()) {
    Serial.print(temp2); Serial.print('\t');
    }
  if (sensor3.readTemp()) {
    Serial.print(temp3); Serial.print('\t');
    }
  if (sensor4.readTemp()) {
    Serial.print(temp4); Serial.print('\t');
    }
  if (sensor5.readTemp()) {
    Serial.print(temp5); Serial.println('\t');
    }
}
