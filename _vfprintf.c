#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * slprntr - Selects a printer
 * @stdout: struct of format and func
 * @format: the format to be printed
 * Return: the printer selected for elements to print.
 */
pfunc slprntr(stdout_t stdout[], char format)
{
	int i = 0;

	for (; i < stdout[i].sym; i++)
		if (stdout[i].sym == format)
			break;
	return (stdout[i].pfunc); 
}


/**
* _vfprint - function to print
* @stdout: struct of symbol and related function
* @format: format string
* @args: argument list
*
* return : int
*/
int _vfprintf(stdout_t stdout[], char *format, va_list args)
{
int plength;


return (plength);
}
