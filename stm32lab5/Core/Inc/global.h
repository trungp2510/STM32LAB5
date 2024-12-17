/*
 * global.h
 *
 *  Created on: Dec 9, 2024
 *      Author: Fung
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#define MAX_BUFFER_SIZE 30
#define WAIT 20
#define READY 21

#include "main.h"
extern uint8_t temp;
extern uint8_t buffer [ MAX_BUFFER_SIZE ];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;
extern int comStatus;
extern int uartStatus;
#endif /* INC_GLOBAL_H_ */
