#include <stdarg.h>
#include "holberton.h"


int _printf(const char *format, ...)
{
va_list args;
int done;
stdout_t stdout[] = {};

va_start(args, format);
done = vfprintf(stdout, format, args);
va_end(args);

return (done);
}
