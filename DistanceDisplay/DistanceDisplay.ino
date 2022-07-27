#include <Wire.h>
#include <VL53L0X.h>
#include <Adafruit_GrayOLED.h>
#include <Adafruit_SH1106.h>
#include "RTClib.h"

#define OLED_RESET 4
Adafruit_SH1106 display(OLED_RESET);
VL53L0X sensor;
RTC_DS3231 rtc;
char daysOfTheWeek[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

void setup() {
  Wire.begin();
  rtc.begin();
  sensor.init();
  sensor.setTimeout(500);
  sensor.startContinuous();
  display.begin(SH1106_SWITCHCAPVCC, 0x3C); 
  delay(2000);
}

void loop() {
   DateTime now = rtc.now();
  display.clearDisplay();
  display.setCursor(0,0);
  display.setTextSize(3);
  display.setTextColor(WHITE);
  display.print(now.hour(), DEC);
  display.print(':');
  display.print(now.minute(), DEC);
  display.setTextSize(1);
  display.print(' ');
  display.print(' ');
  display.print(' ');
  display.print(now.second(), DEC);
  display.println();
  display.setCursor(0,30);
  display.print(now.year(), DEC);
  display.print('/');
  display.print(now.month(), DEC);
  display.print('/');
  display.print(now.day(), DEC);
  display.print(' ');
  display.print(daysOfTheWeek[now.dayOfTheWeek()]);
  display.setCursor(0,40);
  display.print("Temperature: ");
  display.print(rtc.getTemperature());
  display.print(" C");
  display.setCursor(0,50);
  display.display();
  delay(2);
}
