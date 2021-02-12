/*
 * dac.h
 *
 *  Created on: Jan 13, 2021
 *      Author: Alessio
 */

#ifndef INC_DAC_H_
#define INC_DAC_H_


#include "stm32l1xx_hal.h"




void bios_out_sample_DMA(TIM_HandleTypeDef *htim, DAC_HandleTypeDef *hdac);
void bios_out_sample(DAC_HandleTypeDef *hdac, int dac_out);
void fuser2bios_change_pitch(uint8_t tune);

#endif /* INC_DAC_H_ */
