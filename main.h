#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * struct format - structure
 * @F: char holding the format
 * @T: pointer function.
 */

typedef struct format
{
	char F;
	int (*T)(va_list);
} fmt;

int _printf(const char *format, ...);
int _putchar(char c);
int print_str(va_list arg);
int print_char(va_list char_list);
int print_dec(va_list arg);
int print_int(va_list arg);
int print_rot13(va_list arg);
int print_bin(va_list arg);
int print_rev(va_list arg);
int print_p(va_list arg);
int print_unsign(va_list arg);
int print_hex(va_list arg);
int print_octal(va_list arg);
int percentage(__attribute__((unused))va_list param);
int (*converter(char s))(va_list);
int (*converter(char s))(va_list);

#endif
