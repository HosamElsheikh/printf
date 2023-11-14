#include "main.h"

/**
 * handle_string - Handles the 's' conversion specifier for _printf
 * @args: The va_list containing the argument to be formatted
 *
 * Return: The number of characters printed
 */
int handle_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;


	while (*str)
	{
		if (write(1, str, 1) == -1)
		{
			return -1;
		}
		putchar(*str);
		str++;
		count++;
	}
	return (count);
}
