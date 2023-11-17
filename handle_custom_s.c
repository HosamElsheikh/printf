#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * handle_custom_s - Handle the custom string specifier.
 *
 * @args: Arguments.
 *
 * Return: char count.
 */
int handle_custom_s(va_list args)
{
	char *str = va_arg(args, char *);
	int count_fun = 0;

	if (str == NULL)
	{
		return (_printf("(null)"));
	}
	while (*str)
	{
		if (*str >= 32 && *str < 127)
		{
			_putchar(*str);
			count_fun++;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			count_fun += 2;
			if (*str < 16)
			{
				_putchar('0');
				count_fun++;
			}
			count_fun += _printf("%X", *str);
		}
		str++;
	}
	return (count_fun);
}
