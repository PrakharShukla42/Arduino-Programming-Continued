#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

#include <TinyDHT.h>
#define DHTTYPE DHT11
#define DHTPIN 4  

DHT dht(DHTPIN,DHTTYPE);
void setup() {
  Serial.begin(115200);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  float humidity=dht.readHumidity();
  float Celcius=dht.readTemperature();
  float Farenheit=dht.readTemperature(true);
  delay(2000);
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 10);
  // Display static text
  display.println(humidity);
  display.println(Celcius);
  display.println(Farenheit);
  display.display(); 
}

void loop() 
{
  delay(2000);
  float humidity=dht.readHumidity();
  float Celcius=dht.readTemperature();
  float Farenheit=dht.readTemperature(true);
  Serial.println("Humdity");
  Serial.println(humidity);
  Serial.println("Temerature In Celcius");
  Serial.println(Celcius);
  Serial.println("Temperature In Farenheit");
  Serial.println(Farenheit);
}
