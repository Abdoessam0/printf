#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int format_fun(const char *format, va_list args);
int int_len(int i);
int print_decimal(int n);
int write_fun(char c);
int print_char(va_list arg);
int print_str(va_list arg);
int print_int(va_list arg);
int print_percent(va_list arg);

/**
 * struct convention_c - convention characters indicator
 * @c: The convention char
 * @fun: The function of the char
 */
typedef struct convention_char
{
	char c;
	int (*fun)(va_list);
} con_t;

#endif
