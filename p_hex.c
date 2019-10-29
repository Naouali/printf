#include <stdarg.h>
#include "holberton.h"

/**
 * p_hex - writes in binary
 * @args: The name for va_list
 *
 * Return: int .
 */
int p_hex(va_list *args)
{
	int length = 0;
	unsigned int value = va_arg(*args, unsigned int);

	length = basecnv(value, 16, length) + 1;
	return (length);
}
