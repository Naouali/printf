#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * p_rot13 - converts to rot13
 * @args: The name for va_list
 *
 * Return: String Length.
 */
int p_rot13(va_list *args)
{
	int length = 0, i = 0, j;
	char from[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char to[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str = va_arg(*args, char *);

	while (str[length])
		length++;
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (from[j] == str[i])
			{
				_putchar(to[j]);
				break;
			}
		}
	}

	return (length);
}
