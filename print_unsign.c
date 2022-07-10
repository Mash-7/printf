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
	unsigned int num = va_arg(arg, unsigned int);
	int count = 0, div = 1;

	if (num < 0)
	{
		count += _putchar('-');
		num = -num;
	}
	while (num / div > 9)
		div *= 10;
	while (div != 0)
	{
		count += _putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}
	return (count);
}
