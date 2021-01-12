#include "Arduino.h"
#include "LiquidCrystal_PCF8574.h"
#include "HX711.h"

//#define RST 4
#define SCALE_PIN_DAT  11
#define SCALE_PIN_CLK 10
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2);

// Create our LoadCell object
LiquidCrystal_PCF8574 lcdI2C;
HX711 scale(SCALE_PIN_DAT, SCALE_PIN_CLK);

void setup() {
	Serial.begin(9600);
 lcd.begin();
  // Print a message to the LCD.
  lcd.backlight();

	scale.set_scale();
	scale.tare();  //Reset the scale to 0
}

void loop() {
	//Adjust to this calibration factor
	scale.set_scale(200);

	// Read an average of X readings
	Serial.println("Reading weight");
	float grams = scale.get_units(4);
  float kg = (grams*(0.001));

  

	Serial.print(grams);
	Serial.println(" g");

 lcd.setCursor(0,0);
  lcd.print("KG:");
  lcd.print(kg,3);
  
  lcd.setCursor(0,1);
  lcd.print("Grams:");
  lcd.print(grams,1);


  lcd.setCursor(11,1);
  lcd.print("   ");


  

  
}
