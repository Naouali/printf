#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>


/**
 * p_char - function to print a caracter
 * @args: argument of type va_list
 * Return: 1
 */

int p_char(va_list *args)
{
     char c = va_arg(*args, char);
     _putchar(c);
     return (1);
}
