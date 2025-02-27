#ifndef SENSOR_H
#define SENSOR_H

#include <DHT.h>
#include "config.h"

#define SENSOR_TYPE DHT22

void init_sensor();
float get_temperature();
float get_humidity();
void check_sensor(float temp,float humid);
void print_measures(float temp,float humid);

#endif