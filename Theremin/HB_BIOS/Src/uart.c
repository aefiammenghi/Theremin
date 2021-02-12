/*
 * uart.c
 *
 *  Created on: Jan 21, 2021
 *      Author: Alessio
 */
#include "uart.h"

void dbg_uart_transmit(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size)
{
	HAL_StatusTypeDef tx_error;
	tx_error = HAL_UART_Transmit(huart, pData, Size, 100);

}
