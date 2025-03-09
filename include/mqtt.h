#ifndef _mqtt_h_
#define _mqtt_h_

#include <Arduino.h>
#include "setup.h"
#include "wifi_connection.h"
#include <PubSubClient.h>


void setupMQTT();
void recconectMQTT();
void mqttCallback(char* topic, byte* payload, unsigned int length);

#endif