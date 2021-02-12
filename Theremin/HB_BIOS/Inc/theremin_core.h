/*
 * theremin_core.h
 *
 *  Created on: Jan 31, 2021
 *      Author: Alessio
 */

#ifndef INC_THEREMIN_CORE_H_
#define INC_THEREMIN_CORE_H_
#include "stm32l1xx_hal.h"
struct th_core{
	uint16_t pitch_measure;
	uint16_t volume_measure;
	uint8_t tone;
	uint8_t extension;
};



#define TONE_SIMPLE 0
#define TONE_3ARM0	1
#define TONE_3ARM1	2
#define TONE_3ARM2	3
#define TONE_3ARM3	4

#define ONE_OCTAVE	0
#define TWO_OCTAVE	1





uint16_t user_get_pitch_measure(void);
void user_set_pitch_measure(uint16_t pitch_measure);
void fbios2user_set_pitch_measure(uint16_t pitch_measure);
uint16_t fuser2bios_get_pitch_measure(void);
#endif /* INC_THEREMIN_CORE_H_ */
