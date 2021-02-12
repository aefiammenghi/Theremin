/*
 * freq.c
 *
 *  Created on: Jan 21, 2021
 *      Author: Alessio
 */

#include "freq.h"
#include "uart.h"
#include "theremin_core.h"
#include "sound_sampling.h"
#include <stdio.h>
extern UART_HandleTypeDef huart1;
void pwm_time_wave_start(TIM_HandleTypeDef *htim)
{
	HAL_StatusTypeDef ret_val;
	ret_val = HAL_TIM_PWM_Start_IT(htim, TIM_CHANNEL_2);
	 if(ret_val !=HAL_OK)
	 {
		 printf("Porco ***\n");
	 }
}

void pitch_measure_start(TIM_HandleTypeDef *htim)
{
	HAL_StatusTypeDef ret_val;
	ret_val = HAL_TIM_IC_Start_IT(htim, TIM_CHANNEL_2);
	if(ret_val !=HAL_OK)
	{
		printf("Porco 2***\n");
	}
}

/*
void get_pitch_measure(void)
{
	//__HAL_TIM_GET_ICPRESCALER();
}
*/

void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim)
{

	uint16_t capture_reg_val = 0;
	static char cycle;
	uint16_t mean = 0;
	uint32_t sum = 0;
	char buffer[25]={0};
	capture_reg_val = __HAL_TIM_GET_COMPARE(htim, TIM_CHANNEL_2);

	sum = sum + capture_reg_val;
	if(cycle == 10)
	{
		mean = sum / 10;
		fbios2user_set_pitch_measure(mean);
		sprintf(buffer, "val: %d\n",fuser2bios_get_pitch_measure());
		dbg_uart_transmit(&huart1, buffer, sizeof(buffer));
		fbios2user_pitch_cb();
		cycle = 0;
		sum = 0;
	}
	else
	{
		cycle++;
	}




}
