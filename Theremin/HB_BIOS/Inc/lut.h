/*
 * lut.h
 *
 *  Created on: 11 feb 2021
 *      Author: Alessio
 */

#ifndef INC_LUT_H_
#define INC_LUT_H_

//Inserendo i campioni come uint32_t, il DAC svalvola e prende due campioni ogni 32 bit, quindi uno è sempre a zero
//con uint16_t non ci sono problemi
uint16_t wave_samples3[180]={

	2034,2069,2104,2139,2173,2207,2241,2275,2309,2342,2374,2406,2438,2469,2499,2529,2559,2587,
	2615,2642,2669,2694,2719,2743,2766,2788,2809,2829,2848,2866,2882,2898,2913,2927,2939,2951,
	2961,2970,2978,2984,2990,2994,2997,2999,3000,2999,2997,2994,2990,2984,2978,2970,2961,2951,
	2939,2927,2913,2898,2882,2866,2848,2829,2809,2788,2766,2743,2719,2694,2669,2642,2615,2587,
	2559,2529,2500,2469,2438,2406,2374,2342,2309,2275,2241,2207,2173,2139,2104,2069,2034,2000,
	1965,1930,1895,1860,1826,1792,1758,1724,1690,1657,1625,1593,1561,1530,1500,1470,1440,1412,
	1384,1357,1330,1305,1280,1256,1233,1211,1190,1170,1151,1133,1117,1101,1086,1072,1060,1048,
	1038,1029,1021,1015,1009,1005,1002,1000,1000,1000,1002,1005,1009,1015,1021,1029,1038,1048,
	1060,1072,1086,1101,1117,1133,1151,1170,1190,1211,1233,1256,1280,1305,1330,1357,1384,1412,
	1440,1470,1499,1530,1561,1593,1625,1657,1690,1724,1758,1792,1826,1860,1895,1930,1965,1999
};





//Timer 6 con prescaler a 0 e ARR a 0xCA
unsigned int tunes[13]={

0x0153,		// DO4 262 Hz
0x0141,		// DO#4 277 Hz
0x012E,		// RE4 294 Hz
0x011E,		// RE#4 311 Hz
0x010D,		// MI4 330 Hz
0x00FF,		// FA4 349 Hz
0x00F0,		// FA#4 370 Hz
0x00E3,		// SOL4 392 Hz
0x00D6,		// SOL#4 415 Hz
0x00CA,		// LA4 440 Hz
0x00BF,		// LA#4 466 Hz
0x00B4,		// SI4 494 Hz
0x00AA		// DO5 523 Hz

};

#endif /* INC_LUT_H_ */