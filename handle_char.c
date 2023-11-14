#include "main.h"
#include <unistd.h>

/**
 * handle_char - print char
 *
 * @args: argument.
 *
 * Return: count of chars.
 */

int handle_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return (1);
}
