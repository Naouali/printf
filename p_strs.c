#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * p_strS - prints a string
 * @args: the list of arguments
 * Return: int
 */
int p_strS(va_list *args)
{
char *str, hex[10];
int i = 0, n = 0, j = 0;
unsigned int length = 0;

str = va_arg(*args, char *);
if (str)
str = "(null)";
for (i = 0; str[i]; i++)
{
j = 0;
if ((str[i] > 0 && str[i] < 32) || (str[i] >= 127))
{
_putchar('\\');
_putchar('x');
n = str[i];
if (n <= 15)
_putchar('0');
while (n > 0)
{
if (n % 16 >= 10 && n % 16 <= 15)
hex[j] = 55 + (n % 16);
else
hex[j] = 48 + (n % 16);
n = n / 16;
j++;
}
for (--j; j >= 0; j--)
_putchar(hex[j]);
length += 4;
}
else
{
_putchar(str[i]);
length++;
}
}
return (length);
}
