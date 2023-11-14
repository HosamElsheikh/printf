#include "main.h"

/**
 * handle_char - Handles the 'c' conversion specifier for _printf
 * @args: The va_list containing the argument to be formatted
 *
 * Return: The number of characters printed
 */
int handle_char(va_list args)
{
	char c = va_arg(args, int);

	putchar(c);
	return (1);
}
