#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_unsign - Prints unsigned integer.
 * @arg: The int to be printed.
 *
 * Return: The size of the output text.
 */
int print_unsign(va_list arg)
{
	unsigned int v = va_arg(arg, unsigned int);
	int i = 1, exp = 1;
	int num, end = v % 10, dig;

	v = v / 10;
	num = v;

	if (end < 0)
	{
		_putchar('-');
		num = -num;
		v = -v;
		end = -end;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = v;
		while (exp > 0)
		{
			dig = num / exp;
			_putchar (dig + '0');
			num = num - (dig * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(end + '0');
	return (i);
}
