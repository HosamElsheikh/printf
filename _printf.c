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
	if (format == NULL)
		return (-1);

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
					if (write(1, "%", 1) == -1)
					{
						va_end(args);
						return (-1);
					}
					putchar('%');
					count++;
					break;
			}
			default:
			if (write(1, "%", 1) == -1)
			{
				va_end(args);
				return (-1);
			}
			if (write(1, format, 1) == -1)
			{
				va_end(args);
				return (-1);
			}
			count += 2;
			break;

		}
		else
		{
			if (write(1, format, 1) == -1)
			{
				va_end(args);
				return (-1);
			}
			count++;
		}
		format++;
	}
	va_end(args);

	return (count);
}
