#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
#include <stdlibh>

/**
 * slprntr - Selects a printer
 * @stdout: struct of format and func
 * @format: the format to be printed
 * Return: the printer selected for elements to print.
 */
stdout_t slprntr(stdout_t stdout[], char format)
{
	int i = 0;
	int formats = 16;

	for (; i < formats; i++)
		if (stdout[i].sym == format)
			return (stdout[i]);
	return (stdout[i - 1]);
}

/**
* _vfprintf - function to print
* @stdout: struct of symbol and related function
* @format: format string
* @args: argument list
*
* Return: int
*/
int _vfprintf(stdout_t stdout[], const char *format, va_list *args)
{
	int plength = 0;
	stdout_t selfunc;
	int i = 0, p_flag = 1;

	if ((format == NULL) || (format[0] == '%' && !format[1]))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
			if (p_flag)
				plength += _putchar(format[i]);
			else
			{
				selfunc = slprntr(stdout, format[i]);
				if (selfunc.sym != '*')
					plength += selfunc.pfunc(args);
				else
					plength += _putchar('%') + _putchar(format[i]);
				p_flag = 1;
			}
		else if (p_flag)
			p_flag = 0;
		else
		{
			plength += _putchar(format[i]);
			p_flag = 1;
		}
		i++;
	}
	return (plength);
}
