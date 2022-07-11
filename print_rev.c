#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_rev - Prints a str in reverse.
 * @arg: The string to be printed.
 *
 * Return: The string.
 */
int print_rev(va_list arg)
{
	char *str = va_arg(arg, char *);
	int i, k = 0;

	if (str == NULL)
		str = "(null)";
	while (str[k] != '\0')
		k++;
	for (i = k - 1; i >= 0; i--)
		_putchar(str[i]);
	return (k);
}
