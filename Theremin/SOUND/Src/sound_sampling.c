/*
 * sound_sampling.c
 *
 *  Created on: Jan 13, 2021
 *      Author: Alessio
 */

#include <stdint.h>
#include "dac.h"
#include "sound_sampling.h"


void change_pitch(uint16_t pitch_measure)
{

	if (RANGE(pitch_measure,1670,1680))
	{
		//htim6.Instance->ARR = tunes[0] ;
		fuser2bios_change_pitch(0);
	}
	else if (RANGE(pitch_measure,1650,1660))
	{
		//htim6.Instance->ARR = tunes[1] ;
		fuser2bios_change_pitch(1);
	}
	else if (RANGE(pitch_measure,1630,1640))
	{
		//htim6.Instance->ARR = tunes[2] ;
		fuser2bios_change_pitch(2);
	}
	/*else if (RANGE(pitch_measure,15900,16000))
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
	}*/

	//htim->Instance->ARR = 65535 ;
	//HAL_TIM_Base_Start(htim);
}



void fbios2user_pitch_cb(void)
{
	//change_pitch(user_get_pitch_measure());
}
