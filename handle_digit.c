#include "main.h"

/**
 * handle_digit - Handles the 'd' and 'i' conversion specifiers for _printf
 * @args: The va_list containing the integer argument to be formatted
 *
 * Return: The number of characters printed
 */
int handle_digit(va_list args)
{
	long int num = va_arg(args, int);
	long int digitaux;
	int decimal = 1;
	int count = 0;

	if (num < 0)
	{
		if (_putchar('-') == -1)
			return (-1);
		count++;
		num *= -1;
	}

	if (num < 10)
		return (count += _putchar(num + '0'));

	digitaux = num;

	while (digitaux > 9)
	{
		decimal *= 10;
		digitaux /= 10;
	}

	while (decimal >= 1)
	{
		char digitChar = ((num / decimal) % 10) + '0';

		if (_putchar(digitChar) == -1)
			return (-1);

		count++;
		decimal /= 10;
	}

	return (count);
}
