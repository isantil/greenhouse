#include "mqtt.h"

#define MQTT_SERVER "192.168.1.5"
#define MQTT_PORT 1883
#define MQTT_USER "smartvent"
#define MQTT_PASSWORD "smartvent"

WiFiClient espClient;
PubSubClient mqttClient(espClient);

void setupMQTT(){
    mqttClient.setServer(MQTT_SERVER, MQTT_PORT);
    mqttClient.setCallback(mqttCallback);
}

void recconectMQTT(){

    while (!mqttClient.connected()) {
        Serial.println("Trying to connect to MQTT server");
        if (mqttClient.connect("smartvent", MQTT_USER, MQTT_PASSWORD)) {
            Serial.println("Connected to MQTT server!");
            mqttClient.subscribe("smartvent/commands");
        } else {
            delay(5000);
        }
    }
}