/*
 * AP_Main.c
 *
 *  Created on: Apr 23, 2024
 *      Author: k1min
 */

#include "AP_Main.h"

Button_t Button_1, Button_2, Button_3;
LED_t LED_1, LED_2, LED_3;

void sys_init()
{
	button_init(&Button_1, GPIOC, GPIO_PIN_10);
	button_init(&Button_2, GPIOC, GPIO_PIN_11);
	button_init(&Button_3, GPIOC, GPIO_PIN_12);

	LED_init(&LED_1, GPIOC, GPIO_PIN_8);
	LED_init(&LED_2, GPIOC, GPIO_PIN_6);
	LED_init(&LED_3, GPIOC, GPIO_PIN_5);
}

int APMain()
{
	sys_init();

	while (1)
	{
		if (button_getState(&Button_1) == ACT_RELEASED)
		{
			LED_toggle(&LED_1);
		}
		if (button_getState(&Button_2) == ACT_RELEASED)
		{
			LED_toggle(&LED_2);
		}
		if (button_getState(&Button_3) == ACT_RELEASED)
		{
			LED_toggle(&LED_3);
		}
	}
}
