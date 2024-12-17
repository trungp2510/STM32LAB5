/*
 * global.c
 *
 *  Created on: Dec 9, 2024
 *      Author: Fung
 */
#include "global.h"

uint8_t temp = 0;
uint8_t buffer [ MAX_BUFFER_SIZE ];
uint8_t index_buffer = 0;
uint8_t buffer_flag = 0;

int comStatus = WAIT;
int uartStatus = READY;
