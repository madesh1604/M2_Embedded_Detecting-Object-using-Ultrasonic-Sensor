/**
 * @file object.h
 * @author madesh1604
 * @brief 
 * @version 0.1
 * @date 2021-12-1
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __OBJECT_H_
#define __OBJECT_H_
#define F_CPU 1000000
#include <util/delay.h>
#include <stdlib.h>

#define enable            5
#define registerselection 6

//Function Prototype
void send_a_command(unsigned char command);
void send_a_character(unsigned char character);
void send_a_string(char *string_of_characters);

#endif
