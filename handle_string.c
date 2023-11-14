#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * handle_string - print string.
 *
 * @args: argument.
 *
 * Return: character count.
 */

int handle_string(va_list args)
{
        int i;
        int count_fun = 0;
        char *str = va_arg(args, char *);

        if (!str)
                str = "(null)";

        if (str[0] == '\0')
                return (-1);

        for (i = 0; str[i] != '\0'; i++)
                count_fun += _putchar(str[i]);

<<<<<<< HEAD
	while (*str)
	{
		if (write(1, str, 1) == -1)
		{
			return (-1);
		}
		str++;
		count++;
	}
	return (count);
=======
        return (count_fun);
>>>>>>> e8102530c8a8992965f36a74b9b2ae08b8123e94
}
