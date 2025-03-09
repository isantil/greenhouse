#ifndef _config_h_
#define _config_h_

//-- Pins definition
#define RELAY_PIN 25
#define SENSOR_PIN 15
#define WIFI_LED_PIN 2

//--Includes
#include <Arduino.h>

#define SERIAL_BAUDRATE             19200

//--Structures
struct Config {
    const char* device;
    String ssid;
    String ssid_pass;
    const char* ap_ssid;
    const char* ap_pass;
    const char* mqtt_server;
    uint16_t mqtt_tcp;
    uint8_t irr_hour;
    uint8_t irr_minute;
    uint8_t irr_time;
  };

#endif