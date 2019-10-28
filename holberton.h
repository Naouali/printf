#if !defined(_PRINTF_H)
#define _PRINTF_H

#include <stdarg.h>

/**
* struct convert - structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
typedef struct stdout_
{
	char *sym;
	int (*pfunc)(va_list);
} stdout_t;

int _putchar(char c);
int _printf(const char *format, ...);
int p_char(va_list *args);
int p_str(va_list *args);



#endif /* _PRINTF_H */
