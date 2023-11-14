#include "main.h"

/**
 * _printf - It prints the characters with formatting
 * @format: First unnamed characters
 *
 * Return: The number of printed characters
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					{
						count += handle_char(args);
						break;
					}
				case 's':
					count += handle_string(args);
					break;
				case '%':
					putchar('%');
					count++;
					break;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);

	return (count);
}
