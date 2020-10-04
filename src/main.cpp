/*
 ********************************************************************
  M5StickC_Platformio_Arduino_Template
  Project template to start programming M5StickC ESP32 with PlatformIO IDE and Arduino
  
  Github: https://github.com/walidamriou/M5StickC_Platformio_Arduino_Template/
  
  Copyright © 2020 Walid Amriou
  Last update: October 2020
 ********************************************************************
*/

#include <Arduino.h>
#include <M5StickC.h>

// the setup routine runs once when M5StickC starts up
void setup(){
  // Initialize the M5StickC object
  M5.begin();

  // LCD display
  M5.Lcd.print("Hello World");
}

// the loop routine runs over and over again forever
void loop() {
}
