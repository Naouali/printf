#ifndef HOLBERTON_H
#define HOLBERTON_H

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
	int (*pfunc)(va_list *);
} stdout_t;

int _putchar(char c);
stdout_t select_printer(char s);
int _printf(const char *format, ...);

int basecnv(unsigned int value, int b, int length);
int p_rint(unsigned int value, int length);
int _vfprintf(stdout_t stdout[], const char *format, va_list *args);
int p_char(va_list *);
int p_str(va_list *);
int p_int(va_list *);
int p_uint(va_list *);
int p_dbl(va_list *);
int p_oct(va_list *);
int p_mhex(va_list *);
int p_hex(va_list *);
int p_bin(va_list *);
int p_strS(va_list *);
int p_spcl(va_list *);
int p_rot13(va_list *);
int p_rev(va_list *);

#endif
