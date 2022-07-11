#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_str - Prints a strin
 * @arg: The string to be printed.
 *
 * Return: The length of the string.
 */
int print_str(va_list arg)
{
	char *str;
	int i, len;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(nill)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}
