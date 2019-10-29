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
{'c', p_char},
{'s', p_str},
{'b', p_bin},
{'i', p_int},
{'d', p_dbl},
{'u', p_uint},
{'l', p_uint},
{'h', p_uint},
{'o', p_oct},
{'X', p_hex},
{'p', p_mhex},
{'x', p_mhex},
{'r', p_rev},
{'R', p_rot13},
{'?', NULL}
};

va_start(args, format);
done = _vfprintf(stdout, format, args);
va_end(args);

return (done);
}
