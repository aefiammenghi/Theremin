/*
 * theremin_core.c
 *
 *  Created on: Jan 31, 2021
 *      Author: Alessio
 */
#include "theremin_core.h"

static struct th_core theremin;


uint16_t user_get_pitch_measure()
{
	uint16_t pitch_measure = 0;
	pitch_measure = theremin.pitch_measure;
	return pitch_measure;
}

void user_set_pitch_measure(uint16_t pitch_measure)
{
	theremin.pitch_measure = pitch_measure;
}

void fbios2user_set_pitch_measure(uint16_t pitch_measure)
{
	user_set_pitch_measure(pitch_measure);
}

uint16_t fuser2bios_get_pitch_measure()
{
	return (user_get_pitch_measure());
}
