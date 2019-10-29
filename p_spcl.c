#include <stdarg.h>
#include "holberton.h"
/**
 * p_spcl - writes the character c
 * @params: The name for va_list
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int p_spcl(va_list *params)
{
	char c = va_arg(*params, int);

	return (c + 0);
}
