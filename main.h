#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <stdarg.h>

int _putchar(int c);
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int (*get_func(char x))(va_list args);
int print_percent(va_list args);


#endif /*MAIN_H*/
