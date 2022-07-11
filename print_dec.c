#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_dec - Prints decimal.
 * @arg: The decimal to be printed.
 *
 * Return: The size of the output text.
 */
int print_dec(va_list arg)
{
	int va = va_arg(arg, int);
	int num, end = va % 10, dig;
	int i = 1, exp = 1;

	va = va / 10;
	num = va;

	if (end < 0)
	{
		_putchar('-');
		num = -num;
		va = -va;
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
		num = va;
		while (exp > 0)
		{
			dig = num / exp;
			_putchar(dig + '0');
			num = num - (dig * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(end + '0');
	return (i);
}
