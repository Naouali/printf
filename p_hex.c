#include <stdarg.h>
#include "holberton.h"

/**
 * p_bin - writes in binary
 * @params: The name for va_list
 *
 * Return: int .
 */
int p_bin(va_list *params)
{
	int length = 0;
	unsigned int value = va_arg(*params, unsigned int);

	length = basecnv(value, 16, length) + 1;
	return (length);
}
