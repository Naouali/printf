#include <stdarg.h>
#include "holberton.h"

/**
 * p_bin - writes in binary
 * @params: The name for va_list
 *
 * Return: int.
 */
int p_bin(va_list args)
{
	int length = 0;
	unsigned int value = va_arg(args, unsigned int);

	length = basecnv(value, 2, length) + 1;
	return (length);
}
