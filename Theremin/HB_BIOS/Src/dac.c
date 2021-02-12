/*
 * dac.c
 *
 *  Created on: Jan 13, 2021
 *      Author: Alessio
 */
#include "dac.h"
#include "lut.h"
#include "freq.h"
#include "theremin_core.h"
//#include "sound_sampling.h"

extern TIM_HandleTypeDef htim6;


//Non più usata
/*
void bios_out_sample(DAC_HandleTypeDef *hdac, int dac_out)
{
	HAL_DAC_Start(hdac, DAC_CHANNEL_1);
	HAL_DAC_SetValue(hdac, DAC_CHANNEL_1, DAC_ALIGN_12B_R, dac_out);
}
*/

void bios_out_sample_DMA(TIM_HandleTypeDef *htim, DAC_HandleTypeDef *hdac)
{
	HAL_DAC_Start_DMA(hdac, DAC_CHANNEL_1, wave_samples3, 180,DAC_ALIGN_12B_R); //bisogna impacchettarli bene, mettere due campioni in un unit32
	HAL_TIM_Base_Start(htim);
}
/*
void change_pitch(uint16_t pitch_measure)
{

	if (RANGE(pitch_measure,1670,1680))
	{
		htim6.Instance->ARR = tunes[0] ;
	}
	else if (RANGE(pitch_measure,1650,1660))
	{
		htim6.Instance->ARR = tunes[1] ;
	}
	else if (RANGE(pitch_measure,1630,1640))
	{
		htim6.Instance->ARR = tunes[2] ;
	}
	else if (RANGE(pitch_measure,15900,16000))
	{
		htim6.Instance->ARR = tunes[3] ;
	}
	else if (RANGE(pitch_measure,15700,15800))
	{
		htim6.Instance->ARR = tunes[4] ;
	}
	else if (RANGE(pitch_measure,15500,16600))
	{
		htim6.Instance->ARR = tunes[5] ;
	}

	//htim->Instance->ARR = 65535 ;
	//HAL_TIM_Base_Start(htim);
}
*/

void fuser2bios_change_pitch(uint8_t tune)
{
	htim6.Instance->ARR = tunes[tune] ;
}


