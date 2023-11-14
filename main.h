#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * struct specifiers - Struct for format specifiers
 * @specifiers: The specifier character
 * @f: The function associated with the specifier
 */
typedef struct specifiers
{
	char specifiers;
	int (*f)(va_list);
} specifiers_t;

/*prototypes*/
int _printf(const char *format, ...);
int get_function(char s, va_list args);
int _putchar(char c);

/*Conversion specifiers*/
int handle_char(va_list args);
int handle_string(va_list args);
int handle_digit(va_list args);

#endif
