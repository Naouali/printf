#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * pstrrev - Prints a string in reverse, followed by a new line.
 * @str: string to be printed
 * @length: String Length count.
 *
 * Return: String Length.
 */
int pstrrev(char *str, int length)
{
	if (str[0])
	{
		length = _print_rev_recursion(str + 1, length + 1);
		_putchar(str[0]);
	}
	return (length);
}
/**
 * p_rev - writes the string in reverse
 * @params: The name for va_list
 *
 * Return: String Length.
 */
int p_rev(va_list *params)
{
	int length = 0;
	char *str = va_arg(*params, char *);

	if (str == NULL)
		str = "(null)";
	return (pstrrev(str, length));
}
