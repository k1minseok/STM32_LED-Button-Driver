/*
 * AP_Main.h
 *
 *  Created on: Apr 23, 2024
 *      Author: k1min
 */

#ifndef AP_AP_MAIN_H_
#define AP_AP_MAIN_H_

#include "stm32f4xx_hal.h"

#include "../Driver/Button/Button.h"
#include "../Driver/LED/LED.h"


void sys_init();
int APMain();

#endif /* AP_AP_MAIN_H_ */
