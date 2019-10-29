#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * p_rot13 - converts to rot13
 * @params: The name for va_list
 *
 * Return: String Length.
 */
int p_rot13(va_list *args)
{
	int length = 0, i = 0, k;
	char from[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char to[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str = va_arg(*args, char *);

	while (str[length])
		length++;
	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0' ; i++)
	{
		k = 0;
		while (str[k])
		{
			if (str[i] == from[k])
			{
				_putchar(to[k]);
				break;
			}
			k++;
		}
	}

	return (length);
}
