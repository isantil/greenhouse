#include "wifi_connection.h"

void wifi_connection(){

    Serial.println("Connecting to wifi...");
    int attempts = 0;
  
    while(WiFi.status() != WL_CONNECTED && attempts < 20){
      
      WiFi.begin(ssid,ssid_pass);
      delay(1000);
      Serial.println(".");
      attempts++;
    }
  
    if(WiFi.status() != WL_CONNECTED){
      Serial.println("Failed to connect to Wifi");
    } else {
      Serial.println("Connected to Wifi sucessfuly.");
    }
  }
  