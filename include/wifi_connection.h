#ifndef _wifi_h_
#define _wifi_h_

#include <Arduino.h>
#include <WiFi.h>
#include "config.h"
#include "setup.h"

#define RECONN_TIMEOUT              20000     //Timeout to wait reconnection
#define WAITFORCONNECT_TIMEOUT      20000     //Timeout to wait connection

enum FSM_WIFI_STATES {
    DISCONNECTED,
    CONNECTED,
    RECONNECT,
    WAITTORECONNECT,
    WAITFORCONNECT
};

bool wifi_init(WiFiMode_t mode);
bool wifi_loop(void);

bool _connect(void);
uint8_t _get_wifi_status(void);
void _APconnect(void);

#endif