#include "app.h"

void App_loop(){

    //wifi_connection();

    // Variables that stores data from the sensor.
    float temp = get_temperature();
    float humi = get_humidity();

    // Verifies that temperature and humidity are not nan.
    check_sensor(temp,humi);

    // Displays sensor measures in console.
    print_measures(temp,humi);

    // Displays sensor measures in OLED.
    display_measures(temp,humi);


    
    // Here goes code to control the relay.
    digitalWrite(RELAY_PIN,HIGH);
    delay(5000);
    digitalWrite(RELAY_PIN,LOW);
    delay(5000);

}