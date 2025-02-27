#include "setup.h"

void App_setup(){

    Serial.begin(19200);
    pinMode(RELAY_PIN,OUTPUT);
    Serial.println("Hello, ESP32!");

    //wifi_connection();
    init_sensor();
    init_display();
}