
// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID "TMPL_zzkyMcn"
#define BLYNK_DEVICE_NAME "LED BLINK"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_SPARKFUN_BLYNK_BOARD
//#define USE_NODE_MCU_BOARD
//#define USE_WITTY_CLOUD_BOARD
//#define USE_WEMOS_D1_MINI

#include "BlynkEdgent.h"

int ledpin = 13;

BLYNK_WRITE(V0){
  int pinValue = param.asInt();
  digitalWrite(ledpin,pinValue);
}

void setup()
{
  Serial.begin(115200);
  delay(100);
  pinMode(ledpin, OUTPUT);

  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
}
