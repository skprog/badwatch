# badwatch working 
Hello this worked and tested with 
AURSINC Atmega32U4 DSTIKE Development Programmable Bad USB Watch with 800mAh Rechargeable Battery | Distance Sensor | Laser | Buzzer| RGB LED | RTC | for Arduino Beginners
https://www.amazon.com/dp/B093351JK7/ref=emc_b_5_t  


USE  ARDUINO 1.8.12 2020.02.13

and used the code and files in this repo 
check the compile.txt for versioning . 

the laser works on down 
the badusb code runs if your push up 
hold for up or down for both as there is a up and down delay. 


in the documents folder is the "Documents/arduino/libraries i used"

i have included my avr\libraries as well incase from in the programfiles(x86)

from compile.txt 

Using library Wire at version 1.0 in folder: C:\Program Files (x86)\Arduino\hardware\arduino\avr\libraries\Wire 
Using library oldada_VL53L0X in folder: C:\Users\Admin\Documents\Arduino\libraries\oldada_VL53L0X (legacy)
Using library SPI at version 1.0 in folder: C:\Program Files (x86)\Arduino\hardware\arduino\avr\libraries\SPI 
Using library Adafruit_GFX_Library at version 1.11.3 in folder: C:\Users\Admin\Documents\Arduino\libraries\Adafruit_GFX_Library 
Using library Adafruit_BusIO at version 1.12.0 in folder: C:\Users\Admin\Documents\Arduino\libraries\Adafruit_BusIO 
Using library Adafruit_SH1106-master in folder: C:\Users\Admin\Documents\Arduino\libraries\Adafruit_SH1106-master (legacy)
Using library Keyboard at version 1.0.2 in folder: C:\Program Files (x86)\Arduino\libraries\Keyboard 
Using library HID at version 1.0 in folder: C:\Program Files (x86)\Arduino\hardware\arduino\avr\libraries\HID 
Using library RTClib at version 2.0.3 in folder: C:\Users\Admin\Documents\Arduino\libraries\RTClib 
 

spi  , hid , wire go into the install directory\arduino\hardware\arduino\avr\libraries\

keyboard and TFT go into install directory\arduino\libraries\

the rest can be manually installed into the documents instal directory \Documents\Arduino\libraries



Tips :: 
1. if your watch gets stuck running in a loop the keyboard because of something bad happening 
you can reset it by uploading a brand new sketch hold the reset button plug in run / upload from audrino ide let go of reset button when it starts searching com ports. 

2. i included the distance display code that i used as a base to get the watch working. if you find your watch isnt working with this code. 
something about your watch may be diffrent than mine. best to start with the distance display code and work your way to rtc and other functionality. 
also i noticed the println was wonky which is why its not in my demo code. 




