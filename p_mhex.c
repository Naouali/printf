#include <stdarg.h>
#include "holberton.h"
/**
 * print_special - writes the character
 * @args: arguments list
 *
 * Return: int
 */
int print_special(va_list args)
{
	char c = va_arg(args, int);

	return (c + 0);
}
