#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_bin - Prints a binary number.
 * @arg: The binary number to be printed.
 *
 * Return: The size of output text
 */
int print_bin(va_list arg)
{
	int i, j, dig = 1;
	int count = 0, flag = 0;
	unsigned int bnum = va_arg(arg, unsigned int);
	unsigned int n;

	for (i = 0; i < 32; i++)
	{
		n = ((dig << (31 - i)) & bnum);
		if (n >> (31 - i))
			flag = 1;

		if (flag)
		{
			j = n >> (31 - i);
			_putchar(j + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}

