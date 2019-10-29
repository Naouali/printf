#include <stdarg.h>
#include "holberton.h"

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

	length = basecnv(value, 8, length) + 1;
	return (length);
}
