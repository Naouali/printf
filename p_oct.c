#include <stdarg.h>
#include "holberton.h"

/**
 * p_oct- writes in octal
 * @params: The name for va_list
 *
 * Return: int.
 */
int p_oct(va_list params)
{
	int length = 0;
	unsigned int value = va_arg(params, unsigned int);

	length = basecnv(value, 8, length) + 1;
	return (length);
}
