#include "main.h"

/**
 * get_function - function specifiers.
 *
 * @con_spec: Conversion specifiers.
 * @args: arguments.
 *
 * Return: char count.
 */

int get_function(char con_spec, va_list args)
{
	int i = 0;
	int count_fun = 0;

	specifiers_t spec[] = {
		{'c', handle_char},
		{'s', handle_string},
		{'d', handle_digit},
		{'i', handle_digit},
		{'b', handle_binary},
		{'u', handle_uint},
		{'o', handle_oct},
		{'x', handle_hex},
		{'X', handle_hex_upper},
		{'S', handle_custom_s},
		{'r', handle_rev_str},
		{'p', handle_pointer},
		{0, NULL}
	};

	while (spec[i].specifiers)
	{
		if (con_spec == spec[i].specifiers)
			count_fun += spec[i].f(args);
		i++;
	}

	if (count_fun == 0)
	{
		count_fun += _putchar('%');
	}
	return (count_fun);
}
