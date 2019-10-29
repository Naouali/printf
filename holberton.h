#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>


/**
* struct stdout_ - structure for symbols and functions
*
* @sym: The operator
* @pfunc: The function associated
*/
typedef struct stdout_
{
	char sym;
	int (*pfunc)(va_list);
} stdout_t;

int _vfprintf(stdout_t stdout[], const char *format, va_list args);
int p_rint(unsigned int value, int length);
int basecnv(unsigned int value, int b, int length);

int _putchar(char c);
int _printf(const char *format, ...);
int p_char(va_list args);
int p_str(va_list args);
int p_bin(va_list args);
int p_int(va_list args);
int p_dbl(va_list args);
int p_uint(va_list args);
int p_oct(va_list args);
int p_hex(va_list args);
int p_mhex(va_list args);
int p_rev(va_list args);
int p_rot13(va_list args);

#endif /* _PRINTF_H */
