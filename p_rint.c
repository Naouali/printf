#include <stdarg.h>
#include "holberton.h"
/**
 * p_rint - print uint rev 
 * @value: The number to  printe
 * @length: count of digits to be printed.
 * Return: length.
 */
int p_rint(unsigned int value, int length)
{
	if (value / 10)
		print_number(value / 10, length + 1);
	_putchar(value % 10 + '0');
	return (length);
}
