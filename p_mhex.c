#include <stdarg.h>
#include "holberton.h"

/**
 * p_mhex_r - prints number in base 16 recursively
 * @value: The number to be printed
 * @length: The amount of digits to be printed.
 * Return: integer length.
 */
int p_mhex_r(unsigned int value, int length)
{
	if (value / 16)
		length = p_mhex_r(value / 16, length + 1);
	if (value % 16 < 10)
		_putchar(value % 16 + 48);
	else
		_putchar(value % 16 + 87);
	return (length);
}


/**
 * p_mhex - From decimal to Hexadecimal in smallcaps
 * @args: The name for va_list
 *
 * Return: number length.
 * On error, -1 is returned.
 */
int p_mhex(va_list *args)
{
	int length = 0;
	unsigned int value = va_arg(*args, unsigned int);

	length = p_mhex_r(value, length) + 1;
	return (length);
}
