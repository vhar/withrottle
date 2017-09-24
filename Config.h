/*
 * Config.h
 * Copyright (c) 2016-2017, Valerie Valley RR https://sites.google.com/site/valerievalleyrr/
 * Part of WiThrottle for the Arduino
*/

/* Maximum WiFi clients that can be connected to WiThrottle */
#define maxClient 3

/* Access Point name and password. Set these to your desired credentials. */
const char* ssid = "withrottle";
const char* password = "";

/* Network parameters */
IPAddress WTServer_Ip(10, 10, 10, 10);
IPAddress WTServer_NMask(255, 255, 255, 0);
int WTServer_Port = 44444;
char hostString[] = "ESPWTServer";

/* Power state on start 0=OFF, 1=ON. WARNING!!! If you use iOS WiThrottle.app this must set only ON*/
boolean PowerOnStart = 1;

