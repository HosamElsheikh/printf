#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * handle_pointer - Handle the pointer specifier.
 *
 * @args: Arguments.
 *
 * Return: char count.
 */
int handle_pointer(va_list args)
{
       	void *ptr = va_arg(args, void*);
	int count_fun = 0;
	_putchar('0');
	_putchar('x');
	count_fun += 2;  
	
	count_fun += print_hex_address((unsigned long)ptr);
	
	return (count_fun);
}
