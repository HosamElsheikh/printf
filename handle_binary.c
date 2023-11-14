#include "main.h"
#include <unistd.h>

/**
 * handle_binary - Handles the 'b' conversion specifier for _printf
 * @args: The va_list containing the unsigned int argument to be formatted
 *
 * Return: The number of characters printed
 */
int handle_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count_fun = 0;
	int started = 0;
	int i;

	for (i = 31; i >= 0; i--)
	{
		int bit = (num & (1 << i)) ? 1 : 0;

		if (bit || started)
		{
			count_fun += _putchar(bit + '0');
			started = 1;
		}
	}

	if (!count_fun)
		count_fun += _putchar('0');

	return (count_fun);
}
