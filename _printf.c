#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"


/**
 * _printf - function to print anything
 * @format: given argument
 * Return: int
 */

int _printf(const char *format, ...)
{
va_list args;
int done;
stdout_t stdout[] = {
{"c", p_char},
{"s", p_str},
{NULL, NULL}
};

va_start(args, format);
done = _vfprintf(stdout, format, args);
va_end(args);

return (done);
}
