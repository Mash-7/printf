#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list S);
int print_char(va_list char_list);
int print_dec(va_list d);
int print_int(va_list i);
int print_rot13(va_list R);
int print_bin(va_list b);
int _strlen(char *str);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *str);
int print_rev(va_list r);
int print_p(va_list p);
int print_unsign(va_list u);
int print_hex(va_list x);
int print_heX(va_list X);
int print_octal(va_list o);
int percentage(__attribute__((unused))va_list param);
int (*converter(char s))(va_list);
int (*converter(char s))(va_list);

/**
 * struct format - Struct format
 *
 * @spec: The specifiers.
 * @T: The pointer function.
 */
typedef struct code_format
{
	char *spec;
	int (*T)(va_list);
} code_f;

#endif
