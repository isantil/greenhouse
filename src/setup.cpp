#include "setup.h"

bool wifi_state=0;
Config config;

void App_setup(){

    Serial.begin(19200);
    pinMode(RELAY_PIN,OUTPUT);
    pinMode(WIFI_LED_PIN,OUTPUT);

    load_config();

    wifi_state = wifi_init(WIFI_AP_STA);
    
    setupMQTT();

    //wifi_connection();
    init_sensor();
    init_display();


    config.device="nivciscem01";
    config.ssid="Santimili 2.4";
    config.ssid_pass="roca0326";
    config.ap_ssid=config.device;
    config.ap_pass="12345678";
    config.mqtt_server="192.168.1.25";
    config.mqtt_tcp=8883;    

    wifi_state = wifi_init(WIFI_AP_STA);

}