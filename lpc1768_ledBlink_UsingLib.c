#include <lpc17xx.h>   
#include "delay.h"     //User defined library which conatins the delay routines
#include "gpio.h"

#define LED P2_0     // Led is connected to P2.0

/* start the main program */
void main() 
{
    SystemInit();                    //Clock and PLL configuration 
    GPIO_PinFunction(LED,PINSEL_FUNC_0); // Configure Pin for Gpio
    GPIO_PinDirection(LED,OUTPUT);	 // Configure the pin as OUTPUT

  while(1)
    {

     /* Turn On all the leds and wait for one second */ 
       GPIO_PinWrite(LED,HIGH);     // Make all the Port pin as high  
       DELAY_sec(1);


       GPIO_PinWrite(LED,LOW);     // Make all the Port pin as low  
       DELAY_sec(1);
    }
}