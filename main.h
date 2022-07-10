#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);
int print_int(va_list arg);
int print_dec(va_list arg);
int print_rev(va_list arg);
int print_bin(va_list arg);
int print_unsig(va_list arg);
int print_octal(va_list arg);
int print_hex(va_list arg);
int print_rot13(va_list arg);

#endif