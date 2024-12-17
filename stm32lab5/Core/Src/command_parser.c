/*
 * command_parser.c
 *
 *  Created on: Dec 9, 2024
 *      Author: Fung
 */
#include "command_parser.h"


char* get_command(){
	return (char*) buffer;
}
void clr_command(){
	for (int i = 0; i < MAX_BUFFER_SIZE; i++){
		buffer[i] = '\0';
	}
	index_buffer = 0;
}

void command_parser_fsm (){
	switch(comStatus){
		case WAIT:
			if(temp == '!'){
				comStatus = READY;
				clr_command();
			}
			break;
		case READY:
			if(temp == '#'){
				comStatus =
			}
	}
}
