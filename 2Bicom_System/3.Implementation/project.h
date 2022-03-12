#ifndef PROJECT_H_
#define PROJECT_H_
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#define LED_GREEN 12  
#define LED_ORANGE 13 
#define LED_RED 14    
#define LED_BLUE 15   
#define BLUE_BUTTON 0 

void delay(uint32_t time); 

void led_init_pos(void);     

void on_led(uint8_t led_no); 

void off_led(uint8_t led_no); 

void resetbut_init(void);       

int but_count(void);    

int encryption(int enc);   

#endif 