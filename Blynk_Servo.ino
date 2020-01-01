
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include<Servo.h>
char auth[] = "24eb86f517bd487b914c6a14d54df7b1";
char ssid[] ="nachi";
char pass[] = "1234567890";
Servo servo;

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

//  servo.attach(D4); // NodeMCU D4 pin
   }
  
void loop()
{
  
  Blynk.run();
  
}
BLYNK_WRITE(V3)
{
  servo.write(param.asInt());
}
BLYNK_WRITE(V4)
{  
   servo.write(param.asInt());
}
