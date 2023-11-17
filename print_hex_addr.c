#include "main.h"

/**
 * print_hex_address - Print the hexadecimal representation of an address.
 *
 * @address: Address to be printed.
 *
 * Return: char count.
 */
int print_hex_address(unsigned long address)
{
	int count_fun = 0;
	unsigned long base = 16;
	
	int digit;
	int i;	
	int numDigits = 0;
	unsigned long tempCopy = address;
	do
	{
		tempCopy /= base;
		numDigits++;
	} while (tempCopy > 0);
	
	for (i = numDigits - 1; i >= 0; i--)
	{
		 digit = (address >> (i * 4)) & 0xF;
		_putchar(digit < 10 ? digit + '0' : digit - 10 + 'a');
		count_fun++;
	}
	return (count_fun);
}
