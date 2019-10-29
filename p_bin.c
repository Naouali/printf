#include <stdarg.h>
#include "holberton.h"
/**
 * p_base2 - prints numbers in binary recursively
 * @value: The number to be printed
 * @length: The amount of digits to be printed
 *
 * Return: On success length and if NULL -1
 */
int p_base2(unsigned int value, int length)
{
	if (value / 2)
		length = p_base2(value / 2, length + 1);
	_putchar(value % 2 + '0');
	return (length);
}
/**
 * p_bin - writes in binary
 * @args: The name for va_list
 *
 * Return: int.
 */
int p_bin(va_list *args)
{
	int length = 0;
	unsigned int value = va_arg(*args, unsigned int);

	length = p_base2(value, length) + 1;
	return (length);
}
