#include "main.h"
#include <stdarg.h>

/**
 * print_int - Prints an integer.
 * @arg: The integer to be printed.
 *
 * Return: The size of the output text.
 */
int print_int(va_list arg)
{
	int div = 1;
	int num = va_arg(arg, int);
	int count = 0;

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
