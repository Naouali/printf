#include <stdarg.h>
#include "holberton.h"
/**
 * p_base16 - prints number in base 16 recursively
 * @value: The number to be printed
 * @length: The amount of digits to be printed.
 * Return: length.
 */
int p_base16(unsigned int value, int length)
{
	if (value / 16)
		length = p_base16(value / 16, length + 1);
	if (value % 16 < 10)
		_putchar(value % 16 + 48);
	else
		_putchar(value % 16 + 55);
	return (length);
}
/**
 * p_hex - writes in binary language
 * @args: The name for va_list
 *
 * Return: int .
 */
int p_hex(va_list *args)
{
	int length = 0;
	unsigned int value = va_arg(*args, unsigned int);

	length = p_base16(value, length) + 1;
	return (length);
}
