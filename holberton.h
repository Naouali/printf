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

int _printf(const char *format, ...);





#endif /* _PRINTF_H */
