/*
 * uart.h
 *
 *  Created on: Jan 21, 2021
 *      Author: Alessio
 */

#ifndef INC_UART_H_
#define INC_UART_H_
#include "stm32l1xx_hal.h"
void dbg_uart_transmit(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);

#endif /* INC_UART_H_ */
