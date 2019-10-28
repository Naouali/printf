#include <stdarg.h>
#include "holberton.h"

/**
 * p_uint - writes the unsigned integer i
 * @args: The name for va_list
 *
 * Return: number length.
 * On error, -1 is returned.
 */
int p_uint(va_list *args)
{
	int length = 0;
	unsigned int value = va_arg(*args, unsigned int);

	length = p_rint(value, 0) + 1;
	return (length);
}
