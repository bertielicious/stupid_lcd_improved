#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "constants.h"
#include "configPins.h"
#include "configLCD.h"
#include "byteToNib.h"
#include "sendNibble.h"
#include <stdio.h>
#include <stdint.h>
#include "pulse.h"
/*
define which ESP32 pins will interface with 1602 LCD
#define D7 21 //left led
#define D6 4
#define D5 22
#define D4 16
#define RS 17
#define E 18*/


void app_main(void)
{
    configPins();
    configLCD();
   
    //print Phil on LCD
    byteToNib(0x50,HI);// P
    byteToNib(0x68,HI);// h
    byteToNib(0x69,HI);// i
    byteToNib(0x6c,HI);// l
    
    while(1)
    {
        
       
      //  vTaskDelay(250/portTICK_PERIOD_MS);
    }
}