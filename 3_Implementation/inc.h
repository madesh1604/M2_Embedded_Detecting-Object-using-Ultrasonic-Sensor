#ifndef __OBJECT_H_
#define __OBJECT_H_
#define F_CPU 1000000
#include <util/delay.h>
#include <stdlib.h>

#define enable            5
#define registerselection 6

void send_a_command(unsigned char command);
void send_a_character(unsigned char character);
void send_a_string(char *string_of_characters);

#endif