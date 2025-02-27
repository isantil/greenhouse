#include "oled.h"
//#include <Adafruit_I2CDevice.h>

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void init_display(){

    // Checks if the display works well.
    if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3D for 128x64
        Serial.println(F("SSD1306 allocation failed"));
        for(;;);
    }
    delay(2000);

    // Configurates the display for future use.
    display.clearDisplay();
    display.setTextColor(WHITE);
}

void display_measures(float temperature, float humidity){

    display.clearDisplay();

    // Temperature display in OLED
    display.setTextSize(1);
    display.setCursor(0,0);
    display.print("Temperature: ");
    display.setTextSize(2);
    display.setCursor(0,10);
    display.print(temperature);
    display.print(" ");
    display.setTextSize(1);
    display.cp437(true); //    Displays the ° symbol
    display.write(167); //        for temperature
    display.setTextSize(2);
    display.print("C");

    // Humidity display in OLED
    display.setTextSize(1);
    display.setCursor(0, 35);
    display.print("Humidity: ");
    display.setTextSize(2);
    display.setCursor(0, 45);
    display.print(humidity);
    display.print(" %"); 

    delay(1000);
    display.display(); 
}