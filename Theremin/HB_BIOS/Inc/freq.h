/*
 * freq.h
 *
 *  Created on: Jan 21, 2021
 *      Author: Alessio
 */

#ifndef INC_FREQ_H_
#define INC_FREQ_H_

#include "stm32l1xx_hal.h"



void pitch_measure_start(TIM_HandleTypeDef *htim);
void pwm_time_wave_start(TIM_HandleTypeDef *htim);

#endif /* INC_FREQ_H_ */
