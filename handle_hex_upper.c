#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * handle_hex_upper - Handle the uppercase hexadecimal specifier.
 *
 * @args: Arguments.
 *
 * Return: char count.
 */
int handle_hex_upper(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int base = 16;
	int i = 1;
	int count_fun = 0;
	int c = 1;
	int qt = num / base;
	int *rem;

	while (qt != 0)
	{
		qt /= base;
		c++;
	}
	rem = malloc(c * sizeof(int));
	qt = num / base;
	rem[0] = num % base;
	while (qt != 0)
	{
		rem[i] = qt % base;
		qt /= base;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		if (rem[i] < 10)
			_putchar(rem[i] + '0');
		else
			_putchar(rem[i] - 10 + 'A');
		count_fun++;
	}
	return (count_fun);
}
