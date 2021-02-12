/*
 * sound_sampling.h
 *
 *  Created on: Jan 13, 2021
 *      Author: Alessio
 */

#ifndef INC_SOUND_SAMPLING_H_
#define INC_SOUND_SAMPLING_H_




#define RANGE(a,b,c) ((a > b) && (a < c))

//void change_pitch(uint16_t pitch_measure);
void fbios2user_pitch_cb(void);

#endif /* INC_SOUND_SAMPLING_H_ */
