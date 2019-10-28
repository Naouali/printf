#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
int reversed(int *e);

/**
* p_int - function to print integer
* @args: va_list args
* Return: int
*/

int p_int(va_list *args)
{
	unsigned int e;

	if (arg(va_list *args, int) < 0)
	e = -( arg(va_list *args, int));
	_putchar(e + '0');
	reversed(e);
	_putchar(e + '0');

}

/**
* reversed - function to reverse int
*@e: int
*Return: reversed int
*/
int reversed(int *e)
{
	int rev = 0;

	while (e != 0)
{
	rev = rev * 10;
	rev = rev + e % 10;
	e = n / 10;
}
	return (e);
}


