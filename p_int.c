#include <stdarg.h>
#include "holberton.h"
/**
 * l_i - prints recursively
 * @i: The number to get the length
 * @len: The number length
 *
 * Return: On success length.
 */
int l_i(unsigned int i, int len)
{
	while (i / 10)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

/**
 * r_i - prints recursively
 * @i: The number to be printed
 *
 * Return: nothing.
 */
void r_i(unsigned int i)
{
	if (i / 10)
		r_i(i / 10);
	_putchar(i % 10 + '0');
}
/**
 * p_int - writes the integer i
 * @args: The name for va_list
 *
 * Return: On success 1.
 */
int p_int(va_list *args)
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
length += l_i(ul, 0);
r_i(ul);
return (length + 1);
}
