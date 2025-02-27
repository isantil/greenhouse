#include "sensor.h"

DHT sensor(SENSOR_PIN, SENSOR_TYPE);

void init_sensor(){
    Serial.println("Initiating sensor...");
    sensor.begin();
}

float get_temperature(){
    float temperature = sensor.readTemperature();
    return temperature;
}
float get_humidity(){
    float humidity = sensor.readHumidity();
    return humidity;
}
void check_sensor(float temp,float humid){
    if(isnan(temp) || isnan(humid)){
        Serial.println("Sensor failing. Magnitudes stored as nan.");
        for(;;);
    }
}
void print_measures(float temp,float humid){

    Serial.print("The temperature is: ");
    Serial.println(temp);

    Serial.print("The humidity is: ");
    Serial.println(humid);
}
