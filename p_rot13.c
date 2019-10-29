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

	for (i = 0; str[i] != '\0' ; i++)
	{
		j = 0;
		while (str[j])
		{
			if (str[i] == from[j])
			{
				_putchar(to[j]);
				length++;
				break;
			}
			j++;
		}
	}

	return (length);
}
