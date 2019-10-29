#include <stdarg.h>
#include "holberton.h"
/**
 * p_base8 - prints number in base 8 recursively
 * @value: The number to be printed
 * @length: The amount of digits to be printed.
 * Return: length.
 */
int p_base8(unsigned int value, int length)
{
	if (value / 8)
		length = p_base8(value / 8, length + 1);
	_putchar(value % 8 + '0');
	return (length);
}
/**
 * p_oct- writes in octal
 * @args: The name for va_list
 *
 * Return: int.
 */
int p_oct(va_list *args)
{
	int length = 0;
	unsigned int value = va_arg(*args, unsigned int);

	length = p_base8(value, length) + 1;
	return (length);
}
