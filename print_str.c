#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_str - Prints a strin
 * @S: The string to be printed.
 *
 * Return: 1.
 */
int print_str(va_list S)
{
	char *str;
	int i = 0;

	str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
