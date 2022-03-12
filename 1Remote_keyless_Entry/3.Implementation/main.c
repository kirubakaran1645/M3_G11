#include "project.h"


static void ON_LED1(void);  
static void OFF_LED1(void); 
static void ON_CLOCK_LED(void);	  
static void ON_ANTICLOCK_LED(void); 

int main(void)
{

	led_init_pos(); 
	resetbut_init();	
	while (1)
	{
		int reset;
		reset = but_count();				 
		volatile int encdata = reset; 
	switch(reset)
	{
		case 1 :
		{
			ON_LED1();
			reset = 0;
			break;
		}
		case 2 :
		{
			OFF_LED1();
			reset = 0;
			break;
		}
		case 3 :
		{
			ON_CLOCK_LED();
			reset = 0;
			break;
		}
		case 4 :
		{
			ON_ANTICLOCK_LED();
			reset = 0;
			break;
		}
		default :
		{
			break;
		}
		return 0;
	}
		
	}
}


static void ON_CLOCK_LED(void)   
{
	on_led(LED_GREEN);
	delay(250);
	off_led(LED_GREEN);
	delay(250);
	on_led(LED_ORANGE);
	delay(250);
	off_led(LED_ORANGE);
	delay(250);
	on_led(LED_RED);
	delay(250);
	off_led(LED_RED);
	delay(250);
	on_led(LED_BLUE);
	delay(250);
	off_led(LED_BLUE);
}

static void ON_ANTICLOCK_LED(void)   

{
	on_led(LED_GREEN);
	delay(250);
	off_led(LED_GREEN);
	delay(250);
	on_led(LED_BLUE);
	delay(250);
	off_led(LED_BLUE);
	delay(250);
	on_led(LED_RED);
	delay(250);
	off_led(LED_RED);
	delay(250);
	on_led(LED_ORANGE);
	delay(250);
	off_led(LED_ORANGE);
}

static void ON_LED1(void)  
{
	on_led(LED_GREEN);
	on_led(LED_ORANGE);
	on_led(LED_RED);
	on_led(LED_BLUE);
}

static void OFF_LED1(void)  
{
	off_led(LED_GREEN);
	off_led(LED_ORANGE);
	off_led(LED_RED);
	off_led(LED_BLUE);
}
