#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Produces output according to format.
 * @format: input character string.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i, j;
	int cprint = 0;

	form_t funcs[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_perc},
		{"i", print_int},
		{"d". print_dec},
		{NULL, NULL},
	};

	va_start(arg, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0; i++')
	{
		if (format[i] == '%')
		{
			for (j = 0; funcs[j].f != NULL; j++)
			{
				if (format[i + 1] == funcs[j].c[0])
				{
					cprint += funcs[j].f(arg);
					i += 2;
					goto loop;
				}
			}
		}
		if (format[i] == '%' && !format[i + 1])
			return (-1);
		if (format[i] == '\0')
			return (cprint);
		_putchar(format[i]);
		cprint += 1;
	}
	va_end(arg);

	return (cprint);
}
