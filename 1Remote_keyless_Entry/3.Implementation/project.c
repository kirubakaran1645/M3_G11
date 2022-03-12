
#include "project.h"

const int enc1 = 1; 
const int enc2 = 2; 
const int enc3 = 3; 
const int enc4 = 4; 


void delay(uint32_t time) 
{
	for (uint32_t i = 0; i < time * 100000; i++)
	{
		
		
	}
}
void led_init_pos(void) 
{

	uint32_t *pRccAhb1enr = (uint32_t *)0x40023830; 
	*pRccAhb1enr |= (1 << 3);						

	uint32_t *pGpiodModeReg = (uint32_t *)0x40020C00; 
	*pGpiodModeReg |= (1 << (2 * LED_GREEN));  
	*pGpiodModeReg |= (1 << (2 * LED_ORANGE)); 
	*pGpiodModeReg |= (1 << (2 * LED_RED));	  
	*pGpiodModeReg |= (1 << (2 * LED_BLUE));  

	off_led(LED_GREEN);	 
	off_led(LED_ORANGE); 
	off_led(LED_RED);	 
	off_led(LED_BLUE);	
}

void on_led(uint8_t led_no) 
{
	uint32_t *pGpiodDataReg = (uint32_t *)0x40020C14; 
	*pGpiodDataReg |= (1 << led_no);				  
}

void off_led(uint8_t led_no) 
{
	uint32_t *pGpiodDataReg = (uint32_t *)0x40020C14; 
	*pGpiodDataReg &= ~(1 << led_no);				  
}

void resetbut_init(void)
{
	uint32_t *pRccAhb1enr1 = (uint32_t *)0x40023830; 
	*pRccAhb1enr1 |= (1 << 0);						 

	uint32_t *pGpioPuPdReg = (uint32_t *)0x4002000C; 
	*pGpioPuPdReg |= (1 << 1);						 
}

int but_count(void)
{
	resetbut_init();
	int count = 0;
	uint32_t *pGpiodDataReg1 = (uint32_t *)0x40020010; 
	int sec = 10000000;
	while (sec--)
	{
		if ((*pGpiodDataReg1) & (1 << BLUE_BUTTON))
		{ 
			delay(150);
			count++;

			if (count > 4)
				count = 0;
		}
	}
	return count; 
}
