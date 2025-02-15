/*********************************************************************
 This is an example for our nRF52 based Bluefruit LE modules

 Pick one up today in the adafruit shop!

 Adafruit invests time and resources providing this open source code,
 please support Adafruit and open-source hardware by purchasing
 products from Adafruit!

 MIT license, check LICENSE for more information
 All text above, and the splash screen below must be included in
 any redistribution
*********************************************************************/

#include <Arduino.h>


void setup() 
{
  Serial.begin(115200);
  delay(4000);
  
  Serial.println("Bluefruit52 Memory Info Example");
  Serial.println("-------------------------------\n");
}


void loop() 
{
  dbgMemInfo();
  digitalToggle(LED_RED);
  delay(5000);                       // wait for a second
}
