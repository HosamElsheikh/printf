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
	unsigned char c = va_arg(args, int);

	if (c <= 127)
	{
		_putchar(c);
		return (1);
	}
	else
	{
		return (-1);
	}
}
