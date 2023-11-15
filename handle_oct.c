#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * handle_oct - Handle the octal specifier.
 *
 * @args: Arguments.
 *
 * Return: char count.
 */
int handle_oct(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    int base = 8;
    int *digits = NULL;
    int i = 0;
    int count_fun = 0; 

    int numDigits = 0;
    unsigned int tempCopy = num;

    do
    {
        tempCopy /= base;
        numDigits++;
    } while (tempCopy > 0);

    digits = malloc(numDigits * sizeof(int));

    do
    {
        digits[i] = num % base;
        num /= base;
        i++;
    } while (num > 0);

    for (i = numDigits - 1; i >= 0; i--)
    {
        _putchar(digits[i] + '0');
        count_fun++;
    }

    free(digits);

    return count_fun;
}

