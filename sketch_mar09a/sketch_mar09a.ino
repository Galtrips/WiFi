#include <Adafruit_SH110X.h>
#include <splash.h>

#include <Adafruit_GFX.h>
#include <Adafruit_GrayOLED.h>
#include <Adafruit_SPITFT.h>
#include <Adafruit_SPITFT_Macros.h>
#include <gfxfont.h>
#include <WiFi.h>

#include "FeatherShieldPinouts.h"
#define B 32
#define C 14

Adafruit_SH1107 display = Adafruit_SH1107(64, 128, &Wire);


void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_AP);
  WiFi.softAP("FakTuR", "laFakturCBien");
  Serial.print("AP Created with IP Gateway ");
  Serial.println(WiFi.softAPIP());
}

void loop() {

}
