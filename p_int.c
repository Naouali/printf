#include <stdarg.h>
#include "holberton.h"

/**
 * print_int - writes the integer i
 * @args: The name for va_list
 *
 * Return: On success 1.
 */
int print_int(va_list *args)
{
	int i = 0, length = 0;
	unsigned int ul;

	i = va_arg(*args, int);
	if (i < 0)
	{
		_putchar('-');
		ul = -i;
        length = 1;
	}
	else
		ul = i;
        length += p_rint(ul, 0);
	return (length + 1);
}
