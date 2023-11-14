#include "main.h"

/**
 * handle_int - Handles the 'd' and 'i' conversion specifiers for _printf
 * @args: The va_list containing the integer argument to be formatted
 *
 * Return: The number of characters printed
 */
int handle_int(va_list args)
{
	int num = va_arg(args, int);
	int temp = num < 0 ? -num : num;
	int *digits = NULL;
	int i = 0;
	int j;
	int numDigits = 0;
	int tempCopy = temp;
	int count = 0;

	if (num < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		count++;
	}
	do {
		tempCopy /= 10;
		numDigits++;
	} while (tempCopy > 0);
	digits = malloc(numDigits * sizeof(int));
	if (digits == NULL)
		return (-1);
	do {
		digits[i] = temp % 10;
		temp /= 10;
		i++;
	} while (temp > 0);
	for (j = i - 1; j >= 0; j--)
	{
		char digitChar = digits[j] + '0';

		if (write(1, &digitChar, 1) == -1)
		{
			free(digits);
			return (-1);
		}
		count++;
	}
	free(digits);
	return (count);
}
