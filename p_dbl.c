#include <stdarg.h>
#include "holberton.h"
/**
 * l_d - prints recursively
 * @i: The number to get the length
 * @len: The number length
 *
 * Return: On success length.
 */
int l_d(unsigned int i, int len)
{
	while (i / 10)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

/**
 * r_d - prints recursively
 * @i: The number to be printed
 *
 * Return: nothing.
 */
void r_d(unsigned int i)
{
	if (i / 10)
	{
		r_d(i / 10);
	}
	_putchar(i % 10 + '0');
}
/**
 * p_dbl - writes the double i
 * @args: The name for va_list
 *
 * Return: On success 1.
 */
int p_dbl(va_list *args)
{
	int i = 0, len = 0, negative = 0;
	unsigned int limit;

	i = va_arg(*args, int);
	if (i < 0)
	{
		_putchar('-');
		limit = -i;
		negative = 1;
	}
	else
		limit = i;
	len += l_d(limit, len);
	r_d(limit);
	len = len + negative + 1;
	return (len);
}
