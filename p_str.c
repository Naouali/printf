#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/**
 * p_str - function to print a string
 * @args: argument of type va_list
 * Return: int
 */

int p_str(va_list *args)
{
int i = 0;
char *str = va_arg(*args, char *);

if (str == NULL)
str = "(null)";
while (str[i])
{
_putchar(str[i]);
i++;
}

return (i);
}
